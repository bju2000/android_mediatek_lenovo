/*  GRAPHITE2 LICENSING

    Copyright 2010, SIL International
    All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should also have received a copy of the GNU Lesser General Public
    License along with this library in the file named "LICENSE".
    If not, write to the Free Software Foundation, 51 Franklin Street, 
    Suite 500, Boston, MA 02110-1335, USA or visit their web page on the 
    internet at http://www.fsf.org/licenses/lgpl.html.

Alternatively, the contents of this file may be used under the terms of the
Mozilla Public License (http://mozilla.org/MPL) or the GNU General Public
License, as published by the Free Software Foundation, either version 2
of the License or (at your option) any later version.
*/
#include <cstring>
//#include "graphite2/Segment.h"
//#include "inc/CmapCache.h"
//#include "inc/Endian.h"
#include "inc/FileFace.h"
//#include "inc/GlyphFace.h"
//#include "inc/SegCacheStore.h"
//#include "inc/Segment.h"
//#include "inc/NameTable.h"


using namespace graphite2;

#ifndef GRAPHITE2_NFILEFACE

FileFace::FileFace(const char *filename)
: _file(fopen(filename, "rb")),
  _file_len(0),
  _header_tbl(NULL),
  _table_dir(NULL)
{
    if (!_file) return;

    if (fseek(_file, 0, SEEK_END)) return;
    _file_len = ftell(_file);
    if (fseek(_file, 0, SEEK_SET)) return;

    size_t tbl_offset, tbl_len;

    // Get the header.
    if (!TtfUtil::GetHeaderInfo(tbl_offset, tbl_len)) return;
    if (fseek(_file, tbl_offset, SEEK_SET)) return;
    _header_tbl = (TtfUtil::Sfnt::OffsetSubTable*)gralloc<char>(tbl_len);
    if (_header_tbl)
    {
        if (fread(_header_tbl, 1, tbl_len, _file) != tbl_len) return;
        if (!TtfUtil::CheckHeader(_header_tbl)) return;
    }

    // Get the table directory
    if (!TtfUtil::GetTableDirInfo(_header_tbl, tbl_offset, tbl_len)) return;
    _table_dir = (TtfUtil::Sfnt::OffsetSubTable::Entry*)gralloc<char>(tbl_len);
    if (fseek(_file, tbl_offset, SEEK_SET)) return;
    if (_table_dir)
        if (fread(_table_dir, 1, tbl_len, _file) != tbl_len) return;
}

FileFace::~FileFace()
{
    free(_table_dir);
    free(_header_tbl);
    if (_file)
        fclose(_file);
}


const void *FileFace::get_table_fn(const void* appFaceHandle, unsigned int name, size_t *len)
{
    if (appFaceHandle == 0)     return 0;
    const FileFace & file_face = *static_cast<const FileFace *>(appFaceHandle);

    char *tbl;
    size_t tbl_offset, tbl_len;
    if (!TtfUtil::GetTableInfo(name, file_face._header_tbl, file_face._table_dir, tbl_offset, tbl_len))
        return 0;

    if (tbl_offset + tbl_len > file_face._file_len
            || fseek(file_face._file, tbl_offset, SEEK_SET) != 0)
        return 0;

    tbl = gralloc<char>(tbl_len);
    if (fread(tbl, 1, tbl_len, file_face._file) != tbl_len)
    {
        free(tbl);
        return 0;
    }

    if (len) *len = tbl_len;
    return tbl;
}

void FileFace::rel_table_fn(const void* appFaceHandle, const void *table_buffer)
{
    if (appFaceHandle == 0)     return;

    free(const_cast<void *>(table_buffer));
}

const gr_face_ops FileFace::ops = { sizeof FileFace::ops, &FileFace::get_table_fn, &FileFace::rel_table_fn };


#endif                  //!GRAPHITE2_NFILEFACE

/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT6592. Copyright MediaTek Inc. (C) 2013.
 * Thu Feb 13 09:38:54 2014
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_EINT_CHG_STAT_PIN         (GPIO0 | 0x80000000)
#define GPIO_EINT_CHG_STAT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_EINT_CHG_STAT_PIN_M_PWM  GPIO_MODE_01
#define GPIO_EINT_CHG_STAT_PIN_M_EINT  GPIO_EINT_CHG_STAT_PIN_M_GPIO

#define GPIO_CTP_EINT_PIN         (GPIO1 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_MDEINT  GPIO_MODE_03
#define GPIO_CTP_EINT_PIN_M_PWM  GPIO_MODE_01
#define GPIO_CTP_EINT_PIN_M_EINT  GPIO_CTP_EINT_PIN_M_GPIO

#define GPIO_ACCDET_EINT_PIN         (GPIO4 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_ACCDET_EINT_PIN_M_EINT  GPIO_ACCDET_EINT_PIN_M_GPIO
#define GPIO_ACCDET_EINT_PIN_CLK     CLK_OUT2
#define GPIO_ACCDET_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_LTE_WDT_EINT_PIN         (GPIO5 | 0x80000000)
#define GPIO_LTE_WDT_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_LTE_WDT_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_LTE_WDT_EINT_PIN_M_EINT  GPIO_LTE_WDT_EINT_PIN_M_GPIO

#define GPIO_ALS_EINT_PIN         (GPIO6 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_ALS_EINT_PIN_M_EINT  GPIO_ALS_EINT_PIN_M_GPIO

#define GPIO_LTE_SDIO_EINT_PIN         (GPIO7 | 0x80000000)
#define GPIO_LTE_SDIO_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_LTE_SDIO_EINT_PIN_M_EINT  GPIO_LTE_SDIO_EINT_PIN_M_GPIO

#define GPIO_SWITCH1_1V8_PIN         (GPIO9 | 0x80000000)
#define GPIO_SWITCH1_1V8_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_SWITCH1_1V8_PIN_M_CLK  GPIO_MODE_01
#define GPIO_SWITCH1_1V8_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_SWITCH1_1V8_PIN_M_SDA   GPIO_MODE_02
#define GPIO_SWITCH1_1V8_PIN_M_EXT_FRAME_SYNC   GPIO_MODE_03
#define GPIO_SWITCH1_1V8_PIN_M_NWEB   GPIO_MODE_04
#define GPIO_SWITCH1_1V8_PIN_CLK     CLK_OUT4
#define GPIO_SWITCH1_1V8_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GYRO_EINT_PIN         (GPIO10 | 0x80000000)
#define GPIO_GYRO_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GYRO_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_GYRO_EINT_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_GYRO_EINT_PIN_M_EINT  GPIO_GYRO_EINT_PIN_M_GPIO
#define GPIO_GYRO_EINT_PIN_CLK     CLK_OUT5
#define GPIO_GYRO_EINT_PIN_FREQ    GPIO_CLKSRC_NONE
#define GPIO_GYRO_EINT_PIN_NCE     0

#define GPIO_LTE_POWER_PIN         (GPIO13 | 0x80000000)
#define GPIO_LTE_POWER_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_LTE_POWER_PIN_M_MDEINT  GPIO_MODE_04
#define GPIO_LTE_POWER_PIN_M_GPS_FRAME_SYNC   GPIO_MODE_02
#define GPIO_LTE_POWER_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_OTG_IDDIG_EINT_PIN         (GPIO17 | 0x80000000)
#define GPIO_OTG_IDDIG_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_IDDIG_EINT_PIN_M_CLK  GPIO_MODE_02
#define GPIO_OTG_IDDIG_EINT_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_OTG_IDDIG_EINT_PIN_M_CLKM   GPIO_MODE_03
#define GPIO_OTG_IDDIG_EINT_PIN_M_IDDIG   GPIO_MODE_04
#define GPIO_OTG_IDDIG_EINT_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_OTG_IDDIG_EINT_PIN_CLK     CLK_OUT0
#define GPIO_OTG_IDDIG_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_UART_UCTS1_PIN         (GPIO17 | 0x80000000)
#define GPIO_UART_UCTS1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UCTS1_PIN_M_CLK  GPIO_MODE_02
#define GPIO_UART_UCTS1_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_UART_UCTS1_PIN_M_CLKM   GPIO_MODE_03
#define GPIO_UART_UCTS1_PIN_M_IDDIG   GPIO_MODE_04
#define GPIO_UART_UCTS1_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_UART_UCTS1_PIN_CLK     CLK_OUT0
#define GPIO_UART_UCTS1_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO18 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_URTS   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN1_PIN_M_BSI_B_DATA   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN1_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN1_PIN_M_DRV_VBUS   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_NFC_EINT_PIN         (GPIO19 | 0x80000000)
#define GPIO_NFC_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_EINT_PIN_M_CLK  GPIO_MODE_04
#define GPIO_NFC_EINT_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_NFC_EINT_PIN_M_BSI_B_EN   GPIO_MODE_02
#define GPIO_NFC_EINT_PIN_M_I2SOUT_BCK   GPIO_MODE_03
#define GPIO_NFC_EINT_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_NFC_EINT_PIN_CLK     CLK_OUT1
#define GPIO_NFC_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_UART_UCTS2_PIN         (GPIO19 | 0x80000000)
#define GPIO_UART_UCTS2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UCTS2_PIN_M_CLK  GPIO_MODE_04
#define GPIO_UART_UCTS2_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_UART_UCTS2_PIN_M_BSI_B_EN   GPIO_MODE_02
#define GPIO_UART_UCTS2_PIN_M_I2SOUT_BCK   GPIO_MODE_03
#define GPIO_UART_UCTS2_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_UART_UCTS2_PIN_CLK     CLK_OUT1
#define GPIO_UART_UCTS2_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_NXPSPA_I2S_DATAOUT_PIN         (GPIO20 | 0x80000000)
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_CLK  GPIO_MODE_04
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_URTS   GPIO_MODE_01
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_PCM_TX   GPIO_MODE_02
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_I2SOUT_DATA_OUT   GPIO_MODE_03
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_CLK     CLK_OUT2
#define GPIO_NXPSPA_I2S_DATAOUT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_UART_URTS2_PIN         (GPIO20 | 0x80000000)
#define GPIO_UART_URTS2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URTS2_PIN_M_CLK  GPIO_MODE_04
#define GPIO_UART_URTS2_PIN_M_URTS   GPIO_MODE_01
#define GPIO_UART_URTS2_PIN_M_PCM_TX   GPIO_MODE_02
#define GPIO_UART_URTS2_PIN_M_I2SOUT_DATA_OUT   GPIO_MODE_03
#define GPIO_UART_URTS2_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_UART_URTS2_PIN_CLK     CLK_OUT2
#define GPIO_UART_URTS2_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_PMIC_EINT_PIN         (GPIO25 | 0x80000000)
#define GPIO_PMIC_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PMIC_EINT_PIN_M_EINT  GPIO_PMIC_EINT_PIN_M_GPIO

#define GPIO_HIFI_DVCC_EN_PIN         (GPIO32 | 0x80000000)
#define GPIO_HIFI_DVCC_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_HIFI_DVCC_EN_PIN_M_CLK  GPIO_MODE_01
#define GPIO_HIFI_DVCC_EN_PIN_M_MD1_SIM1_SCLK   GPIO_MODE_02

#define GPIO_LCD_ENP         (GPIO33 | 0x80000000)
#define GPIO_LCD_ENP_M_GPIO  GPIO_MODE_00
#define GPIO_LCD_ENP_M_PWM  GPIO_MODE_03
#define GPIO_LCD_ENP_M_MD1_SIM2_SRST   GPIO_MODE_01
#define GPIO_LCD_ENP_M_MD1_SIM1_SRST   GPIO_MODE_02

#define GPIO_NFC_OSC_EN_PIN         (GPIO38 | 0x80000000)
#define GPIO_NFC_OSC_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_OSC_EN_PIN_M_CLK  GPIO_MODE_01

#define GPIO_UART_URXD4_PIN         (GPIO41 | 0x80000000)
#define GPIO_UART_URXD4_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD4_PIN_M_KROW  GPIO_MODE_06
#define GPIO_UART_URXD4_PIN_M_PWM  GPIO_MODE_05
#define GPIO_UART_URXD4_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD4_PIN_M_DPI_CK   GPIO_MODE_02
#define GPIO_UART_URXD4_PIN_M_UTXD   GPIO_MODE_03
#define GPIO_UART_URXD4_PIN_M_UCTS   GPIO_MODE_04

#define GPIO_UART_UTXD4_PIN         (GPIO42 | 0x80000000)
#define GPIO_UART_UTXD4_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD4_PIN_M_KROW  GPIO_MODE_06
#define GPIO_UART_UTXD4_PIN_M_PWM  GPIO_MODE_05
#define GPIO_UART_UTXD4_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD4_PIN_M_DPI_DE   GPIO_MODE_02
#define GPIO_UART_UTXD4_PIN_M_URXD   GPIO_MODE_03
#define GPIO_UART_UTXD4_PIN_M_URTS   GPIO_MODE_04

#define GPIO_PCM_DAICLK_PIN         (GPIO43 | 0x80000000)
#define GPIO_PCM_DAICLK_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PCM_DAICLK_PIN_M_CLK  GPIO_MODE_01
#define GPIO_PCM_DAICLK_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_PCM_DAICLK_PIN_M_I2SIN1_BCK   GPIO_MODE_03
#define GPIO_PCM_DAICLK_PIN_M_I2SOUT_BCK   GPIO_MODE_04
#define GPIO_PCM_DAICLK_PIN_M_CONN_DSP_JCK   GPIO_MODE_05
#define GPIO_PCM_DAICLK_PIN_M_DSPJTCK   GPIO_MODE_06

#define GPIO_PCM_DAISYNC_PIN         (GPIO44 | 0x80000000)
#define GPIO_PCM_DAISYNC_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PCM_DAISYNC_PIN_M_PCM_SYNC   GPIO_MODE_01
#define GPIO_PCM_DAISYNC_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_PCM_DAISYNC_PIN_M_I2SIN1_LRCK   GPIO_MODE_03
#define GPIO_PCM_DAISYNC_PIN_M_I2SOUT_LRCK   GPIO_MODE_04
#define GPIO_PCM_DAISYNC_PIN_M_CONN_DSP_JINTP   GPIO_MODE_05
#define GPIO_PCM_DAISYNC_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_PCM_DAIPCMIN_PIN         (GPIO45 | 0x80000000)
#define GPIO_PCM_DAIPCMIN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PCM_DAIPCMIN_PIN_M_PCM_RX   GPIO_MODE_01
#define GPIO_PCM_DAIPCMIN_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_PCM_DAIPCMIN_PIN_M_I2SIN1_DATA_IN   GPIO_MODE_03
#define GPIO_PCM_DAIPCMIN_PIN_M_PCM_TX   GPIO_MODE_04
#define GPIO_PCM_DAIPCMIN_PIN_M_CONN_DSP_JDI   GPIO_MODE_05
#define GPIO_PCM_DAIPCMIN_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_PCM_DAIPCMOUT_PIN         (GPIO46 | 0x80000000)
#define GPIO_PCM_DAIPCMOUT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PCM_DAIPCMOUT_PIN_M_PCM_TX   GPIO_MODE_01
#define GPIO_PCM_DAIPCMOUT_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_PCM_DAIPCMOUT_PIN_M_I2SOUT_DATA_OUT   GPIO_MODE_03
#define GPIO_PCM_DAIPCMOUT_PIN_M_PCM_RX   GPIO_MODE_04
#define GPIO_PCM_DAIPCMOUT_PIN_M_CONN_DSP_JMS   GPIO_MODE_05
#define GPIO_PCM_DAIPCMOUT_PIN_M_DSPJTMS   GPIO_MODE_06
#define GPIO_PCM_DAIPCMOUT_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_GPS_LNA_PIN         (GPIO47 | 0x80000000)
#define GPIO_GPS_LNA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_PWM  GPIO_MODE_02
#define GPIO_GPS_LNA_PIN_M_ANT_SEL   GPIO_MODE_01
#define GPIO_GPS_LNA_PIN_M_CONN_MCU_DBGACK_N   GPIO_MODE_03
#define GPIO_GPS_LNA_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_SWCHARGER_EN_PIN         (GPIO51 | 0x80000000)
#define GPIO_SWCHARGER_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_SWCHARGER_EN_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_SWCHARGER_EN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CAMERA_CMRST1_PIN         (GPIO52 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_CAMERA_CMRST1_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_GSE_1_EINT_PIN         (GPIO53 | 0x80000000)
#define GPIO_GSE_1_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_EINT  GPIO_GSE_1_EINT_PIN_M_GPIO

#define GPIO_CAMERA_AF_EN_PIN         (GPIO55 | 0x80000000)
#define GPIO_CAMERA_AF_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_AF_EN_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_CAMERA_AF_EN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CAMERA_FLASH_MODE_PIN         (GPIO56 | 0x80000000)
#define GPIO_CAMERA_FLASH_MODE_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_MODE_PIN_M_CLK  GPIO_MODE_02
#define GPIO_CAMERA_FLASH_MODE_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_CAMERA_FLASH_MODE_PIN_M_DBG_MON_A   GPIO_MODE_07
#define GPIO_CAMERA_FLASH_MODE_PIN_CLK     CLK_OUT0
#define GPIO_CAMERA_FLASH_MODE_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_HIFI_AVCC_EN_PIN         (GPIO60 | 0x80000000)
#define GPIO_HIFI_AVCC_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_HIFI_AVCC_EN_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_HIFI_AVCC_EN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_HIFI_VCCA_EN_PIN         (GPIO64 | 0x80000000)
#define GPIO_HIFI_VCCA_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_HIFI_VCCA_EN_PIN_M_CLK  GPIO_MODE_02
#define GPIO_HIFI_VCCA_EN_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_HIFI_VCCA_EN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CAMERA_FLASH_EN_PIN         (GPIO65 | 0x80000000)
#define GPIO_CAMERA_FLASH_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_EN_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_CAMERA_FLASH_EN_PIN_M_BSI_C_DATA   GPIO_MODE_02
#define GPIO_CAMERA_FLASH_EN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_NFC_RST_PIN         (GPIO66 | 0x80000000)
#define GPIO_NFC_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_RST_PIN_M_BSI_A_EN   GPIO_MODE_01
#define GPIO_NFC_RST_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_LTE_RESET_PIN         (GPIO68 | 0x80000000)
#define GPIO_LTE_RESET_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_LTE_RESET_PIN_M_BSI_A_DATA   GPIO_MODE_01
#define GPIO_LTE_RESET_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CTP_RST_PIN         (GPIO69 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_BSI_A_DATA   GPIO_MODE_01
#define GPIO_CTP_RST_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_NFC_VENB_PIN         (GPIO73 | 0x80000000)
#define GPIO_NFC_VENB_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_VENB_PIN_M_CLK  GPIO_MODE_02
#define GPIO_NFC_VENB_PIN_M_VM   GPIO_MODE_01
#define GPIO_NFC_VENB_PIN_M_DBG_MON_A   GPIO_MODE_07
#define GPIO_NFC_VENB_PIN_CLK     CLK_OUT3
#define GPIO_NFC_VENB_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_KPD_KROW0_PIN         (GPIO74 | 0x80000000)
#define GPIO_KPD_KROW0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KROW0_PIN_M_KROW  GPIO_MODE_01
#define GPIO_KPD_KROW0_PIN_M_EINT  GPIO_KPD_KROW0_PIN_M_GPIO

#define GPIO_IRQ_NFC_PIN         (GPIO74 | 0x80000000)
#define GPIO_IRQ_NFC_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_IRQ_NFC_PIN_M_KROW  GPIO_MODE_01
#define GPIO_IRQ_NFC_PIN_M_EINT  GPIO_IRQ_NFC_PIN_M_GPIO

#define GPIO_KPD_KCOL0_PIN         (GPIO75 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_I2C0_SDA_PIN         (GPIO84 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C0_SCA_PIN         (GPIO85 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         (GPIO86 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO87 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_KPD_KROW1_PIN         (GPIO92 | 0x80000000)
#define GPIO_KPD_KROW1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KROW1_PIN_M_KROW  GPIO_MODE_01
#define GPIO_KPD_KROW1_PIN_M_IDDIG   GPIO_MODE_02
#define GPIO_KPD_KROW1_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CAMERA_CMPDN_PIN         (GPIO92 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN_PIN_M_KROW  GPIO_MODE_01
#define GPIO_CAMERA_CMPDN_PIN_M_IDDIG   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_OTG_DRVVBUS_PIN         (GPIO93 | 0x80000000)
#define GPIO_OTG_DRVVBUS_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_DRVVBUS_PIN_M_KROW  GPIO_MODE_01
#define GPIO_OTG_DRVVBUS_PIN_M_DRV_VBUS   GPIO_MODE_02
#define GPIO_OTG_DRVVBUS_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_NXPSPA_I2S_DATAIN_PIN         (GPIO105 | 0x80000000)
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_PWM  GPIO_MODE_05
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_I2SIN1_DATA_IN   GPIO_MODE_01
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_PCM_RX   GPIO_MODE_02
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_I2SOUT_DATA_OUT   GPIO_MODE_03
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_DAC_DAT_OUT   GPIO_MODE_04
#define GPIO_NXPSPA_I2S_DATAIN_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_NXPSPA_I2S_LRCK_PIN         (GPIO106 | 0x80000000)
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_PWM  GPIO_MODE_05
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_I2SIN1_LRCK   GPIO_MODE_01
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_PCM_SYNC   GPIO_MODE_02
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_DAC_WS   GPIO_MODE_04
#define GPIO_NXPSPA_I2S_LRCK_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_NXPSPA_I2S_BCK_PIN         (GPIO107 | 0x80000000)
#define GPIO_NXPSPA_I2S_BCK_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NXPSPA_I2S_BCK_PIN_M_CLK  GPIO_MODE_02
#define GPIO_NXPSPA_I2S_BCK_PIN_M_PWM  GPIO_MODE_05
#define GPIO_NXPSPA_I2S_BCK_PIN_M_I2SIN1_BCK   GPIO_MODE_01
#define GPIO_NXPSPA_I2S_BCK_PIN_M_I2SOUT_BCK   GPIO_MODE_03
#define GPIO_NXPSPA_I2S_BCK_PIN_M_DAC_CK   GPIO_MODE_04
#define GPIO_NXPSPA_I2S_BCK_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_URXD1_PIN         (GPIO108 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD1_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD1_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_UTXD1_PIN         (GPIO109 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD1_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD1_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD1_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_URXD2_PIN         (GPIO110 | 0x80000000)
#define GPIO_UART_URXD2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD2_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD2_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD2_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD2_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_UTXD2_PIN         (GPIO111 | 0x80000000)
#define GPIO_UART_UTXD2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD2_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD2_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD2_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD2_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD2_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC2_CMD         (GPIO114 | 0x80000000)
#define GPIO_MSDC2_CMD_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC2_CMD_M_MSDC2_CMD   GPIO_MODE_01
#define GPIO_MSDC2_CMD_M_SDA   GPIO_MODE_02
#define GPIO_MSDC2_CMD_M_NLD   GPIO_MODE_04
#define GPIO_MSDC2_CMD_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC2_CLK         (GPIO115 | 0x80000000)
#define GPIO_MSDC2_CLK_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC2_CLK_M_CLK  GPIO_MODE_01
#define GPIO_MSDC2_CLK_M_SCL   GPIO_MODE_02
#define GPIO_MSDC2_CLK_M_NLD   GPIO_MODE_04
#define GPIO_MSDC2_CLK_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC3_DAT0         (GPIO116 | 0x80000000)
#define GPIO_MSDC3_DAT0_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC3_DAT0_M_MSDC2_DAT   GPIO_MODE_01
#define GPIO_MSDC3_DAT0_M_NLD   GPIO_MODE_04
#define GPIO_MSDC3_DAT0_M_UTXD   GPIO_MODE_05
#define GPIO_MSDC3_DAT0_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC2_DAT1         (GPIO117 | 0x80000000)
#define GPIO_MSDC2_DAT1_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC2_DAT1_M_PWM  GPIO_MODE_03
#define GPIO_MSDC2_DAT1_M_MSDC2_DAT   GPIO_MODE_01
#define GPIO_MSDC2_DAT1_M_ANT_SEL   GPIO_MODE_02
#define GPIO_MSDC2_DAT1_M_NLD   GPIO_MODE_04
#define GPIO_MSDC2_DAT1_M_URXD   GPIO_MODE_05
#define GPIO_MSDC2_DAT1_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC2_DAT2         (GPIO118 | 0x80000000)
#define GPIO_MSDC2_DAT2_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC2_DAT2_M_MSDC2_DAT   GPIO_MODE_01
#define GPIO_MSDC2_DAT2_M_ANT_SEL   GPIO_MODE_02
#define GPIO_MSDC2_DAT2_M_SDA   GPIO_MODE_03
#define GPIO_MSDC2_DAT2_M_NLD   GPIO_MODE_04
#define GPIO_MSDC2_DAT2_M_UTXD   GPIO_MODE_05
#define GPIO_MSDC2_DAT2_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_MSDC2_DAT3         (GPIO119 | 0x80000000)
#define GPIO_MSDC2_DAT3_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC2_DAT3_M_MSDC2_DAT   GPIO_MODE_01
#define GPIO_MSDC2_DAT3_M_ANT_SEL   GPIO_MODE_02
#define GPIO_MSDC2_DAT3_M_SCL   GPIO_MODE_03
#define GPIO_MSDC2_DAT3_M_NLD   GPIO_MODE_04
#define GPIO_MSDC2_DAT3_M_URXD   GPIO_MODE_05
#define GPIO_MSDC2_DAT3_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_AUD_EXTDAC_RST_PIN         (GPIO120 | 0x80000000)
#define GPIO_AUD_EXTDAC_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_AUD_EXTDAC_RST_PIN_M_CMDAT   GPIO_MODE_01
#define GPIO_AUD_EXTDAC_RST_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_LTE_WK_MD_PIN         (GPIO121 | 0x80000000)
#define GPIO_LTE_WK_MD_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_LTE_WK_MD_PIN_M_CMDAT   GPIO_MODE_01
#define GPIO_LTE_WK_MD_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_SMARTPA_RST_PIN         (GPIO123 | 0x80000000)
#define GPIO_SMARTPA_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_SMARTPA_RST_PIN_M_CLK  GPIO_MODE_01
#define GPIO_SMARTPA_RST_PIN_M_CMCSK   GPIO_MODE_02

#define GPIO_MSDC1_CMD         (GPIO124 | 0x80000000)
#define GPIO_MSDC1_CMD_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CMD_M_MSDC1_CMD   GPIO_MODE_01

#define GPIO_MSDC1_CLK         (GPIO125 | 0x80000000)
#define GPIO_MSDC1_CLK_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CLK_M_CLK  GPIO_MODE_01

#define GPIO_MSDC1_DAT0         (GPIO126 | 0x80000000)
#define GPIO_MSDC1_DAT0_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT0_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT1         (GPIO127 | 0x80000000)
#define GPIO_MSDC1_DAT1_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT1_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT2         (GPIO128 | 0x80000000)
#define GPIO_MSDC1_DAT2_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT2_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT3         (GPIO129 | 0x80000000)
#define GPIO_MSDC1_DAT3_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT3_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_CAMERA_CMRST_PIN         (GPIO167 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_LCD_ENN         (GPIO168 | 0x80000000)
#define GPIO_LCD_ENN_M_GPIO  GPIO_MODE_00
#define GPIO_LCD_ENN_M_KCOL  GPIO_MODE_01


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */




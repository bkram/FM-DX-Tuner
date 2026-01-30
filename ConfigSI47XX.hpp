#ifndef FMDX_TUNER_CONFIG_SI47XX_H
#define FMDX_TUNER_CONFIG_SI47XX_H

/* -----------------------------------------------------------------------
   SI47XX configuration (SI4730/31/34/35 family)
   ----------------------------------------------------------------------- */

/* I2C address: use 8-bit address (write address).
   SEN low  -> 0x22 (7-bit 0x11)
   SEN high -> 0xC6 (7-bit 0x63) */
#define SI47XX_I2C_ADDRESS 0xC6

/* I2C pins (ESP32). Set to -1 to use Wire defaults. */
#define SI47XX_I2C_SDA 18
#define SI47XX_I2C_SCL 17

/* Radio power enable pin (active high). Set to -1 to disable. */
#define SI47XX_RADIO_EN_PIN 15

/* Audio amp enable (active high). Set to -1 to disable. */
#define SI47XX_AMP_EN_PIN 10

/* Audio mute (active high). Set to -1 to disable. */
#define SI47XX_MUTE_PIN 3

/* Optional reset pin. Set to -1 to disable reset toggling. */
#define SI47XX_RESET_PIN 16

/* Power-up options */
#define SI47XX_XOSCEN 1  /* 0 = external RCLK, 1 = crystal */
#define SI47XX_OPMODE 0x05 /* 0x05 = analog audio outputs */

/* Reference clock (set to 0 to skip configuration) */
#define SI47XX_REFCLK_FREQ 0
#define SI47XX_REFCLK_PRESCALE 1

/* Feature flags */
#define SI47XX_HAS_RDS 1

/* Default bands (kHz) */
#define SI47XX_FM_BAND_MIN 64000
#define SI47XX_FM_BAND_MAX 108000
#define SI47XX_AM_BAND_MIN 149
#define SI47XX_AM_BAND_MAX 23000

/* Default start frequencies (kHz) */
#define SI47XX_DEFAULT_FM_FREQ 105900
#define SI47XX_DEFAULT_AM_FREQ 1000

/* Driver timing */
#define SI47XX_CTS_TIMEOUT_MS 250
#define SI47XX_QUALITY_INTERVAL_MS 60
#define SI47XX_RDS_INTERVAL_MS 90

/* ----------------------------------------------------------------------- */

#endif

#include <HardwareConfig.h>

#ifdef BOARD_AB_SMARTHOUSE_FINGERPRINT_V13
    #define INFO_LED_PIN 11
    #define INFO_LED_PIN_ACTIVE_ON HIGH
    #define PROG_LED_PIN 10
    #define PROG_LED_PIN_ACTIVE_ON HIGH
    #define PROG_BUTTON_PIN 9
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING

    #define KNX_UART_TX_PIN 12
    #define KNX_UART_RX_PIN 13
    #define SAVE_INTERRUPT_PIN 0

    #define SCANNER_SERIAL Serial2
    #define SCANNER_SERIAL_RX_PIN 5
    #define SCANNER_SERIAL_TX_PIN 4
    #define SCANNER_PWR_PIN 1
    #define SCANNER_PWR_PIN_ACTIVE_ON LOW
    #define SCANNER_TOUCH_PIN 2

    #define DIRECT_TOUCH_LEFT_PIN 26
    #define DIRECT_TOUCH_RIGHT_PIN 27
    #define DIRECT_LED_GREEN_PIN 24
    #define DIRECT_LED_RED_PIN 25
    #define EXTERN_TOUCH_LEFT_PIN 0x0204
    #define EXTERN_TOUCH_RIGHT_PIN 0x0207
    #define EXTERN_LED_GREEN_PIN 0x0205
    #define EXTERN_LED_RED_PIN 0x0206

    #define OPENKNX_SWA_CHANNEL_COUNT 1
    #define OPENKNX_SWA_SET_PINS 14
    #define OPENKNX_SWA_RESET_PINS 15
    #define OPENKNX_SWA_SET_ACTIVE_ON LOW
    #define OPENKNX_SWA_RESET_ACTIVE_ON LOW
    #define OPENKNX_SWA_BISTABLE_IMPULSE_LENGTH 50

    #define OPENKNX_GPIO_NUM 2
    #define OPENKNX_GPIO_TYPES OPENKNX_GPIO_T_MCU, OPENKNX_GPIO_T_TCA9554
    #define OPENKNX_GPIO_ADDRS 0xFF, 0x20
    #define OPENKNX_GPIO_INTS 0xFF, 0xFF

    #define OPENKNX_GPIO_WIRE Wire
    #define OPENKNX_GPIO_SDA 20
    #define OPENKNX_GPIO_SCL 21
    #define OPENKNX_GPIO_CLOCK 400000

    #define NFC_PN7160_ADDR 0x28
    #define NFC_IRQ_PIN 16
    #define NFC_VEN_PIN 17
    #define NFC_DWL_REQ_PIN 23

    #define OPENKNX_BI_GPIO_PINS 28, 18, 29, 19
    #define OPENKNX_BI_GPIO_COUNT 4
#endif

#ifdef DEVICE_SEN_UP1_8XTH
    // #define DEVICE_ID "SEN-UP1-8xTH"
    // #define DEVICE_NAME "OpenKNX UP1 8xSensor"

    // #define OKNXHW_SENSOR_A1_SCL_PIN (29)
    // #define OKNXHW_SENSOR_A2_SDA_PIN (28)
    // #define OKNXHW_SENSOR_B1_SCL_PIN (27) // Touch Right
    // #define OKNXHW_SENSOR_B2_SDA_PIN (26) // Touch Left
    // #define OKNXHW_SENSOR_C1_SCL_PIN (25) // LED Red
    // #define OKNXHW_SENSOR_C2_SDA_PIN (24) // LED Green
    // #define OKNXHW_SENSOR_D1_SCL_PIN (23) // Binary
    // #define OKNXHW_SENSOR_D2_SDA_PIN (22) // Binary
    // #define OKNXHW_SENSOR_E1_SCL_PIN (21) // RX
    // #define OKNXHW_SENSOR_E2_SDA_PIN (20) // TX
    // #define OKNXHW_SENSOR_F1_SCL_PIN (19) // Touch
    // #define OKNXHW_SENSOR_F2_SDA_PIN (18)
    // #define OKNXHW_SENSOR_G1_SCL_PIN (17) // Binary
    // #define OKNXHW_SENSOR_G2_SDA_PIN (16) // Binary
    // #define OKNXHW_SENSOR_H1_SCL_PIN (15)
    // #define OKNXHW_SENSOR_H2_SDA_PIN (14)​

    #define SCANNER_SERIAL Serial2
    #define SCANNER_SERIAL_RX_PIN OKNXHW_SENSOR_E1_SCL_PIN
    #define SCANNER_SERIAL_TX_PIN OKNXHW_SENSOR_E2_SDA_PIN
    #define SCANNER_TOUCH_PIN OKNXHW_SENSOR_F1_SCL_PIN
    #define DIRECT_TOUCH_LEFT_PIN OKNXHW_SENSOR_B2_SDA_PIN
    #define DIRECT_TOUCH_RIGHT_PIN OKNXHW_SENSOR_B1_SCL_PIN
    #define DIRECT_LED_GREEN_PIN OKNXHW_SENSOR_C2_SDA_PIN 
    #define DIRECT_LED_RED_PIN OKNXHW_SENSOR_C1_SCL_PIN

    #define OPENKNX_SWA_CHANNEL_COUNT 0
    #define OPENKNX_SWA_SET_ACTIVE_ON LOW
    #define OPENKNX_SWA_RESET_ACTIVE_ON LOW
    #define OPENKNX_SWA_BISTABLE_IMPULSE_LENGTH 50

    #define OPENKNX_GPIO_NUM 0
    #define OPENKNX_GPIO_TYPES

    #define OPENKNX_BI_GPIO_PINS OKNXHW_SENSOR_D1_SCL_PIN, OKNXHW_SENSOR_D2_SDA_PIN, OKNXHW_SENSOR_G1_SCL_PIN, OKNXHW_SENSOR_G2_SDA_PIN
    #define OPENKNX_BI_GPIO_COUNT 4
#endif
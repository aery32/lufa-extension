#define F_OSC0 12000000UL
#define F_OSC1 16000000UL
#define F_CPU  66000000UL

// -------------------------------------------------------------------------
// LUFA Configurations
// -------------------------------------------------------------------------
#define ARCH ARCH_UC3
#define BOARD BOARD_NONE
#define F_USB 96000000UL

/* Non-USB Related Configuration Tokens: */
// #define DISABLE_TERMINAL_CODES

/* USB Class Driver Related Tokens: */
// #define HID_HOST_BOOT_PROTOCOL_ONLY
// #define HID_STATETABLE_STACK_DEPTH {Insert Value Here}
// #define HID_USAGE_STACK_DEPTH {Insert Value Here}
// #define HID_MAX_COLLECTIONS {Insert Value Here}
// #define HID_MAX_REPORTITEMS {Insert Value Here}
// #define HID_MAX_REPORT_IDS {Insert Value Here}
// #define NO_CLASS_DRIVER_AUTOFLUSH

/* General USB Driver Related Tokens: */
// #define ORDERED_EP_CONFIG
#define USE_STATIC_OPTIONS (USB_DEVICE_OPT_FULLSPEED | USB_OPT_GCLK_SRC_PLL | USB_OPT_GCLK_CHANNEL_1)
#define USB_DEVICE_ONLY
// #define USB_HOST_ONLY
// #define USB_STREAM_TIMEOUT_MS {Insert Value Here}
// #define NO_SOF_EVENTS

/* USB Device Mode Driver Related Tokens: */
// #define NO_INTERNAL_SERIAL
#define FIXED_CONTROL_ENDPOINT_SIZE 8
#define FIXED_NUM_CONFIGURATIONS 1
// #define CONTROL_ONLY_DEVICE
// #define INTERRUPT_CONTROL_ENDPOINT
// #define NO_DEVICE_REMOTE_WAKEUP
// #define NO_DEVICE_SELF_POWER

/* USB Host Mode Driver Related Tokens: */
// #define USB_HOST_TIMEOUT_MS {Insert Value Here}
// #define HOST_DEVICE_SETTLE_DELAY_MS {Insert Value Here}
// #define NO_AUTO_VBUS_MANAGEMENT
// #define INVERTED_VBUS_ENABLE_LINE

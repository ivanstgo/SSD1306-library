/**
 * @file ssd1306.h
 * @author Iván Santiago (gh: ivanstgo)
 * @date 30/07/2025 - 15:50
 * @brief Library for using an OLED dot-matrix display controlled by the SSD1306
 * chip.
 */

#ifndef SSD1306_H_
#define SSD1306_H_

#include <stdint.h>

/**
 * @brief SSD1306 fundamental commands
 */
enum ssd1306_command
{
    SSD1306_SET_CONTRAST_CONTROL = 0x81,
    SSD1306_RESUME_TO_RAM_CONTENT = 0xA4,
    SSD1306_ENTIRE_DISPLAY_ON = 0xA5,
    SSD1306_SET_NORMAL_DISPLAY = 0xA6,
    SSD1306_SET_INVERSE_DISPLAY = 0xA7,
    SSD1306_SET_DISPLAY_OFF = 0xAE,
    SSD1306_SET_DISPLAY_ON = 0xAF
};

/**
 * @brief SSD1306 scrolling commands
 */
enum ssd1306_scrolling_command
{
    SSD1306_CONTINUOUS_HORIZONTAL_SCROLL_RIGHT = 0x26,
    SSD1306_CONTINUOUS_HORIZONTAL_SCROLL_LEFT = 0x27,
    SSD1306_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL = 0x29,
    SSD1306_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL = 0x2A,
    SSD1306_DEACTIVATE_SCROLL = 0x2E,
    SSD1306_ACTIVATE_SCROLL = 0x2F,
    SSD1306_SET_VERTICAL_SCROLL_AREA = 0xA3
};

/**
 * @brief SSD1306 addressing setting commands
 */
enum ssd1306_addressing_command
{
    SSD1306_SET_LOWER_COLUMN_START_ADDRESS = 0x00,
    SSD1306_SET_HIGHER_COLUMN_START_ADDRESS = 0x10,
    SSD1306_SET_MEMORY_ADDRESSING_MODE = 0x20,
    SSD1306_SET_COLUMN_ADDRESS = 0x21,
    SSD1306_SET_PAGE_ADDRESS = 0x22,
    SSD1306_SET_PAGE_START_ADDRESS = 0xB0
};

/**
 * @brief SSD1306 memory addressing modes
 * @note Argument for the set memory addressing mode command
 */
enum ssd1306_addressing_mode
{
    SSD1306_HORIZONTAL_ADDRESSING_MODE,
    SSD1306_VERTICAL_ADDRESSING_MODE,
    SSD1306_PAGE_ADDRESSING_MODE
};

/**
 * @brief SSD1306 panel resolution and layout related commands
 */
enum ssd1306_hardware_configuration_command
{
    SSD1306_SET_DISPLAY_START_LINE = 0x40,
    SSD1306_SET_SEGMENT0_REMAP_0 = 0xA0,
    SSD1306_SET_SEGMENT0_REMAP_127 = 0xA1,
    SSD1306_SET_MULTIPLEXER_RATIO = 0xA8,
    SSD1306_SET_COM_OUTPUT_SCAN_DIRECTION_NORMAL = 0xC0,
    SSD1306_SET_COM_OUTPUT_SCAN_DIRECTION_REMAPPED = 0xC8,
    SSD1306_SET_DISPLAY_OFFSET = 0xD3,
    SSD1306_SET_COM_PINS_HARDWARE_CONFIGURATION = 0xDA
};

/**
 * @brief SSD1306 timming and driving scheme setting commands
 */
enum ssd1306_timming_command
{
    SSD1306_SET_OSCILLATOR_FREQUENCY = 0xD5,
    SSD1306_SET_PRECHARGE_PERIOD = 0xD9,
    SSD1306_SET_VCOMH_DESELECT_LEVEL = 0xDB,
    SSD1306_NOP = 0xE3
};

/**
 * @brief SSD1306 page addresses
 */
enum ssd1306_page_address
{
    SSD1306_PAGE0,
    SSD1306_PAGE1,
    SSD1306_PAGE2,
    SSD1306_PAGE3,
    SSD1306_PAGE4,
    SSD1306_PAGE5,
    SSD1306_PAGE6,
    SSD1306_PAGE7
};

/**
 * @brief SSD1306 scrolling time interval between each scroll step
 * @note Argument for scrolling commands
 */
enum ssd1306_scroll_step_time
{
    SSD1306_5_FRAMES,
    SSD1306_64_FRAMES,
    SSD1306_128_FRAMES,
    SSD1306_256_FRAMES,
    SSD1306_3_FRAMES,
    SSD1306_4_FRAMES,
    SSD1306_25_FRAMES,
    SSD1306_2_FRAMES
};

#endif /* !SSD1306_H_ */

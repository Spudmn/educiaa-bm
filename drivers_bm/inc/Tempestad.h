

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Tempestad.h
 * Date                : 04.08.2010
 * Font size in bytes  : 4218
 * Font width          : 10
 * Font height         : 12
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#ifndef NEW_FONT_H
#define NEW_FONT_H

#define NEW_FONT_WIDTH 10
#define NEW_FONT_HEIGHT 12

#include <stdint.h>

static const uint8_t fontTempestad[]  = {
    0x10, 0x7A, // size
    0x0A, // width
    0x0C, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x01, 0x03, 0x05, 0x05, 0x07, 0x04, 0x01, 0x02, 0x02, 
    0x05, 0x05, 0x02, 0x03, 0x01, 0x05, 0x04, 0x02, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x02, 0x03, 0x03, 
    0x03, 0x04, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x01, 0x03, 0x04, 0x03, 0x05, 0x05, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x04, 0x05, 0x04, 0x02, 
    0x05, 0x02, 0x03, 0x03, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x03, 0x04, 0x04, 0x01, 0x01, 0x04, 0x01, 0x07, 0x04, 0x04, 
    0x04, 0x04, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x04, 0x04, 
    0x03, 0x03, 0x01, 0x03, 0x04, 0x00, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, // 32
    0xF8, 0x20, // 33
    0x18, 0x00, 0x18, 0x00, 0x00, 0x00, // 34
    0xA0, 0xF8, 0xA0, 0xF8, 0xA0, 0x00, 0x30, 0x00, 0x30, 0x00, // 35
    0x30, 0x48, 0xFC, 0x48, 0x88, 0x20, 0x20, 0x70, 0x20, 0x10, // 36
    0x10, 0x28, 0x90, 0x40, 0x30, 0x88, 0x00, 0x00, 0x20, 0x10, 0x00, 0x10, 0x20, 0x10, // 37
    0xB0, 0x48, 0x88, 0x40, 0x10, 0x20, 0x10, 0x20, // 38
    0x18, 0x00, // 39
    0xF8, 0x04, 0x30, 0x40, // 40
    0x04, 0xF8, 0x40, 0x30, // 41
    0xA0, 0x40, 0xF0, 0x40, 0xA0, 0x00, 0x00, 0x10, 0x00, 0x00, // 42
    0x40, 0x40, 0xF0, 0x40, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, // 43
    0x00, 0x00, 0x40, 0x20, // 44
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00, // 45
    0x00, 0x20, // 46
    0x00, 0x80, 0x40, 0x30, 0x08, 0x20, 0x10, 0x00, 0x00, 0x00, // 47
    0xF0, 0x08, 0x08, 0xF0, 0x10, 0x20, 0x20, 0x10, // 48
    0x08, 0xF8, 0x00, 0x30, // 49
    0x88, 0x48, 0x48, 0x30, 0x30, 0x20, 0x20, 0x20, // 50
    0x08, 0x48, 0x48, 0xB0, 0x20, 0x20, 0x20, 0x10, // 51
    0xE0, 0x90, 0xF8, 0x80, 0x00, 0x00, 0x30, 0x00, // 52
    0x78, 0x48, 0x48, 0x88, 0x20, 0x20, 0x20, 0x10, // 53
    0xF0, 0x48, 0x48, 0x80, 0x10, 0x20, 0x20, 0x10, // 54
    0x08, 0x08, 0xE8, 0x18, 0x00, 0x30, 0x00, 0x00, // 55
    0xB0, 0x48, 0x48, 0xB0, 0x10, 0x20, 0x20, 0x10, // 56
    0x30, 0x48, 0x48, 0xF0, 0x00, 0x20, 0x20, 0x10, // 57
    0x20, 0x20, // 58
    0x00, 0x20, 0x40, 0x20, // 59
    0x40, 0xA0, 0x10, 0x00, 0x00, 0x10, // 60
    0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, // 61
    0x10, 0xA0, 0x40, 0x10, 0x00, 0x00, // 62
    0x08, 0x88, 0x48, 0x30, 0x00, 0x20, 0x00, 0x00, // 63
    0xF0, 0x08, 0x84, 0x54, 0x54, 0xE4, 0x08, 0xF0, 0x10, 0x20, 0x40, 0x50, 0x50, 0x10, 0x20, 0x10, // 64
    0xF0, 0x48, 0x48, 0xF0, 0x30, 0x00, 0x00, 0x30, // 65
    0xF8, 0x48, 0x48, 0xB0, 0x30, 0x20, 0x20, 0x10, // 66
    0xF0, 0x08, 0x08, 0x08, 0x10, 0x20, 0x20, 0x20, // 67
    0xF8, 0x08, 0x08, 0xF0, 0x30, 0x20, 0x20, 0x10, // 68
    0xF8, 0x48, 0x48, 0x08, 0x30, 0x20, 0x20, 0x20, // 69
    0xF8, 0x48, 0x48, 0x08, 0x30, 0x00, 0x00, 0x00, // 70
    0xF0, 0x08, 0x48, 0xC8, 0x10, 0x20, 0x20, 0x30, // 71
    0xF8, 0x40, 0x40, 0xF8, 0x30, 0x00, 0x00, 0x30, // 72
    0xF8, 0x30, // 73
    0x00, 0x00, 0xF8, 0x20, 0x20, 0x10, // 74
    0xF8, 0x40, 0xB0, 0x08, 0x30, 0x00, 0x10, 0x20, // 75
    0xF8, 0x00, 0x00, 0x30, 0x20, 0x20, // 76
    0xF8, 0x10, 0x20, 0x10, 0xF8, 0x30, 0x00, 0x00, 0x00, 0x30, // 77
    0xF8, 0x10, 0xE0, 0x00, 0xF8, 0x30, 0x00, 0x00, 0x10, 0x30, // 78
    0xF0, 0x08, 0x08, 0xF0, 0x10, 0x20, 0x20, 0x10, // 79
    0xF8, 0x48, 0x48, 0x30, 0x30, 0x00, 0x00, 0x00, // 80
    0xF0, 0x08, 0x08, 0xF0, 0x10, 0x20, 0x20, 0x50, // 81
    0xF8, 0x48, 0x48, 0xB0, 0x30, 0x00, 0x00, 0x30, // 82
    0x30, 0x48, 0x48, 0x88, 0x20, 0x20, 0x20, 0x10, // 83
    0x08, 0x08, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x30, 0x00, 0x00, // 84
    0xF8, 0x00, 0x00, 0xF8, 0x10, 0x20, 0x20, 0x10, // 85
    0x18, 0xE0, 0x00, 0xE0, 0x18, 0x00, 0x00, 0x30, 0x00, 0x00, // 86
    0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x10, 0x20, 0x10, 0x20, 0x10, // 87
    0xB8, 0x40, 0x40, 0xB8, 0x30, 0x00, 0x00, 0x30, // 88
    0x08, 0x30, 0xC0, 0x30, 0x08, 0x00, 0x00, 0x30, 0x00, 0x00, // 89
    0x08, 0xC8, 0x28, 0x18, 0x30, 0x20, 0x20, 0x20, // 90
    0xFC, 0x04, 0x70, 0x40, // 91
    0x08, 0x30, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, // 92
    0x04, 0xFC, 0x40, 0x70, // 93
    0x10, 0x08, 0x10, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x20, 0x20, 0x20, // 95
    0x01, 0x02, 0x00, 0x00, // 96
    0x00, 0xA0, 0xA0, 0xC0, 0x10, 0x20, 0x20, 0x30, // 97
    0xF8, 0x20, 0x20, 0xC0, 0x30, 0x20, 0x20, 0x10, // 98
    0xC0, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20, 0x20, // 99
    0xC0, 0x20, 0x20, 0xF8, 0x10, 0x20, 0x20, 0x30, // 100
    0xC0, 0xA0, 0xA0, 0xC0, 0x10, 0x20, 0x20, 0x00, // 101
    0x20, 0xF0, 0x28, 0x00, 0x30, 0x00, // 102
    0xC0, 0x20, 0x20, 0xE0, 0x10, 0xA0, 0xA0, 0x70, // 103
    0xF8, 0x20, 0x20, 0xC0, 0x30, 0x00, 0x00, 0x30, // 104
    0xE8, 0x30, // 105
    0xE8, 0x70, // 106
    0xF8, 0x80, 0x40, 0x20, 0x30, 0x00, 0x10, 0x20, // 107
    0xF8, 0x30, // 108
    0xE0, 0x20, 0x20, 0xC0, 0x20, 0x20, 0xC0, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, // 109
    0xE0, 0x20, 0x20, 0xC0, 0x30, 0x00, 0x00, 0x30, // 110
    0xC0, 0x20, 0x20, 0xC0, 0x10, 0x20, 0x20, 0x10, // 111
    0xE0, 0x20, 0x20, 0xC0, 0xF0, 0x20, 0x20, 0x10, // 112
    0xC0, 0x20, 0x20, 0xE0, 0x10, 0x20, 0x20, 0xF0, // 113
    0xE0, 0x20, 0x20, 0x30, 0x00, 0x00, // 114
    0x40, 0xA0, 0xA0, 0x20, 0x20, 0x20, 0x20, 0x10, // 115
    0x20, 0xF0, 0x20, 0x00, 0x30, 0x20, // 116
    0xE0, 0x00, 0x00, 0xE0, 0x10, 0x20, 0x20, 0x30, // 117
    0xE0, 0x00, 0x00, 0xE0, 0x10, 0x20, 0x20, 0x10, // 118
    0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x10, 0x20, 0x10, 0x20, 0x10, // 119
    0x60, 0x80, 0x80, 0x60, 0x30, 0x00, 0x00, 0x30, // 120
    0xE0, 0x00, 0x00, 0xE0, 0x10, 0xA0, 0xA0, 0x70, // 121
    0x20, 0xA0, 0x60, 0x30, 0x20, 0x20, // 122
    0x40, 0xB8, 0x04, 0x00, 0x30, 0x40, // 123
    0xFC, 0x70, // 124
    0x04, 0xB8, 0x40, 0x40, 0x30, 0x00, // 125
    0x10, 0x08, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, // 126
    
};

#endif

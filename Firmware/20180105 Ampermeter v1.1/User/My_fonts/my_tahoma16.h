

/*
 *
 * Tahoma7
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : tahoma16.h
 * Date                : 11.10.2015
 * Font size in bytes  : 3174
 * Font width          : 
 * Font height         : 
 * Font first char     : 32
 * Font last char      : 129
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

#include <inttypes.h>

#ifndef TAHOMA16_H
#define TAHOMA16_H

static uint8_t Tahoma16Cyrillic[] = {	//Tahoma 21, 97 chars
    0x4A, 0xF7, // size
    0x12, // width
    0x15, // height
    0x20, // first char
    0x61, // char count
    
    // char widths
    0x04, 0x02, 0x06, 0x0D, 0x09, 0x12, 0x0D, 0x02, 0x06, 0x06, 
    0x0A, 0x0C, 0x04, 0x06, 0x02, 0x08, 0x0A, 0x08, 0x0A, 0x09, 
    0x0B, 0x09, 0x0A, 0x0A, 0x0A, 0x0A, 0x02, 0x04, 0x0B, 0x0B, 
    0x0B, 0x08, 0x11, 0x0D, 0x0A, 0x0B, 0x0A, 0x0B, 0x09, 0x0C, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0C, 0x0A, 0x0D, 0x0A, 0x0A, 
    0x0B, 0x0C, 0x0A, 0x0C, 0x0C, 0x0B, 0x0C, 0x0E, 0x0F, 0x0C, 
    0x0E, 0x0A, 0x0A, 0x0E, 0x0A, 0x09, 0x0A, 0x09, 0x08, 0x0B, 
    0x0A, 0x0E, 0x09, 0x09, 0x09, 0x09, 0x0A, 0x0E, 0x09, 0x0A, 
    0x0A, 0x0A, 0x09, 0x0A, 0x09, 0x0E, 0x09, 0x0A, 0x09, 0x0E, 
    0x0F, 0x0B, 0x0C, 0x09, 0x09, 0x0D, 0x09,
    
    // font data
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 32
    0xFE, 0xFE, 0x9F, 0x9F, 0x08, 0x08, // 33
    0x3F, 0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0xC0, 0xC0, 0xF0, 0xFE, 0xCE, 0xC0, 0xF8, 0xFE, 0xCE, 0xC0, 0xC0, 0x18, 0x18, 0xD8, 0xFE, 0x7F, 0x19, 0xD8, 0xFE, 0x3F, 0x19, 0x18, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0xC0, 0xE0, 0x70, 0x30, 0xFE, 0x30, 0x30, 0x30, 0x60, 0xC1, 0x83, 0x86, 0x86, 0xFF, 0x86, 0xCC, 0xFC, 0x78, 0x00, 0x08, 0x08, 0x08, 0xF8, 0x08, 0x08, 0x00, 0x00, // 36
    0xF8, 0xFC, 0x06, 0x06, 0x06, 0xFC, 0xF8, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0xC1, 0xF0, 0x3C, 0x0F, 0x03, 0x00, 0x7C, 0xFE, 0x83, 0x83, 0x83, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, // 37
    0x00, 0x78, 0xFC, 0xCE, 0x86, 0x86, 0xCE, 0x7C, 0x38, 0x80, 0x80, 0x00, 0x00, 0x7C, 0xFE, 0xC3, 0x81, 0x83, 0x87, 0x8E, 0x9C, 0xF8, 0x7F, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 38
    0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, // 39
    0xC0, 0xF0, 0x7C, 0x0F, 0x03, 0x01, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x38, 0xF0, 0xC0, 0x80, // 40
    0x01, 0x03, 0x0F, 0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x80, 0xC0, 0xF0, 0x38, 0x08, 0x00, // 41
    0x46, 0x64, 0x2C, 0x28, 0xFF, 0xFF, 0x28, 0x2C, 0x64, 0x46, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0xC0, 0xF8, 0x18, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0xC0, 0xC0, 0x08, 0x08, // 46
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1F, 0x03, 0x00, 0x80, 0xF0, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x60, 0x78, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xE0, 0xF8, 0x1C, 0x06, 0x06, 0x06, 0x06, 0x1C, 0xF8, 0xE0, 0x1F, 0x7F, 0xE0, 0x80, 0x80, 0x80, 0x80, 0xE0, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 48
    0x18, 0x18, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 49
    0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0x00, 0xC0, 0xE0, 0xB0, 0xB8, 0x9C, 0x8E, 0x87, 0x81, 0x80, 0x80, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 50
    0x0C, 0x06, 0x06, 0x86, 0x86, 0x86, 0xCE, 0x7C, 0x38, 0xC0, 0x80, 0x80, 0x81, 0x81, 0x81, 0xC3, 0xFE, 0x3C, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 51
    0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0xFE, 0xFE, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, // 52
    0x00, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0xC0, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3E, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 53
    0xC0, 0xF0, 0x38, 0x8C, 0x8E, 0x86, 0x86, 0x86, 0x06, 0x00, 0x1F, 0x7F, 0xE3, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3E, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 54
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xC6, 0xF6, 0x3E, 0x0E, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x78, 0xFC, 0xCC, 0x86, 0x86, 0x06, 0x06, 0x8E, 0xFC, 0x78, 0x7C, 0xFE, 0xC3, 0x81, 0x81, 0x83, 0x83, 0xC6, 0xFE, 0x3C, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 56
    0xF0, 0xFC, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x1C, 0xF8, 0xF0, 0x01, 0x83, 0x87, 0x86, 0x86, 0xC6, 0xC6, 0x73, 0x3F, 0x0F, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 57
    0xC0, 0xC0, 0xC1, 0xC1, 0x08, 0x08, // 58
    0x00, 0xC0, 0xC0, 0x00, 0x00, 0x81, 0xC1, 0x40, 0xC0, 0xF8, 0x18, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x60, 0x0E, 0x0E, 0x1B, 0x1B, 0x1B, 0x31, 0x31, 0x60, 0x60, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x60, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x60, 0x60, 0x31, 0x31, 0x1B, 0x1B, 0x1B, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x0C, 0x06, 0x06, 0x06, 0x06, 0x8E, 0xFC, 0x78, 0x00, 0x00, 0x9E, 0x9E, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 63
    0x80, 0xE0, 0x70, 0x38, 0x8C, 0xCC, 0xE6, 0x66, 0x66, 0x66, 0xE6, 0xE6, 0x0C, 0x1C, 0x78, 0xF0, 0xC0, 0x1F, 0x7F, 0xE0, 0x80, 0x1F, 0x3F, 0x70, 0x60, 0x60, 0x30, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x7F, 0x1F, 0x00, 0x00, 0x08, 0x08, 0x18, 0x38, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x06, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFE, 0x1F, 0x19, 0x18, 0x18, 0x18, 0x19, 0x1F, 0xFE, 0xF0, 0x80, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 65
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x00, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 66
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0xCE, 0x7C, 0x3C, 0x00, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 67
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x80, 0xF8, 0xFF, 0x87, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 69
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 70
    0x0E, 0x7E, 0xF0, 0x80, 0x00, 0xFE, 0xFE, 0x00, 0x80, 0xF0, 0x7E, 0x0E, 0xC0, 0xF8, 0x3C, 0x07, 0x03, 0xFF, 0xFF, 0x03, 0x07, 0x3C, 0xF8, 0xC0, 0x08, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, // 71
    0x0C, 0x0E, 0x06, 0x06, 0x86, 0x86, 0x86, 0xCE, 0x7C, 0x38, 0xC0, 0xC0, 0x80, 0x80, 0x81, 0x81, 0x81, 0xC3, 0xFE, 0x3C, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 72
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3E, 0xFE, 0xFE, 0xFF, 0xFF, 0xC0, 0x70, 0x1E, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 73
    0xFE, 0xFE, 0x00, 0x01, 0x03, 0xC3, 0xF1, 0x38, 0xFE, 0xFE, 0xFF, 0xFF, 0xC0, 0x70, 0x1E, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 74
    0xFE, 0xFE, 0x80, 0xC0, 0xE0, 0x78, 0x1C, 0x0E, 0x06, 0x02, 0xFF, 0xFF, 0x03, 0x07, 0x0E, 0x3C, 0x70, 0xE0, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, // 75
    0x00, 0x00, 0xE0, 0xFE, 0x1E, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xE0, 0xFE, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 76
    0xFE, 0xFE, 0x1E, 0xF8, 0xC0, 0x00, 0x00, 0xC0, 0x78, 0x1E, 0xFE, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0x1E, 0x1E, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 77
    0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0xFE, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 78
    0xC0, 0xF8, 0x3C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x3C, 0xF8, 0xE0, 0x1F, 0x7F, 0xF0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xF0, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 79
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 80
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0xFC, 0xF0, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0xC0, 0xF0, 0x3C, 0x0C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0x1F, 0x7F, 0xF0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, // 82
    0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x03, 0x83, 0x86, 0x86, 0x86, 0xC6, 0xE6, 0x7F, 0x3F, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 84
    0xE0, 0xF0, 0x38, 0x18, 0x08, 0xFE, 0xFE, 0x08, 0x18, 0x38, 0xF0, 0xE0, 0x07, 0x1F, 0x38, 0x30, 0x20, 0xFF, 0xFF, 0x20, 0x30, 0x38, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x02, 0x06, 0x1C, 0x78, 0xE0, 0x80, 0x80, 0xE0, 0x78, 0x1C, 0x06, 0x02, 0x00, 0x80, 0xE0, 0x78, 0x1C, 0x07, 0x07, 0x1C, 0x78, 0xE0, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 86
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 87
    0xFE, 0xFE, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 88
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 89
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 90
    0x06, 0x06, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3C, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 91
    0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3C, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 92
    0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC3, 0xFF, 0x3C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 93
    0x0C, 0x0C, 0x06, 0x86, 0x86, 0x86, 0x86, 0x8E, 0xFC, 0xF0, 0xC0, 0xC0, 0x80, 0x81, 0x81, 0x81, 0x81, 0xC1, 0xFF, 0x3F, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 94
    0xFE, 0xFE, 0x00, 0xC0, 0xF0, 0x38, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x38, 0xF0, 0xC0, 0xFF, 0xFF, 0x03, 0x0F, 0x3F, 0x70, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0x70, 0x3F, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 95
    0xE0, 0xF8, 0x18, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xFC, 0x01, 0x87, 0xC6, 0x6C, 0x3C, 0x1C, 0x0C, 0x0C, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 96
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x70, 0xF8, 0x98, 0x8C, 0x8C, 0x8C, 0xCC, 0xFF, 0xFF, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x08, 0x08, // 97
    0xF0, 0xF8, 0x8C, 0x8C, 0xCC, 0xCC, 0xC6, 0xC6, 0x80, 0x00, 0x7F, 0xFF, 0xC1, 0x80, 0x80, 0x80, 0x80, 0xC1, 0xFF, 0x3E, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 98
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0x8C, 0x8C, 0x8C, 0x8C, 0xDD, 0xF7, 0x63, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, // 99
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x80, 0xE0, 0xFE, 0x9F, 0x81, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 101
    0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x7E, 0xFF, 0xCD, 0xCC, 0x8C, 0x8C, 0x8C, 0x8D, 0x8F, 0xCF, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 102
    0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x00, 0x80, 0xC1, 0xE3, 0x77, 0x3E, 0xFF, 0xFF, 0x3E, 0x77, 0xE3, 0xC1, 0x80, 0x00, 0x08, 0x88, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, // 103
    0x80, 0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x61, 0xC0, 0x80, 0x80, 0x8C, 0x8C, 0xDE, 0xFB, 0x31, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 104
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 105
    0xC0, 0xC0, 0x0C, 0x18, 0x10, 0x18, 0x8C, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 106
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0x00, 0xFF, 0xFF, 0x0C, 0x1E, 0x3B, 0xE1, 0xC0, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, // 107
    0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 108
    0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xFF, 0xFF, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x18, 0x0C, 0x06, 0x03, 0x01, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 109
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 110
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x3E, 0xFF, 0xC1, 0x80, 0x80, 0x80, 0x80, 0xC1, 0xFF, 0x3E, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 111
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 112
    0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0x81, 0x80, 0x80, 0x80, 0x80, 0xC1, 0xFF, 0x3E, 0xF8, 0xF8, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 113
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3E, 0xFF, 0xC1, 0x81, 0x80, 0x80, 0x80, 0x80, 0xC1, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 114
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 115
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x07, 0x3F, 0xF8, 0xE0, 0xF8, 0x1F, 0x07, 0x00, 0x00, 0xC0, 0xE0, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, // 116
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0xF8, 0xF8, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x7F, 0xFF, 0xC1, 0x80, 0x81, 0xC1, 0xFF, 0xFF, 0xC1, 0x81, 0x80, 0xC1, 0xFF, 0x7F, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x78, 0x78, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, // 117
    0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x80, 0xE3, 0x7F, 0x1C, 0x7F, 0xE3, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 118
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 119
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, // 120
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // 121
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, // 122
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0xD8, 0x70, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, // 123
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0xD8, 0x70, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x08, 0x08, // 124
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0xD8, 0x70, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, // 125
    0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xC1, 0x80, 0x80, 0x8C, 0x8C, 0x8C, 0xCD, 0xFF, 0x7F, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, // 126
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x0C, 0x0C, 0x3E, 0xFF, 0xC1, 0x80, 0x80, 0x80, 0xE3, 0x7F, 0x1C, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 127
	0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x07, 0x8F, 0xD9, 0x78, 0x38, 0x18, 0x18, 0xFF, 0xFF, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08 // 128
};
 
 
 
 
#endif







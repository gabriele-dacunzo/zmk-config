/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// PET IDLE

#ifndef LV_ATTRIBUTE_IMG_PET_IDLE_1
#define LV_ATTRIBUTE_IMG_PET_IDLE_1
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_PET_IDLE_1 uint8_t
    pet_idle_1_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

    0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xa2, 0x80, 0x00, 0x01, 0x5c, 0x80, 0x00, 0x01, 0x01, 0x80, 
	0x00, 0x01, 0x00, 0x80, 0x00, 0x02, 0x11, 0x40, 0x00, 0x02, 0x00, 0x40, 0x00, 0x02, 0x01, 0x40, 
	0x00, 0x04, 0x00, 0x40, 0x00, 0x04, 0x07, 0x40, 0x00, 0x08, 0x02, 0x80, 0x00, 0xd0, 0x00, 0x80, 
	0x01, 0x20, 0x00, 0x80, 0x02, 0x40, 0x00, 0x80, 0x02, 0x40, 0x00, 0x80, 0x02, 0x00, 0x01, 0x00, 
	0x02, 0x00, 0x07, 0x00, 0x01, 0x00, 0x8d, 0x00, 0x00, 0xc0, 0xcd, 0x00, 0x00, 0x41, 0xcd, 0x00,
};

const lv_img_dsc_t pet_idle_1 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_idle_1_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_IDLE_2
#define LV_ATTRIBUTE_IMG_PET_IDLE_2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_PET_IDLE_2 uint8_t
    pet_idle_2_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xa2, 0x80, 0x00, 0x01, 0x5c, 0x80, 0x00, 0x01, 0x01, 0x80, 
	0x00, 0x01, 0x00, 0x80, 0x00, 0x02, 0x11, 0x40, 0x00, 0x02, 0x00, 0x40, 0x00, 0x02, 0x01, 0x40, 
	0x00, 0x04, 0x00, 0x40, 0x00, 0x04, 0x07, 0x40, 0x00, 0x08, 0x02, 0x80, 0x01, 0x90, 0x02, 0x80, 
	0x02, 0xa0, 0x00, 0x80, 0x04, 0x40, 0x00, 0x80, 0x04, 0x40, 0x00, 0x80, 0x06, 0x00, 0x01, 0x00, 
	0x02, 0x00, 0x07, 0x00, 0x01, 0x00, 0x8d, 0x00, 0x00, 0xc0, 0xcd, 0x00, 0x00, 0x41, 0xcd, 0x00,
};

const lv_img_dsc_t pet_idle_2 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_idle_2_data,
};


// PET SLOW TYPING

#ifndef LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_1
#define LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_1
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_slow_typing_1_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0f, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x1f, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3f, 0xfc, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xbe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x07, 0xfc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0f, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3c, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x78, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x37, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x77, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x9c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xe3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t pet_slow_typing_1 = {
    .header.always_zero = 0,
    .header.w = 64,
    .header.h = 64,
    .data_size = 520,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_slow_typing_1_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_2
#define LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_2
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_slow_typing_2_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xd0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x6c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0f, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x7f, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf3, 0xff, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x7f, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x0f, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x78, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t pet_slow_typing_2 = {
    .header.always_zero = 0,
    .header.w = 64,
    .header.h = 64,
    .data_size = 520,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_slow_typing_2_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_3
#define LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_3
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_slow_typing_3_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x07, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x3f, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3f, 0xfc, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xfc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x07, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3c, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x78, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x17, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x9c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x3e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xe3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t pet_slow_typing_3 = {
    .header.always_zero = 0,
    .header.w = 64,
    .header.h = 64,
    .data_size = 520,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_slow_typing_3_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_4
#define LV_ATTRIBUTE_IMG_PET_SLOW_TYPING_4
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_slow_typing_4_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xd0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x6c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0f, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x7f, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf3, 0xff, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x7f, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x0f, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x78, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t pet_slow_typing_4 = {
    .header.always_zero = 0,
    .header.w = 64,
    .header.h = 64,
    .data_size = 520,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_slow_typing_4_data,
};


// PET FAST TYPING

#ifndef LV_ATTRIBUTE_IMG_PET_FAST_TYPING_1
#define LV_ATTRIBUTE_IMG_PET_FAST_TYPING_1
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_fast_typing_1_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x40, 0x03, 0x80, 0x12, 0xa0, 
	0x04, 0x40, 0x19, 0x90, 0x08, 0x40, 0x10, 0x10, 0x08, 0x80, 0x60, 0x08, 0x08, 0xff, 0x81, 0x14, 
	0x08, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x14, 0x03, 0x80, 0x00, 0x04, 0x00, 0x80, 0x00, 0xf4, 
	0x00, 0x80, 0x00, 0x48, 0x01, 0x80, 0x00, 0x30, 0x02, 0x80, 0x00, 0xc0, 0x03, 0x84, 0x01, 0x80, 
	0x02, 0x0b, 0x02, 0x40, 0x04, 0x1c, 0xc7, 0x20, 0x05, 0xe0, 0x24, 0xe0, 0x06, 0x00, 0x12, 0x00,
};

const lv_img_dsc_t pet_fast_typing_1 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_fast_typing_1_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_FAST_TYPING_2
#define LV_ATTRIBUTE_IMG_PET_FAST_TYPING_2
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_fast_typing_2_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x80, 
	0x0e, 0x00, 0x25, 0x40, 0x12, 0x00, 0x33, 0x20, 0x12, 0x00, 0x20, 0x10, 0x12, 0x01, 0xc0, 0x08, 
	0x11, 0xfe, 0x01, 0x14, 0x10, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x14, 0x04, 0x80, 0x00, 0x04, 
	0x03, 0x80, 0x00, 0xf4, 0x00, 0x80, 0x00, 0x48, 0x00, 0x80, 0x00, 0x30, 0x00, 0x80, 0x00, 0x40, 
	0x00, 0x41, 0x00, 0x80, 0x00, 0x21, 0xc1, 0x00, 0x00, 0x11, 0x47, 0x00, 0x00, 0x12, 0x4d, 0x00,
};

const lv_img_dsc_t pet_fast_typing_2 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_fast_typing_2_data,
};


// PET SHIFT

#ifndef LV_ATTRIBUTE_IMG_PET_SHIFT_1
#define LV_ATTRIBUTE_IMG_PET_SHIFT_1
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_shift_1_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x00, 0x00, 0x95, 0x00, 
	0x1c, 0x00, 0xcc, 0x80, 0x24, 0x00, 0x80, 0x80, 0x48, 0x01, 0x00, 0x40, 0x48, 0x06, 0x08, 0xa0, 
	0x47, 0xf8, 0x00, 0x20, 0x40, 0x00, 0x00, 0xa0, 0x20, 0x00, 0x00, 0x20, 0x12, 0x00, 0x07, 0xa0, 
	0x0e, 0x00, 0x00, 0x40, 0x02, 0x00, 0x01, 0x80, 0x02, 0x00, 0x06, 0x00, 0x02, 0x00, 0x0c, 0x00, 
	0x01, 0x04, 0x09, 0x00, 0x00, 0x87, 0x1c, 0x80, 0x00, 0x44, 0x93, 0x80, 0x00, 0x48, 0x48, 0x00,
};

const lv_img_dsc_t pet_shift_1 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_shift_1_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_SHIFT_2
#define LV_ATTRIBUTE_IMG_PET_SHIFT_2
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_shift_2_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x4a, 0x80, 
	0x38, 0x00, 0x26, 0x40, 0x48, 0x00, 0x40, 0x40, 0x48, 0x01, 0x80, 0x20, 0x48, 0x06, 0x04, 0x50, 
	0x47, 0xf8, 0x00, 0x12, 0x40, 0x00, 0x00, 0x54, 0x20, 0x00, 0x00, 0x10, 0x12, 0x00, 0x01, 0xd6, 
	0x0e, 0x00, 0x00, 0x21, 0x02, 0x00, 0x00, 0xc8, 0x02, 0x00, 0x03, 0x04, 0x02, 0x00, 0x06, 0x00, 
	0x01, 0x04, 0x09, 0x00, 0x00, 0x87, 0x1c, 0x80, 0x00, 0x44, 0x93, 0x80, 0x00, 0x48, 0x48, 0x00,
};

const lv_img_dsc_t pet_shift_2 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_shift_2_data,
};


// PET CTRL

#ifndef LV_ATTRIBUTE_IMG_PET_CTRL_1
#define LV_ATTRIBUTE_IMG_PET_CTRL_1
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_ctrl_1_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x38, 0x80, 0x02, 0x10, 0x25, 0x40, 
	0x04, 0x08, 0x33, 0x20, 0x08, 0xfe, 0x20, 0x20, 0x09, 0x01, 0xc0, 0x10, 0x08, 0x00, 0x02, 0x28, 
	0x0a, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0xe8, 
	0x02, 0x1c, 0x00, 0x10, 0x02, 0x17, 0x00, 0x60, 0x01, 0x35, 0x01, 0x80, 0x01, 0x34, 0x9a, 0x00,
};

const lv_img_dsc_t pet_ctrl_1 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_ctrl_1_data,
};

#ifndef LV_ATTRIBUTE_IMG_PET_CTRL_2
#define LV_ATTRIBUTE_IMG_PET_CTRL_2
#endif

const LV_ATTRIBUTE_LARGE_CONST uint8_t pet_ctrl_2_data[] = {
    0xfc, 0xfe, 0xfc, 0xff, /*Color of index 1*/
    0x04, 0x02, 0x04, 0xff, /*Color of index 0*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x80, 0x01, 0xc0, 0x25, 0x40, 0x02, 0x20, 0x33, 0x20, 
	0x04, 0x10, 0x20, 0x20, 0x08, 0xfe, 0x40, 0x10, 0x09, 0x01, 0x82, 0x28, 0x08, 0x00, 0x00, 0x08, 
	0x0a, 0x00, 0x00, 0x28, 0x0a, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0x10, 
	0x02, 0x18, 0x00, 0x60, 0x02, 0x26, 0x01, 0x80, 0x02, 0x53, 0x03, 0x00, 0x02, 0x4a, 0xa4, 0x00,
};

const lv_img_dsc_t pet_ctrl_2 = {
    .header.always_zero = 0,
    .header.w = 32,
    .header.h = 20,
    .data_size = 88,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = pet_ctrl_2_data,
};
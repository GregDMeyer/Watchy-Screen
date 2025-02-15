#include "icons.h"

#include "rle.h"

const uint8_t bitmap_battery[] = {
    255, 0,  255, 0,  255, 0,  43,  16, 80,  16, 80, 16, 80, 16, 80, 16, 80, 16,
    80,  16, 80,  16, 71,  34, 61,  36, 59,  38, 57, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 56, 40,
    56,  40, 56,  40, 56,  40, 56,  40, 56,  40, 56, 40, 56, 40, 56, 40, 57, 38,
    59,  36, 61,  34, 255, 0,  255, 0,  255, 0,  34};
const rle rle_battery = {96, 96, bitmap_battery};

const uint8_t bitmap_bluetooth[] = {
    255, 0,  255, 0,  255, 0,   47, 4,   92, 5,   91, 6,  90, 7,  89, 8,  88,
    9,   87, 10,  86, 11,  85,  12, 84,  13, 83,  14, 82, 15, 62, 1,  18, 16,
    60,  3,  17,  17, 58,  5,   16, 18,  56, 7,   15, 19, 54, 9,  14, 8,  1,
    11,  52, 11,  13, 8,   2,   11, 52,  11, 12,  8,  3,  11, 52, 11, 11, 8,
    4,   11, 52,  11, 10,  8,   5,  11,  52, 11,  9,  8,  6,  11, 52, 11, 8,
    8,   7,  11,  52, 11,  7,   8,  7,   11, 53,  11, 6,  8,  6,  11, 55, 11,
    5,   8,  5,   11, 57,  11,  4,  8,   4,  11,  59, 11, 3,  8,  3,  11, 61,
    11,  2,  8,   2,  11,  63,  11, 1,   8,  1,   11, 65, 30, 67, 28, 69, 26,
    71,  24, 73,  22, 75,  20,  77, 18,  79, 16,  81, 14, 83, 12, 84, 12, 83,
    14,  81, 16,  79, 18,  77,  20, 75,  22, 73,  24, 71, 26, 69, 28, 67, 30,
    65,  11, 1,   8,  1,   11,  63, 11,  2,  8,   2,  11, 61, 11, 3,  8,  3,
    11,  59, 11,  4,  8,   4,   11, 57,  11, 5,   8,  5,  11, 55, 11, 6,  8,
    6,   11, 53,  11, 7,   8,   7,  11,  51, 11,  8,  8,  7,  11, 50, 11, 9,
    8,   6,  11,  50, 11,  10,  8,  5,   11, 50,  11, 11, 8,  4,  11, 50, 11,
    12,  8,  3,   11, 50,  11,  13, 8,   2,  11,  52, 9,  14, 8,  1,  11, 54,
    7,   15, 19,  56, 5,   16,  18, 58,  3,  17,  17, 60, 1,  18, 16, 80, 15,
    81,  14, 82,  13, 83,  12,  84, 11,  85, 10,  86, 9,  87, 8,  88, 7,  89,
    6,   90, 5,   91, 4,   255, 0,  255, 0,  255, 0,  51};
const rle rle_bluetooth = {96, 96, bitmap_bluetooth};

const uint8_t bitmap_orientation[] = {
    255, 0,  173, 8,  88, 8,  88, 8,  88,  8,  88, 8,  88, 8,  88, 8,  88, 8,
    86,  12, 80,  20, 73, 26, 68, 30, 64,  34, 60, 38, 56, 42, 53, 44, 51, 18,
    10,  18, 49,  15, 18, 15, 47, 13, 24,  13, 45, 12, 28, 12, 43, 12, 30, 12,
    41,  11, 34,  11, 39, 11, 36, 11, 37,  11, 38, 11, 36, 10, 40, 10, 35, 10,
    42,  10, 34,  9,  44, 9,  33, 9,  46,  9,  32, 9,  19, 8,  19, 9,  31, 9,
    17,  14, 17,  9,  30, 8,  16, 18, 16,  8,  29, 9,  15, 20, 15, 9,  28, 8,
    15,  22, 15,  8,  28, 8,  14, 24, 14,  8,  27, 9,  13, 26, 13, 9,  26, 8,
    13,  28, 13,  8,  26, 8,  13, 12, 4,   12, 13, 8,  26, 8,  12, 11, 8,  11,
    12,  8,  25,  9,  12, 9,  12, 9,  12,  9,  24, 8,  13, 9,  12, 9,  13, 8,
    16,  16, 12,  9,  14, 9,  12, 16, 8,   16, 12, 9,  14, 9,  12, 16, 8,  16,
    12,  8,  16,  8,  12, 16, 8,  16, 12,  8,  16, 8,  12, 16, 8,  16, 12, 8,
    16,  8,  12,  16, 8,  16, 12, 8,  16,  8,  12, 16, 8,  16, 12, 9,  14, 9,
    12,  16, 8,   16, 12, 9,  14, 9,  12,  16, 16, 8,  13, 9,  12, 9,  13, 8,
    24,  9,  12,  9,  12, 9,  12, 9,  25,  8,  12, 11, 8,  11, 12, 8,  26, 8,
    13,  12, 4,   12, 13, 8,  26, 8,  13,  28, 13, 8,  26, 9,  13, 26, 13, 9,
    27,  8,  14,  24, 14, 8,  28, 8,  15,  22, 15, 8,  28, 9,  15, 20, 15, 9,
    29,  8,  16,  18, 16, 8,  30, 9,  17,  14, 17, 9,  31, 9,  19, 8,  19, 9,
    32,  9,  46,  9,  33, 9,  44, 9,  34,  10, 42, 10, 35, 10, 40, 10, 36, 11,
    38,  11, 37,  11, 36, 11, 39, 11, 34,  11, 41, 12, 30, 12, 43, 12, 28, 12,
    45,  13, 24,  13, 47, 15, 18, 15, 49,  18, 10, 18, 51, 44, 53, 42, 56, 38,
    60,  34, 64,  30, 68, 26, 73, 20, 80,  12, 86, 8,  88, 8,  88, 8,  88, 8,
    88,  8,  88,  8,  88, 8,  88, 8,  255, 0,  173};
const rle rle_orientation = {96, 96, bitmap_orientation};

const uint8_t bitmap_settings[] = {
    255, 0,  255, 0,  255, 0,  42, 18, 77, 20, 76, 20, 76, 20, 76,  20, 75,  22,
    74,  22, 74,  22, 74,  8,  6,  8,  74, 8,  6,  8,  74, 8,  6,   8,  74,  8,
    6,   8,  55,  3,  15,  9,  6,  9,  15, 3,  35, 6,  11, 10, 7,   11, 11,  6,
    34,  9,  6,   12, 8,   12, 6,  9,  33, 12, 3,  13, 8,  13, 3,   12, 31,  29,
    8,   29, 30,  29, 8,   29, 29, 29, 10, 29, 28, 26, 16, 26, 27,  25, 20,  25,
    25,  24, 24,  24, 24,  9,  3,  11, 26, 11, 3,  9,  23, 10, 5,   7,  30,  7,
    5,   10, 22,  9,  9,   3,  12, 8,  12, 3,  9,  9,  21, 10, 21,  14, 21,  10,
    20,  9,  20,  18, 20,  9,  19, 11, 18, 20, 18, 11, 18, 13, 15,  22, 15,  13,
    19,  13, 13,  24, 13,  13, 21, 13, 11, 26, 11, 13, 23, 14, 8,   28, 8,   14,
    26,  13, 7,   11, 6,   11, 7,  13, 29, 12, 6,  10, 10, 10, 6,   12, 31,  11,
    6,   9,  12,  9,  6,   11, 34, 9,  6,  8,  14, 8,  7,  8,  36,  8,  6,   9,
    14,  9,  6,   8,  36,  8,  6,  8,  16, 8,  6,  8,  36, 8,  6,   8,  16,  8,
    6,   8,  36,  8,  6,   8,  16, 8,  6,  8,  36, 8,  6,  8,  16,  8,  6,   8,
    36,  8,  6,   8,  16,  8,  6,  8,  36, 8,  6,  8,  16, 8,  6,   8,  36,  8,
    6,   9,  14,  9,  6,   8,  36, 8,  7,  8,  14, 8,  7,  8,  34,  11, 6,   9,
    12,  9,  6,   11, 31,  12, 6,  10, 10, 10, 6,  12, 29, 13, 7,   11, 6,   11,
    7,   13, 26,  14, 8,   28, 8,  14, 23, 13, 11, 26, 11, 13, 21,  13, 13,  24,
    13,  13, 19,  13, 15,  22, 15, 13, 18, 12, 17, 20, 18, 11, 19,  9,  20,  18,
    20,  9,  20,  9,  22,  14, 22, 9,  21, 9,  9,  3,  12, 8,  12,  3,  9,   9,
    22,  10, 5,   7,  30,  7,  5,  10, 23, 9,  3,  11, 26, 11, 3,   9,  24,  24,
    24,  24, 25,  25, 20,  25, 27, 26, 16, 26, 28, 29, 10, 29, 29,  29, 8,   29,
    30,  29, 8,   29, 31,  12, 3,  13, 8,  13, 3,  12, 33, 9,  6,   12, 8,   12,
    6,   9,  34,  6,  11,  11, 7,  10, 11, 6,  35, 3,  15, 9,  6,   9,  15,  3,
    55,  8,  6,   8,  74,  8,  6,  8,  74, 8,  6,  8,  74, 8,  6,   8,  74,  22,
    74,  22, 74,  22, 75,  20, 76, 20, 76, 20, 76, 20, 77, 18, 255, 0,  255, 0,
    255, 0,  42};
const rle rle_settings = {96, 96, bitmap_settings};

const uint8_t bitmap_steps[] = {
    255, 0,  255, 0,  117, 5,  89, 9,  86, 12, 83, 13, 83, 14, 81,  15, 81,
    16,  80, 16,  80, 16,  80, 16, 80, 16, 81, 14, 82, 14, 83, 12,  85, 10,
    88,  6,  255, 0,  21,  5,  88, 10, 84, 13, 81, 16, 77, 20, 74,  23, 70,
    26,  68, 29,  65, 32,  62, 34, 62, 35, 61, 35, 61, 13, 2,  21,  60, 10,
    5,   22, 59,  8,  7,   23, 58, 8,  6,  25, 57, 8,  6,  26, 56,  8,  6,
    28,  54, 8,   6,  30,  52, 8,  6,  16, 1,  16, 49, 8,  5,  16,  3,  20,
    44,  8,  5,   16, 5,   18, 44, 8,  5,  16, 6,  17, 44, 8,  5,   16, 7,
    16,  44, 8,   5,  16,  9,  14, 44, 8,  4,  16, 12, 12, 44, 8,   4,  16,
    15,  9,  44,  8,  4,   16, 18, 6,  56, 16, 80, 16, 79, 17, 79,  18, 78,
    19,  77, 20,  76, 21,  74, 23, 73, 24, 72, 9,  2,  14, 71, 9,   3,  14,
    70,  9,  4,   13, 69,  10, 5,  12, 69, 9,  7,  11, 69, 9,  8,   10, 69,
    9,   9,  9,   69, 9,   10, 8,  68, 9,  11, 8,  68, 9,  11, 8,   68, 9,
    11,  8,  68,  9,  11,  8,  68, 9,  11, 8,  67, 9,  12, 8,  67,  9,  12,
    8,   67, 9,   12, 8,   67, 9,  12, 8,  67, 8,  13, 8,  66, 9,   13, 8,
    66,  9,  13,  8,  66,  9,  13, 8,  66, 8,  14, 8,  66, 8,  14,  8,  65,
    9,   14, 8,   65, 9,   14, 8,  65, 9,  14, 8,  65, 8,  15, 8,   65, 8,
    15,  8,  64,  9,  15,  8,  64, 9,  15, 8,  64, 8,  16, 8,  255, 0,  165};
const rle rle_steps = {96, 96, bitmap_steps};

const uint8_t bitmap_wifi[] = {
    255, 0,  255, 0,  255, 0,  255, 0,  255, 0,  255, 0,  237, 18, 73,  28,
    64,  36, 57,  42, 51,  48, 46,  52, 42,  56, 38,  60, 34,  64, 31,  66,
    28,  70, 25,  30, 12,  30, 22,  26, 24,  26, 19,  24, 30,  24, 17,  22,
    36,  22, 15,  20, 42,  20, 13,  19, 46,  19, 11,  18, 50,  18, 10,  17,
    52,  17, 11,  14, 56,  14, 13,  12, 58,  12, 15,  9,  62,  9,  17,  7,
    31,  2,  31,  7,  19,  5,  24,  18, 24,  5,  21,  3,  21,  26, 21,  3,
    23,  1,  20,  30, 20,  1,  43,  34, 60,  38, 56,  42, 52,  46, 49,  48,
    47,  50, 45,  52, 43,  54, 42,  21, 12,  21, 43,  16, 20,  16, 45,  13,
    24,  13, 47,  10, 28,  10, 49,  7,  32,  7,  51,  5,  34,  5,  53,  3,
    36,  3,  55,  1,  38,  1,  255, 0,  105, 8,  85,  14, 80,  18, 77,  20,
    75,  22, 74,  22, 75,  20, 77,  18, 79,  16, 81,  14, 83,  12, 85,  10,
    87,  8,  89,  6,  91,  4,  93,  2,  255, 0,  255, 0,  255, 0,  255, 0,
    255, 0,  255, 0,  149};
const rle rle_wifi = {96, 96, bitmap_wifi};

// 'cloud', 96x96px
// this is why we compress bitmaps, it's here just to demo ImageScreen
// 1152 bytes
const uint8_t cloud [] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff,
	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
	0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x3f,
	0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff,
	0xc0, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc,
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00,
	0x1f, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00,
	0x00, 0x3f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf0,
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x0f, 0xf8, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00,
	0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x07, 0xff, 0xc0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0xff, 0xfc, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00,
	0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x3f, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0xff, 0xff, 0xe0, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0,
	0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1f, 0xfc, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x3f, 0xe0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xfe, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
	0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x0f, 0xfe, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7f, 0xf8, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0,
	0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
	0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 195 bytes
const uint8_t bitmap_text[] = {
    255, 0,   255, 0,   255, 0,   104, 62,  8,  66, 5,  68, 3,  70, 2,  70, 1,
    224, 56,  16,  56,  16,  56,  16,  56,  16, 56, 16, 56, 16, 56, 16, 56, 16,
    8,   40,  8,   16,  8,   40,  8,   16,  8,  40, 8,  16, 8,  40, 8,  16, 8,
    40,  8,   16,  8,   40,  8,   16,  8,   40, 8,  16, 8,  40, 8,  16, 56, 16,
    56,  16,  56,  16,  56,  16,  56,  16,  56, 16, 56, 16, 56, 16, 8,  40, 8,
    16,  8,   40,  8,   16,  8,   40,  8,   16, 8,  40, 8,  16, 8,  40, 8,  16,
    8,   40,  8,   16,  8,   40,  8,   16,  8,  40, 8,  16, 56, 16, 56, 16, 56,
    16,  56,  16,  56,  16,  56,  16,  56,  16, 56, 16, 8,  28, 20, 16, 8,  28,
    20,  16,  8,   28,  20,  16,  8,   28,  20, 16, 8,  28, 20, 16, 8,  28, 20,
    16,  8,   28,  20,  16,  8,   28,  20,  16, 56, 16, 56, 16, 56, 16, 56, 16,
    56,  16,  56,  16,  56,  16,  56,  224, 1,  70, 2,  70, 3,  68, 5,  66, 8,
    62,  255, 0,   255, 0,   255, 0,   104};
const rle rle_text = {72, 96, bitmap_text};

const uint8_t bitmap_tomato[] = {
255,0,255,0,255,0,255,0,255,0,102,1,18,1,77,1,16,3,76,1,15,5,75,2,13,5,77,2,11,5,78,3,10,4,71,12,9,4,7,15,45,19,5,4,4,22,40,24,2,32,36,62,32,15,1,30,7,13,28,11,14,18,17,9,26,9,19,14,21,8,24,8,20,26,12,7,22,7,20,26,15,7,20,7,20,23,20,7,18,7,20,4,7,8,26,6,17,7,20,4,9,10,24,6,16,6,20,3,14,9,23,5,15,6,7,4,10,2,19,6,23,5,13,6,7,6,9,2,23,3,22,5,13,5,7,7,8,2,26,2,22,5,11,6,6,7,9,1,28,2,21,5,11,5,6,8,38,2,21,5,11,5,5,8,40,1,22,4,10,5,6,7,64,5,9,5,6,7,64,5,9,4,6,7,65,5,8,5,6,6,67,4,8,5,6,5,68,4,8,5,5,6,68,4,8,5,5,5,69,4,8,4,6,5,61,1,7,4,8,4,6,5,61,1,7,4,8,4,6,5,61,1,7,4,8,4,7,4,61,1,6,5,8,4,7,4,61,1,6,5,8,5,6,4,61,1,6,5,8,5,7,3,60,2,6,5,8,5,7,3,60,2,6,4,10,4,8,2,60,2,5,5,10,5,7,2,59,3,5,5,10,5,8,1,59,2,6,5,10,5,67,3,5,5,12,5,66,2,6,5,12,5,65,3,5,6,13,5,63,3,6,5,14,6,61,3,6,6,15,5,61,2,7,5,16,6,58,4,6,6,17,6,56,3,7,6,19,6,54,3,7,6,21,6,51,4,8,6,21,7,48,4,9,6,23,7,46,3,9,7,25,8,55,7,28,7,53,7,30,8,49,8,32,9,45,9,35,9,42,8,38,10,38,9,41,10,33,10,44,12,27,12,47,14,20,13,52,16,9,17,56,37,62,32,67,26,75,16,255,0,255,0,255,0,255,0,255,0,12};
const rle rle_tomato = {96, 96, bitmap_tomato};

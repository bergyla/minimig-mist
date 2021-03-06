/* boot_logo.c */

#include <stdio.h>
#include <stdlib.h>


const unsigned int logo_width  = 29;
const unsigned int logo_height = 80;

const char boot_logo[80][29] = {
  { 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03, 0xff, 0x80, 0xc0 },
  { 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x83, 0xff, 0x81, 0xc0 },
  { 0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xc1, 0xe3, 0x83, 0xc0 },
  { 0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xc1, 0xc3, 0x8f, 0x80 },
  { 0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x20, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0xc3, 0xc1, 0x9f, 0x80 },
  { 0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x20, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc3, 0xf8, 0x1f, 0x80 },
  { 0x80, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc3, 0xf8, 0x07, 0x00 },
  { 0x80, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xc3, 0xf8, 0x07, 0x00 },
  { 0xfe, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe3, 0xc7, 0x98, 0x07, 0x00 },
  { 0xfe, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc3, 0x87, 0x00, 0x0f, 0x00 },
  { 0xff, 0xf7, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc7, 0x87, 0x00, 0x0e, 0x00 },
  { 0xff, 0xf7, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc7, 0x8f, 0x0c, 0x0e, 0x00 },
  { 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xdf, 0x0f, 0x1c, 0x1e, 0x00 },
  { 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x3f, 0xfc, 0x1c, 0x00 },
  { 0xff, 0xf0, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x3f, 0xf8, 0x1c, 0x00 },
  { 0xff, 0xf0, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xe0, 0x00, 0x1f, 0x80, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xe0, 0x00, 0x1f, 0x80, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xc0, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xc0, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xc0, 0x00, 0x07, 0xff, 0x80, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0xc0, 0x00, 0x07, 0xff, 0x80, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0xff, 0x80, 0x00, 0x1f, 0xff, 0xfc, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x81, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00 },
  { 0xff, 0x80, 0x00, 0x1f, 0xff, 0xfc, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x81, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00 },
  { 0x0f, 0x80, 0x00, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80 },
  { 0x0f, 0x80, 0x00, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80 },
  { 0x40, 0xe0, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x7f, 0x00 },
  { 0x40, 0xe0, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x7f, 0x00 },
  { 0x00, 0xfc, 0x07, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xff, 0x00, 0x00, 0x0f, 0x00 },
  { 0x00, 0xfc, 0x07, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xff, 0x00, 0x00, 0x0f, 0x00 },
  { 0x00, 0x3f, 0x8f, 0xff, 0xc0, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x0f, 0x00 },
  { 0x00, 0x3f, 0x8f, 0xff, 0xc0, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x0f, 0x00 },
  { 0x00, 0x00, 0xff, 0xf8, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xf8, 0x00, 0x3e, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x0e, 0x00 },
  { 0x00, 0x00, 0xff, 0xf8, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xf8, 0x00, 0x3e, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x0e, 0x00 },
  { 0x00, 0x00, 0x03, 0xc7, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xf8, 0x00, 0x7c, 0xff, 0xc0, 0x00, 0x3f, 0xf0, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x03, 0xc7, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xf8, 0x00, 0x7c, 0xff, 0xc0, 0x00, 0x3f, 0xf0, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc7, 0xf8, 0x00, 0xf9, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc7, 0xf8, 0x00, 0xf9, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x07, 0x87, 0xfc, 0x01, 0xf1, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x07, 0x87, 0xfc, 0x01, 0xf1, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x07, 0x87, 0xfc, 0x03, 0xe1, 0xff, 0x00, 0x00, 0x7f, 0xe0, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x07, 0x87, 0xfc, 0x03, 0xe1, 0xff, 0x00, 0x00, 0x7f, 0xe0, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x83, 0xfc, 0x07, 0x83, 0xff, 0x00, 0x00, 0x7f, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x83, 0xfc, 0x07, 0x83, 0xff, 0x00, 0x00, 0x7f, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0xfe, 0x0f, 0x03, 0xff, 0x00, 0x00, 0x7f, 0xc0, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0xfe, 0x0f, 0x03, 0xff, 0x00, 0x00, 0x7f, 0xc0, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x1f, 0x87, 0xc0, 0xfc, 0x0f, 0xe0, 0x7c, 0x3f, 0x01, 0xfc, 0x00, 0x0f, 0x03, 0xfe, 0x1e, 0x03, 0xfe, 0x00, 0x00, 0xff, 0xc0, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x1f, 0x87, 0xc0, 0xfc, 0x0f, 0xe0, 0x7c, 0x3f, 0x01, 0xfc, 0x00, 0x0f, 0x03, 0xfe, 0x1e, 0x03, 0xfe, 0x00, 0x00, 0xff, 0xc0, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x07, 0xbf, 0xe3, 0xfe, 0x01, 0xe0, 0x1c, 0xff, 0xc0, 0x3c, 0x00, 0x1f, 0x01, 0xff, 0x3c, 0x07, 0xfe, 0x00, 0x00, 0xff, 0xc0, 0x07, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xc0 },
  { 0x00, 0x07, 0xbf, 0xe3, 0xfe, 0x01, 0xe0, 0x1c, 0xff, 0xc0, 0x3c, 0x00, 0x1f, 0x01, 0xff, 0x3c, 0x07, 0xfe, 0x00, 0x00, 0xff, 0xc0, 0x07, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xc0 },
  { 0x00, 0x07, 0xe0, 0xfc, 0x0e, 0x03, 0xc0, 0x3f, 0x01, 0xc0, 0x38, 0x00, 0x1e, 0x01, 0xff, 0x78, 0x07, 0xfe, 0x00, 0x00, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xfc, 0x00 },
  { 0x00, 0x07, 0xe0, 0xfc, 0x0e, 0x03, 0xc0, 0x3f, 0x01, 0xc0, 0x38, 0x00, 0x1e, 0x01, 0xff, 0x78, 0x07, 0xfe, 0x00, 0x00, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xfc, 0x00 },
  { 0x00, 0x07, 0x80, 0xf0, 0x1e, 0x03, 0xc0, 0x3c, 0x01, 0xc0, 0x78, 0x00, 0x1e, 0x00, 0xff, 0xf0, 0x07, 0xfc, 0x00, 0x01, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x07, 0x80, 0xf0, 0x1e, 0x03, 0xc0, 0x3c, 0x01, 0xc0, 0x78, 0x00, 0x1e, 0x00, 0xff, 0xf0, 0x07, 0xfc, 0x00, 0x01, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x0f, 0x00, 0xe0, 0x1e, 0x03, 0xc0, 0x38, 0x03, 0xc0, 0x78, 0x00, 0x3c, 0x00, 0xff, 0xe0, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x0f, 0x00, 0xe0, 0x1e, 0x03, 0xc0, 0x38, 0x03, 0xc0, 0x78, 0x00, 0x3c, 0x00, 0xff, 0xe0, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x0e, 0x01, 0xe0, 0x1c, 0x07, 0x80, 0x78, 0x03, 0x80, 0xf0, 0x00, 0x3c, 0x00, 0x7f, 0xc0, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0x00, 0x03, 0xff, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x0e, 0x01, 0xe0, 0x1c, 0x07, 0x80, 0x78, 0x03, 0x80, 0xf0, 0x00, 0x3c, 0x00, 0x7f, 0xc0, 0x0f, 0xfc, 0x00, 0x01, 0xff, 0x00, 0x03, 0xff, 0x00, 0x00, 0x1f, 0xf8, 0x00 },
  { 0x00, 0x0e, 0x01, 0xe0, 0x3c, 0x07, 0x80, 0x78, 0x03, 0x80, 0xf0, 0x00, 0x3c, 0x00, 0x7f, 0x80, 0x0f, 0xf8, 0x00, 0x03, 0xff, 0x00, 0x03, 0xff, 0x00, 0x00, 0x3f, 0xf0, 0x00 },
  { 0x00, 0x0e, 0x01, 0xe0, 0x3c, 0x07, 0x80, 0x78, 0x03, 0x80, 0xf0, 0x00, 0x3c, 0x00, 0x7f, 0x80, 0x0f, 0xf8, 0x00, 0x03, 0xff, 0x00, 0x03, 0xff, 0x00, 0x00, 0x3f, 0xf0, 0x00 },
  { 0x00, 0x1e, 0x01, 0xc0, 0x3c, 0x07, 0x80, 0x70, 0x07, 0x80, 0xf0, 0x00, 0x78, 0x00, 0x7f, 0x00, 0x1f, 0xf8, 0x00, 0x03, 0xff, 0x00, 0x01, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x00 },
  { 0x00, 0x1e, 0x01, 0xc0, 0x3c, 0x07, 0x80, 0x70, 0x07, 0x80, 0xf0, 0x00, 0x78, 0x00, 0x7f, 0x00, 0x1f, 0xf8, 0x00, 0x03, 0xff, 0x00, 0x01, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x00 },
  { 0x00, 0x1e, 0x03, 0xc0, 0x38, 0x0f, 0x00, 0xf0, 0x07, 0x01, 0xe0, 0x00, 0x78, 0x00, 0x3e, 0x00, 0x1f, 0xf8, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x7f, 0xf0, 0x00 },
  { 0x00, 0x1e, 0x03, 0xc0, 0x38, 0x0f, 0x00, 0xf0, 0x07, 0x01, 0xe0, 0x00, 0x78, 0x00, 0x3e, 0x00, 0x1f, 0xf8, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x7f, 0xf0, 0x00 },
  { 0x00, 0x1c, 0x03, 0x80, 0x78, 0x0f, 0x00, 0xe0, 0x0f, 0x01, 0xe0, 0x07, 0xff, 0x00, 0x3c, 0x01, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00 },
  { 0x00, 0x1c, 0x03, 0x80, 0x78, 0x0f, 0x00, 0xe0, 0x0f, 0x01, 0xe0, 0x07, 0xff, 0x00, 0x3c, 0x01, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00 },
  { 0x00, 0x3c, 0x03, 0x80, 0x7f, 0x0f, 0xe0, 0xe0, 0x0f, 0xc1, 0xfc, 0x1f, 0xff, 0xc0, 0x38, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 0x00 },
  { 0x00, 0x3c, 0x03, 0x80, 0x7f, 0x0f, 0xe0, 0xe0, 0x0f, 0xc1, 0xfc, 0x1f, 0xff, 0xc0, 0x38, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};


int main ()
{
  FILE * fo;

  fo = fopen("test.txt", "w");

  unsigned int x,y,i;
  unsigned char c;

  for(y=0; y<logo_height; y++) {
    for(x=0; x<logo_width; x++) {
      c = boot_logo[y][x];
      for(i=0; i<8; i++) {
        if(c&0x80) fprintf(fo,"*");
        else       fprintf(fo," ");
        c <<= 1;
      }
    }
    fprintf(fo,"\n");
  }

  fclose(fo);

  exit(EXIT_SUCCESS);
}


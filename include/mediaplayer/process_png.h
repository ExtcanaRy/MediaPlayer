#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <libspng/spng.h>

struct rgb {
    unsigned char r, g, b;
};

struct start_pixel {
    int x, y;
};

// get the pixels from a png file
// please use free() to free the returned pointer after use
unsigned char *get_pixels(const char *filename, struct spng_ihdr *ihdr, bool get_ihdr);

// copy 128 pixels from image to map line by line
void set_pixels(unsigned char *image, struct map_item_saved_data *map_data,
                struct start_pixel *start_pixel, struct spng_ihdr *ihdr);

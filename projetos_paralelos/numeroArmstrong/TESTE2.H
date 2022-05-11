#ifndef RESISTOR_COLOR_H

#define RESISTOR_COLOR_H

typedef enum resistor_band_e
{

    COLOR_START,

    BLACK = COLOR_START,

    BROWN,

    RED,

    ORANGE,

    YELLOW,

    GREEN,

    BLUE,

    VIOLET,

    GREY,

    WHITE,

    COLORS_MAX

} resistor_band_t;

int color_code(resistor_band_t band);

resistor_band_t *colors();

#endif
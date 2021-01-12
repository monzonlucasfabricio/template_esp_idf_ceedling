/**************************************************************************************************
 ** (c) Copyright 2019: NAME <EMAIL>
 ** ALL RIGHTS RESERVED, DON'T USE OR PUBLISH THIS FILE WITHOUT AUTORIZATION
 *************************************************************************************************/

/** @file leds.c
 ** @brief Leds library. Just to show how to organize the files.
 **
 **| REV | YYYY.MM.DD | Autor           | Changes                                                 |
 **|-----|------------|-----------------|---------------------------------------------------------|
 **|   1 | 2021.01.12 | lucasmonzonl    | Initial version                                         |
 **
 ** @addtogroup leds
 ** @{ */

/* === Inclusiones de cabeceras ================================================================ */
#include "include/leds.h"

/* === Definicion y Macros ===================================================================== */

/* == Declaraciones de tipos de datos internos ================================================= */

/* === Definiciones de variables internas ====================================================== */

/* === Declaraciones de funciones internas ===================================================== */

/* === Definiciones de funciones internas ====================================================== */

/* === Definiciones de funciones externas ====================================================== */

ledsparams_t createLed(uint8_t pinled, modes_s mode)
{
    ledsparams_t newled = {
        .pinLed = pinled,
        .mode = mode,
    };
    return newled;
}

uint8_t ledOutput(ledsparams_t *ledsparams)
{
    ledsparams->mode = OUTPUT;
    printf("Led OUTPUT\n");
    return 1;
}
uint8_t ledInput(ledsparams_t *ledsparams)
{
    ledsparams->mode = INPUT;
    printf("Led INPUT\n");
    return 1;
}

uint8_t getMode(ledsparams_t *ledsparams)
{
    return ledsparams->mode;
}

/* === Ciere de documentacion ================================================================== */

/** @} Final de la definición del modulo para doxygen */
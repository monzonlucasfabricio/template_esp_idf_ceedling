/**************************************************************************************************
 ** (c) Copyright 2019: NAME <EMAIL>
 ** ALL RIGHTS RESERVED, DON'T USE OR PUBLISH THIS FILE WITHOUT AUTORIZATION
 *************************************************************************************************/

#ifndef LEDS_H   /*! @cond    */
#define LEDS_H   /*! @endcond */

/** @file leds.h
 ** @brief Library declaration for the leds test library.
 **
 **| REV | YYYY.MM.DD | Autor           | Changes                                                 |
 **|-----|------------|-----------------|---------------------------------------------------------|
 **|   1 | 2021.01.11 | lucasmonzonl    | Initial version                                         |
 **
 ** @addtogroup leds
 ** @{ */

/* === Inclusiones de archivos externos ======================================================== */
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* === Cabecera C++ ============================================================================ */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros ===================================================================== */
typedef enum{
    INPUT,
    OUTPUT,
}modes_s;

typedef struct{
    uint8_t pinLed;
    modes_s mode;
}ledsparams_t;

ledsparams_t createLed(uint8_t pinled, modes_s mode);
uint8_t ledInput(ledsparams_t *ledsparams);
uint8_t ledOutput(ledsparams_t *ledsparams);
uint8_t getMode(ledsparams_t *ledsparams);

/* === Declaraciones de tipos de datos ========================================================= */

/* === Declaraciones de variables externas ===================================================== */

/* === Declaraciones de funciones externas ===================================================== */

/* === Ciere de documentacion ================================================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* LEDS_H */
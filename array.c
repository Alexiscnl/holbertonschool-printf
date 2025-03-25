#include "main.h"
#include "specifieur.h"
/**
 * arr - Array of conversion specifiers
 * @arr: An array of structures that maps a conversion specifier to a function
 *
 * Description:
 * This array contains pairs of conversion specifiers and functions that handle
 * the corresponding types. It is used in the _printf function to process the specifiers.
 */
specifiers arr[] = {
    {'s', Type_s},
    {'c', Type_c},
    {'%', Type_mod},
    {'d', Type_d},
    {'i', Type_d},
    {'\0', NULL}};

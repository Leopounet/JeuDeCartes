#include "Value.h"

#include <string.h>

/**
 * @brief Cette fonction doit stocker la bonne chaîne de
 * caractères dans 'buffer' en fonction de la valeur donnée.
 * Si la valeur donnée est incorrecte, il faut stocker 'Invalid'.
 *
 * Attention: la fonction ne doit RIEN afficher, elle doit
 * seulement stocker la chaîne de caractères voulue dans 
 * 'buffer'.
 */
void get_value_name(Value value, char * buffer) {
    switch(value) {
        case ACE: strcpy(buffer, "1"); break;
        case TWO: strcpy(buffer, "2"); break;
        case THREE: strcpy(buffer, "3"); break;
        case FOUR: strcpy(buffer, "4"); break;
        case FIVE: strcpy(buffer, "5"); break;
        case SIX: strcpy(buffer, "6"); break;
        case SEVEN: strcpy(buffer, "7"); break;
        case EIGHT: strcpy(buffer, "8"); break;
        case NINE: strcpy(buffer, "9"); break;
        case TEN: strcpy(buffer, "10"); break;
        case JACK: strcpy(buffer, "J"); break;
        case QUEEN: strcpy(buffer, "Q"); break;
        case KING: strcpy(buffer, "K"); break;
        default: strcpy(buffer, "?"); break;
    }
}
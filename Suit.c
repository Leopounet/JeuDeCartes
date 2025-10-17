#include "Suit.h"

#include <string.h>

/**
 * @brief Cette fonction doit stocker la bonne chaîne de
 * caractères dans 'buffer' en fonction de la couleur de la carte.
 * Par exemple, pour si suit = HEART, alors il faut stocker "♥".
 * Pour les autres couleurs, on stocke "♠", "♦" et "♣".
 *
 * Si votre éditeur de texte ne supporte pas ces symboles,
 * vous pouvez aussi écrire la suite en toutes lettres (ex: "coeur").
 * Aussi, attention: le type 'char' tout seul ne supporte pas ces symboles,
 * ils sont uniquement utilisables dans des chaînes de caractères.
 * Si la couleur donnée est incorrecte, il faut stocker '?'.
 *
 * Attention: la fonction ne doit RIEN afficher, elle doit
 * seulement stocker la chaîne de caractères voulue dans 
 * 'buffer'.
 */
void get_suit_name(Suit suit, char * buffer) {
    switch(suit) {
        case SPADE: strcpy(buffer, "♣"); break;
        case DIAMOND: strcpy(buffer, "♦"); break;
        case CLUB: strcpy(buffer, "♠"); break;
        case HEART: strcpy(buffer, "♥"); break;
        default: strcpy(buffer, "?"); break;
    }
}
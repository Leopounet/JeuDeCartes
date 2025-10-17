#include "Card.h"
#include "Macros.h"

#include <string.h>

/**
 * @brief Cette fonction permet de stocker un texte
 * décrivant la carte donnée dans un buffer.
 * Par exemple, si la carte est le 3 de coeur, il
 * faut stocker "3♥" dans le buffer (ou "3 de coeur").
 *
 * Attention: la fonction ne doit RIEN afficher, elle doit
 * seulement stocker la chaîne de caractères voulue dans 
 * 'buffer'.
 */
void get_card_name(Card c, char * buffer) {
    char value[MAX_STR];
    char suit[MAX_STR];
    get_value_name(c.value, value);
    get_suit_name(c.suit, suit);
    strcpy(buffer, value);
    strcat(buffer, suit);
}

/**
 * @brief Cette fonction modifie la carte donnée
 * en changeant sa couleur par celle donnée.
 */
void set_suit(Card * c, Suit s) {
    c->suit = s;
}

/**
 * @brief Cette fonction modifie la carte donnée
 * en changeant sa valeur par celle donnée.
 */
void set_value(Card * c, Value v) {
    c->value = v;
}

/**
 * @brief Cette fonction définie les deux champs
 * 'suit' et 'valeur' de la carte donnée.
 */
void set_card(Card * c, Suit s, Value v) {
    set_suit(c, s);
    set_value(c, v);
}

/**
 * @brief Cette fonction renvoie la couleur de la
 * carte donnée.
 */
Suit get_suit(Card c) {
    return c.suit;
}

/**
 * @brief Cette fonction renvoie la valeur de la
 * carte donnée.
 */
Value get_value(Card c) {
    return c.value;
}

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * couleur, et '0' sinon.
 */
int same_suit(Card c_1, Card c_2) {
    return c_1.suit == c_2.suit;
}

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * valeur, et '0' sinon.
 */
int same_value(Card c_1, Card c_2) {
    return c_1.value == c_2.value;
}

/**
 * @brief Cette fonction compare deux cartes,
 * elle renvoie une valeur positive si la première carte
 * est plus forte, une valeur négative si la seconde
 * carte est plus forte et '0' si elles sont égales.
 */
int compare_cards(Card c_1, Card c_2) {
    return c_1.value - c_2.value;
}
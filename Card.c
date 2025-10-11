#include "Card.h"
#include "Macros.h"

/**
 * @brief Cette fonction initialise la carte donnée
 * avec la couleur et la valeur voulue.
 *
 * Si la couleur ou la suite est invalide, les deux
 * champs doivent recevoir une valeur invalide.
 */
void init_card(Card * c, Suit suit, Value value) {
    // votre code
}

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
    // votre code
}

/**
 * @brief Cette fonction renvoie la couleur de la
 * carte donnée.
 */
Suit get_suit(Card c) {
    // votre code
    return INVALID_SUIT;
}

/**
 * @brief Cette fonction renvoie la valeur de la
 * carte donnée.
 */
Value get_value(Card c) {
    // votre code
    return INVALID_VALUE;
}

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * couleur, et '0' sinon.
 */
int same_suit(Card c_1, Card c_2) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * valeur, et '0' sinon.
 */
int same_value(Card c_1, Card c_2) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction compare deux cartes,
 * elle renvoie une valeur positive si la première carte
 * est plus forte, une valeur négative si la seconde
 * carte est plus forte et '0' si elles sont égales.
 */
int compare_cards(Card c_1, Card c_2) {
    // votre code
    return 0;
}
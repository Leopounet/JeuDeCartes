#include "Suit.h"
#include "Value.h"

// --------------------------------------------------
// -------------- MODIFICATIONS AUTORISÉES ----------
// --------------------------------------------------

/**
 * @brief Cette structure de donnée permet de
 * représenter une carte, qui possède une couleur
 * (ou 'suit' en anglais) et une valeur (ou 'value
 * en anglais).
 */
typedef struct Card {
    // MODIFIEZ ICI UNIQUEMENT
} Card;

// --------------------------------------------------
// -------------- MODIFICATIONS INTERDITES ----------
// --------------------------------------------------

/**
 * @brief Cette fonction initialise la carte donnée
 * avec la couleur et la valeur voulue.
 *
 * Si la couleur ou la suite est invalide, les deux
 * champs doivent recevoir une valeur invalide.
 */
void init_card(Card * c, Suit suit, Value value);

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
void get_card_name(Card c, char * buffer);

/**
 * @brief Cette fonction renvoie la couleur de la
 * carte donnée.
 */
Suit get_suit(Card c);

/**
 * @brief Cette fonction renvoie la valeur de la
 * carte donnée.
 */
Value get_value(Card c);

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * couleur, et '0' sinon.
 */
int same_suit(Card c_1, Card c_2);

/**
 * @brief Cette fonction retourne '1' si les
 * deux cartes données en arguments ont la même
 * valeur, et '0' sinon.
 */
int same_value(Card c_1, Card c_2);

/**
 * @brief Cette fonction compare deux cartes,
 * elle renvoie une valeur négative si la première carte
 * est plus forte, une valeur positive si la seconde
 * carte est plus forte et '0' si elles sont égales.
 */
int compare_cards(Card c_1, Card c_2);
#include "Deck.h"
#include "Utils.h"

/**
 * @brief Cette fonction doit garantir que 
 * le jeu de cartes est vide (en particulier,
 * la fonction 'is_empty(Deck * deck)' doit
 * retourner '1' si elle est appelée juste
 * après cette fonction).
 */
void make_empty_deck(Deck * deck) {
    // votre code
}

/**
 * @brief Cette fonction retourne '1' si le jeu de
 * cartes est vide, et '0' sinon.
 */
int is_empty(Deck deck) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction retourne '1' si le jeu de
 * cartes contient le nombre maximum de cartes
 * (MAX_DECK_SIZE (52)), sinon elle retourne '0'.
 */
int is_full(Deck deck) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction renvoie le nombre de cartes
 * dans le jeu de cartes.
 */
int get_nb_cards(Deck deck) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction ajoute la carte donnée en
 * argument dans le jeu de cartes donné en 
 * argument.
 * La carte peut être ajoutée n'importe où tant qu'elle
 * n'écrase pas une carte existante.
 * 
 * Si le jeu de carte est rempli (il y a déjà MAX_DECK_SIZE (52)
 * cartes) dedans, alors la fonction ne doit pas modifier le
 * jeu de cartes, à la place il faut afficher un message d'erreur,
 * puis renvoyer '0'.
 * Si la carte a pu être ajoutée, il faut renvoyer '1'.
 */
int add_card(Deck * deck, Card c) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction retire la dernière carte
 * du jeu de cartes.
 * Par exemple, si le jeu de cartes est:
 *    [1♠, Q♠, K♥]
 * alors après la fonction, le jeu de cartes doit être:
 *    [1♠, Q♠]
 *
 * La fonction retourne la carte retirée, si le deck est vide,
 * elle retourne une carte invalide.
 */
Card remove_last_card(Deck * deck) {
    // votre code
    Card c;
    return c;
}

int is_valid_index(Deck deck, int i) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction doit retourner la carte
 * à l'index donné dans le jeu de cartes.
 * Par exemple, si le jeu de cartes est:
 *    [1♠, Q♠, K♥]
 * alors la fonction doit retourner "Q♠" si 
 * l'index donné est '1'.
 *
 * Si l'index est invalide (négatif ou supérieur au nombre
 * de cartes actuellement dans le jeu de cartes), alors
 * la fonction doit retourner une carte dont la valeur et
 * la couleur sont invalides.
 */
Card get_card_at_index(Deck deck, int index) {
    // votre code
    Card c;
    return c;
}

/**
 * @brief Cette fonction retourne la première
 * occurrence de la carte donnée en paramètre
 * dans le jeu de cartes donné en paramètre.
 * Par exemple, si le jeu de cartes est:
 *     [1♠, Q♠, K♥]
 * et la carte demandée est "K♥", la fonction
 * doit renvoyer '2'.
 * Si la carte n'est pas dans le jeu de cartes,
 * alors la fonction renvoie '-1'.
 */
int get_index_of_card(Deck deck, Card c) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction affiche le jeu de cartes
 * intégralement, je vous laisse libre de la présentation
 * visuelle.
 */
void show_deck(Deck deck) {
    // votre code
}

/**
 * @brief Cette fonction inverse les cartes aux index donnés.
 * Par exemple, si le jeu de cartes est:
 *     [1♠, Q♠, K♥]
 * et que 'i' vaut 0 et 'j' vaut 2, alors le deck doit être modifié
 * afin de devenir:
 *     [K♥, Q♠, 1♠]
 *
 * Si au moins l'un des index est invalide (trop grand ou trop
 * petit), alors la fonction doit afficher un message d'erreur
 * et renvoyer '0'.
 * Si l'inversion s'est bien passée, la fonction retourne '1'.
 */
int switch_cards(Deck * deck, int i, int j) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction mélange aléatoirement le jeu de
 * cartes donné en argument.
 * On pourra utiliser la fonction 'random_int' définie dans
 * le fichier 'Utils.h'.
 * Une stratégie pour mélanger le deck:
 *     - On génère deux nombres aléatoires 'x' et 'y' entre 
 *       '0' et le nombre de cartes dans le jeu actuellement
 *     - On échange la carte à l'index 'x' avec celle à
 *       l'index 'y'
 *     - On répète cette opération un grand nombre de fois
 *       (par exemple 1000 fois)
 *
 * Une autre stratégie:
 *     - Pour chaque carte à l'index 'x'
 *     - On génère un nombre aléatoire 'y' entre 'x'
 *       le nombre de cartes actuellement dans
 *       le jeu de cartes
 *     - On échange la carte à l'index 'x' avec celle à
 *       l'index 'y'
 */
void shuffle(Deck * deck) {
    // votre code
}
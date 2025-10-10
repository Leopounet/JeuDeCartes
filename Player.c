#include "Player.h"

/**
 * @brief Cette fonction initialise un joueur,
 * notamment elle s'assure que ses champs sont bien
 * initialisés (par exemple, si le joueur possède un champ
 * de type 'Deck', il faut s'assurer qu'il est vide).
 *
 * De plus, la fonction assigne le nom donné en paramètre
 * au joueur.
 */
void init_player(Player * p, char * name) {
    // votre code
}

/**
 * @brief Cette fonction stocke le nom du joueur dans
 * le buffer donné.
 */
void get_player_name(Player p, char * buffer) {
    // votre code
}

/**
 * @brief Cette fonction renvoie le nombre de cartes
 * totales (dans la pioche et gagnées) que le joueur
 * possède.
 */
int get_nb_cards_total(Player p) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction ajoute la carte donnée
 * dans la pioche.
 * Si la pioche est pleine, un message d'erreur doit
 * être affiché, et la fonction doit renvoyer '0' et
 * ne rien faire.
 * Si la carte peut être ajoutée, la fonction doit
 * renvoyer '1'.
 */
int add_card_to_draw(Player * p, Card c) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction ajoute la carte donnée
 * dans les cartes gagnées.
 * S'il n'y a pas la place, un message d'erreur doit
 * être affiché, et la fonction doit renvoyer '0' et
 * ne rien faire.
 * Si la carte peut être ajoutée, la fonction doit
 * renvoyer '1'.
 */
int win_card(Player * p, Card c) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction retourne '1' si le joueur
 * possède au moins une carte (soit dans la pioche,
 * soit parmi les cartes gagnées).
 * Sinon la fonction renvoie '0'.
 */
int has_at_least_one_card(Player p) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction déplace toutes les cartes gagnées
 * dans la pioche du joueur.
 * Si la pioche du joueur n'est pas vide, les cartes déjà
 * présentes dans la pioche ne sont pas écrasées,
 * les nouvelles cartes sont simplement ajoutées après.
 *
 * Si la pioche est pleine avant que toutes les cartes
 * gagnées soient ajoutées, la fonction ne doit afficher
 * un message d'erreur et renvoyer '0', sinon elle
 * renvoie '1'.
 */
int fill_draw_with_cards_won(Player * p) {
    // votre code
    return 0;
}

/**
 * @brief Cette fonction retourne la carte en haut de la
 * pioche du joueur et la retire.
 * Si sa pioche est vide, elle déplace les cartes gagnées dans 
 * la pioche et mélange la pioche.
 * Si le joueur a malgré tout une pioche vide, la fonction
 * doit renvoyer une care avec des champs invalides.
 */
Card get_and_remove_next_card(Player * p) {
    // votre code
    Card c;
    return c;
}

/**
 * @brief Cette affiche les cartes de la pioche
 * du joueur, et ensuite les cartes gagnées par le joueur.
 * De plus le nom du joueur doit être affiché.
 * Je vous laisse libre de choisir l'affichage exact pour qu'il
 * soit joli.
 */
void show_player(Player p) {
    // votre code
}
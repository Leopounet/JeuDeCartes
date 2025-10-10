#include "Deck.h"

// --------------------------------------------------
// -------------- MODIFICATIONS AUTORISÉES ----------
// --------------------------------------------------

/**
 * @brief Cette structure de données permet de 
 * représenter un joueur.
 * Le but de l'exercice va être de créer un jeu de 
 * bataille.
 * Pour rappelle, la bataille est un jeu dans lequel
 * chaque joueur joue la carte en haut de son
 * jeu de cartes.
 * Le joueur ayant joué la carte la plus forte gagne
 * toutes les cartes en jeu.
 * La plus faible est le "2" et la plus forte est
 * l'as.
 * Pour simplifier le jeu, si les deux joueurs jouent
 * une carte de même valeur, chacun reprend sa carte.
 *
 * Lorsqu'un joueur vide son jeu de cartes initial,
 * il mélange toutes les cartes qu'il a gagné et les
 * utilise comme nouveau jeu de cartes.
 *
 * Si un joueur n'a plus de cartes du tout, il a perdu.
 * 
 * Un joueur possède donc un jeu de cartes, duquel il
 * pioche, et un tas de cartes gagnées, qu'il utilisera
 * pour remplir sa pioche une fois qu'elle est vide.
 *
 * De plus, on supposera qu'un joueur possède un nom.
 */
typedef struct Player {
    // MODIFIEZ ICI UNIQUEMENT
} Player;

// --------------------------------------------------
// -------------- MODIFICATIONS INTERDITES ----------
// --------------------------------------------------

/**
 * @brief Cette fonction initialise un joueur,
 * notamment elle s'assure que ses champs sont bien
 * initialisés (par exemple, si le joueur possède un champ
 * de type 'Deck', il faut s'assurer qu'il est vide).
 *
 * De plus, la fonction assigne le nom donné en paramètre
 * au joueur.
 */
void init_player(Player * p, char * name);

/**
 * @brief Cette fonction stocke le nom du joueur dans
 * le buffer donné.
 */
void get_player_name(Player p, char * buffer);

/**
 * @brief Cette fonction renvoie le nombre de cartes
 * totales (dans la pioche et gagnées) que le joueur
 * possède.
 */
int get_nb_cards_total(Player p);

/**
 * @brief Cette fonction ajoute la carte donnée
 * dans la pioche.
 * Si la pioche est pleine, un message d'erreur doit
 * être affiché, et la fonction doit renvoyer '0' et
 * ne rien faire.
 * Si la carte peut être ajoutée, la fonction doit
 * renvoyer '1'.
 */
int add_card_to_draw(Player * p, Card c);

/**
 * @brief Cette fonction ajoute la carte donnée
 * dans les cartes gagnées.
 * S'il n'y a pas la place, un message d'erreur doit
 * être affiché, et la fonction doit renvoyer '0' et
 * ne rien faire.
 * Si la carte peut être ajoutée, la fonction doit
 * renvoyer '1'.
 */
int win_card(Player * p, Card c);

/**
 * @brief Cette fonction retourne '1' si le joueur
 * possède au moins une carte (soit dans la pioche,
 * soit parmi les cartes gagnées).
 * Sinon la fonction renvoie '0'.
 */
int has_at_least_one_card(Player p);

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
int fill_draw_with_cards_won(Player * p);

/**
 * @brief Cette fonction retourne la carte en haut de la
 * pioche du joueur et la retire.
 * Si sa pioche est vide, elle déplace les cartes gagnées dans 
 * la pioche et mélange la pioche.
 * Si le joueur a malgré tout une pioche vide, la fonction
 * doit renvoyer une care avec des champs invalides.
 */
Card get_and_remove_next_card(Player * p);

/**
 * @brief Cette affiche les cartes de la pioche
 * du joueur, et ensuite les cartes gagnées par le joueur.
 * De plus le nom du joueur doit être affiché.
 * Je vous laisse libre de choisir l'affichage exact pour qu'il
 * soit joli.
 */
void show_player(Player p);
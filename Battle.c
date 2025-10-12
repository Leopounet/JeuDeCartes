#include "Battle.h"

/**
 * @brief Cette fonction s'assure que les joueurs qui
 * participent à la bataille sont bien initialisés.
 *
 * Pour ce faire, il faut en particulier s'assurer
 * que chaque joueur ne possède pas de cartes.
 *
 * De plus, les joueurs reçoivent les noms donnés en
 * paramètre.
 */
void init_battle(Battle * battle, char * player_1, char * player_2) {
    // votre code
}

/**
 * @brief Cette fonction prend en argument un jeu de 
 * cartes (plus ou moins complet) et le partage entre
 * les deux joueurs équitablement.
 *
 * Cette fonction mélange le jeu de cartes.
 *
 * Si le jeu de cartes contient un nombre impair de 
 * cartes, alors la dernière carte du paquet n'est pas
 * distribuée.
 */
void deal_cards(Battle * battle, Deck * deck) {
    // votre code
}

/**
 * @brief Cette fonction simule une partie de bataille 
 * entre les deux joueurs.
 *
 * Pour ce faire, on voudra:
 *     - Une boucle qui s'arrête lorsque l'un des deux 
 *       joueurs n'a plus de cartes
 *     - Un affichage qui montre le gagnant (son nom)
 *     - Dans la boucle, les joueurs piochent une carte chacun
 *     - Le joueur ayant joué la meilleure carte gagne les deux
 *     - Si les deux cartes ont la même valeur, les deux joueurs
 *       perdent leurs cartes
 *     - A chaque itération, il faut afficher qui joue quelle carte
 *       et qui remporte la manche
 */
void play(Battle * battle) {
    // votre code
}
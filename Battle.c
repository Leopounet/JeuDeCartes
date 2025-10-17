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
 *     - Si les deux cartes ont la même valeur, les deux joueurs perdent
 *       la carte qu'ils ont eux-mêmes joués
 *     - A chaque itération, il faut afficher qui joue quelle carte
 *       et qui remporte la manche
 *
 * --------------------------------------------------------------------------------
 * ------------------------ AMELIORATIONS POSSIBLES -------------------------------
 * --------------------------------------------------------------------------------
 *
 * On peut améliorer le jeu de la bataille, si vous avez réussi à coder la
 * fonction de base:
 *     - Implémenter la bataille.
 *       Pour rappel, si deux cartes sont égales en valeur, alors il y a
 *       'bataille'.
 *       Les cartes sont mis de côté, et on ajoute à ces cartes mises de côtés
 *       Une carte supplémentaire de chaque joueur.
 *       Puis, chaque joueur joue une nouvelle carte, s'il y a un gagnant, il 
 *       remporte toutes les cartes de côtés et les deux cartes jouées, sinon
 *       on redéclare une bataille.
 *
 *     - A chaque tour, on demande au joueur qui a perdu le pli
 *       précédent de choisir une couleur 'atout' pour le prochain pli.
 *       Avant de comparer les valeurs, on compare alors les couleurs,
 *       si un seul des deux joueurs a joué une carte de la couleur 'atout',
 *       alors il remporte immédiatement le pli, sinon on compare les valeurs
 *
 *       Si le joueur ne donne pas une couleur valide, on lui redemande une
 *       couleur jusqu'à ce qu'une couleur valide soit donnée.
 *
 *     - A chaque tour, les joueurs piochent deux cartes et choisissent celle
 *       qu'ils veulent jouer.
 *       La carte qui n'est pas choisie est remise sur le haut du paquet (elle
 *       sera donc tirée au prochain tour à nouveau).
 *
 *     - On ajoute les jokers: 2 dans le deck initial (il faudra changer la macro
 *       qui limite la taille du jeu dans 'Macro.h').
 *       Un joker gagne automatiquement le pli quoiqu'il arrive (sauf si deux jokers
 *       sont joués, il y a alors bataille et la suite de l'effet du joker ne s'applique
 *       pas).
 *       À partir du moment où un joker est joué, le jeu s'inverse et c'est la carte la
 *       plus faible qui gagne le pli, jusqu'à ce qu'un autre joker soit joué, auquel cas
 *       on reprend les règles normales.
 *       Pour vous aider, sans rien supprimer, vous pouvez ajouter une fonction 'is_joker'
 *       dans 'Card.h' et 'Card.c'.
 */
void play(Battle * battle) {
    // votre code
}
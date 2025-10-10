#include "Utils.h"

/**
 * @brief Cette fonction initialise l'aléatoire,
 * si vous ne l'appelez pas vous aurez un aléatoire
 * biaisé.
 */
void init_random() {
    srand(time(NULL));
}

/**
 * @brief Cette fonction retourne un entier aléatoire
 * dans l'intervalle [a, b] (donc a et b inclus).
 */
int random_int(int a, int b) {
    if(b < a) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    return rand() % (b - a + 1) + a;
}
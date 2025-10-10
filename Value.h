/**
 * @brief Ne pas modifier l'énumération.
 */
typedef enum Value {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    INVALID_VALUE
} Value;

/**
 * @brief Cette fonction doit stocker la bonne chaîne de
 * caractères dans 'buffer' en fonction de la valeur donnée.
 * Si la valeur donnée est incorrecte, il faut stocker 'Invalid'.
 *
 * Attention: la fonction ne doit RIEN afficher, elle doit
 * seulement stocker la chaîne de caractères voulue dans 
 * 'buffer'.
 */
void get_value_name(Value value, char * buffer);
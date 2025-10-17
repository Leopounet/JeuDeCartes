# But du cours

Le but de ce TP (et du suivant) est de coder un jeu de cartes simple,
qui permettra à terme de simuler une partie de
[Bataille](<https://fr.wikipedia.org/wiki/Bataille_(jeu)>).

**Pour télécharger tous les fichiers, cliquez sur le bouton
`<> Code` en vert.
Puis, dans le menu qui s'affiche, cliquez sur `download ZIP`.
Enfin, mettez le `.zip` téléchargé dans le dossier de votre choix,
clique droit dessus et `extraire`.**

## Objectifs

-   Apprendre à compiler plusieurs fichiers en un seul exécutable
-   Manipuler des structures de données de plus en plus complexes
-   Implémenter des logiques et jouer avec de l'affichage

## Compilation de plusieurs fichiers

### Comment ça marche ?

Un projet en C peut vite devenir énorme et contenir beaucoup de lignes
de code.
De fait, il est utile de séparer son code dans différents fichiers
afin de clarifier le code et d'en faciliter la lecture.
On peut donc coder tout un projet dans différents fichiers, et lors de
la compilation réunir tous les fichiers en un seul.

Dans un premier temps, essayez de compiler le code suivant (mettez-le
dans un fichier `fichier_1.c`) :

```c
#include <stdio.h>

int main() {
    int x = ma_fonction(0, 1);
    printf("x = %d\n", x);
}
```

La ligne pour compiler:

```sh
cc fichier_1.c -o fichier
```

Vous devriez voir une erreur disant qu'il y a une référence
indéfinie vers la fonction `ma_fonction`.
C'est normal, en effet, on ne l'a jamais implémentée.
Créer un second fichier appelé `fichier_2.c` et mettez-y le code
suivant :

```c
int ma_fonction(int x, int y) {
    return x + y;
}
```

Dans ce fichier, on a mis le code de la fonction qui n'était pas
déclarée dans le premier.
Il ne reste plus qu'à combiner les deux fichiers en un seul
lors de la compilation, pour ce faire, il suffit de lister
tous les fichiers nécessaires lors de la compilation.
Voici la ligne de commande :

```sh
cc fichier_2.c fichier_1.c -o fichier
```

À présent vous devriez seulement voir un _warning_ disant que la
déclaration de la fonction est implicite, mais le fichier
exécutable devrait avoir été créé.
Si vous le lancez, vous verrez bien '1' s'afficher comme prévu.

### Comment le faire proprement ?

Le warning n'empêche pas la compilation, mais il reflète bien un
problème spécifique.
En effet, dans le premier fichier que vous avez créé, ce n'est pas
clair d'où vient la fonction `ma_fonction`.
Elle est dans un autre fichier, mais rien ne l'indique vraiment,
et c'est lors de la compilation que la fonction est vraiment ajoutée.

La bonne façon de faire est de créer un fichier qu'on appelle un
_header_, dans lequel on liste les fonctions qu'on va coder.
C'est exactement ce qu'il se passe dans des fichiers comme
`stdio.h`, en fait dans ce fichier vous n'avez pas le code
des fonctions (qui se trouve dans `stdio.c`), vous avez
seulement la liste des fonctions que vous avez le droit d'utiliser.

Pour obtenir le même résultat, dans un premier temps, on
crée un fichier `fichier_2.h`, dans lequel on va lister
les fonctions qu'on veut créer.
Voici le code:

```c
int ma_fonction(int x, int y);
```

Vous voyez clairement que le code de la fonction n'est pas donné,
c'est normal.
Le but est uniquement de prévenir l'utilisateur que cette fonction
existe.
Son code, en revanche, se trouve dans un autre fichier, généralement
avec le même nom mais finissant par `.c` au lieu de `.h`.

Pour lier les deux fichiers, il suffit de rajouter au début de
`fichier_2.c` la ligne suivante :

```c
#include "fichier_2.h"
```

Enfin, comme pour les fichiers de la librairie stndard, il faut
inclure le fichier `.h` dans les fichiers où on veut l'utiliser.
En l'occurrence, on veut l'utiliser dans `fichier_1.c`.
On ajoute donc aussi cette ligne dans ce fichier:

```c
#include "fichier_2.h"
```

À ce stade, vos fichiers doivent être les suivants.
Pour `fichier_1.c`:

```c
#include <stdio.h>
#include "fichier_2.h"

int main() {
    int x = ma_fonction(0, 1);
    printf("x = %d\n", x);
}
```

Pour `fichier_2.c`:

```c
#include "fichier_2.h"

int ma_fonction(int x, int y) {
    return x + y;
}
```

Et pour `fichier_2.h`:

```c
int ma_fonction(int x, int y);
```

À présent, si vous essayez de compiler avec la même
ligne qu'avant, vous n'avez plus d'erreur et plus de
warning!
Pour rappel la ligne est:

```sh
cc fichier_2.c fichier_1.c -o fichier
```

## Création d'un jeu de cartes

### Comment compiler ?

En cliquant sur ce [lien](https://github.com/Leopounet/JeuDeCartes) vous arrivez
sur une page GitHub, sur laquelle vous pouvez télécharger une archive
(normalement c'est dejà fait, sinon, je vois pas comment vous avez obtenu
ce fichier).
Après les deux TDs consacrés au développement de ce jeu, je mettrai
sur le même lien une nouvelle archive contenant les fichiers remplis,
en guise de correction.

Dedans se trouvent plein de fichiers `.c` et `.h`, qui vont vous guider
pour créer un jeu de cartes.
Cependant, pas de panique, il y a beaucoup à faire, et c'est normal si vous ne
finissez pas durant les deux TPs.
Le but est de créer le jeu de la bataille, pour ce faire il faudra que vous
remplissiez les fonctions dans les `.c` qui ont volontairement été laissées
vides.

Les instructions pour chaque fonction sont données en commentaires, mais
n'hésitez pas à me demander si des choses ne sont pas claires.
J'ai normalement dû expliquer certaines choses déjà à l'oral sur le fonctionnement
du code.

Vous allez coder différentes fonctions au fur-et-à-mesure, pour s'assurer que tout
fonctionne, faites un maximum de tests dans le fichier `main.c` qui est fait pour
ça.

Pour compiler le projet, utilisez la ligne suivante:

```sh
cc Utils.c Value.c Suit.c Card.c Deck.c Player.c Battle.c main.c -o main
```

Veillez à ne pas modifier cette ligne, sauf si vous savez ce que vous faites,
l'ordre des fichiers est important, et le but n'est que compiler soit un
challenge.

### Votre mission

#### Les couleurs et les valeurs

Comme expliqué ci-dessus, vous allez devoir remplir les trous que j'ai laissé.
Il y a beaucoup à faire, et ça peut parraître compliqué ou infaisable mais en
réalité c'est assez simple, promis!

Pour commencer, je vous conseille de regarder les fichiers `Suit.h` et
`Value.h`.
Ces deux fichiers regroupent deux énumérations qui permettent de représenter
la couleur d'une carte et sa valeur.
De plus, il y a deux fonctions qui permettent de récupérer une
chaîne de caractères en fonction de la couleur ou de la valeur.

Commencez par implémenter ces fonctions dans les `.c` respectifs.
**Surtout ne modifiez pas les `.h` sauf si c'est explicitement demandé,
et seulement dans les zones concernés.**
Encore une fois, le but n'est pas que vous soyez confus à cause de la
compilation.

Ensuite testez vos fonctions via le `main.c` (vous n'avez pas besoin de
rajouter d'include vers vos fichiers, les seuls potentiellement utiles
sont ceux vers les fichiers de la librairie standard comme `stdlib.h`).

#### Les cartes

Ensuite, implémentez les fonctions listées dans `Card.h`.
Pour ce faire, vous aurez besoin de choisir la structure que d'une carte.
Cela doit être fait dans `Card.h`, vous devez uniquement modifier
l'intérieur de la structure, rien d'autre.
Le reste se passe dans `Card.c`.

#### Le jeu de cartes

Ensuite, implémentez les fonctions listées dans `Deck.h`.
Pour ce faire, vous aurez besoin de choisir la structure que d'un
jeu de cartes.
Cela doit être fait dans `Deck.h`, vous devez uniquement modifier
l'intérieur de la structure, rien d'autre.
Le reste se passe dans `Deck.c`.

#### Le joueur

Même consigne pour les joueurs dans `Player.h` et `Player.c`.

#### La bataille

Même consigne pour le jeu dans `Battle.h` et `Battle.c`.

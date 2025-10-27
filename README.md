# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

Question 1: En C++ ce que je trouve int/ressant c'est les fichier .h comme book.h . Dans ces fichiers en declares nos classe, nos focntions, et nos variables. donc on sait deja les methode qu'on vas utiliser mais on a pas le code je trouve sa pratique car sa organise bien le projet. je trouve sa bien car c moins melangeant.

Question 2: Si se systeme de bibliotheque devient plus grand on devrait creer une application pour l'utiliser car dans le terminal ce n'est pas ideal pour une grosse application. Il faufra aussi ajouter une base de donne car on a plus de donner un ficher n'est pas assez pour contenir tout. Une base de donne comme MySQL serait parfait pour ca et plus securitaire. On peut garder le C++ dans ce programme pour aider avec la performance car c'est un language rapide et efficace
# Exercice INF 231 - Explication des Problèmes
Nom : Tchamba Hilaire
Matricule : 24G2644
Date : 25 septembre 2025


## Exercice 1 : Lire un élément et supprimer toutes ses occurrences dans une liste simplement chaînée
Cet exercice demande de travailler avec une liste simplement chaînée. Le problème consiste à rechercher un élément spécifique (par exemple une valeur numérique) et à le supprimer partout où il apparaît dans la liste.

En d'autres termes, si la liste contient plusieurs fois la même valeur, il faut parcourir la liste et supprimer toutes les occurrences de cet élément, et pas seulement la première. Cela implique une bonne compréhension de la structure d’une liste chaînée : chaque élément (ou nœud) contient une donnée et un pointeur vers l’élément suivant.

Les étapes à considérer sont :
- Identifier l’élément à supprimer (le lire en entrée).
- Parcourir la liste depuis le début.
- À chaque fois que l’élément recherché est trouvé, modifier les liens de la liste pour l’exclure.
- Répéter jusqu’à ce que la fin de la liste soit atteinte.

Ce problème met en évidence l’importance de savoir manipuler les pointeurs dans une liste chaînée afin de conserver la structure de la liste même après suppression.

## Exercice 2 : Insertion d’un élément dans une liste simplement chaînée triée
Dans cet exercice, on travaille encore sur une liste simplement chaînée, mais cette fois-ci la liste est triée (par exemple, les valeurs sont classées en ordre croissant).

Le problème consiste à insérer un nouvel élément dans la liste tout en respectant cet ordre. Cela signifie que l’on ne peut pas insérer le nouvel élément n’importe où : il faut trouver la bonne position pour maintenir le tri.

Les étapes à considérer sont :
- Lire la valeur à insérer.
- Comparer cette valeur avec les éléments de la liste.
- Trouver l’endroit exact où la nouvelle valeur doit être placée :
  • Si elle est plus petite que la première valeur, elle sera insérée en tête.
  • Si elle est plus grande que toutes les valeurs, elle sera insérée en queue.
  • Sinon, elle sera insérée entre deux éléments.

Ce problème illustre l’importance de comprendre le parcours d’une liste chaînée et de savoir modifier les liens pour insérer un nouvel élément au bon endroit, sans casser l’ordre déjà établi.

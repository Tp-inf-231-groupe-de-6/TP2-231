# TP2-231
projet 

Exercice du jeudi 25 septembre 2025

Ce dossier regroupe une série d’exercices en langage C portant sur la manipulation des listes chaînées (simples, doubles et circulaires).
Chaque exercice traite d’une opération fondamentale sur les listes dynamiques

✅ Exercice 1 : Suppression de toutes les occurrences d’un élément dans une liste simplement chaînée

Objectif : Lire un élément et supprimer toutes ses occurrences dans une liste simplement chaînée.

Principe :

Parcourir la liste du début à la fin.

Supprimer chaque nœud dont la valeur est égale à l’élément lu.


Complexité :

Temps : O(n)

Mémoire : O(1)

✅ Exercice 2 : Insertion dans une liste simplement chaînée triée

Objectif : Insérer un élément dans une liste simplement chaînée triée (ordre croissant).

Principe :

Créer un nouveau nœud.

Trouver la bonne position dans la liste.

Insérer l’élément tout en gardant l’ordre croissant.


Complexité :

Temps : O(n)

Mémoire : O(1)

✅ Exercice 3 : Insertion dans une liste doublement chaînée triée

Objectif : Insérer un élément dans une liste doublement chaînée triée.

Principe :

Créer un nouveau nœud avec prev et next.

Trouver la position adéquate.

Ajuster les pointeurs des voisins.


Complexité :

Temps : O(n)

Mémoire : O(1)

✅ Exercice 4 : Insertion en tête et en queue dans une liste simplement chaînée circulaire

Objectif : Insérer un élément en tête et en queue d’une liste simplement chaînée circulaire.

Principe :

Pour la tête : insérer avant tête et mettre à jour dernier->suiv.

Pour la queue : insérer après dernier et pointer vers tête.


Complexité :

Recherche du dernier : O(n)

✅ Exercice 5 : Insertion en tête et en queue dans une liste doublement chaînée circulaire

Objectif : Insérer un élément en tête et en queue dans une liste doublement chaînée circulaire.

Principe :

Utiliser les pointeurs prev et next.

En tête : insérer entre dernier et tête.

En queue : insérer entre dernier et tête (même principe).


Complexité :

Temps : O(1) pour l’insertion (si dernier connu).

📂 Structure recommandée du dossier :

INF231_Exercices_25-09-2025/
│── README.md   ← (ce document)
│── exo1.c      ← Suppression occurrences
│── exo2.c      ← Insertion liste simplement chaînée triée
│── exo3.c      ← Insertion liste doublement chaînée triée
│── exo4.c      ← Insertion tête/queue liste circulaire simple
│── exo5.c      ← Insertion tête/queue liste circulaire double chaîne 

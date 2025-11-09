# MESSI-MESSI-BOOZ-WINNER
Ceci est un message
Projet : Points et Vecteurs 2D en C++

Ce projet illustre l’utilisation des structures (struct) en C++, la surcharge de fonctions, la gestion de plusieurs fichiers (.h / .cpp) et la compilation multi-fichiers.

L’objectif est de manipuler des points et des vecteurs 2D à travers différentes transformations : translation, mise à l’échelle, rotation, normalisation, etc.

 Organisation du projet
project/
 ├─ main.cpp
 └─ geometry/
     ├─ point.h
     ├─ point.cpp
     ├─ vector.h
     ├─ vector.cpp
     └── utils.h

 Structures utilisées
Point2f

Représente un point 2D avec ses coordonnées :

struct Point2f {
    float x;
    float y;
};

Vector2f

Représente un vecteur 2D :

struct Vector2f {
    float x;
    float y;
};

 Fonctionnalités implémentées
Sur les vecteurs (vector.cpp)

Création à partir de valeurs ou de deux points

Addition, soustraction

Mise à l’échelle

Produit scalaire

Longueur (norme)

Normalisation

Interpolation linéaire (Lerp)

Déterminant

Conversion en chaîne de caractères

Sur les points (point.cpp)

Création

Translation (avec valeurs ou vecteur)

Mise à l’échelle

Rotation autour de l’origine

Conversion en chaîne de caractères

Fonctions utilitaires (utils.h)

ToString() pour convertir différents types en texte

Print() pour affichage multi-arguments

Compilation

Depuis le dossier du projet :

g++ main.cpp geometry/point.cpp geometry/vector.cpp -o geometry


Puis exécution :

./geometry

Exemple d’exécution attendue
Point:, (2, 3)
Translated:, (3, 2)

 Objectifs pédagogiques

Comprendre et utiliser les structures en C++

Passer des structures par valeur, référence et pointeur

Organiser un projet en fichiers d’en-tête (.h) et fichiers d’implémentation (.cpp)

Utiliser g++ pour compiler plusieurs fichiers

Améliorer la clarté, la modularité et la réutilisabilité du code

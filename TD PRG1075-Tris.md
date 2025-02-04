
TD PRG1075 – Fonctions de Tris

## I. Approche DIY (Do It Yourself) 

Je vais utiliser le langage C pour écrire ma propre fonction de tri. 
Mes données sont rangées dans un tableau. Il y en beaucoup : 10 000 entiers (ou plus si vous voulez stresser la mémoire et la CPU). Je suis pressé et je tente l'approche naïve. J'ai déjà appris à permuter le contenu de deux variables... Swap ! 

L'idée la plus simple est de parcourir mon tableau de valeurs du début à la fin en comparant les valeurs deux à deux. Si elles ne sont pas ordonnées, je les échange. 
Si j'ai bien compris, je pousse les plus grandes valeurs vers le haut ou les plus petites vers le bas. 

Une seule passe ne va pas suffire. Il faut recommencer autant de fois qu'il y a de valeurs dans le tableau. Je mets ça en place sur le papier et je code ma fonction ! Je vais appeler ce tri **tri_naif**. 

## II. Ça marche ou pas ? 

Peut-être devrais-je aussi écrire une fonction qui initialise un tableau avec des valeurs aléatoires ?

Il faudrait aussi disposer d'une fonction qui affiche un extrait du tableau afin d'observer son contenu. 

## III. Le Tri à Bulle 

Vous avez mis en place une fonction de tri. Bravo. Il est possible d'aller plus loin en améliorant l'efficacité du tri. L'efficacité du tri s'apprécie par le nombre de comparaisons de valeurs, le nombre d'échanges de valeurs, voire de l'espace mémoire occupé en plus pour trier les valeurs. Cela est caractérisé par ce qu'on appelle la "complexité" du tri. Si on examine le tri précédent, on observe que cette méthode a pour effet de mettre en tête la plus petite valeur ou de mettre la plus grande en fin de tableau. Cela dépend de votre algorithme.
En fait, à chaque itération on fait grandir la partie des valeurs triées. Il est pertinent de ne plus chercher à faire de comparaisons dans la partie triée du tableau. On va se limiter à traiter la partie restante du tableau. Les boucles successives poussent la prochaine plus petite ou plus grande valeur vers la zone triée qui s'agrandit, comme une bulle qui remonte à la surface. Il s'agit du tri à bulle. 
Il est encore possible d'améliorer le tri à bulle en introduisant un drapeau (flag) implémenté à l'aide d'une variable booléenne. L'idée est d'arrêter le tri lorsqu'il n'y a plus de permutation. Toutes les valeurs sont alors ordonnées. 

```ad-note
Afin d'être conforme au paradigme d'écriture d'un algorithme structuré, on s'interdit d'utiliser les instructions break, goto ou return afin de sortir d'une boucle. Il faudra préférer utiliser une boucle while à la place de la boucle for.
```

 ## IV. Audit 
 
 Tester les différentes versions du tri avec des jeux de données : 
 
 - trié dans l'ordre croissant
 - non trié
 - trié dans l'ordre décroissant
 
 Faire un tableau qui reprend pour chaque méthode de tri : 
 - n le nombre de valeurs triées
 - Le nombre de comparaisons
 - Le nombre de permutations
 - La valeur de n2
 - En option, le temps mis pour trier le tableau sur votre machine


## III - Méthodes de tri complémentaires

Pour chacune de ces méthodes de tri, donnez un algorithme en pseudo langage proposez une implémentation en langage C.

Vous pouvez vous aider de la présentation en ligne : [Les tris (junia.ovh)](https://isen.junia.ovh/cir1/slides.html?presentation=algo/tris#toc)

### A. Tri par sélection ordinaire

**Principe**

Ce tri a un fonctionnement très simple. Il s'agit de sélectionner la plus petite valeur de la partition non triée, qui va jusqu'à la fin du tableau, en cherchant sa position. Cette valeur est alors permutée avec la valeur qui suit la partition des valeurs triées en début de tableau.

```c
int TriSelection(int *tab, int tabsize);
```

### B. Tri par insertion séquentielle

**Principe**

Ce tri a un fonctionnement plus complexe. Il s'agit d'insérer au bon endroit, et une à une, les valeurs dans la partition des valeurs triées.

La valeur au point d'insertion doit être sauvegardée avant d'être remplacée par la valeur à insérer.

Afin de remettre en place dans le tableau la valeur sauvegardée, il faut décaler vers la droite toutes les valeurs qui suivent jusqu'à la dernière valeur de la partition triée.

On peut alors remettre en place la valeur sauvegardée à la position ainsi libérée.

Cette méthode permet globalement d'ordonner les valeurs sans créer de désordre.

```c
int TriInsertionSequentiel(int *tab, int tabsize);
``` 

### C. Tri par insertion Dichotomique

Le principe est le même que pour le tri par insertion séquentielle avec toutefois une amélioration importante.

La recherche du point d'insertion se fait de manière dichotomique, permettant ainsi de réduire la complexité du tri.

Il est donc nécessaire de mettre en place une fonction de recherche dichotomique qui renvoie la position du point d'insertion. Cette fonction est proche de la fonction récursive de recherche par dichotomie de la position d'une valeur entre l'indice de début et l'indice de fin d'une partie d'un tableau de valeurs triées.

```c
int rang(int *tab, int indmin, int indmax, int valeur);

int TriInsertionDichotomique(int *tab, int tabsize);
```


### D. Tests

Ajoutez les fonctions aux tests de performances et aux tests Unitaires.


#include <stdio.h>
#include <stdlib.h>

// Fonction pour l'addition
void add(int a, int b) {
    int sum = a + b;
    printf("Le r�sultat de %d + %d est : %d\n", a, b, sum);
}

// Fonction pour la soustraction
void sous(int a, int b) {
    int difference = a - b;
    printf("Le r�sultat de %d - %d est : %d\n", a, b, difference);
}

// Fonction pour la multiplication
void multi(int a, int b) {
    int produit = a * b;
    printf("Le r�sultat de %d * %d est : %d\n", a, b, produit);
}

// Fonction pour la division
void divs(int a, int b) {
    if (b != 0) {
        int quotient = a / b;
        printf("Le r�sultat de %d / %d est : %d\n", a, b, quotient);
    } else {
        printf("Erreur : la division par z�ro n'est pas permise.\n");
    }
}

int main() {
    int num1, num2;
    char operation;

    // Demander � l'utilisateur d'entrer deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);

    printf("Entrez le second nombre : ");
    scanf("%d", &num2);

    // Demander � l'utilisateur de choisir une op�ration
    printf("Choisissez l'op�ration (+ - * /) : ");
    scanf(" %c", &operation);  // Ajoutez un espace avant %c pour ignorer les espaces blancs

    // Appeler la fonction appropri�e en fonction de l'op�ration choisie
    if (operation == '+') {
        add(num1, num2);
    } else if (operation == '-') {
        sous(num1, num2);
    } else if (operation == '*') {
        multi(num1, num2);
    } else if (operation == '/') {
        divs(num1, num2);
    } else {
        printf("Erreur : op�rateur invalide.\n");
    }

    return 0;
}

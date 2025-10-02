#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Insertion en tête
void insertionTete(Node** last, int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;

    if (*last == NULL) {
        newNode->next = newNode;
        *last = newNode;
    } else {
        newNode->next = (*last)->next;
        (*last)->next = newNode;
    }
}

// Insertion en queue
void insertionQueue(Node** last, int val) {
    insertionTete(last, val);
    *last = (*last)->next;
}

// Affichage
void afficherListe(Node* last) {
    if (last == NULL) {
        printf("Liste vide\n");
        return;
    }

    Node* temp = last->next;
    printf("Liste circulaire: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(retour au début)\n");
}

int main() {
    Node* last = NULL;
    int n, val, choix;

    printf("Combien d'éléments voulez-vous insérer ? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i + 1);
        scanf("%d", &val);

        printf("1 - Insérer en tête\n2 - Insérer en queue\nVotre choix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            insertionTete(&last, val);
        } else if (choix == 2) {
            insertionQueue(&last, val);
        } else {
            printf("Choix invalide !\n");
            i--; // Répéter cette itération
            continue;
        }
    }

    afficherListe(last);
    return 0;
}
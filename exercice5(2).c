#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// Création d'un nouveau nœud
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = newNode->next = newNode; // circulaire
    return newNode;
}

// Insertion en tête
Node* insertHead(Node* head, int value) {
    Node* newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;

    last->next = newNode;
    head->prev = newNode;

    return newNode; // nouveau nœud devient la tête
}

// Insertion en fin
Node* insertEnd(Node* head, int value) {
    Node* newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;

    last->next = newNode;
    head->prev = newNode;

    return head; // tête inchangée
}

// Affichage de la liste
void display(Node* head) {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }

    Node* temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(retour au début)\n");
}
int main() {
    Node* head = NULL;
    int choix, val;
    do {
        printf(" Menu \n");
        printf("1. Insérer en tête\n");
        printf("2. Insérer en fin\n");
        printf("3. Afficher la liste\n");
        printf("4. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Valeur à insérer en tête : ");
                scanf("%d", &val);
                head = insertHead(head, val);
                break;
            case 2:
                printf("Valeur à insérer en fin : ");
                scanf("%d", &val);
                head = insertEnd(head, val);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Au revoir Déesse 🌹 !\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 4);

    return 0;
}
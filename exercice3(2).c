#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Création d’un nouveau nœud
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insertion dans la liste triée
void insertSorted(Node** head, int value) {
    Node* newNode = createNode(value);

    // Cas 1 : liste vide
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;

    // Cas 2 : insertion avant le premier élément
    if (value < current->data) {
        newNode->next = current;
        current->prev = newNode;
        *head = newNode;
        return;
    }

    // Parcours pour trouver la bonne place
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }

    // Cas 3 : insertion à la fin
    if (current->next == NULL) {
        current->next = newNode;
        newNode->prev = current;
    } 
    // Cas 4 : insertion au milieu
    else {
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }
}

// Affichage de la liste dans l'ordre croissant
void printList(Node* head) {
    Node* current = head;
    printf("Liste (ordre croissant) : ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Affichage de la liste en ordre inverse
void printReverse(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    printf("Liste (ordre décroissant) : ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    int n, val;

    printf("Combien de valeurs veux-tu insérer ? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Donne la valeur %d : ", i + 1);
        scanf("%d", &val);
        insertSorted(&head, val);
    }

    printList(head);
    printReverse(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* creerNoeud(int val) {
    Node *nouveau = malloc(sizeof(Node));
    nouveau->data = val;
    nouveau->next = NULL;
    return nouveau;
}

void afficher(Node *head) {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void supprimer(Node **head, int val) {
    Node *tmp = *head, *prev = NULL;
    while (tmp != NULL) {
        if (tmp->data == val) {
            Node *aSup = tmp;
            if (prev == NULL)
                *head = tmp->next;
            else
                prev->next = tmp->next;
            tmp = tmp->next;
            free(aSup);
        } else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}

int main() {
    Node *head = NULL, *tmp;
    int n, val, i;

    printf("Combien d’elements dans la liste ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entrez la valeur %d : ", i+1);
        scanf("%d", &val);
        Node *nouveau = creerNoeud(val);
        if (head == NULL) head = nouveau;
        else {
            tmp = head;
            while (tmp->next != NULL) tmp = tmp->next;
            tmp->next = nouveau;
        }
    }

    printf("Liste initiale : ");
    afficher(head);

    printf("Entrez la valeur a supprimer : ");
    scanf("%d", &val);
    supprimer(&head, val);

    printf("Liste apres suppression : ");
    afficher(head);

    return 0;
}
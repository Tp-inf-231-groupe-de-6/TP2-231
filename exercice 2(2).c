#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valeur;
    struct Node* next;
} Node;

Node* creerNoeud(int valeur) {
    Node* nouveau = (Node*)malloc(sizeof(Node));
    nouveau->valeur= valeur;
    nouveau->next = NULL;
    return nouveau;
}

Node* insererListeTriee(Node* head, int valeur) {
    Node* nouveau = creerNoeud(valeur);
    
    if (head == NULL || valeur <= head->valeur) {
        nouveau->next = head;
        return nouveau;
    }
    
    Node* courant = head;
    while (courant->next != NULL && courant->next->valeur < valeur) {
        courant = courant->next;
    }
    
    nouveau->next = courant->next;
    courant->next = nouveau;
    
    return head;
}

void afficherListe(Node* head) {
    Node* courant = head;
    while (courant != NULL) {
        printf("%d -> ", courant->valeur);
        courant = courant->next;
    }
    printf("NULL\n");
}

void libererListe(Node* head) {
    Node* courant = head;
    while (courant != NULL) {
        Node* temp = courant;
        courant = courant->next;
        free(temp);
    }
}

int main() {
    
    Node* listeTriee = NULL;
    int n, valeur, i;
    
    printf("Combien d'elements voulez-vous ajouter ? ");
    scanf("%d", &n);
    
    printf("La liste sera maintenue triee automatiquement.\n");
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &valeur);
        listeTriee = insererListeTriee(listeTriee, valeur);
    }
    
    printf("\nListe finale triee : ");
    afficherListe(listeTriee);
    
    libererListe(listeTriee);
    return 0;
}
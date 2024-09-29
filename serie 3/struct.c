#include <stdio.h>

// Structure représentant un élève
struct Eleve {
    int identifiant;
    int note;
};

// Fonction pour rechercher et afficher la note d'un étudiant
void rechercherEtAfficherNote(struct Eleve eleves[], int taille) {
    int id;
    printf("Entrez l'identifiant de l'élève : ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < taille; i++) {
        if (eleves[i].identifiant == id) {
            printf("La note de l'élève %d est : %d\n", id, eleves[i].note);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Identifiant invalide.\n");
    }
}

// Fonction pour afficher la note maximale
void afficherNoteMaximale(struct Eleve eleves[], int taille) {
    int max = eleves[0].note;
    for (int i = 1; i < taille; i++) {
        if (eleves[i].note > max) {
            max = eleves[i].note;
        }
    }
    printf("La note maximale est : %d\n", max);
}

// Fonction pour afficher la note minimale
void afficherNoteMinimale(struct Eleve eleves[], int taille) {
    int min = eleves[0].note;
    for (int i = 1; i < taille; i++) {
        if (eleves[i].note < min) {
            min = eleves[i].note;
        }
    }
    printf("La note minimale est : %d\n", min);
}

// Fonction pour afficher la moyenne des notes
void afficherMoyenne(struct Eleve eleves[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += eleves[i].note;
    }
    double moyenne = (double)somme / taille;
    printf("La moyenne des notes est : %.2f\n", moyenne);
}

int main() {
    int N;
    printf("Entrez le nombre d'élèves : ");
    scanf("%d", &N);

    struct Eleve eleves[N];

    // Saisie des notes des élèves
    printf("Saisissez les notes des élèves :\n");
    for (int i = 0; i < N; i++) {
        eleves[i].identifiant = i + 1;
        printf("Note de l'élève %d : ", eleves[i].identifiant);
        scanf("%d", &eleves[i].note);
    }

    int choix;

    // Menu pour les opérations statistiques
    do {
        printf("\nMenu :\n");
        printf("1 - Rechercher et afficher la note d'un étudiant.\n");
        printf("2 - Afficher la note maximale.\n");
        printf("3 - Afficher la note minimale.\n");
        printf("4 - Afficher la moyenne des notes.\n");
        printf("0 - Quitter le programme.\n");

        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                rechercherEtAfficherNote(eleves, N);
                break;
            case 2:
                afficherNoteMaximale(eleves, N);
                break;
            case 3:
                afficherNoteMinimale(eleves, N);
                break;
            case 4:
                afficherMoyenne(eleves, N);
                break;
            case 0:
                printf("Programme terminé.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }

    } while (choix != 0);

    return 0;
}

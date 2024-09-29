#include <stdio.h>
#include <string.h>

int main() {
    char nomUtilisateurAttendu[] = "utilisateur";
    char motDePasseAttendu[] = "motdepasse";

    int maxTentatives = 3;
    int tentativesRestantes = maxTentatives;

    while (tentativesRestantes > 0) {
        char nomUtilisateur[20];
        char motDePasse[20];

        printf("Entrez votre nom d'utilisateur : ");
        scanf("%s", nomUtilisateur);

        printf("Entrez votre mot de passe : ");
        scanf("%s", motDePasse);

        // Vérification des informations d'authentification
        if (strcmp(nomUtilisateur, nomUtilisateurAttendu) == 0 &&
            strcmp(motDePasse, motDePasseAttendu) == 0) {
            printf("Authentification réussie !\n");
            break; // Sort de la boucle si l'authentification est réussie
        } else {
            printf("Authentification échouée. Tentatives restantes : %d\n", --tentativesRestantes);
        }
    }

    if (tentativesRestantes == 0) {
        printf("Nombre maximal de tentatives atteint. Accès refusé.\n");
    }

    return 0;
}

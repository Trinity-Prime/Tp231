#include <stdio.h>

int main() {
    int l1, c1, l2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("Combien de lignes souhaitez-vous entrer pour la matrice A : ");
    scanf("%d", &l1);
    printf("Combien de colonnes souhaitez-vous entrer pour la matrice A : ");
    scanf("%d", &c1);

    printf("\n=== Saisie de la matrice A ===\n");
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Entrez la valeur de A[%d][%d] : ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nCombien de lignes souhaitez-vous entrer pour la matrice B : ");
    scanf("%d", &l2);
    printf("Combien de colonnes souhaitez-vous entrer pour la matrice B : ");
    scanf("%d", &c2);
    if (c1 != l2) {
        printf("\nErreur : le nombre de colonnes de A (%d) doit être égal au nombre de lignes de B (%d).\n", c1, l2);
        return 0;
    }

    printf("\n=== Saisie de la matrice B ===\n");
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Entrez la valeur de B[%d][%d] : ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\n=== Résultat de A x B ===\n");
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
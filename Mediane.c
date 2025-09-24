#include <stdio.h>

float mediane(int tab[], int n){
    if(n%2==1) return tab[n/2];
    else return (tab[n/2-1] + tab[n/2]) / 2.0;
}
int main(){
    int n, i, j, temp;
    printf("Combien de valeurs souhaitez vous entrez : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les %d elements du tableau : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(tab[j]>tab[j+1]){
                temp = tab[j];
                tab[j]= tab[j+1];
                tab[j+1]= temp;
            }
        }
    }

    printf("Tableau trie : \n");
    for(i=0; i<n; i++){
        printf("%d", tab[i]);
    }
    printf("\nLa mediane est : %.2f\n", mediane(tab, n));
    return 0;
}
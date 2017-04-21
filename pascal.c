
#include <stdio.h>
#include <stdlib.h>

int pascal(int i, int j) {
    int p;
    if (i==0) {
        p = 1 ;
    }
    if (j==0 || j==i) {
        p = 1 ;
    }
    else {
        p = pascal(i-1,j) + pascal(i-1,j-1) ;
    }
    return p;
}
    
void affichage(int N) {
    printf("\n1 \n");
    int i,j;
    if (N>=1) {
         for (i = 1; i<=N; i++) {
             for (j = 0 ; j<=i; j++) {
                 printf("%d ",pascal(i,j));
             }
             printf("\n");
         }
    }
}


int main () {
    int n;
    printf("\nRentrez la longueur voulue du triangle de Pascal : ");
    scanf("%d",&n);
    affichage(n);
    printf("\n");
    return 1;
}


/* gcc -Wall pascal.c -o pascal */
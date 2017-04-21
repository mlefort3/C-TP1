#include <stdio.h>
#include <stdlib.h>

int max(int x, int y, int z) {
    if ((x >= y) && (x >= z)) {
        return x;
    }
    if ((y >= x) && (y >= z)) {
        return y;
    }
    else {
        return z;
    }
}

int main() {
    int x;
    int y;
    int z;
    printf("Rentrez 3 entiers : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int res = max(x,y,z);
    printf("Le maximum des 3 nombres est : %d \n", res);
    return res;
}
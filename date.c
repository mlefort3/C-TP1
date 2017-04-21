#include <stdio.h>
#include <stdlib.h>

int valide(int x, int y) {
    if ((x==0) || (x>31)) {
        printf("Le jour entré n'existe pas. \n");
        return 0;
    }
    if ((y==0) || (y>12)) {
        printf("Le mois entré n'existe pas. \n");
        return 0;
    }
    if ((x==31) && ((y==2) || (y==4) || (y==6) || (y==9) || (y==11))) {
        printf("La date entrée n'existe pas. \n");
        return 0;
    }
    if ((x>28) && (y==2)) {
        printf("La date entrée n'existe pas. \n");
        return 0;
    }
    else {
        return 1;
    }
}

void signe(int x, int y) {
    if (((x>=23) && (y==3)) || ((x<=19) && (y==4))) {
        printf("Vous êtes Bélier. \n");
    }
    if (((x>=20) && (y==4)) || ((x<=20) && (y==5))) {
        printf("Vous êtes Taureau. \n");
    }
    if (((x>=21) && (y==5)) || ((x<=20) && (y==6))) {
        printf("Vous êtes Gémeaux. \n");
    }
    if (((x>=21) && (y==6)) || ((x<=21) && (y==7))) {
        printf("Vous êtes Cancer. \n");
    }
    if (((x>=22) && (y==7)) || ((x<=22) && (y==8))) {
        printf("Vous êtes Lion. \n");
    }
    if (((x>=23) && (y==8)) || ((x<=22) && (y==9))) {
        printf("Vous êtes Vierge. \n");
    }
    if (((x>=23) && (y==9)) || ((x<=22) && (y==10))) {
        printf("Vous êtes Balance. \n");
    }
    if (((x>=23) && (y==10)) || ((x<=21) && (y==11))) {
        printf("Vous êtes Scorpion. \n");
    }
    if (((x>=22) && (y==11)) || ((x<=21) && (y==12))) {
        printf("Vous êtes Sagittaire. \n");
    }
    if (((x>=22) && (y==12)) || ((x<=19) && (y==1))) {
        printf("Vous êtes Capricorne. \n");
    }
    if (((x>=20) && (y==1)) || ((x<=18) && (y==2))) {
        printf("Vous êtes Verseau. \n");
    }
    if (((x>=19) && (y==2)) || ((x<=20) && (y==3))) {
        printf("Vous êtes Poisson. \n");
    }
}

void zeller(int x, int y, int z) {
    int t, b, c, d;
    if (y<=2) {
        t = y+10;
        b = z-1;
    }
    if (y>2) {
        t = y-2;
        b = z;
    }
    c = b/100;
    d = b-100*c;
    int res;
    double p = 2.6*t-0.2;
    int q = p;
    res = x + q + d + d/4 + c/4 + 5*c;
    int w = res % 7;
    if (w==0) {
        printf("Vous êtes né un dimanche. \n");
    }
    if (w==1) {
        printf("Vous êtes né un lundi. \n");
    }
    if (w==2) {
        printf("Vous êtes né un mardi. \n");
    }
    if (w==3) {
        printf("Vous êtes né un mercredi. \n");
    }
    if (w==4) {
        printf("Vous êtes né un jeudi. \n");
    }
    if (w==5) {
        printf("Vous êtes né un vendredi. \n");
    }
    if (w==6) {
        printf("Vous êtes né un samedi. \n");
    }
}

int main() {
    int jour, mois, annee;
    char nom[20] = {0};
    printf("Rentrez votre nom : \n");
    scanf("%s",nom);
    printf("\nRentrez vos jour, mois et année de naissance : \n");
    scanf("%d",&jour);
    scanf("%d",&mois);
    scanf("%d",&annee);
    printf("\n");
    int test = valide(jour, mois);
    if (test == 0) {
        return EXIT_FAILURE;
    }
    else {
        signe(jour, mois);
        zeller(jour, mois, annee);
    }
    printf("\nMerci d'avoir utilisé notre programme %s ! \n \n",nom);
    return EXIT_SUCCESS;
}
#include <stdio.h>

// Théo ROBERT

int exercice1() {
    int a = 0;
    int b = 0;
    printf("saisir deux entiers\n");
    scanf("%d%d", &a, &b);
    if (a <= b) {
        printf("%d est l'entier le plus grand\n", b);
    } else {
        printf("%d est l'entier le plus grand\n", a);
    }
}


int exercice2() {
    int a = 0;
    int b = 0;
    printf("saisir la longueur et la largeur\n");
    scanf("%d%d", &a, &b);
    printf("le perimetre du rectangle vaut %d et son aire vaut %d\n", (a + b) * 2, a * b);
}


int exercice3() {
    const int constante = 3;
    int a = 0;
    printf("saisir un entier\n");
    scanf("%d", &a);
    if (a % constante == 0 && a >= 10) {
        printf("%d est un multiple de 3 et est superieur à 10\n", a);
    }

}


int exercice4() {
    int age = 0;
    int etudiant = 0;
    printf("entrez votre age\n");
    scanf("%d", &age);
    printf("etes vous etudiant ? 0 si non, 1 si oui\n");
    scanf("%d", &etudiant);
    if (age < 12) {
        printf("vous beneficiez du tarif enfant (4 euro)\n");
    } else if ((age >= 12 && age < 17) || (age >= 12 && age < 27 && etudiant == 1)) {
        printf("vous beneficiez du tarif jeune (6 euro)\n");
    } else if (age >= 65) {
        printf("vous beneficiez du tarif senior (6 euro)\n");
    } else {
        printf("vous payez le plein tarif (9 euro)\n");
    }
}


int exercice5() {
    int a = 0;
    printf("quelle boisson desirez vous ?\n");
    scanf("%d", &a);
    switch (a) {
        case 1: {
            printf("vous avez selectionne du Coca Cola\n");
            break;
        }
        case 2: {
            printf("vous avez selectionne du Sprit\n");
            break;
        }
        case 3: {
            printf("vous avez selectionne du Fanta\n");
            break;
        }
        case 10: {
            printf("vous avez selectionne du cafe\n");
            break;
        }
        case 11: {
            printf("vous avez selectionne du chocolat chaud Nesquik\n");
            break;
        }
        default: {
            printf("aucune boisson n'est attribuee a ce numero\n");
            break;
        }
    }
}


float exercice6() {
    float a = 0;
    float b = 0;
    float c = 0;
    printf("saisissez trois notes sur 20\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    while (a < 0 || a > 20) {
        printf("resaisissez la premiere note ( elle doit etre comprise entre 0 et 20 )\n");
        scanf("%f", &a);
    }
    while (b < 0 || b > 20) {
        printf("resaisissez la deuxieme note ( elle doit etre comprise entre 0 et 20 )\n");
        scanf("%f", &b);
    }
    while (c < 0 || c > 20) {
        printf("resaisissez la troisieme note ( elle doit etre comprise entre 0 et 20 )\n");
        scanf("%f", &c);
    }
    printf("la moyenne des trois notes vaut %.2f", (a + b + c) / 3);
}


int exercice7() {
    int a = 0;
    int i = 0;
    int s = 0;
    int b = 0;
    printf("saisissez le nombre de classes\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        printf("saisissez le nombre d'eleves de la classe %d\n", i);
        scanf("%d", &b);
        s = s + b;
    }
    printf("le nombre total d'eleves dans l'ecole est de %d\n", s);
}


int exercice8() {
    int a = 0;
    printf("saisissez un nombre entier\n");
    scanf("%d", &a);
    while (!(a % 2 == 0 && a % 7 == 0)) {
        printf("votre entier n'est ni un multiple de 2 ni un multiple de 7. saisissez un nouvel entier.\n");
        scanf("%d", &a);
    }
}


int exercice9() {
    int a = 0;
    int e = 0;
    int i = 1;
    printf("combien de pierres sont disponibles ?\n");
    scanf("%d", &a);
    if (a == 0) {
        printf("vous pouvez construire 0 etage car vous n'avez aucune pierre :(\n");
    } else {
        while (i * i <= a) {
            a = a - i * i;
            i = i + 1;
            e = e + 1;
        }
        printf("vous pouvez construire %d etages\n", e);
    }
}


int exercice10() {
    int a = 0;
    int s = 0;
    int b = 0;
    printf("saisissez des nombres positifs\n");
    scanf("%d", &a);
    s = a;
    b = b + 1;
    while ( a >= 0 ) {
        scanf("%d", &a);
        if ( a >= 0 ) {
            s = s + a;
            b = b + 1;
        }
    }
    printf("la moyenne de ces nombres vaut %.2f\n", (float)s/(float)b);
}


int main() {
    //exercice1();
    //exercice2();
    //exercice3();
    //exercice4();
    //exercice5();
    //exercice6();
    //exercice7();
    //exercice8();
    //exercice9();
    exercice10();


    return 0;
}

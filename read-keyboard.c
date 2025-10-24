#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//// Pour des mots ////

// void caracteres(char s[]){
    // char *p = s;
    // int i = 0;
    // while (*p != '\0'){
        // printf("Caractère %3d : %c\n", i, *p);
        // p++;
        // i++;
    // }
// }

// int main(){
    // char s[100];
// 
    // printf("Entrez une chaine de caractères : %s\n", s);
    // fgets(s, 100, stdin);
    // printf("La chaine de caractères récupérée dans s : %s\n", s);
    // printf("composée de %ld caractères lus au clavier\n", strlen(s));
    // caracteres(s);
// }


//// Pour des nombres ////

void nombres(char s[]){
    int i = atoi(s);
    printf("Après conversion : %d\n", i);
    printf("et multiplication par 2 : %d\n", i*2);
}

int main(){
    char s[100];

    printf("Entrez une chaine de caractères : %s\n", s);
    fgets(s, 100, stdin);
    nombres(s);
}
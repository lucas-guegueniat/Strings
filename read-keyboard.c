#include <stdio.h>
#include <string.h>

void caracteres(char s[]){
    char *p = s;
    while (*p != '\0'){
        printf("Caractère %c : %c", p, *p);
        p++;
    }
}

int main(){
    char s[100];

    printf("Entrez une chaine de caractères : %s\n", s);
    fgets(s, 100, stdin);
    printf("La chaine de caractères récupérée dans s : %s\n", s);
    printf("composée de %ld caractères lus au clavier\n", strlen(s));
    caracteres(s);
}
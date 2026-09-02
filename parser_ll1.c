#include <stdio.h>
#include <stdlib.h>

char l; 

void E();
void E_linha();
void match(char t);
void erro();

void erro() {
    printf("\nERRO\n");
    exit(1);
}

void match(char t) {
    if (l == t) {
        l = getchar();
    } else {
        erro();
    }
}

void E() {
    if (l == 'i') {
        printf("Caminho: E -> i E'\n"); 
        match('i');
        E_linha();
    } else {
        erro();
    }
}

void E_linha() {
    if (l == '+') {
        printf("Caminho: E' -> + i E'\n"); 
        match('+');
        match('i');
        E_linha();
    } else {
        printf("Caminho: E' -> lambda\n"); 
        return;
    }
}

int main() {
    printf("Digite a palavra terminada em '$' (ex: i+i+i$): \n");
    
    l = getchar(); 
    
    E(); 
    
    if (l == '$') {
        printf("\nParsing OK.\n");
    } else {
        erro();
    }
    
    return 0;
}

#include <stdio.h>
#include <string.h>
int main () {
    char vet[26], letra='a';
    for (int i=0; i<26; i++) {
        vet[i] = letra;
        letra++;
    }
}
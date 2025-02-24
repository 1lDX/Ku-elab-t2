// 09 แยกสระจากสตริง
#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char** source, char** vowel) {
    char* str = *source;
    int len = 0, index_volwel = 0, j = 0;

    while (str[len] != '\0') {
        len++;
    }

    *vowel = malloc(len + 1); 
    char* vowels = *vowel;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels[index_volwel++] = ch;
        } else {
            str[j++] = ch;
        }
    }

    vowels[index_volwel] = '\0';
    str[j] = '\0';
}
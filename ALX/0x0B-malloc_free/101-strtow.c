#include "main.h"

int check_words(char *str) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0') {
            count++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    return count;
}

char **strtow(char *str) {
    if (!str || *str == '\0')
        return NULL;

    int words = check_words(str);
    char **array = (char **)malloc(sizeof(char *) * (words + 1));
    if (array == NULL)
        return NULL;

    int i = 0, array_index = 0, word_index = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            word_index++;
        } else if (word_index > 0) {
            array[array_index] = (char *)malloc(sizeof(char) * (word_index + 1));
            if (array[array_index] == NULL) {
                for (int j = 0; j < array_index; j++) {
                    free(array[j]);
                }
                free(array);
                return NULL;
            }
            for (int j = 0; j < word_index; j++) {
                array[array_index][j] = str[i - word_index + j];
            }
            array[array_index][word_index] = '\0';
            array_index++;
            word_index = 0;
        }
        i++;
    }

    if (word_index > 0) {
        array[array_index] = (char *)malloc(sizeof(char) * (word_index + 1));
        if (array[array_index] == NULL) {
            for (int j = 0; j < array_index; j++) {
                free(array[j]);
            }
            free(array);
            return NULL;
        }
        for (int j = 0; j < word_index; j++) {
            array[array_index][j] = str[i - word_index + j];
        }
        array[array_index][word_index] = '\0';
        array_index++;
    }

    array[array_index] = NULL;

    return array;
}

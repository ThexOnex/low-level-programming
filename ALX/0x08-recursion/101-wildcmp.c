#include "main.h"

int _len(char *s){
    int i =0;
    while(*s != '\0'){
        i++;
        s++;
    }
    return i;
}

int wildcmp(char *s, char *str){
    char *stock;
    return check_spe(s, str, stock, 0);
}
int check_spe(char *s, char *str,char *stock, int m){
    if (s[m] == str[m]){
        *stock += s[m];
        return check_spe(s, str, stock, m + 1);
    }
    if(str[m] == "*"){
        if (str[m + 1] != s[m + 1] && str[m + 1] != "*"){
            return 0;
        } else if (str[m + 1] == "*"){
            return check_spe(s, str, stock, m + 1);
        }
        else {
            return check_spe(s, str, stock, m + 1);
        }
    }
    if(s[m] == '\0'){
        return 1;
    }
}
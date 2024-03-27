#include "main.h"

int is_prime_number(int n){
    if (n <= 0){
        return 0;
    }
    else {
        return _is_divisible(n, 2);
    }
}
int _is_divisible(int n, int m){
    if (n % m == 0){
        return 0;
    }
    if (m >= n/2){
        return 1;
    }
    return _is_divisible(n, m+1);
}
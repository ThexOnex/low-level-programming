#include "main.h"

int _sqrt_recursion(int n){
    if (n <= 0) {
        return -1;
    }
    return _sqrt(n, 1);
}
int _sqrt(int n, int m){
    if(m*m == n){
        return m;
    }
    if (m*m>n){
        return -1;
    }
    else {
        return _sqrt(n, m+1);
    }
}
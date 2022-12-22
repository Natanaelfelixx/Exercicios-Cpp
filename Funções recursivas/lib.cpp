#include "lib.hpp"
using namespace std;

unsigned int padovan(unsigned short n){
    if(n <= 2){
        return 1;
    } else{
        return padovan(n-2) + padovan(n-3);
    }
}

unsigned int pell(unsigned short n){
    if(n <= 1){
        return n;
    } else{
        return 2*pell(n-1) + pell(n-2);
    }
}

unsigned long pot(unsigned short k, unsigned short n){
    if(n == 1){
        return k;
    } else{
        return k*pot(k, n-1);
    }
}

unsigned int recursivemult(unsigned short a, unsigned short b){
    if(a == 0 || b == 0){
        return 0;
    }
    else if(a == 1){
        return b;
    } else{
        return a + recursivemult(a, b-1);
    }
}

unsigned int mdc(unsigned int x, unsigned int y){
    if(x < y){
        return 0;
    }
    else if(y == 0){
        return x;
    } else{
        return mdc(y, x % y);
    }
    
}


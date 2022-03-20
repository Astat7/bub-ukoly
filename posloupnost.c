#include <stdio.h>

void posloupnost(int n, int a1, int q){
    int p[n];
    p[0] = a1;
    printf("%d, ",a1);
    for(int i = 1; i < n; i++){
        p[i] = p[i - 1] * q;
        printf("%d%c ", p[i], i!=(n-1)?44:32);
    }
}

int main(){
    posloupnost(10, 1, 2);

    return 0;
}

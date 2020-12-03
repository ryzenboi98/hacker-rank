#include <stdio.h>
#include <cmath>
#include <iostream>

void update(int *a,int *b) {
    // Complete this function  

    int aux = *a;

    *a = abs(*a + *b);
    *b = abs(aux - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

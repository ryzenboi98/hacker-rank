#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function

    int sum = *a + *b;
    int mod_sub = (*a - *b);

    if(mod_sub < 0)
        mod_sub *= (-1);

    *a = sum;
    *b = mod_sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

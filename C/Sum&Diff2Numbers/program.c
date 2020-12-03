#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int validate_int_numb(int a, int b) {
    if(a >= 1000 && b >= 1000)
        return 0;
    else 
        return 1;
}

int validate_float_numb(float a, float b) {
    if(a >= 1000 && b >= 1000)
        return 0;
    else 
        return 1;
}

int main()
{
	int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    if(validate_int_numb(a,b) && validate_float_numb(c,d))
        printf("%d %d\n", a + b, a - b);
        printf("%.1f %.1f", c + d, c - d);

    return 0;
}

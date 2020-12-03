#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int input_validation(int input) {
    if(input >= 10000 && input <= 99999)
        return 1;
    else
        return 0;
}

int sum_digits(int number) {
    char numbs[6];
    int sum = 0;

    sprintf(numbs, "%d", number);

    for(int i = 0; i < strlen(numbs); i++)
        sum += numbs[i] - '0';
    
    return sum;
}

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

    int result;

    if(input_validation(n))
        result = sum_digits(n);

        printf("%d", result);
        
    return 0;
}

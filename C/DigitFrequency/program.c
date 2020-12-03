#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int validate_input(char *numb) {

    for(int i = 0; i < strlen(numb); i++) 
        if(!isdigit(numb[i]) || !isalpha(numb[i]))
            return 0;
    

    if(strlen(numb) < 1 || strlen(numb) > 1000)
        return 0;
    return 1;
} 

int main() {
    char string_numb[1000];
    int occur[10];

    for(int i = 0; i < 10; i++)
        *(occur + i) = 0;

    scanf("%s", string_numb);

    char *string = string_numb;

    for(int i = 0; i < strlen(string); i++) {
        //printf("%c", string[i]);

         if(isdigit(string[i])) 
            {
                int it = string[i] - '0';
                //printf("it = %d\n", it);
                occur[it]++;
            }
    }
   
    for(int i = 0; i < 10; i++)
        printf("%d ", occur[i]);
       
    return 0;
}

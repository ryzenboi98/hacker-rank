#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char string[50];
    char sentence[200];

    scanf("%c", &ch);
    scanf("%s", string);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);

    printf("%c\n%s\n%s\n", ch, string, sentence);
        
    return 0;
}

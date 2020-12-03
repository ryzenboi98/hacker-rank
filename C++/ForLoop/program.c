#include <iostream>
#include <cstdio>
using namespace std;

int validate_input(int a, int b) {
    if(a > b)
        return 0;
    else
        return 1; 
}

void print_numbers(int a, int b) {
    char *arr[9];

    arr[0] = "one";
    arr[1] = "two";
    arr[2] = "three";
    arr[3] = "four";
    arr[4] = "five";
    arr[5] = "six";
    arr[6] = "seven";
    arr[7] = "eight";
    arr[8] = "nine";

    for(int i = a; i <= b; i++)
        if(i <= 9)
            cout << arr[i-1] << endl;
        else if(i % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
}

int main() {
    // Complete the code.

    int a, b;
    
    cin >> a >> b;

    if(validate_input(a, b))
        print_numbers(a, b);


    return 0;
}

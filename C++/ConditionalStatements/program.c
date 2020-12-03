#include <bits/stdc++.h>

using namespace std;

int validate_input(int n) {
    if(n < 1 || n > (int) 1E9)
        return 0;
    else
        return 1;
}

void print_numbers(int n) {
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

    if(n <= 9)
        cout << arr[n-1] << endl;
    else
        cout << "Greater than 9" << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(validate_input(n))
        print_numbers(n);
    
    return 0;
}

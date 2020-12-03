#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int validation(int *arr, int size) {

    for(int i = 0; i < size; i++)
        if(arr[i] < 1 || arr[i] > 1000)
            return 0;
    return 1;
}

int sum(int *arr, int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c;
    
    cin >> a >> b >> c;

    int arr[3] = {a, b, c}; 
    int s = 0;

    if(validation(arr, 3))
        s = sum(arr, 3);
        cout << s << endl;

    return 0;
}

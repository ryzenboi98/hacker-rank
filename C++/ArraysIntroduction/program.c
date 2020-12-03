#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int valid_input(int n) {
    if(n < 1 || n > 1000)
        return 0;
    else
        return 1;
}

void reverse_arr(int n) {
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = (n - 1); i >= 0; i--)
        if(i) 
            cout << arr[i] << " ";
        else
            cout << arr[i];   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n_numbs;

    cin >> n_numbs;

    if(valid_input(n_numbs))
        reverse_arr(n_numbs);

    return 0;
}

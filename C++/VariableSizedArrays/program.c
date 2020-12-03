#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int valid_input(int n, int q) {
    if(n < 1 || n > 1E5)
        return 0;
    else
        return 1;
}

void solve_algorithm(int n, int q) {
    vector<vector<int>> vectorList;

    for(int i = 0; i < n; i++) {
        int size;
        cin >> size;

        vector<int> vector;

        for(int j = 0; j < size; j++) {
            int numb;
            cin >> numb;
            vector.push_back(numb);
        }
        vectorList.push_back(vector);
    }

    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        cout << vectorList[a][b] << endl;
    }   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;

    cin >> n >> q;

    if(valid_input(n ,q))
        solve_algorithm(n, q);

    return 0;
}

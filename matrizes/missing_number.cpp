#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int numbers[n + 1];

    for (int i = 1; i < (n + 1); i++){
        numbers[i] = 0;
    }

    for (int i = 1; i < n; i++){
        int x; cin >> x;
        numbers[x] = 1;
    }

    for (int i = 1; i < (n + 1); i++){
        if (numbers[i] == 0) cout << i << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, number = 1; cin >> n;
    bool numberPerdido = true;
    int numbers[n -1];

    for (int i = 0; i < (n -1); i++){
        cin >> x;
        numbers[i] = x;
    }

    while (numberPerdido){
        int i = 0;
        
        if (number == numbers[i]){
            number += 1;
        } 

        i += 1;
        if (i > (n-1)){
            numberPerdido = false;
        }
    }

    cout << number << endl;
}
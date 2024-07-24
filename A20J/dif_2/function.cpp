#include <bits/stdc++.h>

using namespace std;

int arr[1123];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        arr[i] = i;
    }

    while(n > 1){
        swap(arr[n], arr[n - 1]);
        n--;
    }

    for (int i = 1; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << arr[n] << endl;


}
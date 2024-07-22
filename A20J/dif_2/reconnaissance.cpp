#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = abs(arr[n - 1] - arr[0]);
    int x = n - 1, y = 0;

    for (int i = 0; i < (n - 1); i++){
        if (abs(arr[i] - arr[i + 1]) < min){
            min = abs(arr[i] - arr[i + 1]);
            x = i;
            y = i + 1;
        }
    }

    x++;
    y++;

    cout << x << " " << y << endl;


}
#include <bits/stdc++.h>

using namespace std;

int arr[104];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int min = abs(arr[n] - arr[1]);
    int m = n, p = 1;

    for (int i = 1; i <= n; i++){
        int x = abs(arr[i] - arr[i + 1]);

        if (x <= min){
            min = x;
            m = i;
            p = i + 1;
        }
    }

    cout << m << " " << p << endl;


}
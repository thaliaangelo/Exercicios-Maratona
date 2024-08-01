#include <bits/stdc++.h>

using namespace std;

int arr[1123], n;

void solve(int x){
    if (x == 1) return;
    else {
        swap(arr[x], arr[x-1]);
        solve(x-1);
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        arr[i] = i;
    }

    solve(n);

    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
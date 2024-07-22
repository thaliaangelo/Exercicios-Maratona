#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int vasya(int x, int n){
    int comp = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] != x){
            comp++;
        } else {
            return (comp);
        }
    }
}

int petya(int x, int n){
    int comp = 0;
    for (int i = (n - 1); i > 0; i--){
        if (arr[i] != x){
            comp++;
        } else {
            return (comp);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++){
        int q;
        cin >> q;
        int a = vasya(q, n) + 1;
        int b = petya(q, n) + 1;

        cout << a << " " << b << endl;
    }
}
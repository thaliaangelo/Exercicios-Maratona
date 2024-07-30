#include <bits/stdc++.h>

using namespace std;

int A[112345], B[112345];

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++){
        cin >> A[i];
    }

    for (int i = 0; i < b; i++){
        cin >> B[i];
    } 

    int u = 0, l = 0;
    bool ans = false;

    while(u < a){
        if (A[u] == B[l]){
            ans = true;
            u++;
            l++;
        } else {
            ans = false;
            u++;
        }
        if (l == b) break;
    }

    if (ans) cout << "S\n";
    else cout << "N\n";


}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    if (n == 2){
        double x;
        double y; 
        cin >> x;
        cin >> y;
        double fator = y/x;
        if (x * fator == y) cout << "Yes\n";
        else cout << "No\n";

    } else {
        int a[n];
        for (int i = 0; i < n; i++){
            a[i] = 0;
        }

        for (int i = 0; i < n; i++){
            int p; cin >> p;
            a[i] = p;
        }

        bool ans = true;
        double fator = a[1] / a[0];
        int cont = 0;
        while (cont < n-1){
            if ((a[cont+1] / a[cont]) == fator){
                cont++;
                continue;
            } 
            else{ // o fator é diferente
                ans = false;
                break;
            }
        }

        if (ans) cout <<  "Yes\n";
        else cout << "No\n";
    }
}
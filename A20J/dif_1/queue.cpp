#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++){
        int p = 0;
        while(p < n){
            if (s[p] == 'B' && s[p + 1] == 'G'){
                swap(s[p], s[p + 1]);
                p+= 2;
            } else {
                p++;
            }
        }
    }

    cout << s << endl;
}




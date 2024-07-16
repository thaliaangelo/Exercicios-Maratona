#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++){
        if (s[i] == 'B' && s[i + 1] == 'G'){
            swap(s[i + 1], s[i]);
        }
    }

    cout << s << endl;
}
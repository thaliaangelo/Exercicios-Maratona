#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool trocou = false;

    int i = 0;

    while(i < n){
        if (s[i] > s[i + 2] && trocou == false){
            swap(s[i + 2], s[i]);
            trocou = true;
        }

        if (trocou == true){
            trocou = false;
            i = 0;
        }
    }

    cout << s << endl;
}
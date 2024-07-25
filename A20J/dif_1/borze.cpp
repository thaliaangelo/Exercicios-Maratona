#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    string t;
    for (int i = 0; i < n;){
        if (s[i] == '.'){
            t += '0';
            i++;
        } else if(s[i] == '-'){
            if (s[i + 1] == '-'){
                t += '2';
            } else if (s[i + 1] == '.'){
                t += '1';
            }

            i += 2;
        }
    }

    cout << t << endl;
}
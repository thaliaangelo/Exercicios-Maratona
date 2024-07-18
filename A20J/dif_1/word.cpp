#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    int up = 0, low = 0;

    for(auto t: s){
        if (t == toupper(t)){
            up++;
        } else {
            low++;
        }
    }

    if (up > low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else if (up < low){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
}
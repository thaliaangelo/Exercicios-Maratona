#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, string> mp;
    vector<string> news(n);
    int ans = 0;

    for (int i = 0; i < n; i++){
        string o, n;
        cin >> o >> n;
        mp[o] = n;
        news[i].push_back(n);
    }

    for (int i = 0; i < n; i++){
        string t = news[i];
        if (mp[t] != mp[t].empty()){

        }
    }


}
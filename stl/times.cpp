#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin >> n >> t;
    vector <pair<int, string>> people(n);
    vector <vector<string>> names(t);

    for (int i = 0; i < n; i++){
        string a; cin >> a;
        int b; cin >> b;
        people[i].first = b;
        people[i].second = a;
    }

    sort(people.begin(), people.end());

    int ind = 0;
    for (int i = (n - 1); i > 0; i--){
        string s = people[i].second;
        names[ind].push_back(s);
        if (ind < t) ind++;
        else ind = 0;
    }

    for (int i = 0; i < t; i++){
        int c = i + 1;
        cout << "Time " << c << endl;
        for (auto u : names[i]){
            cout << u << endl;
        }
    }
}
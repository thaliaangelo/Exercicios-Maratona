#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    map<int, string> peoples;
    vector<int> hab;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int x; cin >> x;
        peoples[x] = s;
        hab.push_back(x);
    }

    sort(hab.begin(), hab.end(), greater<int>());

    queue<int> hab_m;

    for (auto t: hab){
        hab_m.push(t);
    }

    vector<vector<string>> times(t);

    int p = 0;
    while(!hab_m.empty()){
        int x = hab_m.front();
        times[p].push_back(peoples[x]);
        hab_m.pop();
        if (p >= t) p = 0;
        else p++;
    }

    for (int i = 0; i < t; i++){
        cout << "Time " << i << endl;
        for (auto n: times[i]){
            cout << n << endl;
        }
    }
}
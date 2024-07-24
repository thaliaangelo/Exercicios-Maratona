#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> children(n + 1);

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        children[i].first = x;
        children[i].second = i;
    }

    while(children.size() > 1){
        if (children[1] <= m){
            
        }
    }

}
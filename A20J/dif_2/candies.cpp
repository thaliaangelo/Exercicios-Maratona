#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    queue <int> c;
    map <int, int> ordem;

    int ans = 0;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        c.push(x);
        ordem[i] = x;
    }

    while(!c.empty()){
        if (c.front() > m){
            int sup = c.front() - m;
            c.push(sup);
        }

        c.pop();
    }



}
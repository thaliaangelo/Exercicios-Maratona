#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <vector<int>> teste(4);

    teste[0].push_back(45);
    teste[0].push_back(1);
    teste[1].push_back(100);
    teste[1].push_back(12);

    sort(teste[0].begin(), teste[0].end());    
    //sort(teste[1].begin(), teste[1].end());    

        for (auto u : teste[1]){
            cout << u << endl;
        }
    

}
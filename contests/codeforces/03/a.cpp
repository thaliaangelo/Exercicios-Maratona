#include <bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    string s;
    string alf = "abcdefghijklmnopqrstuvwxyz";

    while(t--){
        cin >> s;
        int n = s.size();
        if (n != 1){
            int p = 0;
            string t;
            bool add = false;
            for (int i = 0; i <= n; i++){
                if (s[i] != s[i + 1]){
                    t += s[i];
                } else {
                    t += s[i];
                    for (int j = 0; j < 26; j++){
                        if (s[i] != alf[j]){
                            t += alf[j];
                            p = i + 1;
                            add = true;
                            break;
                        }
                    }
                }
                if (add) break;
            }
            for (int i = p; i < n; i++){
                t += s[i];
            }   

            cout << t << endl;
        } else {
            string g;
            bool add = false;
            for (int i = 0; i < 26; i++){
                if (s[0] != alf[i]){
                    g += alf[i];
                    g += s[0];
                    add = true;
                }
                
                if (add) break;
            }
            cout << g << endl;
        }
        
    }
}
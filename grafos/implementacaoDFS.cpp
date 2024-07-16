#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10; //número máximo de vértices

vector<vector<int>> g(MAX); //vetor de vértices adjascentes
vector<bool> vis(MAX); //vetor que guarda se um vértice já foi visitado

void dfs(int v){
    vis[v] = true; //indica que o vértice atual foi visitado

    for(auto w : g[v]){
        if (!vis[w]){
            dfs(w);
        }
    }
    /* isso fala que: para todo vértice w pertencente a lista de adjascencia de v, ou seja, seu vizinho, se não foi visitado, é chamado a dfs para o vértice w
    isso é uma recursão
    */

   //esse algoritmo consegue definir todos os componentes de um grafo, ou seja, todos os vertices que são possiveis chegar nele
   //um grafo conexo é um grafo em que, a partir de qualquer vértice é possível chegar em qualquer outro dos vértices
}

int main(){
    vector<int> adj[6]; //essa é a forma de criar um grafo, em que para cada vértice, é adicionado o seu vizinho
    adj[2].push_back(5); // ou seja, 2 é vizinho de 5, então há uma aresta entre eles
    adj[5].push_back(2);
    adj[1].push_back(4);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
}

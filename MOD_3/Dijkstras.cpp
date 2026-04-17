#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
void dijkstra(int V ,vector<vector<pii>>&adj,int src){
    vector<int>dist(V,INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>pq;

    dist[src] = 0;
    pq.push({0,src});

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;

        pq.pop();

        if(d > dist[u]){
            continue;
        }
        for(auto edge : adj[u]){
            int v = edge.first;
            int weight = edge.second;

            if(dist[u] + weight < dist[v]){
                dist[v] = dist[u] + weight;
                pq.push({dist[v],v});
            }
        }
    }
    for (int i = 0; i < V; i++) {
        cout << "Distance from " << src << " to " << i << " is " << dist[i] << endl;
    }
}
int main(){

    int V = 5;
    vector<vector<pii>> adj(V);

    // add edges: adj[u].push_back({v, weight});
    adj[0].push_back({1, 2});
    adj[0].push_back({2, 4});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 7});
    adj[2].push_back({4, 3});
    adj[3].push_back({4, 1});

    int source = 0;
    dijkstra(V, adj, source);

    return 0;
}
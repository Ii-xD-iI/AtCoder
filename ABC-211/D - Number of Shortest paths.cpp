#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define elif else if
#define all(x) (x).begin(), (x).end()
#define len(x) (int)(x).begin()

const int MAXN = 2e5 + 7, mod = 1e9+7;
vector<vector<int>> Adj(MAXN);
vector<int> ways(MAXN), dist(MAXN, MAXN), visited(MAXN);
queue<int> bfs;

int32_t main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    
    int n, m; cin >> n >> m;

    for(int a,b,i {}; i < m; ++i) { cin >> a >> b;
        Adj[a-1].push_back(b-1), Adj[b-1].push_back(a-1);
    }

    // for(int i {}; i < n; ++i) { cout << i+1 << ": ";
    //     for(auto j : Adj[i]) {
    //         cout << j << ", ";
    //     }cout << '\n';
    // }
    
    bfs.push(0);
    visited[0] = ways[0] = true; // visited and only 1 way to reach the node 
    dist[0] = 0;

    while (not bfs.empty()) {
        int curr = bfs.front();

        for(auto& Child : Adj[curr]) { //cout << curr+1 << "-->" << Child+1 << '\n';

            if(visited[Child]) {
                
                if(dist[Child] > dist[curr] + 1) { // is below fs
                    dist[Child] = dist[curr] + 1;
                    ways[Child] = ways[curr];
                }

                elif(dist[Child] == dist[curr]+1) {
                    ways[Child] += ways[curr];
                    ways[Child] %= mod;
                }
                // else the child node is closer to the root than the parent one. So, no updates.
                    
            }
            else {

                bfs.push(Child);
                visited[Child] = true;
                
                ways[Child] = ways[curr];
                dist[Child] = dist[curr] + 1;
            }
        }
        
        bfs.pop();
    }

    // for(int i {}; i < n; ++i) {
    //     cout << "Ways[" << i+1 << "] "<< ways[i] << ", ";
    //     cout << "Dist[" << i+1 << "] " << dist[i] << '\n';
    // }
    
    cout << (visited[n-1]? ways[n-1] : 0) << '\n'; 

}

/*
so, the idea is actually to run a bfs from the root node [1] 
and maintain 2 parameters for every node 
which is the number of ways to reach that node form the root node [lets call it `ways[i]`] ,
distance of the ith node from the root [`dist[i]`]

```
inside the bfs
if the child node is visited :
    check if the dist[child] greater than that of the (dist[Parent] + 1)
        if that is the case :
            will update the dist[child] to dist[parent] + 1 
            and ways[child] = ways[parent]
     if the dist[child] turns out to be equal to the (dist[parent] + 1)
     then will add the ways[parent] to the ways[child] and mod it with 1e9+7
If its not visited :
    push it in the queue, mark it visited
    and update the ways[child] = ways[parent], dist[child] = dist[parent]+1
                         
```

and in the end return the ways[N] if the ways[N] is visited even once

*/

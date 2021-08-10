using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

#define int long long

const int NAX = 2e5+7;
int n;
vector<vector<int>> Adj(NAX);
vector<int> ans;
vector<int> vis(NAX);

void dfs(int Node, int par);

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    
    cin >> n;
    for(int a, b, i{}; i < n-1; ++i) { cin >> a >> b;
        Adj[a].push_back(b), Adj[b].push_back(a);
    }

    for(int i = 1; i <= n; ++i) {
        sort(all(Adj[i]));
    }

    dfs(1, -1);
    ans.pop_back();
    for(auto i : ans) {
        cout << i << ' ';
    }cout << '\n';
}

void dfs(int Node, int par) {

    vis[Node] = true;

    ans.push_back(Node);

    for(auto i : Adj[Node]) {

        if(not vis[i]) dfs(i, Node);
    }

    ans.push_back(par);
}

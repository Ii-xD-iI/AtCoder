using namespace std;
#include  "bits/stdc++.h"

#define  elif  else if
#define len(x)  (int) (x).size()

const int NAX = 1e5+7;

int N, Q;
std::vector<vector<int>> Adj(NAX);
std::vector<int> Colour(NAX, -1);

void Dfs(int Node, int C);
int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);
  cin >> N >> Q;


  for(int a, b, i{}; i < N-1; ++i) {cin >> a >> b;
    Adj[a].push_back(b), Adj[b].push_back(a);
  }

  // TL = 2s
  Dfs(1, 1);

  while(Q --> 0) { int a, b; cin >> a >> b;

    cout << (Colour[a] == Colour[b] ? "Town\n" : "Road\n");
  }
}

void Dfs(int Node, int C) {
    Colour[Node] = C;

    for(auto &i : Adj[Node]) {
      if(Colour[i] == -1) {
        Dfs(i, not(C));
      }
    }
}

#include "bits/stdc++.h"
 
using namespace std;

#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define bignum   1e9+1
#define Int      long long
#define MAXN     2e5+1
//----------------Prototypes------------------


//-----------------Globals--------------------

vector<vector<int>> adj(MAXN);

//-------------------x-x----------------------
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,M;cin>>N>>M;
    for(int i {};i<M;++i) {
        int a,b;cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    pair<bool,bool> ye( {false, false} );

    for(int i{};i<N;++i) {    
        if( len(adj[i]) < 1) continue;
        for(auto j:adj[i]) {
            if(j==0) ye.first = true;
            elif(j==N-1) ye.second = true;
        }
        if(ye.first and ye.second) break;
        else {
            ye.first = false;
            ye.second = false;
        }
    }

    cout << ( ye.first and ye.second ? "POSSIBLE\n" : "IMPOSSIBLE\n" );
    return 0;
}

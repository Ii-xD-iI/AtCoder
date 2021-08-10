using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

#define int long long

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    //every A_i , B_i are distinct " NOPE"

    int h,w,n; cin >> h >> w >> n;
    vector<int> A(n), B(n);

    set<int> X, Y;
    
    map<int, int> M1, M2;

    for (int a, b, i{}; i < n; ++i){
        cin >> a >> b;
        X.insert(a), Y.insert(b);        
        A[i] = a, B[i] = b;
    }

    int k {};

    for(auto& i : X) {
        M1[i] = ++k;
    }

    k = 0;

    for(auto &i : Y) {
        M2[i] = ++k;
    }

    for(int i {}; i < n; ++i) {
        cout << M1[A[i]] << ' ' << M2[B[i]] << '\n';
    }
}
/*
Key point to note is that :
All A_i's and B_i's arent distinct 
but every pair {A-i, B_i} are
*/

using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()
#define int long long
int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    int difference {};
    int q; cin >> q;

    multiset<int> ms; 

    while(q--) {int a; cin >> a;
        if( a == 1 ) {
            int k; cin >> k;
            ms.insert(k-difference);
        }
        elif(a == 2) {
            int val; cin >> val;
            difference += val;
        }
        else {
            cout << *ms.begin()+difference << '\n';
            ms.erase(ms.begin());
        }
    }
}


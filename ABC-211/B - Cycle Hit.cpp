using namespace std;
#define  elif  else if
#include "bits/stdc++.h"
#define ceil(x,y) (x+y-1)/y
#define len(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    
    map<string, bool> m; 
    for(int i {}; i < 4; ++i) {string s; cin >> s;
        m[s]=true;
    }

    cout << ((m["HR"] and m["3B"] and m["H"] and m["2B"]) ? "Yes\n" : "No\n");
    return 0;
}


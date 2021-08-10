using namespace std;
#define  elif  else if
#include "bits/stdc++.h"
#define ceil(x,y) (x+y-1)/y
#define len(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    
    long double a, b; cin >> a >> b; 
    cout << fixed << setprecision(6) << ((a-b)/3) + b << '\n';
    return 0;
}


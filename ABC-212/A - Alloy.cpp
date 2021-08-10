using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    int a, b; cin >> a >> b;
    if(a == 0) {
        cout << "Silver\n";
    }elif(b == 0) {
        cout << "Gold\n";
    }else cout << "Alloy\n";
}

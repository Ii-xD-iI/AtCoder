using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    //0 = good
    //1 = bad

    //it is guaranteed that the deck contains at least one bad card.

    
    int n; cin >> n;

    string s; cin >> s;

    for(int i = 1; i <= n; ++i) {

        if(s[i-1] == '1') {

            if((i&1)) {cout << "Takahashi\n";}

            else cout << "Aoki\n";

            break;
        }
    }       
}

using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    // map<char, char> follow{{'',''}{'',''}{'',''}{'',''}{'',''}{'',''}{'',''}{'',''}{'',''}};

    string k = "012345678901234567890";
    // cout << len(k) << '\n';
    string s; cin >> s;
    string kkk = s;
    sort(all(kkk));
    if(kkk[0] == kkk[3]) {
        cout << "Weak\n";
        return 0;
    }
    for(int i {}; i < 18; ++i) {
        bool ye = true;
        for(int j {}; j < len(s); ++j) { 
            if(s[j] != k[i+j]) {
                ye = false;
                break;
            }
        }
        if(ye) {
            cout << "Weak\n";
            return 0;
        }
        else ye = true;
    }

    cout << "Strong\n";
}

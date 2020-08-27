#include "bits/stdc++.h"

#define gOdSpEeD ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define cy cout << "YES" << end 
#define cn cout <<"NO" << end
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;


int main () {
    gOdSpEeD;
    int n; cin >> n;
    char s; cin >> s;
    int k; cin >> k;
    if(s == '+') cout << n+k << endl;
    elif(s == '-') cout << n-k << endl;
    return 0;
}

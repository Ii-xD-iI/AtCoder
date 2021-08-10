#include "bits/stdc++.h"
using namespace std;
#define all(x) (x).begin(),(x).end()
#define len(x) (int)(x).size()

int32_t main () {
    cin.tie(nullptr)->sync_with_stdio(false);

    string S; cin >> S;
    const int N = len(S), mod = 1e9+7;
    string T = "?chokudai";
    vector<vector<long long>> DP(N+1, vector<long long>(10));
    S = '?' + S;

    // dp[i][j] = # of ways to make the substring of T [0, j) from [0, i) of string S 
    
    DP[0][0] = 1;//1 way to make string T = "" from S = "";
    //DP[0][j] = 0; // 0 ways to make some sustring of T from S = "";
    //here  ^ j != 0

    for (int i =1; i <= N; ++i) {
        for (int j {}; j <= 8; ++j) {
            if(S[i] != T[j]) {
                DP[i][j] = (DP[i][j] + DP[i-1][j])%mod;//just pass the value
            } else {
                //number of ways to (( make the string T from [0,j) from S:[0,i-1) + make the string T[from [0,j-1) from S:[0, i-1) ));     
                DP[i][j] = (DP[i][j] + (DP[i-1][j] + DP[i-1][j-1])) % mod;
            }
        }
    }
    // for(int i {}; i <= N; ++i) {
    //     for(int j {}; j <= 9; ++j) {
    //         cout << DP[i][j] << ' ';
    //     }cout << '\n';
    // }
    cout << DP[N][8] << '\n';
}
/*

    C H O K U D A I
  1 0 0 0 0 0 0 0 0 0 
C 0 1 0 0 0 0 0 0 0 0 
H 0 1 1 0 0 0 0 0 0 0 
C 0 1 1 0 0 0 0 0 0 0 
H 0 1 2 0 0 0 0 0 0 0 
O 0 1 2 2 0 0 0 0 0 0 
K 0 1 2 2 2 0 0 0 0 0 
U 0 1 2 2 2 2 0 0 0 0 
D 0 1 2 2 2 2 2 0 0 0 
A 0 1 2 2 2 2 2 2 0 0 
I 0 1 2 2 2 2 2 2 2 0

*/

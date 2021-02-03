#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n;cin>>n;
	vector<int>v(n);
	for(int i {};i<n;++i) {
		cin>>v[i];
	}
	vector<int> dp(n);
	dp[0] = 0;
	dp[1] = abs(v[0] - v[1]);
	for(int i=2;i<n;++i) {
		dp[i] = min(dp[i-1]+abs(v[i] - v[i-1]) , dp[i-2] + abs(v[i] - v[i-2]));
	}
	cout << dp[n-1] << '\n';
}


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	solve();
	return 0;
}

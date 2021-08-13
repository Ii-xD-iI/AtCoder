using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define len(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define ceil(x, y) (x + y-1)/y
#define int long long

int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);	

	int n, x; cin >> n >> x; 
	vector<int> v(n);
	for(auto &i : v) cin >> i; 

	long long sum {};

	for(int i = 1; i < n; i += 2) sum += (v[i]-1);
	for(int i {}; i < n; i += 2) sum += v[i];

	cout << (sum <= x? "Yes" : "No");
}
// taskkill /IM "4.exe" /F

using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define len(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define ceil(x, y) (x + y-1)/y
#define int long long

int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);	

	int a , b; cin >> a >> b;
	if(a > b) cout << 0 << '\n';
	else cout << b - (a-1) << '\n';
}
// taskkill /IM "4.exe" /F

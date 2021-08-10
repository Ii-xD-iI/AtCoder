using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()
#define int long long
int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    int N, M; cin >> N >> M;
    vector<int> A(N), B(M);
    for(auto &i : A) cin >> i;
    for(auto &i : B) cin >> i;

    sort(all(A)), sort(all(B));
    
    set<int> Min;

    for(int i=0, j {}; i < N and j < M; i,j) {
        Min.insert(abs(A[i] - B[j]));

        if(A[i] > B[j]) ++j;
        else ++i;
    }

    cout << *Min.begin();
    // O(N+M log N+M)
}

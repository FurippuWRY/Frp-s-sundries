#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 9;

int t, n, a, ans;

int main() {
    cin >> t;
    while (t--) {
    	cin >> n >> a;
    	ans = 0;
    	for (int i = 1; i <= n; ++i) {
    		cin >> a;
    		ans ^= a;
    	}
    	if (!ans) cout << "No\n";
    	else cout << "Yes\n";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int l, k;
		cin >> l >> k;
		cout << "Case " << qq << ": ";
		int a = l - k + 1;
		if (l < k) {
			cout << 0;
    } else {
    	cout << (a * (a + 1)) / 2;
    }
    cout << '\n';
	}
 	return 0;
}

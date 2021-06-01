#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
		int dist = abs(a - c) + abs(b - d);
		/**
			There are 3 main cases:
			
			1. 'k' is equal to 'dist'
			- automatically the answer is YES
			
			2. 'k' is greater than 'dist':
			- we need to check if they have the same parity first
			
			3. 'k' is less than 'dist'
			- automatically the answer is NO
		*/
		if (k >= dist && k % 2 == dist % 2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}

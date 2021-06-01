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
		// find the distance of the two coordinates (using manhattan distance)
		int diff = abs(a - c) + abs(b - d);
		if (diff == k) {
			// if the distance is EXACTLY equal to 'k', then YES
			cout << "YES";
		} else if (diff < k) {
			// if the distance is less than 'k', then check if the distance and
			// the number of the available steps (value of 'k') have the same parity
			if (diff % 2 == 0 && k % 2 == 0) {
				cout << "YES";
			} else if (diff % 2 == 1 && k % 2 == 1) {
				cout << "YES";
			} else {
				// otherwise, it is impossible to reach the target cell
				cout << "NO";
			}
		} else {
			// also, if the distance is greater than 'k', then the answer is NO as well
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}

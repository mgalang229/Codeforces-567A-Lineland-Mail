#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// view the image in this repository for better understanding
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			// if it's the first element:
			// minimum difference = |current - next|
			// maximum difference = |current - last|
			cout << abs(a[i] - a[i + 1]) << " " << abs(a[i] - a[n - 1]);
		} else if (i == n - 1) {
			// if it's the last element:
			// minimum difference = |current - previous|
			// maximum difference = |current - first|
			cout << abs(a[i] - a[i - 1]) << " " << abs(a[i] - a[0]);
		} else {
			// if it's NOT the last or first element:
			// minimum difference = min(|current - previous|, |current - next)
			// maximum difference = max(|current - first|, |current - last|)
			cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
		}
		cout << '\n';
	}
	return 0;
}

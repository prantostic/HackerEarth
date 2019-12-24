#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	size_t n, q, l, r;
	cin >> n >> q;
	size_t array[n];
	cin >> array[0];
	for (size_t i = 1; i < n; i++) {
		cin >> array[i];
		array[i] += array[i - 1];
	}
	cout << endl;
	while (q--) {
		cin >> l >> r;
		l--;
		r--;
		if (l != 0) {
			cout << static_cast<size_t>((array[r] - array[l - 1]) / (r - l + 1))
				 << "\n";
		} else {
			cout << static_cast<size_t>(array[r] / (r + 1)) << "\n";
		}
	}

	return 0;
}

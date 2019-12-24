#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int test;
	int sh, sm, eh, em;

	cin >> test;
	while (test--) {
		cin >> sh >> sm >> eh >> em;
		if (em - sm >= 0) {
			cout << eh - sh << " " << em - sm << '\n';
		} else {
			cout << eh - sh - 1 << " " << em + 60 - sm << '\n';
		}
	}

	return 0;
}

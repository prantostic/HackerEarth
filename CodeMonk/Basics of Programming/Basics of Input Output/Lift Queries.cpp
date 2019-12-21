#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int test, n;
	int a = 0, b = 7;
	cin >> test;
	while (test--) {
		cin >> n;
		if (abs(a - n) <= abs(b - n)) {
			a = n;
			cout << "A\n";
		} else if (abs(a - n) > abs(b - n)) {
			b = n;
			cout << "B\n";
		}
	}

	return 0;
}

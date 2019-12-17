#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int i = 0;
	while (n) {
		if (n == 0) {
			cout << "Motu\n";
			break;
		} else if (i < n) {
			n = n - i;
		} else if (i >= n) {
			cout << "Patlu\n";
			break;
		}
		if (n == 0) {
			cout << "Patlu\n";
			break;
		} else if (2 * i < n) {
			n = n - 2 * i;
		} else if (2 * i >= n) {
			cout << "Motu\n";
			break;
		}
		i++;
	}

	return 0;
}

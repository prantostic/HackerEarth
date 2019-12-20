#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int test, asterisks, length;
	cin >> test;
	while (test--) {
		asterisks = 1;
		cin >> length;
		for (size_t j = 0; j < length; j++) {
			for (size_t i = 0; i < asterisks; i++) cout << "*";
			for (size_t i = 0; i < 2 * length - 2 * asterisks; i++) cout << "#";
			for (size_t i = 0; i < asterisks; i++) cout << "*";
			asterisks++;
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}

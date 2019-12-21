#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	string s;
	cin >> s;
	int x, y;
	x = y = 0;
	for (auto &i : s) {
		if (i == 'z') {
			x++;
		} else if (i == 'o') {
			y++;
		}
	}
	if (y == 2 * x) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	return 0;
}

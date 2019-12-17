#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int x, y;
	string s;
	cin >> s;
	x = y = 0;
	for (auto &i : s) {
		if (i == 'L') {
			x -= 1;
		} else if (i == 'R') {
			x += 1;
		} else if (i == 'U') {
			y += 1;
		} else if (i == 'D') {
			y -= 1;
		}
	}
	cout << x << " " << y << "\n";

	return 0;
}

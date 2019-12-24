#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int d;
	int r, x;
	int t = 0;
	cin >> d;
	while (d--) {
		cin >> r >> x;
		if (100.0 * x <= 44 * r / 7) {
			t++;
		}
	}
	cout << t << "\n";
	return 0;
}

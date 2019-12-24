#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int x;
	cin >> x;
	string step = "*   *\n*   *\n*****";
	while (x--) {
		cout << step << '\n';
	}
	cout << "*   *\n*   *\n";
	return 0;
}

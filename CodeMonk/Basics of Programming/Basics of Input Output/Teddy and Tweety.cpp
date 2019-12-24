#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int n;
	cin >> n;
	if (n % 3 == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}

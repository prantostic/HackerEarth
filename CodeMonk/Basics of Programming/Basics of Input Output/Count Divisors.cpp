#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int l, r, k;
	int count = 0;
	cin >> l >> r >> k;
	for (size_t i = l; i <= r; i++) {
		count += (i % k == 0) ? 1 : 0;
	}
	cout << count;
	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	long product = 1;
	int num;
	const int modnum = 1000000007;
	for (size_t i = 0; i < n; i++) {
		cin >> num;
		product = ((product) * (num)) % modnum;
	}
	cout << product << "\n";
	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int test;
	int c1, c2, p1, p2, sum1, sum2;
	int n;
	cin >> test;

	while (test--) {
		cin >> c1 >> c2;
		cin >> n;
		sum1 = sum2 = 0;
		for (size_t i = 0; i < n; i++) {
			cin >> p1 >> p2;
			sum1 += p1;
			sum2 += p2;
		}
		cout << max(sum1, sum2) * min(c1, c2) + min(sum1, sum2) * max(c1, c2)
			 << "\n";
	}
	return 0;
}

#include <algorithm>
#include <iostream>

using namespace std;

bool isDivisibleby11(string str) {
	long sum1, sum2;
	sum1 = sum2 = 0;
	for (size_t i = 0; i < str.length(); i++) {
		if (i % 2) {
			sum1 += (str.at(i) - '0');
		} else {
			sum2 += (str.at(i) - '0');
		}
	}
	return abs(sum1 - sum2) % 11 == 0;
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int n, x;
	cin >> n;
	x = n;
	string num("");
	string ans("");
	while (n--) {
		cin >> num;
		if (n >= x / 2) {
			ans += num.at(0);
		} else {
			ans += num.at(num.length() - 1);
		}
	}
	if (isDivisibleby11(ans)) {
		cout << "OUI\n";
	} else {
		cout << "NON\n";
	}
	return 0;
}

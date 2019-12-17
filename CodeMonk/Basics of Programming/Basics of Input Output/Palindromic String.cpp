#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	string s;
	cin >> s;
	bool flag = true;
	const size_t size = s.length();
	for (size_t i = 0; i < size / 2; i++) {
		if (s[i] != s[size - 1 - i]) {
			flag = false;
		}
	}
	if (flag) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}

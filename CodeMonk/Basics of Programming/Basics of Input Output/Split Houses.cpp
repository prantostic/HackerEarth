#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	string s;
	cin >> n >> s;
	bool flag = true;
	if (s[0] == '.') s[0] = 'B';
	for (size_t i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1] and s[i] == 'H') {
			flag = false;
			break;
		} else if (s[i] == '.') {
			s[i] = 'B';
		}
	}
	if (flag) {
		cout << "YES\n" << s << "\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}

#include <cctype>
#include <iostream>

using namespace std;

bool isVowel(const char c) {
	if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'Y') {
		return true;
	}
	return false;
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	string str;
	cin >> str;
	bool flag = true;
	for (size_t i = 1; i < str.length(); i++) {
		if (isdigit(str.at(i)) and isdigit(str.at(i - 1))) {
			if ((str.at(i) - '0' + str.at(i - 1) - '0') % 2 != 0) {
				cout << "invalid\n";
				flag = false;
				break;
			}
		} else if (isalpha(str.at(i)) and isdigit(str.at(i - 1))) {
			if (isVowel(str.at(i))) {
				cout << "invalid\n";
				flag = false;
				break;
			}
		} else if (isalpha(str.at(i - 1)) and isdigit(str.at(i))) {
			if (isVowel(str.at(i - 1))) {
				cout << "invalid\n";
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		cout << "valid\n";
	}

	return 0;
}

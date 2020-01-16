#include <cctype>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	string text;
	int key;
	char c;
	cin >> text >> key;
	for (size_t i = 0; i < text.length(); i++) {
		c = text.at(i);
		if (isalpha(c)) {
			if (isupper(c)) {
				c = 'A' + (c - 'A' + key) % 26;
			} else {
				c = 'a' + (c - 'a' + key) % 26;
			}
		} else if (isalnum(c)) {
			c = '0' + (c - '0' + key) % 10;
		}
		cout << c;
	}
	cout << endl;
	return 0;
}

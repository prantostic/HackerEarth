#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	string s;
	cin >> s;
	for (auto &i : s) {
		if (islower(i)) {
			i = toupper(i);
		} else {
			i = tolower(i);
		}
	}
	cout << s << "\n";
	return 0;
}

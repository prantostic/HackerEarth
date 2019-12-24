#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	string isbn;
	cin >> isbn;
	size_t sum = 0;
	for (size_t i = 0; i < isbn.length(); i++) {
		sum += (isbn.at(i) - '0') * (i + 1);
	}
	if (sum % 11 == 0) {
		cout << "Legal ISBN\n";
	} else {
		cout << "Illegal ISBN\n";
	}
	return 0;
}

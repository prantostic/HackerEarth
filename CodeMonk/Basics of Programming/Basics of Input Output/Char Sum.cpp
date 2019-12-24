#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	string str;
	cin >> str;
	int sum = 0;
	for (size_t i = 0; i < str.length(); i++) {
		sum += (str.at(i) - 'a' + 1);
	}
	cout << sum << "\n";
	return 0;
}

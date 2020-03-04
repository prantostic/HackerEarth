#include <iostream>

int main(int argc, char const *argv[]) {
	int a;
	cin >> a;
	return 0;
}
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
	int t;
	cin >> t;
	string s;
	long long ans = 0;
	char ch;
	vector<long long> vowel_indices;
	while (t--) {
		ans = 0;
		cin >> s;
		vowel_indices.clear();
		for (size_t i = 0; i < s.length(); i++) {
			ch = s.at(i);
			if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
				ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U') {
				vowel_indices.push_back(i);
			}
		}
		for (size_t i = 0; i < vowel_indices.size(); i++) {
			ans +=
				(vowel_indices.at(i) + 1) * (s.length() - vowel_indices.at(i));
		}
		cout << ans << endl;
	}
	return 0;
}

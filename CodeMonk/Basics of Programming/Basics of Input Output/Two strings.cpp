#include <iostream>

using namespace std;

int main(int args, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int test;
	int array1[26], array2[26];
	string s1, s2;
	cin >> test;
	while (test--) {
		cin >> s1 >> s2;
		if (s1.length() != s2.length()) {
			cout << "NO\n";
		} else {
			for (size_t i = 0; i < 26; i++) array1[i] = array2[i] = 0;
			for (size_t i = 0; i < s1.length(); i++) {
				array1[s1[i] - 'a']++;
				array2[s2[i] - 'a']++;
			}
			bool flag = true;
			for (size_t i = 0; i < 26; i++) {
				if (array1[i] != array2[i]) {
					cout << "NO\n";
					flag = false;
					break;
				}
			}
			if (flag) {
				cout << "YES\n";
			}
		}
	}

	return 0;
}

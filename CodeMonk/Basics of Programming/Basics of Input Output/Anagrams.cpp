#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int test;
	string s1, s2;
	cin >> test;
	int deletions;
	int array1[26];
	int array2[26];
	while (test--) {
		deletions = 0;
		for (size_t i = 0; i < 26; i++) {
			array1[i] = 0;
			array2[i] = 0;
		}

		cin >> s1 >> s2;

		for (auto &i : s1) array1[i - 'a']++;
		for (auto &i : s2) array2[i - 'a']++;
		for (size_t i = 0; i < 26; i++) {
			deletions += abs(array1[i] - array2[i]);
		}
		cout << deletions << '\n';
	}
	return 0;
}

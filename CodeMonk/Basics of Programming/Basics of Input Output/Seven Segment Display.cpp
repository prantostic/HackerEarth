#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int t, n;
	string num;
	int array[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	cin >> t;
	while (t--) {
		cin >> num;
		n = 0;
		for (auto &i : num) {
			n += array[i - '0'];
		}
		string ans(n / 2, '1');
		if (n % 2 != 0) {
			ans.erase(0, 1);
			ans.insert(ans.cbegin(), '7');
		}
		cout << ans << "\n";
	}
	return 0;
}

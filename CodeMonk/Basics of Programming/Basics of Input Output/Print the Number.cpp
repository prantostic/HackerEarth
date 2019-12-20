#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	int nums, x;
	cin >> nums;
	while (nums--) {
		cin >> x;
		cout << x << " ";
	}
	cout << endl;
	return 0;
}

#include <iostream>
#include <limits>
using namespace std;

long getSum(long array[], size_t start, size_t end) {
	if (start == end) {
		return array[end] - array[end - 1];
	} else if (start == 0) {
		return array[end - 1];
	}
	return array[end - 1] - array[start - 1];
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	size_t n;
	cin >> n;
	long array[n];
	cin >> array[0];
	for (size_t i = 1; i < n; i++) {
		cin >> array[i];
		array[i] += array[i - 1];
	}
	long ans = numeric_limits<long>::min();
	size_t last_index = 0;
	bool flag = true;
	for (size_t i = 0; i < n; i++) {
		last_index = 2;
		flag = true;
		while ((last_index) * (last_index + 1) / 2 <= n - i) {
			last_index++;
			flag = false;
		}
		last_index--;
		if (!flag) {
			ans = max(
				ans, getSum(array, i, i + (last_index) * (last_index + 1) / 2));
		} else {
			ans = max(ans, getSum(array, i, i));
		}
	}
	cout << ans << endl;
	return 0;
}

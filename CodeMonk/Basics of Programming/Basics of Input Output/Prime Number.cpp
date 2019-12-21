#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	size_t n;
	cin >> n;
	size_t primes[n];
	size_t size = 0;

	primes[0] = 2;
	size++;
	cout << 2 << " ";

	size_t index;
	bool prime;

	for (size_t i = 3; i <= n; i += 2) {
		index = 0;
		prime = true;
		while (index < size) {
			if (i % primes[index] == 0) {
				prime = false;
				break;
			}
			index++;
		}
		if (prime) {
			primes[size++] = i;
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}

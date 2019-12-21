#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	long factorial = 1;
	cin >> n;
	while (n--) {
		factorial *= (n + 1);
	}
	cout << factorial << "\n";
	return 0;
}

#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	size_t test;
	size_t attributes, tuples;
	cin >> test;
	while (test--) {
		cin >> attributes >> tuples;
		tuples++;
		size_t max_size[attributes];
		string database[tuples][attributes];

		for (size_t i = 0; i < attributes; i++)
			max_size[i] = numeric_limits<size_t>::min();

		for (size_t i = 0; i < tuples; i++) {
			for (size_t j = 0; j < attributes; j++) {
				cin >> database[i][j];
				max_size[j] = max(max_size[j], database[i][j].length());
			}
		}

		for (size_t i = 0; i < tuples; i++) {
			if (i == 0) {
				for (size_t j = 0; j < attributes; j++) {
					cout << "+" << setw(max_size[j] + 2) << setfill('-') << "";
				}
				cout << "+\n";
			}
			for (size_t j = 0; j < attributes; j++) {
				if (j != attributes - 1) {
					cout << "| " << setw(max_size[j] + 1) << setfill(' ')
						 << left << database[i][j];
				} else {
					cout << "|" << setw(max_size[j] + 1) << setfill(' ')
						 << right << database[i][j] << " ";
				}
			}
			cout << "|" << endl;
			if (i == 0 or i == tuples - 1) {
				for (size_t j = 0; j < attributes; j++) {
					cout << "+" << setw(max_size[j] + 2) << setfill('-') << "";
				}
				cout << "+\n";
			}
		}
	}

	return 0;
}

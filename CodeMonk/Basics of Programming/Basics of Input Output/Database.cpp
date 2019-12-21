#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

inline bool isInteger(const std::string &s) {
	if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;

	char *p;
	strtol(s.c_str(), &p, 10);

	return (*p == 0);
}

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
		string type[attributes];

		for (size_t i = 0; i < attributes; i++)
			max_size[i] = numeric_limits<size_t>::min();

		for (size_t i = 0; i < tuples; i++) {
			for (size_t j = 0; j < attributes; j++) {
				cin >> database[i][j];
				max_size[j] = max(max_size[j], database[i][j].length());
			}
		}
		for (size_t i = 0; i < attributes; i++) {
			if (!database[tuples - 1][i].compare("true") or
				!database[tuples - 1][i].compare("false")) {
				type[i] = "bool";
			} else if (isInteger(database[tuples - 1][i])) {
				type[i] = "int";
			} else if (database[tuples - 1][i].find('/') != string::npos) {
				type[i] = "date";
			} else {
				type[i] = "string";
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
				if (type[j] == "int" and i != 0) {
					cout << "|" << setw(max_size[j] + 1) << setfill(' ')
						 << right << database[i][j] << " ";
				} else {
					cout << "| " << setw(max_size[j] + 1) << setfill(' ')
						 << left << database[i][j];
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

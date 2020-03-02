#include <iostream>
#include <limits>
#include <vector>
using namespace std;

vector<int> fillPrime() {
	vector<int> vec{2, 3};
	vector<int> retvec;
	bool flag = false;
	for (size_t i = 4; i <= 'z'; i++) {
		flag = false;
		for (size_t j = 0; j < vec.size(); j++) {
			if (i % vec.at(j) == 0) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			vec.push_back(i);
		}
	}
	for (size_t i = 0; i < vec.size(); i++) {
		if (vec.at(i) >= 'A' and vec.at(i) <= 'Z' or
			vec.at(i) >= 'a' and vec.at(i) <= 'z') {
			retvec.push_back(vec.at(i));
		}
	}

	return retvec;
}

int minDistance(vector<int> primes, int num) {
	int min = numeric_limits<int>::max();
	int retval = -1;
	for (size_t i = 0; i < primes.size(); i++) {
		if (abs(primes.at(i) - num) < min) {
			min = abs(primes.at(i) - num);
			retval = primes.at(i);
		}
	}
	return retval;
}

int main(int argc, char const *argv[]) {
	int t, len;
	string s;
	string v;
	cin >> t;
	vector<int> primes = fillPrime();
	// for (auto &i : primes) {
	// 	cout << i << " ";
	// }
	// cout << endl;
	int num;
	while (t--) {
		s.clear();
		v.clear();
		cin >> len;
		cin >> s;
		for (size_t i = 0; i < s.length(); i++) {
			num = minDistance(primes, s.at(i));
			if (num != -1) {
				v.push_back(num);
			} else {
				v.push_back(s.at(i));
			}
		}
		cout << v << endl;
	}
	return 0;
}
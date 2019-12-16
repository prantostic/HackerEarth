#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	size_t t, seat, facing_seat;
	cin >> t;
	while (t--) {
		cin >> seat;
		size_t mod = seat % 12;
		mod = mod == 0 ? 12 : mod;
		if (mod <= 6) {
			facing_seat = ((seat - 1) / 12) * 12 + 7 + (6 - mod);
		} else {
			facing_seat = ((seat - 1) / 12) * 12 + (13 - mod);
		}
		cout << facing_seat << " ";

		if (facing_seat % 12 == 2 or facing_seat % 12 == 5 or
			facing_seat % 12 == 8 or facing_seat % 12 == 11) {
			cout << "MS\n";
		} else if (facing_seat % 12 == 1 or facing_seat % 12 == 6 or
				   facing_seat % 12 == 7 or facing_seat % 12 == 0) {
			cout << "WS\n";
		} else if (facing_seat % 12 == 3 or facing_seat % 12 == 4 or
				   facing_seat % 12 == 9 or facing_seat % 12 == 10) {
			cout << "AS\n";
		}
	}
	return 0;
}

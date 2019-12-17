#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int l;
	cin >> l;
	int test;
	cin >> test;
	int w, h;
	while (test--) {
		cin >> w >> h;
		if (w < l or h < l) {
			cout << "UPLOAD ANOTHER\n";
		} else if (w == h) {
			cout << "ACCEPTED\n";
		} else {
			cout << "CROP IT\n";
		}
	}
	return 0;
}

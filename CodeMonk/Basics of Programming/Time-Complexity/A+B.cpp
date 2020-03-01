#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    size_t len_min, len_max;
    string a, b, c;
    while (!cin.eof()) {
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        len_min = min(a.size(), b.size());
        len_max = max(a.size(), b.size());
        int carry = 0;
        int x, y;
        for (size_t i = 0; i < len_max; i++) {
            if (i < len_min) {
                x = a.at(i) - '0';
                y = b.at(i) - '0';
                c.push_back('0' + (x + y + carry) % 10);
                carry = (x + y + carry) / 10;
            } else if (a.size() == len_min) {
                y = b.at(i) - '0';
                c.push_back('0' + (y + carry) % 10);
                carry = (y + carry) / 10;
            } else if (b.size() == len_min) {
                x = a.at(i) - '0';
                c.push_back('0' + (x + carry) % 10);
                carry = (x + carry) / 10;
            }
        }
        reverse(c.begin(), c.end());
        for (size_t i = 0; i < c.size(); i++) {
            cout << c.at(i);
        }
        c.clear();
        cout << endl;
    }
    return 0;
}

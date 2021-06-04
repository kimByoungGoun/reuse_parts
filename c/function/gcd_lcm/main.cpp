#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int get_lcm(int a, int b, int c) {
    return a * b / c;
}

int main() {

    int a, b, gcd, lcm;

    cin >> a >> b;

    gcd = get_gcd(a, b);
    lcm = get_lcm(a, b, gcd);

    cout << gcd << endl << lcm << endl;

    return 0;
}

#include <iostream>

int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);

    short t;
    int a, b, c, d, e;

    std::cin >> t;
    for (; t > 0; --t) {
        std::cin >> a >> b >> c >> d;
        if (b-a == d-c) {
            e = d+b-a;
            std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
        }
        else {
            e = d*(b/a);
            std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
        }
    }

    return 0;
}
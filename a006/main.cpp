#include <iostream>
#include <math.h>

int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);

    int a, b, c, A;

    std::cin >> a >> b >> c;
    A = b*b-4*a*c;
    if (A > 0) {
        int R1, R2;
        a *= 2;
        R1 = ((-b + sqrt(A)) / a);
        R2 = ((-b - sqrt(A)) / a);
        if (R1 > R2) {
            std::cout << "Two different roots x1=" << R1 <<  " , x2=" << R2 << '\n';
        } else {
            std::cout << "Two different roots x1=" << R2 <<  " , x2=" << R1 << '\n';
        }
    } else if (A == 0) {
        a *= 2;
        std::cout << "Two same roots x=" << -b/a << '\n';
    } else {
        std::cout << "No real root\n";
    }
    

    return 0;
}
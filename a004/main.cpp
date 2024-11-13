#include <iostream>

int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);  

    short years;
    while (std::cin >> years) {
        if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) std::cout << "閏年\n";
        else std::cout << "平年\n";
    }
    return 0;
}

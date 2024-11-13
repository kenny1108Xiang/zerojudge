#include <iostream>

int main() {
    int M, D, S;

    std::cin >> M >> D;
    S = (M*2+D)%3;
    
    if (S == 0) std::cout << "普通\n";
    else if (S == 1) std::cout << "吉\n";
    else std::cout << "大吉\n";

    return 0;
}
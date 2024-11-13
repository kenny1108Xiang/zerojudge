#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        cout << char(int(input[i])-7);
    }

    return 0;
}
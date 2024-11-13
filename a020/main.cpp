#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    map<char, int> IdMap = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13},
        {'E', 14}, {'F', 15}, {'G', 16}, {'H', 17},
        {'I', 34}, {'J', 18}, {'K', 19}, {'L', 20},
        {'M', 21}, {'N', 22}, {'O', 35}, {'P', 23},
        {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
        {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30},
        {'Y', 31}, {'Z', 33}
    };

    string InputID;
    cin >> InputID;

    int first = IdMap[InputID[0]];
    int second = 0;

    first = (first%10)*9+first/10;
    for (int i = 1; i <= 8; ++i) {
        second +=  (InputID[i]-'0')*(9-i);
    }

    if ((first+second+(InputID[9]-'0')) % 10 == 0) {
        cout << "real\n";
    } else {
        cout << "fake\n";
    }

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;
    if (num == 2) {
        cout << "2\n";
    } else {
        int sqrt_num = sqrt(num); /*只需要判斷到根號num*/
        for (int i = 2; i <= sqrt_num; ++i) {
            int flag = 0; /*計算質數出現次數*/
            while (num % i == 0) {
                ++flag;
                num /= i;
            }
            if (flag > 0) {
                if (num == 1) {
                    if (flag == 1) cout << i << '\n';
                    else cout << i << '^' << flag << '\n';
                } else {
                    if (flag == 1) cout << i << " * ";
                    else cout << i << '^' << flag << " * ";
                }
            }
            sqrt_num = sqrt(num);
        }
    }
    if (num > 1 && num != 2) {
        cout << num << '\n';
    }

    return 0;
}
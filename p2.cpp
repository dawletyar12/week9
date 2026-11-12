#include <iostream>
using namespace std;

bool isPalindrom(int n) {
    int temp = 0, b = n;


    while (n != 0) {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }


    return temp == b;
}



int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isPalindrom(i)) {
            sum = sum + i;
        }
    }
    cout << sum << endl;
}
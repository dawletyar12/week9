#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int j = r - 1; j >= 0; j--) {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    return 0;
}
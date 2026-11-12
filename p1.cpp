#include<iostream>
using namespace std;
int main() {
    int n,g=1,max = 1;
    cin >>n;
    for (int i = 1; i <= n; i++) {
        if (n%10>max) {
            max = n%10;
        }

        if (n % 10 != 0) {
            g = g * (n%10);
        }
        n = n/10;
    }
    cout << g << " "<< max << endl;
}
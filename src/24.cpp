#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    } else {
        for (int i = 1; i <= n/2; ++i) {
            if ((i - 1) % 3 == 0 || (n - i) % 3 == 0) {
                cout << i << " " << n - i << endl;
            }
        }
    }
    
    return 0;
}

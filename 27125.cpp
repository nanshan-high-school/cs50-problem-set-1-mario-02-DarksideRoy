#include <iostream>
using namespace std;
// 27125 范伯綱 655249

void mario(int n);

int main() {
    int num;

    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num > 8 || num <= 0);

    cout << "\n";

    mario(num);
}

void mario(int n) {
    for (int i = 0; i < n; i++) {
        for (int k = n - i; k > 1; k--) {
            cout << " ";
        }
        
        for (int j = n - i; j <= n; j++) {
            cout << "#";
        }

        cout << "  ";

        for(int m = 0; m < i + 1; m++) {
            cout << "#";
        }

        cout << "\n";
    }
}

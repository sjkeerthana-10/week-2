#include <iostream>
using namespace std;

int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main() {
    cout << "power(5): " << power(5) << endl;        // uses default exp=2 -> 25
    cout << "power(2,10): " << power(2, 10) << endl;  // exp=10 -> 1024
    return 0;
}
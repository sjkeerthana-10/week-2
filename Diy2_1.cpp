#include <iostream>
using namespace std;

double volume(double side) {                   
    return side * side * side;
}

double volume(double l, double b, double h) {     
    return l * b * h;
}

double volume(double r, double h, bool isCylinder) { 
    

    return 3.14159 * r * r * h;
}


double volume(double r, double h) {
    return 3.14159 * r * r * h;
}


int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}


inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}

inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    
    cout << "Cube volume (side=3): " << volume(3.0) << endl;
    cout << "Cuboid volume (2x3x4): " << volume(2.0, 3.0, 4.0) << endl;
    cout << "Cylinder volume (r=2,h=5): " << volume(2.0, 5.0) << endl;

    
    cout << "power(5): " << power(5) << endl;       // 25
    cout << "power(2,10): " << power(2, 10) << endl; // 1024


    cout << "minVal(4,9): " << minVal(4, 9) << endl;
    cout << "minVal(7,2,5): " << minVal(7, 2, 5) << endl;

    return 0;
}
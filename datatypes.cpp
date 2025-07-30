#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Integer = " << a << " and size is " << sizeof(a) << " bytes" << endl;

    float b;
    cout <<"Enter any number with decimal: ";
    cin >> b;
    cout <<"Float = " << b << " and size is " << sizeof(b) << " bytes" << endl;
    double c;
    cout <<"Enter any double value: ";
    cin >> c;
    cout <<"Double = " << c << " and size is " << sizeof(c) << " bytes" << endl;
    string d;
    cout <<"Enter any string (single word): ";
    cin >> d;
    cout <<"String = " << d << " and size of object is " << sizeof(d) << " bytes" << endl;
    char e;
    cout <<"Enter any single character: ";
    cin >> e;
    cout <<"Char = " << e << " and size is " << sizeof(e) << " bytes" << endl;
    bool f;
    cout <<"Enter any boolean (0 or 1): ";
    cin >> f;
    cout <<"Boolean = " << f << " and size is " << sizeof(f) << " bytes" << endl;

    return 0;
}

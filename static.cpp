#include<iostream>
using namespace std;
int globalVal = 5;
void show(){
    static int localStatic;
    cout << "Address of localStatic: " << &localStatic << endl;
    localStatic++;
    cout << "Size of localStatic: " << sizeof(localStatic) << endl;
    cout << "Value of localStatic: " << localStatic << endl;
    cout << endl;
}
int main(){
    show();
    show();
    show();
    cout << "Value of globalVal: " << globalVal << endl;
    cout << "Address of globalVal: " << &globalVal;
    return 0;
}

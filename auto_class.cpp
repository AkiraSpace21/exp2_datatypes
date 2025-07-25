#include<iostream>
using namespace std;

int globalVal = 7;
void display(){
    auto localVal =5;
    cout << "Address of localVal: " << &localVal << endl;
    localVal++;
    cout << "Size of localVal: " << sizeof(localVal) << endl;
    cout << "Value of localVal: " << localVal << endl;
    cout << endl;
}
int main(){
    display();
    display();
    display();
    cout << "Value of globalVal: " << globalVal << endl;
    cout << "Address of globalVal: " << &globalVal;
    return 0;
}

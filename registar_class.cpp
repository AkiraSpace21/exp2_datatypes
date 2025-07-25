#include<iostream>
using namespace std;
int counter = 4;

void display(){
    register int temp=0;
    temp++;
    cout << "Size of temp: " << sizeof(temp) << endl;
    cout << "Value of temp: " << temp << endl;
    cout << endl;
}
int main(){
    display();
    display();
    display();
    cout << "Value of counter: " << counter << endl;
    cout << "Address of counter: " << &counter;
    return 0;
}

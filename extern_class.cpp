#include<iostream>
using namespace std;

int count = 3;
void update(){
    extern int count;
    cout << "Address of count in update: " << &count << endl;
    count++;
    cout << "Size of count: " << sizeof(count) << endl;
    cout << "Current value: " << count << endl;
    cout << endl;
}
int main(){
    update();
    update();
    update();
    cout << "Final value: " << count << endl;
    cout << "Address of global count: " << &count;
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    auto x = 4;
    auto y = "2";
    auto z = 'A';

    cout<< typeid(x).name()<<endl;
    cout<< typeid(y).name()<<endl;
    cout<< typeid(z).name()<<endl;

    return 0;
}
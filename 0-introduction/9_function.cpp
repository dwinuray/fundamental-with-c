#include <iostream>
#include <string.h>
using namespace std;


/* Return type, name function, params */
string name( string params ){

    return params;
}




/* Void type */
void fun(string *hello){

    *hello = "Foundation of C++";
}

int main() {


    string hello = "Learn C++ ?";

    cout<<name( "Dwi Nur Cahyo" )<<endl;
    
    fun(&hello);
    cout<<hello;

    
    return 0;
}
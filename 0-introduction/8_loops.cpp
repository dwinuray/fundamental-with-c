#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; i++) {

        for ( auto j = 0; j <= i; j++ ){
            
            cout<<"*";
        }

        cout<<"\n";
    }


    cout<<"\n While \n";

    int i = 5;
    while ( i > 0 ) {

        int j = 0;
        while ( j < i ) {

            cout<<"*";

            j++;
        }
        cout<<"\n";
        i--;
    }



    cout<<"\n -- Exercise to create a star \n";

    for ( int i = 0; i < 5; i++ ) {

        int space = 5;
        while ( space > i ) {

            cout<<" ";
            --space;
        }

        for ( int starleft = 0; starleft <= i; starleft++ ) {

            cout<<"*";
        }


        for ( auto starright = 0; starright <= i - 1; starright++ ) {

            cout<<"*";
        }
        
        cout<<"\n";
    }
}
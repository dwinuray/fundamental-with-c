#include <iostream>
#include <vector>

using namespace std;

int main() {


    // declare
    vector<vector<int>> board;

    
    for (int i = 0; i < 5; i++) {

        vector<int> x;

        for (int j = 0; j < 6; j++) {

            if ( i == 4 ) {

                if ( j == 4 ) {

                    x.push_back(1);
                } else x.push_back(0);
            } else {

                if ( j == 1 ) {
                    x.push_back(1);
                } else x.push_back(0);
                
            }
        }


        // push to board
        board.push_back(x);

        // empty 
        x.clear();
    }





    // Output
    for ( auto z = board.begin(); z != board.end(); ++z ) {
        
        for (auto d = (*z).begin(); d != (*z).end(); ++d){

            cout<<*d<<" ";
        }

        cout<<endl<<"\n";
    }
}
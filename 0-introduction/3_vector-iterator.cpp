/**
     * 
     * 
     *  begin() – Returns an iterator pointing to the first element in the vector
        end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
        rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
        rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
        cbegin() – Returns a constant iterator pointing to the first element in the vector.
        cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
        crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
        crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
     * 
     * 
     */


#include <iostream>
#include <vector>

using namespace std;

int main() {


    // declara vector variable
    vector<int> g1;


    // push data vector
    for ( int i = 0; i < 5; i++ ) {

        g1.push_back( i );
    }



    // begin and end
    for (auto i = g1.begin(); i != g1.end(); ++i){

        cout<<*i<<" ";
    }
    cout<<endl<<"--------------"<<endl;



    // rbegin and rend
    for (auto i = g1.rbegin(); i != g1.rend(); ++i){

        cout<<*i<<" ";
    }
    cout<<endl<<"--------------"<<endl;




    // rbegin and rend
    for (auto i = g1.rbegin(); i != g1.rend(); ++i){

        cout<<*i<<" ";
    }
    cout<<endl<<"--------------"<<endl;
    
    


    

    return 0;
}
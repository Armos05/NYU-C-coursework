#include <iostream>
using namespace std;

int main(){
    int count, integerN;

    cout<<"Please enter a positive integer: ";
    cin>> integerN;

    //section a
    cout<<"a) Using while loop"<<endl;
    count = 1;
    while(count <= integerN){
        cout << 2 * count << endl;
        count++;
    }

    //section b
    cout<<"\nb) Using for loop"<<endl;
    for(count = 1; count <= integerN; count++){
        cout << count * 2 << endl;
    }

    return 0;
}

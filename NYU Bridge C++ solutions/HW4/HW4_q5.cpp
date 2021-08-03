#include <iostream>
using namespace std;

int main(){
    int n;
    int lineCounnt, starCount ;
    int spaceCount;

    cout<<"Please enter a positive integer: ";
    cin>> n;

    for(lineCounnt = 1; lineCounnt <= n; lineCounnt += 1){
        // print a sequence of lineCounnt stars
        for(spaceCount = 1; spaceCount < lineCounnt; spaceCount += 1){
            cout<<"  ";
        }


        for(starCount = (2 * n) + 1; starCount > 2 * lineCounnt; starCount -= 1){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(lineCounnt = 1; lineCounnt <= n; lineCounnt += 1){
        // print a sequence of lineCounnt stars
        for(spaceCount = n; spaceCount > lineCounnt; spaceCount -= 1)
            cout<<"  ";

        for(starCount = 1; starCount <= 2 * lineCounnt -1; starCount += 1)
            cout<<"* ";

        // break the line
        cout<<endl;
    }
    return 0;
}

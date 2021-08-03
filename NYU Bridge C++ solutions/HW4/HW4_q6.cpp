#include <iostream>

using namespace std;

int main(){

int number,current_num,value, even_count(0), odd_count(0),i;

cout<<"Input a positive integer ";
cin>>number;

value = number;

for(i = 1; i <= value ; i++){

    //cout<<"Start of FOr loop"<<endl;
    current_num = i;
    while(current_num >= 1) {

        //cout<<"Inside while loop"<<endl;
        number = current_num % 10;
        //cout<<"the number here is "<<number<<endl;
        if(number % 2 == 0){

            even_count++;

        }
        if (number % 2 == 1){

            odd_count++;
        }

        current_num = current_num/10;
    }

    //cout<<"End of While loop"<<endl;
    //cout<<" EVEN COUNT "<<even_count<<" ODD COUNT "<<odd_count<<endl;
    if (even_count > odd_count){


        cout<<i<<endl;
    }
//cout<<" EVEN COUNT "<<even_count<<" ODD COUNT "<<odd_count<<endl;
//cout<<"End For loop"<<endl;
even_count = 0;
odd_count = 0;
}
}

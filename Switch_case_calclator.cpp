// A small calculator

#include <iostream>
using namespace std;

int main()
{

    int choice;
    double a, b, c;

    do
    {
        cout<<"Press 1 to Do the addition of two number\n";
        cout<<"Press 2 to Do the subtraction of two number\n";
        cout<<"Press 3 to Do the multiplication of two number\n";
        cout<<"Press 4 to Do the division of two number\n";

        cin >> choice;

        if(choice <= 4)
        {
        cout<<"Enter the first number\n";
        cin>>a;
        cout<<"enter the second number\n";
        cin>>b;

        }

        switch(choice)
        {
            case 1:
            c = a + b;
            cout<<"The Addition of\t"<<a<<"\tand\t"<<b<<"\tis\t"<<c<<endl;
            cout<<"***********************************************\n";
            break;

            case 2:
            c = a - b;
            cout<<"The subtraction of"<<" "<<a<<"and"<<" "<<b<<"is"<<" "<<c<<endl;
            cout<<"*********************************\n";
            break;

            case 3:
            c = a * b;
            cout<<"The Multiplication of"<<" "<<a<<"and"<<" "<<b<<"is"<<" "<<c<<endl;
            cout<<"*********************************\n";
            break;

            case 4:
            c = a / b;
            cout<<"The Division of"<<" "<<a<<"and"<<" "<<b<<"is"<<" "<<c<<endl;
            cout<<"*********************************\n";
            break;

            default:
            cout<<"Enter a valid choice. Please choose again\n";

        }

    }while (choice != 4);


return 0;
}

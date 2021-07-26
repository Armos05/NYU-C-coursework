#include <iostream>
using namespace std;

int main()
{
 int a,i,j,space;
 cout << "How long do you want the tree To be \n"<< "Enter the number";
 cin  >> a;
 for(i=0;i<=a-1;i++)
 {   for(space = a -1-i; space >= 1; space--)
       cout<<" ";
     for(j= 1; j<=i+1;j++)
       {
           cout << "X";
           cout << " ";
       }
     cout<<endl;
 }
    return 0;
}

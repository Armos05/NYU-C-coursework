#include <iostream>
using namespace std;

int main()
{
int number, sum = 0, count = 0;
cout<<"Enter 10 negative numbers"<<endl;

while (++count <= 10)
{
  cin >> number;

  if (number >= 0)
  {
    cout<<"ERROR: positve value"<<endl;
    if (number > 5)
    { cout<<"Big ERROr"<<endl;
      break;
    cout<<"Break comes here 01";
    }
   cout<<"Break comes here 02";
  }
 cout<<"Break comes here 03";

}
cout<<"Break comes here 04";
return 0;
}

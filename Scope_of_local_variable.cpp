#include <iostream>
using namespace std;

int main()
{
int main_variable(5);
//int local_variable(5);

if (main_variable == 5)
{
  int local_variable(1);
  cout<<"Inside this block the value of this local variable is "<<local_variable<<endl;

}
cout<<"Outside the block the value becomes "<<local_variable<<endl;

}

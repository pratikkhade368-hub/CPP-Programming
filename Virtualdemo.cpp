#include<iostream>
using namespace std;

class Base
{
    Public:
    int i,j;

};
class Derived:Public Base
{
    Public:
    int x;

};
int main()
{
   cout<<sizeof(Base)<<"\n";  //8
   cout<<sizeof(Derived)<<"\n";  //12

    return 0;

}

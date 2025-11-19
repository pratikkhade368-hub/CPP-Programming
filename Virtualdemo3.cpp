#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    void fun()
    {
        cout<<"Inside Base fun\n";
    }
    void gun()
    {
        cout<<"Inside Base gun\n";
    }
    void sun()
    {
        cout<<"Inside Base sun\n";
    }
    void bun()
    {
        cout<<"Inside Base bun\n";
    }

};
class Derived:public Base
{
    public:
    int x;
    void gun()
    {
        cout<<"Inside Derived fun\n";
    }
    void sun()
    {
        cout<<"Inside Derived fun\n";
    }
    void run()
    {
        cout<<"Inside Derived fun\n";
    }
    void mun()
    {
        cout<<"Inside Derived fun\n";
    }

};
int main()
{
  
  Base *bp2 = new Derived(); //upcasting
  bp->fun();  // Base fun
  bp->gun(); //Base gun
  bp->sun(); // Base sun
 // bp->run(); //error
  //bp->mun(); //error
  bp->bun(); //Base bun

  

    return 0;
}
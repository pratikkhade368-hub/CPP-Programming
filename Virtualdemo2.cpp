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
  Base *bp1 = new Base(); // nocasting
  Derived *dp1 = new Derived(); //ocastin
  Base *bp2 = new Derived();
  Derived *dp2 = new Base();
    return 0;
}
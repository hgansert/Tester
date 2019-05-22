#include <iostream>
using namespace std;




class A
{
  public:
  void func(int x)
  {
    cout<<x<<endl;
  }

  void func(double y)
  {
    cout<<y<<" diff"<<endl;
  }

  void func(int x, double y)
  {
    cout<<(x+y)<<endl;
  }

};
int main(int argc, char const *argv[])
{
  A obj;
  cout<<argv[1]<<endl;
  obj.func(2);
  obj.func(2.2);
  obj.func(2, 5); // EX 0 for false


}

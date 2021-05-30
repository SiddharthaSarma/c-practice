#include <iostream>

using namespace std;

class Test
{
  int *x;

public:
  Test(int a = 0) : x(new int(a)) {}
  void setX(int val)
  {
    *x = val;
  }
  void print()
  {
    cout << *x << endl;
  }

  // assignment operator
  Test &operator=(const Test &rhs)
  {
    if (this != &rhs)
    {
      *x = *rhs.x;
    }
    return *this;
  }
};

int main()
{
  Test t1(10);
  Test t2;
  t2 = t1;
  t1.setX(20);
  t1.print();
  t2.print();
}
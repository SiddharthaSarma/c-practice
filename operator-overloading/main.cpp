#include <iostream>
using namespace std;
class Point
{
  int x;
  int y;
  int arr[2];

public:
  Point(int a = 0, int b = 0) : x(a), y(b)
  {
    arr[0] = a;
    arr[1] = b;
  }
  Point operator+(const Point &p)
  {
    Point t;
    t.x = x + p.x;
    t.y = y + p.y;
    return t;
  }
  // unary
  Point operator-()
  {
    return Point(-x, -y);
  }
  int &operator[](const int pos)
  {
    if (pos == 0)
    {
      return arr[0];
    }
    else if (pos == 1)
    {
      return arr[1];
    }
    else
    {
      cout << "out of bounds" << endl;
      exit(0);
    }
  }

  friend istream &operator>>(istream &input, Point &p);
  friend ostream &operator<<(ostream &output, Point &p);
  void print()
  {
    cout << x << " " << y << " -> " << arr[0] << " " << arr[1] << endl;
  }
};

istream &operator>>(istream &input, Point &p)
{
  input >> p.x >> p.y;
  return input;
}

ostream &operator<<(ostream &output, Point &p)
{
  cout << p.x << " " << p.y << " -> " << p.arr[0] << " " << p.arr[1] << endl;
}

int main()
{
  Point p1(10, 3);
  p1.print();
  Point p2(3, 2);
  p2.print();
  Point p3 = p1 + p2;
  p3.print();
  Point p4 = -p3;
  p4.print();
  p4[0] = 8;
  p4[1] = 10;
  cout << p4;
}
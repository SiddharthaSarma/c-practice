#include <iostream>
#include <array>

using namespace std;

int main() {
  // initialization
  array<int, 3> arr;
  array<int, 3> arr2 = {1, 0, 10};

  // methods
  cout << "Element at position at 2: " << arr2.at(2) << endl; // out of bound safe
  cout << "Element can also be accessed using []: " << arr2.at(2) << endl;

  cout << "Front element: " << arr2.front() << endl;
  cout << "Last element: " << arr2.back() << endl;

  // fill
  arr.fill(0);

  // swap
  arr.swap(arr2);

  // empty
  arr.empty();

  // size
  cout << "Array filled size: " << arr2.size() << endl;
  cout << "Array max size: " << arr2.max_size() << endl;

}
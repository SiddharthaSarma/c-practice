#include <bits/stdc++.h>

int main() {
  std::vector<int> v;
  for (int i = 1; i <= 5; i++) {
    v.push_back(i);
  }

  std::cout << "Iterators " << "\n";
  std::cout << "***************" << "\n";

  std::cout << "Output of begin and end" << "\n";
  for (auto i = v.begin(); i != v.end(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";
  std::cout << "Output of rbegin and rend" << "\n";
  for (auto i = v.rbegin(); i != v.rend(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";
  std::cout << "Output of cbegin and cend" << "\n";
  for (auto i = v.cbegin(); i != v.cend(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";
  std::cout << "Output of crbegin and crend" << "\n";
  for (auto i = v.crbegin(); i != v.crend(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";
  std::cout << "--------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Capactity" << "\n";
  std::cout << "***************" << "\n";

  std::cout << "Size is: " << v.size() << "\n";
  std::cout << "Capacity is: " << v.capacity() << "\n";
  std::cout << "Max size is: " << v.max_size() << "\n";

  // resize the vector to 4 elements
  v.resize(4);
  v.shrink_to_fit();
  std::cout << "after the resize" << "\n";
  std::cout << "Size is: " << v.size() << "\n";
  std::cout << "Capacity is: " << v.capacity() << "\n";
  std::cout << "Max size is: " << v.max_size() << "\n";

  // pop-back
  v.pop_back();
  std::cout << "after the pop_back" << "\n";
  for (auto i = v.begin(); i != v.end(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";

  std::cout << "inserting elements in the front" << "\n";
  v.insert(v.begin(), 10);
  v.emplace(v.begin(), 6);
  for (auto i = v.begin(); i != v.end(); i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";

}
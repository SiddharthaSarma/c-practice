#include <bits/stdc++.h>

int main() {
  std::vector<int> v;
  for (int i = 1; i <= 5; i++) {
    v.push_back(i);
  }

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
}
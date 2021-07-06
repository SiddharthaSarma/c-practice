#include<iostream>
#include<list>

void showlist(std::list <int> g)
{
    std::list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << '\n';
}

int main() {
  std::list<int> gqList, gqList2;
  for (int i = 0; i < 10; i++)
  {
    gqList.push_back(i * 2);
    gqList2.push_front(i * 3);
  }
  showlist(gqList);
  showlist(gqList2);
  gqList.merge(gqList2);
  showlist(gqList);
  gqList.insert(gqList.begin(), 15);
  std::cout << "gqList2 empty" << std::endl;
  std::cout << gqList2.empty() << std::endl;
  std::cout << "\ngqlist1.front() : " << gqList.front();
  std::cout << "\ngqlist1.back() : " << gqList.back();
  std::cout << "\n";

  std::cout << "reverse the list" << std::endl;
  gqList2.reverse();
  showlist(gqList2);
  return 0;
}
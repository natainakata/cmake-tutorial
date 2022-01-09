#include <iostream>

#include "uftree.hpp"
#include "uftree/include/uftree.hpp"

int main (int argc, char *argv[])
{
  UnionFindTree uf(5);
  uf.unite(0, 2);
  uf.unite(2, 4);
  uf.unite(1, 3);

  std::cout << "same(1, 2) : " << (uf.same(1, 2) ? "True" : "False") << std::endl;
  std::cout << "size(3) : " << uf.size(3) << std::endl;

  uf.show();
  return 0;
}

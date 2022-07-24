#include <stdlib.h>
#include <vector>

struct UnionFind{
  public:
  UnionFind(int N);
  int root(int x);
  void unite(int x,int y);
  private:
  std::vector<int> par;
};

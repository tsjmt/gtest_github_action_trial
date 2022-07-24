#include <gtest/gtest.h>
#include "../UnionFind.h"

TEST(UnionFindTest, Unite) {
  UnionFind tree(100);
  EXPECT_NE(tree.root(0),tree.root(1));
  tree.unite(0,99);
  tree.unite(1,99);
  EXPECT_EQ(tree.root(0),tree.root(1));
  // EXPECT_EQ(tree.root(2),tree.root(1));
}
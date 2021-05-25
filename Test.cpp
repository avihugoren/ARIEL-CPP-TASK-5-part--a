//
// Created by avihu on 25/05/2021.
//
#include "doctest.h"
#include "BinaryTree.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("insert")
{
    BinaryTree<int> tree_of_ints;
    CHECK_NOTHROW(tree_of_ints.add_root(1));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints.add_right(9, 5));
    CHECK_NOTHROW(tree_of_ints.add_right(1, 3)  );
    CHECK_NOTHROW(tree_of_ints.add_left(1, 2);  );
    CHECK_NOTHROW(tree_of_ints.add_root(1).add_left(2,5));
    CHECK_NOTHROW(tree_of_ints.add_root(2));
    CHECK_NOTHROW(tree_of_ints.begin_inorder());
    CHECK_NOTHROW(tree_of_ints.begin_postorder());
    CHECK_NOTHROW(tree_of_ints.begin_preorder());
    CHECK_NOTHROW(tree_of_ints.end_postorder());
    CHECK_NOTHROW(tree_of_ints.end_preorder());
    CHECK_NOTHROW(tree_of_ints.end_inorder());
    CHECK_NOTHROW(tree_of_ints.add_left(2,8));
    CHECK_NOTHROW(tree_of_ints.add_left(8,3));
    CHECK_NOTHROW(tree_of_ints.add_left(3,6));
    CHECK_NOTHROW(tree_of_ints.add_left(6,9));
    CHECK_NOTHROW(tree_of_ints.add_left(9,2));
    CHECK_NOTHROW(tree_of_ints.add_left(2,20));
    CHECK_NOTHROW(tree_of_ints.add_left(20,30));

}

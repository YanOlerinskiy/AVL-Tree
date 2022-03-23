# AVL-Tree
This is my AVL Tree implementation. It is noticeably slower than the standard std::set implementation, though it is still asymptotically optimal.
I wrote this as a college project, which is why all of the code is written inside of a single header file.

# Functionality
The tree has custom iterators, which support all bidirectional iterator operations.
The following is a list of all methods supported by the tree:
1) .begin() - returns an iterator pointing on the first element in the tree
2) .end() - returns an iterator pointing after the last element in the tree
3) .size() - returns number of elements in a tree
4) .empty() - returns whether the tree is empty
5) .insert(ValueType x) - inserts an element with value x if it isn't already in the tree
6) .erase(ValueType x) - erases an element with value x if there is one in a tree
7) .find(ValueType x) - returns an iterator pointing on element with value x if there is one in the tree, otherwise returns .end()
8) .lower_bound(ValueType x) - returns an iterator pointing on the first element with value greater or equal that x, returns .end() if there are no such elements

# Requirements
ValueType should support operator<

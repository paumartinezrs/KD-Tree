# Binary KD-Trees

### Introduction
***
This project consists on the implementation of a KD-Tree. These are data structures used to organize points in a k dimensional space to facilitate operations such as search and retrieval in a such efficient way.

A k-d tree is a data structure used to organize points in a k-dimensional space. It recursively divides the space along axes into smaller regions, creating a hierarchical binary tree structure.

K-d trees, in low to moderate dimensions, are particularly useful and efficient for nearest neighbor searches and range queries. During a search, the tree is traversed to find the closest point to a given query point. This is done by recursively exploring the branches of the tree and prioritizing the ones that are most likely to contain the nearest neighbor. 


### Files

***
The project consists of one _.cc_ and one _.hh_: files:
- **kdtree.hh**: This file contains the declaration of the KDTree class, which represents the k-dimensional tree and defines its methods.
- **kdtree.cc**: This file contains the implementation of the methods of the KDTree class.
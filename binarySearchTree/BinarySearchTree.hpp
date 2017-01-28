//
//  BinarySearchTree.hpp
//  binarySearchTree
//
//  Created by Ryan Fernando on 1/26/17.
//  Copyright © 2017 Ryan Fernando. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>

class BinarySearchTree
{
private:
    struct node
    {
        node * left;
        node * right;
        int key;
    };
    
    node * rootPTR;
    
public:
    BinarySearchTree();
    node* createNewNode(int);
    bool isEmpty();
    void insert(int);
    void insertHelper(int,node *&);
    void remove(int);
    bool find(int);
    bool findHelper(int,node *);
    void inorder(node *);
    void preorder(node *);
    void postorder(node *);
    void inorderPrint();
    void inorderPrintHelper(node *);
};

#endif /* BinarySearchTree_hpp */

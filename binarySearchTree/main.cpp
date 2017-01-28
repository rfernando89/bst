//
//  main.cpp
//  binarySearchTree
//
//  Created by Ryan Fernando on 1/26/17.
//  Copyright © 2017 Ryan Fernando. All rights reserved.
//

#include <iostream>
#include "BinarySearchTree.hpp"

int main()
{
    BinarySearchTree tree;
   
    tree.insert(10);
    tree.insert(25);
    tree.insert(1);
    tree.insert(22);
    tree.inorderPrint();
    std::cout << std::endl;

    tree.find(3);

    return 0;
}

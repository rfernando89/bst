//
//  BinarySearchTree.cpp
//  binarySearchTree
//
//  Created by Ryan Fernando on 1/26/17.
//  Copyright © 2017 Ryan Fernando. All rights reserved.
//

#include "BinarySearchTree.hpp"

BinarySearchTree::BinarySearchTree()
{
    rootPTR = NULL;
}

// Referencing node from the BinarySearchTree class, create a new node
BinarySearchTree::node* BinarySearchTree::createNewNode(int data)
{
    // Create the new node to be inserted
    node * newNode;
    newNode = new node;
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

// Check whether or not the Binary Search Tree is Empty
bool BinarySearchTree::isEmpty()
{
    if(rootPTR == NULL)
    {
        std::cout << "TRUE" << std::endl;
        return true;
    }
    else
    {
        std::cout << "FALSE" << std::endl;

        return false;
    }
}

// Insert the value into the Binary Search Tree
void BinarySearchTree::insert(int data)
{
    insertHelper(data,rootPTR);
}


void BinarySearchTree::insertHelper(int data, node *& pointer)
{
 
    
    if(pointer == NULL)                             // Check if the tree is empty
    {
        pointer = createNewNode(data);
    }
    else if(data < pointer->key)                    
    {
        insertHelper(data,pointer->left);
    }
    else if(data > pointer->key)
    {
        insertHelper(data,pointer->right);
    }
    else
    {
        std::cout << "DUPLICATE" << std::endl;
    }
}

bool BinarySearchTree::find(int data)
{
    return findHelper(data,rootPTR);
}

bool BinarySearchTree::findHelper(int data, node * pointer)
{
    if(pointer == NULL)
    {
        std::cout << "NOT FOUND" << std::endl;

        return false;
    }
    else if(data == pointer->key)
    {
        std::cout << "FOUND" << std::endl;

        return true;

    }
    else if(data < pointer->key)
    {
        return findHelper(data, pointer->left);
    }
    else
    {
        return findHelper(data, pointer->right);
    }
}

void BinarySearchTree::inorderPrint()
{
    inorderPrintHelper(rootPTR);
}
void BinarySearchTree::inorderPrintHelper(node * pointer)
{
    if(pointer != NULL)
    {
        inorderPrintHelper(pointer->left);
        std::cout << pointer->key << " ";
        inorderPrintHelper(pointer->right);
    }

}

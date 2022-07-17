#include "Node.h"
//Constructor
Node::Node(char character,int frequency){
    this->left = this->right = nullptr;
    this->character = character;
    this-> frequency= frequency;
}

Node::Node(char character){
    this->character = character;
    this->left = this->right = nullptr;
}

// Set Method

void Node::setLeft(Node *left){
    Node::left = left;
}

void Node::setRight(Node *right){
    Node::right = right;
}

// Get Method

int Node::getFrequency() const{
    return frequency;
}

Node *Node::getLeft() const{
    return left;
}

Node *Node::getRight() const{
    return right;
}

char Node::getCharacter() const{
    return character;
}


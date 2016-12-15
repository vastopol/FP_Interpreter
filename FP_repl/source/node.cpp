#include "../header/node.h"

Node::Node(std::string s)
    : key(s), parent(0), left(0), right(0)
{}
//--------------------------------------------------

Node::~Node()
{
    // not done
}
//--------------------------------------------------

std::string Node::getkey()
{
    return key;
}
//---------------------------------------------------

Node* Node::getParent()
{
    return parent;
}
//---------------------------------------------------

Node* Node::getLeft()
{
    return left;
}
//---------------------------------------------------

Node* Node::getRight()
{
    return right;
}
//---------------------------------------------------

void Node::setParent(Node* n)
{
    parent = n;
}
//---------------------------------------------------

void Node::setLeft(Node* n)
{
    left = n;
}
//---------------------------------------------------

void Node::setRight(Node* n)
{
    right = n;
}
//---------------------------------------------------
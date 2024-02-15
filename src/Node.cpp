#include "Node.h"

using namespace std;

Node::Node() : parent(nullptr) 
{}

Node::~Node() 
{}

void Node::clearChildren()
{
    children.clear();
}

void Node::setParent(Node *parent)
{
    this->parent = parent;
    return;
}

Node* Node::getParent() const {
    return parent;
}

void Node::addChild(Node* child, float distance) {
    children.push_back(make_pair(child, distance));
}

vector<pair<Node *, float>> &Node::getChildren()
{
    return children;
}






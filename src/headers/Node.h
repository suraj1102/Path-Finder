#pragma once

#include <vector>

using namespace std;

/* 
Represents a basic node to work with. It cannot be used standalone and is 
meant to be used to implement specific nodes for algorithms 
*/
class Node {

    protected:

        // ptr to node's parent
        Node* parent; 

        // List of all of node's children
        vector< pair<Node*, float> > children; 

        // Clears the children of the node
        void clearChildren();


    public:

        Node();
        virtual ~Node();

        /*
        Assigns the parent of the node. The parent of a node will
        be evaluated when reconstituing the path form the goal.
        */
        void setParent(Node* parent);

        /*
        Returns a pointer to the parent node.
        */
        Node* getParent() const;

        /*
        Add a node to the children of the current node.
        */
        void addChild(Node* child, float distance);

        /*
        Returns a vector containing all the children of the current node.
        */
        vector< pair<Node*, float> >& getChildren();

};
// C++ program for B-Tree {insertion + traverse + search + splitChild} 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// A BTree node
class BTreeNode
{
	vector<int>keys; // An array of keys
	int range;	 // Minimum degree (defines the range for number of keys)
	// BTreeNode **C; 
    vector<BTreeNode*>C;// An array of child pointers
	int curr_no_of_key;	 // Current number of keys
	bool leaf; // Is true when node is leaf. Otherwise false
public:
	BTreeNode(int _t, bool _leaf); // Constructor

	// A utility function to insert a new key in the subtree rooted with
	// this node. The assumption is, the node must be non-full when this
	// function is called
	void insertNonFull(int k);

	// A utility function to split the child y of this node. i is index of y in
	// child array C[]. The Child y must be full when this function is called
	void splitChild(int i, BTreeNode *y);

	// A function to traverse all nodes in a subtree rooted with this node
	void traverse();

	// A function to search a key in the subtree rooted with this node.
	BTreeNode *search(int k); // returns NULL if k is not present.

// Make BTree friend of this so that we can access private members of this
// class in BTree functions
friend class BTree;
};

// A BTree
class BTree
{
	BTreeNode *root; // Pointer to root node
	int range; // Minimum degree
public:
	// Constructor (Initializes tree as empty)
	BTree(int _t)
	{ root = NULL; range = _t; }

	// function to traverse the tree
	void traverse()
	{ if (root != NULL) root->traverse(); }

	// function to search a key in this tree
	BTreeNode* search(int k)
	{ return (root == NULL)? NULL : root->search(k); }

	// The main function that inserts a new key in this B-Tree
	void insert(int k);
};

// Constructor for BTreeNode class
BTreeNode::BTreeNode(int t1, bool leaf1)
{
	// Copy the given minimum degree and leaf property
	range = t1;
	leaf = leaf1;

	// Allocate memory for maximum number of possible keys
	// and child pointers
	// keys = new int[2*range-1];
	// C = new BTreeNode *[2*range];
	// Initialize the number of keys as 0
	curr_no_of_key = 0;
}

// Function to traverse all nodes in a subtree rooted with this node
void BTreeNode::traverse()
{
	// There are curr_no_of_key keys and curr_no_of_key+1 children, traverse through curr_no_of_key keys
	// and first curr_no_of_key children
	int i;
	for (i = 0; i < curr_no_of_key; i++)
	{
		// If this is not leaf, then before printing key[i],
		// traverse the subtree rooted with child C[i].
		if (leaf == false)
			C[i]->traverse();
		cout << " " << keys[i];
	}

	// Print the subtree rooted with last child
	if (leaf == false)
		C[i]->traverse();
}

// Function to search key k in subtree rooted with this node
BTreeNode *BTreeNode::search(int k)
{
	// Find the first key greater than or equal to k
	int i = 0;
	while (i < curr_no_of_key && k > keys[i])
		i++;

	// If the found key is equal to k, return this node
	if (keys[i] == k)
		return this;

	// If key is not found here and this is a leaf node
	if (leaf == true)
		return NULL;

	// Go to the appropriate child
	return C[i]->search(k);
}

// The main function that inserts a new key in this B-Tree
void BTree::insert(int k)
{
	// If tree is empty
	if (root == NULL)
	{
		// Allocate memory for root
		root = new BTreeNode(range, true);
		root->keys[0] = k; // Insert key
		root->curr_no_of_key = 1; // Update number of keys in root
	}
	else // If tree is not empty
	{
		// If root is full, then tree grows in height
		if (root->curr_no_of_key == 2*range-1)
		{
			// Allocate memory for new root
			BTreeNode *s = new BTreeNode(range, false);

			// Make old root as child of new root
			s->C[0] = root;

			// Split the old root and move 1 key to the new root
			s->splitChild(0, root);

			// New root has two children now. Decide which of the
			// two children is going to have new key
			int i = 0;
			if (s->keys[0] < k)
				i++;
			s->C[i]->insertNonFull(k);

			// Change root
			root = s;
		}
		else // If root is not full, call insertNonFull for root
			root->insertNonFull(k);
	}
}

// A utility function to insert a new key in this node
// The assumption is, the node must be non-full when this
// function is called
void BTreeNode::insertNonFull(int k)
{
	// Initialize index as index of rightmost element
	int i = curr_no_of_key-1;

	// If this is a leaf node
	if (leaf == true)
	{
		// The following loop does two things
		// a) Finds the location of new key to be inserted
		// b) Moves all greater keys to one place ahead
		while (i >= 0 && keys[i] > k)
		{
			keys[i+1] = keys[i];
			i--;
		}

		// Insert the new key at found location
		keys[i+1] = k;
		curr_no_of_key = curr_no_of_key+1;
	}
	else // If this node is not leaf
	{
		// Find the child which is going to have the new key
		while (i >= 0 && keys[i] > k)
			i--;

		// See if the found child is full
		if (C[i+1]->curr_no_of_key == 2*range-1)
		{
			// If the child is full, then split it
			splitChild(i+1, C[i+1]);

			// After split, the middle key of C[i] goes up and
			// C[i] is splitted into two. See which of the two
			// is going to have the new key
			if (keys[i+1] < k)
				i++;
		}
		C[i+1]->insertNonFull(k);
	}
}

// A utility function to split the child y of this node
// Note that y must be full when this function is called
void BTreeNode::splitChild(int i, BTreeNode *y)
{
	// Create a new node which is going to store (range-1) keys
	// of y
	BTreeNode *z = new BTreeNode(y->range, y->leaf);
	z->curr_no_of_key = range - 1;

	// Copy the last (range-1) keys of y to z
	for (int j = 0; j < range-1; j++)
		z->keys[j] = y->keys[j+range];

	// Copy the last range children of y to z
	if (y->leaf == false)
	{
		for (int j = 0; j < range; j++)
			z->C[j] = y->C[j+range];
	}

	// Reduce the number of keys in y
	y->curr_no_of_key = range - 1;

	// Since this node is going to have a new child,
	// create space of new child
	for (int j = curr_no_of_key; j >= i+1; j--)
		C[j+1] = C[j];

	// Link the new child to this node
	C[i+1] = z;

	// A key of y will move to this node. Find the location of
	// new key and move all greater keys one space ahead
	for (int j = curr_no_of_key-1; j >= i; j--)
		keys[j+1] = keys[j];

	// Copy the middle key of y to this node
	keys[i] = y->keys[range-1];

	// Increment count of keys in this node
	curr_no_of_key = curr_no_of_key + 1;
}

// Driver program to test above functions
int main()
{
	BTree bt(3); // A B-Tree with minimum degree 3
	bt.insert(10);
	bt.insert(20);
	bt.insert(5);
	bt.insert(6);
	bt.insert(12);
	bt.insert(30);
	bt.insert(7);
	bt.insert(17);

	cout << "Traversal of the constructed tree is ";
	bt.traverse();

	int k = 6;
	(bt.search(k) != NULL)? cout << "\nPresent" : cout << "\nNot Present";

	k = 15;
	(bt.search(k) != NULL)? cout << "\nPresent" : cout << "\nNot Present";

	return 0;
}

/* COL106 LAB TEST 1 Q2 : LARGEST SUBTREE OF BINARY TREE WHICH IS BST */
/* Please do not include ANY headers in this file */
#include<iostream>

class Node {
public: 
    int key;
    Node* left;
    Node* right;

    Node(int key)
    {
        // Implement your code here
    }

    ~Node() {
       // Implement your code here
    }

    // You can add attributes here if you need them
};

int get_largest_bst_subtree(Node* root) {
    // Implement your code here
    return -1;
}

/* TEST YOUR CODE */
/* These are very basic in nature. You may edit them to create more */

int main(){

  // TESTCASE 1
  /*
              10
             /  \
           /     \
          5       15
         / \       \
       /    \       \
      1      8       7
  */
  Node* root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(15);

  root->left->left = new Node(1);
  root->left->right = new Node(8);

  root->right->right = new Node(7);
  std::cout << "[TC1] Your Answer: " << get_largest_bst_subtree(root) << std::endl;
  std::cout << "[TC1] Actual Answer: 3" << std::endl;

  delete root;

  // TESTCASE 2
  /*
                10
              /    \
             /      \
            15       8
           / \      / \
          /   \    /   \
         12   20  5     9
        / \      / \     \
       /   \    /   \     \
      2    14  4    7     10
  */
  root = new Node(10);
  root->left = new Node(15);
  root->right = new Node(8);

  root->left->left = new Node(12);
  root->left->right = new Node(20);
  root->right->left = new Node(5);
  root->right->right = new Node(9);

  root->left->left->left = new Node(2);
  root->left->left->right = new Node(14);
  root->right->left->left = new Node(4);
  root->right->left->right = new Node(7);

  root->right->right->right = new Node(10);
  std::cout << "[TC2] Your Answer: " << get_largest_bst_subtree(root) << std::endl;
  std::cout << "[TC2] Actual Answer: 6" << std::endl;

  delete root; 

}
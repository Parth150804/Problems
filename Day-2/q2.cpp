/* COL106 LAB TEST 2 Q2 : CHECK AVL TREE */
/* Please do not include ANY headers in this file */
#include<iostream>

/* Basic Stack Implementation */
/* You may use this if you need it */
class Stack {
private:
    int* stk;
    int size;
    int capacity;

public:
    Stack(int cap){
        stk = new int[cap];
        size = 0;
        capacity = cap;
    }

    void push(int x) {
        if (size < capacity){
            stk[size] = x;
            size++;
        }

    }

    void pop() {
        if (size > 0) {
            size--;    
        }
        
    }

    int peek() {
        if (size > 0) {
            return stk[size-1];
        }
    }

    int is_empty() {
        return (size == 0);
    }
};


class Node {
public: 
    int key;
    Node* left;
    Node* right;

    Node(int key)
    {
        // Implement your code here
    }

    ~Node(){
       // Implement your code here
    }

};

// Root = Root of the Binary Tree
// n = Number of nodes in the Tree
// Return 0 if not an AVL tree
// Else 1
int check_avl_tree(Node* root, int n) {
    // Implement your code here
    return -1;
}

int main() {
    // TESTCASE 1
    /*
                    12
                  /    \
                 /      \
                8        18
               / \      / 
              /   \    /   
             5    11  17     
            /        
           /        
          4       
    */
    Node* root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);

    root->left->left = new Node(5);
    root->left->right = new Node(11);

    root->left->left->left = new Node(4);

    root->right->left = new Node(17);

    std::cout << "[TC1] Your Answer: " << check_avl_tree(root, 7) << std::endl;
    std::cout << "[TC1] Actual Answer: 1" << std::endl;

    delete root;

   // TESTCASE 2
  /*
    10
      \
       20 
        \
         30
           \ 
            40
  */

    root = new Node(10);
    root->right = new Node(20);
    root->right->right = new Node(30);
    root->right->right->right = new Node(40);

    std::cout << "[TC2] Your Answer: " << check_avl_tree(root, 4) << std::endl;
    std::cout << "[TC2] Actual Answer: 0" << std::endl;

    delete root;

    return 0;
}
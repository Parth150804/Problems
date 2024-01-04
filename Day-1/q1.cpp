/* COL106 LAB TEST 1 Q1 : STACK IMPLEMENTATION */
/* Please do not include ANY headers in this file 
apart from the ones specified below (for the tester) */
#include<string>
#include<iostream>
using namespace std;

/* You need to implement stack using dynamic arrays 
The minimum size of the stack you need to keep is 1024 */

/* In error cases: Do not perform an operation. eg. if a call to pop() is made
on an empty stack, ignore it. */

class Stack {
private:
    int *stk;
    int size;

    // Add attributes here

public:
    Stack(){ 
        // Implement your code here
    }

    ~Stack() {
        // Implement your code here
    }

    void push(int x) {
        // Implement your code here
        return;
    }

    void pop() {
        // Implement your code here
        return;
    }

    int peek() {
        // Implement your code here
        return -1;
    }

    int get_min_element() {
        // Implement your code here
        return -1;
    }

    int get_size() {
        // Implement your code here
        return -1;
    }

    int* get_stk() {
        return stk;
    }

};

/* TEST YOUR CODE */
/* These are very basic in nature. You may edit them to create more */

int main() {
    // TESTCASE 1
    Stack* s = new Stack();    
    bool correct = true;
    s->push(1);
    s->push(5);
    s->push(7);
    s->push(3);
    s->push(2);
    correct = correct && (s->peek() == 2);
    s->pop();
    correct = correct && (s->get_size() == 4);
    correct = correct && (s->peek() == 3);
    correct = correct && (s->get_min_element() == 1);
    delete s;
    if (correct) {
        cout << "Testcase 1 passed!" << endl;
    } else {
        cout << "Testcase 1 failed!" << endl;
    }

    // TESTCASE 2
    s = new Stack();
    correct = true;
    for(int i = 0; i < 100; i++) {
        s->push(100-i);
        
        correct = correct && (s->get_min_element() == 100-i);
    }
    correct = correct && (s->get_size() == 100);
    correct = correct && (s->peek() == 1);
    for(int i = 99; i >= 0; i--) {
        correct = correct && (s->get_min_element() == 100-i);
        s->pop();
    }
    delete s;
    if (correct) {
        cout << "Testcase 2 passed!" << endl;
    } else {
        cout << "Testcase 2 failed!" << endl;
    }

}

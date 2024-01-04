/* COL106 LAB TEST 2 Q1 : FIND NUMBER OF INVERSIONS */
/* Please do not include ANY headers in this file */
#include<string>
#include<iostream>
using namespace std;

// You can implement helper functions here

/* You need to find the number of inversions as defined in the
 problem statement given on Moodle */
    
// Given an array arr and its size n, return the number of inversions
int get_num_inversions(int arr[], int n){
    // Implement your code here
    return -1;
}

int main() {
    // TESTCASE 1
    int arr1[5] = {5,4,3,2,1};
    int n1 = 5;
    cout << "[TC1] Your Answer: " << get_num_inversions(arr1, n1) << endl;
    cout << "[TC1] Expected Answer: 10"  << endl;

    // TESTCASE 2 
    int arr2[5] = {1,2,3,4,5};
    int n2 = 5;
    cout << "[TC2] Your Answer: " << get_num_inversions(arr2, n2) << endl;
    cout << "[TC2] Expected Answer: 0"  << endl;

    // TESTCASE 3
    int arr3[5] = {1,2,5,4,3};
    int n3 = 5;
    cout << "[TC2] Your Answer: " << get_num_inversions(arr3, n3) << endl;
    cout << "[TC2] Expected Answer: 3"  << endl;

    return 0;
}
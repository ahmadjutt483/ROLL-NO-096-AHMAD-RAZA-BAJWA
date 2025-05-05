#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        data = value;
        left = right = nullptr;
        height = 1;
    }
};

// Get height of node
int getHeight(Node* node) {
    return (node == nullptr) ? 0 : node->height;
}

// Get balance factor
int getBalanceFactor(Node* node) {
    return (node == nullptr) ? 0 : getHeight(node->left) - getHeight(node->right);
}


#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node* prev;
    node* next;

    node() : val(0) , prev(nullptr), next(nullptr) {}
    node(int val) : val(val), prev(nullptr), next(nullptr) {}
    node(int val, node* prev, node* next) : val(val), prev(prev), next(next) {}
};

void solveCase() {
    int n; 
    cin >> n; 

    node* root = new node();
    node* leaf = root;

    while (n--) {
        int t;
        cin >> t;
        if (root->val == 0) root->val = t;
        else {
            if (t < root->val) {
                root->prev = new node(t, nullptr, root);
                root = root->prev;
            }
            else {
                leaf->next = new node(t, leaf, nullptr);
                leaf = leaf->next;
            }
        }
    }

    node* curr = root;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        solveCase();
    }
    
}
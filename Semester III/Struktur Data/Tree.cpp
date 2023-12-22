#include <iostream>
using namespace std;

// Definisi simpul pohon
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Definisi class Tree
class Tree {
private:
    TreeNode* root;

    // Fungsi rekursif untuk menyisipkan elemen ke dalam pohon
    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else if (value > node->data) {
            node->right = insert(node->right, value);
        }

        return node;
    }

    // Fungsi rekursif untuk mencari elemen dalam pohon
    bool search(TreeNode* node, int value) {
        if (node == nullptr) {
            return false;
        }

        if (value == node->data) {
            return true;
        } else if (value < node->data) {
            return search(node->left, value);
        } else {
            return search(node->right, value);
        }
    }

    // Fungsi rekursif untuk mencetak elemen pohon secara inorder
    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

public:
    // Konstruktor
    Tree() : root(nullptr) {}

    // Fungsi untuk menyisipkan elemen ke dalam pohon
    void insert(int value) {
        root = insert(root, value);
    }

    // Fungsi untuk mencari elemen dalam pohon
    bool search(int value) {
        return search(root, value);
    }

    // Fungsi untuk mencetak elemen pohon secara inorder
    void printInorder() {
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    Tree tree;

    // Menyisipkan elemen ke dalam pohon
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Mencetak elemen pohon secara inorder
    cout << "Inorder Traversal: ";
    tree.printInorder();

    // Mencari elemen dalam pohon
    int valueToSearch = 40;
    if (tree.search(valueToSearch)) {
        cout << valueToSearch << " ditemukan dalam pohon." << endl;
    } else {
        cout << valueToSearch << " tidak ditemukan dalam pohon." << endl;
    }

    return 0;
}

/* MARK: - SOLUTION ✨ */

#include "Daily_Coding_Problem.h"

//  * Definition for a binary tree node.
struct TreeNode { 
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// MARK: - Solution

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == NULL) return "";
        queue<TreeNode*> q;
        q.push(root);
        string result = "";
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node == NULL) {
                result += "null,";
                continue;
            }
            result += to_string(node->val) + ",";
            q.push(node->left);
            q.push(node->right);
        }
        return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data == "") return NULL;
        vector<string> nodes;
        stringstream ss(data);
        string node;
        while (getline(ss, node, ',')) {
            nodes.push_back(node);
        }
        TreeNode* root = new TreeNode(stoi(nodes[0]));
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (nodes[i] != "null") {
                node->left = new TreeNode(stoi(nodes[i]));
                q.push(node->left);
            }
            i++;
            if (nodes[i] != "null") {
                node->right = new TreeNode(stoi(nodes[i]));
                q.push(node->right);
            }
            i++;
        }
        return root;
    }
};

int main() {
    Codec codec;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    string serialized = codec.serialize(root);
    TreeNode* deserialized = codec.deserialize(serialized);
    printf("Serialized: %s \n", deserialized->left->val == 1 ? "✅" : "❌");
    printf("Deserialized: %s \n", deserialized->right->val == 3 ? "✅" : "❌");
    assert(deserialized->val == 2);
    assert(deserialized->left->val == 1);
    assert(deserialized->right->val == 3);
    return 0;
}

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;

/* MARK: - TESTS ✨ */

/*
    * 2
    * / \
    * 1   3
*/

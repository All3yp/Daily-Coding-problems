#include "Daily_Coding_Problem.h"

/* MARK: - SOLUTION ✨ */

// Cria uma Tree Node  (https://www.geeksforgeeks.org/binary-tree-set-1-introduction/)
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
        int count = 0; // contador de possibilidades
        bool isUnivalTree(TreeNode* root) { // função que verifica se a árvore é unival
            if (root == NULL) return true; // se a raiz for nula, retorna true
            if (root->left == NULL && root->right == NULL) { // se a raiz não for nula, mas os filhos forem nulos, retorna true
                count++; // incrementa o contador
                return true; // retorna true se a raiz não for nula e os filhos forem nulos
            }
            bool left = isUnivalTree(root->left); // chama a função isUnivalTree para o filho da esquerda
            bool right = isUnivalTree(root->right); // chama a função isUnivalTree para o filho da direita
            if (left && right) { // se os filhos forem unival
                if (root->left != NULL && root->val != root->left->val) return false; // se o filho da esquerda não for nulo e o valor da raiz for diferente do valor do filho da esquerda, retorna false
                if (root->right != NULL && root->val != root->right->val) return false; // se o filho da direita não for nulo e o valor da raiz for diferente do valor do filho da direita, retorna false
                count++; // incrementa o contador
                return true; // retorna true se os filhos forem unival
            }
            return false; // retorna false se os filhos não forem unival
        }
    private:
        bool isUnivalTree(TreeNode* root, int val) {
            if (root == NULL) return true;
            if (root->val == val) { // se o valor da raiz for igual ao valor passado
                return isUnivalTree(root->left, val) && isUnivalTree(root->right, val); // se o valor da raiz for igual ao valor passado, chama a função isUnivalTree para o filho da esquerda e para o filho da direita
            }
            return false;
        }
};

int main()
{
    Solution solution;
    TreeNode* root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(0);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(0);
    root->right->left->left = new TreeNode(1);
    root->right->left->right = new TreeNode(1);
    solution.isUnivalTree(root);
    std::cout << "Number of unival subtrees: " << solution.count << std::endl;
}
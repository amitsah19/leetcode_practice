class Solution {
public:
// not done by me 
    TreeNode* find(TreeNode* root, int start) {
        if (root == nullptr)
            return nullptr;

        if (root->val == start)
            return root;

        TreeNode* left = find(root->left, start);

        if (left != nullptr)
            return left;

        return find(root->right, start);
    }

    void markParent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>& parent) {
        if (root == nullptr)
            return;

        if (root->left)
            parent[root->left] = root;

        if (root->right)
            parent[root->right] = root;

        markParent(root->left, parent);
        markParent(root->right, parent);
    }

    int amountOfTime(TreeNode* root, int start) {

        TreeNode* first = find(root, start);

        unordered_map<TreeNode*, TreeNode*> parent;
        markParent(root, parent);

        unordered_set<TreeNode*> isInfected;

        queue<pair<TreeNode*, int>> q;

        q.push({first, 0});
        isInfected.insert(first);

        int ans = 0;

        while (!q.empty()) {

            auto [temp, level] = q.front();
            q.pop();

            ans = level;

            // Left child
            if (temp->left && isInfected.find(temp->left) == isInfected.end()) {

                q.push({temp->left, level + 1});
                isInfected.insert(temp->left);
            }

            // Right child
            if (temp->right &&
                isInfected.find(temp->right) == isInfected.end()) {

                q.push({temp->right, level + 1});
                isInfected.insert(temp->right);
            }

            // Parent
            if (parent.find(temp) != parent.end() &&
                isInfected.find(parent[temp]) == isInfected.end()) {

                q.push({parent[temp], level + 1});
                isInfected.insert(parent[temp]);
            }
        }

        return ans;
    }
};
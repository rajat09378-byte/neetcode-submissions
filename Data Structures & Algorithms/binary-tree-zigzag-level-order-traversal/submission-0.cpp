/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     if(root==NULL){
        return ans;

     }
     queue<TreeNode*>q;
     if(q.empty()){
        q.push(root);
     }
     while(!q.empty()){
        int size=q.size();
    
        vector<int>temp; 
        
        while(size>0){
             TreeNode* node=q.front();
              q.pop();
        temp.push_back(node->val);
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
        size--;}

        ans.push_back(temp);


        } 
        for(int i=1; i<ans.size(); i+=2){
            reverse(ans[i].begin(), ans[i].end());
        
        } 
        return ans;  

     
         

    }
};
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        vector<int> vis(n + 1, 0);
        vector<int> ans;
        int common = 0;

        for (int i = 0; i < n; i++) {

            vis[A[i]]++;
            if (vis[A[i]] == 2)
                common++;

            vis[B[i]]++;
            if (vis[B[i]] == 2)
                common++;

            ans.push_back(common);
        }

        return ans;
    }
};
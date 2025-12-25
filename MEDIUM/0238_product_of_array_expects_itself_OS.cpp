class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        // Compute prefix products
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Compute suffix products
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Final answer
        for (int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};

///TC-O(n) SC-O(n)






class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Compute prefix product and store in ans
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        // Compute suffix product and multiply with prefix in ans
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }

}
; //TC-O(n) and space complexIty-O(1)
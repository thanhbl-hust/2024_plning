class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        while(nums[ans] < k) ans += 1;
        return ans;
    }
};
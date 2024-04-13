class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& nums, int s) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= s) ans += 1;
        }
        return ans; 
    }
};
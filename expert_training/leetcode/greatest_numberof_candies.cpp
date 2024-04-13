class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> nums, int bonus) {
        vector<bool> ans;
        int maxVal = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxVal) maxVal = nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] + bonus >= maxVal){
                ans.push_back(true);
            }else ans.push_back(false);
        }
        return ans;
    }
};
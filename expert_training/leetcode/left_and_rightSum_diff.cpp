class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> sum;
        sum.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) sum.push_back(sum[sum.size() - 1] + nums[i]);

        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                ans.push_back(sum[sum.size() - 1] - nums[0]);
            }else if(i == nums.size() - 1){
                ans.push_back(sum[sum.size() - 2]);
            }else{
                int sumLeft = sum[i - 1];
                int sumRight = sum[sum.size() - 1] - sum[i];
                ans.push_back(abs(sumLeft - sumRight));
            }
        }

        return ans;
    }
};
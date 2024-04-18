class Solution {
public:

    int solve(int n){
        int ans = 0;
        while(n != 0){
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    int differenceOfSum(vector<int> nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) sum += nums[i] - solve(nums[i]);
        return abs(sum);
    }
};
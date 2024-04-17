class Solution {
public:
    string restoreString(string s, vector<int>& nums) {
        string ans = "";
        char cc[105];
        for(int i = 0; i < nums.size(); i++) cc[nums[i]] = s[i];
        for(int i = 0; i < nums.size(); i++) ans += cc[i];
        return ans;
    }
};
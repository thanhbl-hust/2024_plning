class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans = {0};
        for(int i = 0; i < gain.size(); i++) ans.push_back(ans[ans.size() - 1] + gain[i]);
        int maxVal = ans[0];
        for(int i = 1; i < ans.size(); i++) maxVal = max(maxVal, ans[i]);
        return maxVal;
    }
};
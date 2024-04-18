class Solution {
public:
    int maximumWealth(vector<vector<int>> ls) {
        int maxVal = -1;
        for(int i = 0; i < ls.size(); i++){
            int s = 0;
            for(int j = 0; j < ls[i].size(); j++) s += ls[i][j];
            maxVal = max(maxVal, s);
        }
        return maxVal;
    }
};
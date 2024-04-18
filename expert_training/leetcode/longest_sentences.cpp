class Solution {
public:
    int mostWordsFound(vector<string> ss) {
        int maxVal = 0;
        for(int i = 0; i < ss.size(); i++){
            int cnt = 0;
            for(int j = 0; j < ss[i].size(); j++){
                if(ss[i][j] == ' ') cnt += 1;
            }
            maxVal = max(maxVal, cnt + 1);
        }
        return maxVal;
    }
};
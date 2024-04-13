class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int st = 0;
        int cnt = 0;
        while(st < s.size()){
            if(s[st] == ' '){
                cnt += 1;
                if(cnt == k) break;
            }
            ans += s[st];
            st += 1;
        }
        return ans;
    }
};
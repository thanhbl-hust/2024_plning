class Solution {
public:
    bool find(char c, string s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c) return true;
        }
        return false;
    }
    bool check(string r, string s){
        for(int i = 0; i < s.size(); i++){
            if(!find(s[i], r)) return false;
        }
        return true;
    }
    int countConsistentStrings(string s, vector<string> ss) {
        int ans = 0;
        for(int i = 0; i < ss.size(); i++) ans += check(s, ss[i]);
        return ans;
    }
};
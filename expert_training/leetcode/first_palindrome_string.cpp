class Solution {
public:
    bool check(string s){
        int l = 0, r = s.size() - 1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l += 1;
            r -= 1;
        }
        return true;
    }
    string firstPalindrome(vector<string>& w) {
        for(int i = 0; i < w.size(); i++){
            if(check(w[i])) return w[i];
        }
        return "";
    }
};
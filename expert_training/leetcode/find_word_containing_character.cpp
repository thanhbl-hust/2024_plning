class Solution {
public:
    bool check(string s, char c){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string> w, char x) {
        vector<int> a;
        for(int i = 0; i < w.size(); i++){
            if(check(w[i], x)) a.push_back(i);
        }
        return a;
    }
};
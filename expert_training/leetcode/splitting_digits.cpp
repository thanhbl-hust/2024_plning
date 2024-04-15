class Solution {
public:
    int minimumSum(int num) {
        vector<int> dg;
        while(num != 0){
            dg.push_back(num % 10);
            num /= 10;
        }
        sort(dg.begin(), dg.end());
        return 10 * (dg[0] + dg[1]) + dg[2] + dg[3];
    }
};
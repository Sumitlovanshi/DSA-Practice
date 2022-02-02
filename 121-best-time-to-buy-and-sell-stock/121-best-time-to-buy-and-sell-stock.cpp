class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cm = INT_MAX;
        int gm =0;
        for(int x:prices){
            cm = min(x, cm);
            gm = max(gm, x - cm);
        }
        return gm;
    }
};
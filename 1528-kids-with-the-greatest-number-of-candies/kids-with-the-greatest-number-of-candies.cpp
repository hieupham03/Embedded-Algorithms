class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx =0 ;
        for (int i : candies) {
            if (i>maxx) {
                maxx = i;
            }
        }
        vector<bool> ans;
        for (int i: candies) {
            if (i+ extraCandies >= maxx) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
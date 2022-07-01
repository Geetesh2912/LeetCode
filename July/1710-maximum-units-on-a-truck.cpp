//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/maximum-units-on-a-truck/
//submission link: https://leetcode.com/submissions/detail/736042851/

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxes, int truckSize) {
        int ans=0; 
        int curr;

        sort(begin(boxes), end(boxes), [](auto &a1, auto &a2){return a1[1] > a2[1];});
        for (auto x: boxes) 
        {
            curr = min(x[0], truckSize);
            truckSize = truckSize-curr;
            ans = ans+ curr*x[1];
            if (!truckSize) 
                break;
        }
        return ans;
    }
};

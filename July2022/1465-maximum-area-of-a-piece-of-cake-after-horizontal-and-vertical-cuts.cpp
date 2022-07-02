//https://leetcode.com/submissions/detail/736508693/
//https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/


class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);

        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int last=0;
        long long int horiLen=INT_MIN;

        for(int i=0;i<horizontalCuts.size();i++)
        {
            horiLen=max(horiLen,abs(horizontalCuts[i]-last));
            last=horizontalCuts[i];
        }
        long long int vertiLen=INT_MIN;
        last=0; 
        for(int i=0;i<verticalCuts.size();i++)
        {
            vertiLen=max(vertiLen,abs(verticalCuts[i]-last));
            last=verticalCuts[i];
        }
        return (vertiLen*horiLen)%1000000007;
    }
};

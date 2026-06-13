class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int low = 0;
        int high = heights.size()-1;
        while(low < high)
        {
            int temp = min(heights[low],heights[high]);
            ans=max(ans,(high-low)*temp);
            if(heights[low]<heights[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return ans;
    }
};

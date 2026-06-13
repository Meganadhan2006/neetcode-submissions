class Solution {
public:
    int trap(vector<int>& height)
    {
        int n =height.size();
        int left = height[0];
        stack<int> st;
        st.push(height[n-1]);
        for(int i = n-2;i>=2;i--)
        {
            st.push(max(st.top(),height[i]));
        }
        int total = 0;
        for(int i = 1 ;i < n-1;i++)
        {
            int minimum = min(left,st.top());
            int temp =minimum - height[i];
            total+=max(0,temp);
            st.pop();
            left=max(left,height[i]);
        }
        return total;
    }
};

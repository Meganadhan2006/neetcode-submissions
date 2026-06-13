class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string ch:operations)
        {
            if(ch == "+")
            {
                 int x = st.top();
                 st.pop();
                 int y = st.top();
                 st.push(x);
                 st.push(x+y);
            }
            else if(ch == "C")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else if(ch == "D")
            {
                int x = 0;
                if(!st.empty())
                {
                    x = st.top();
                }
                x = x * 2;
                st.push(x);
            }
            else
            {
                int x = stoi(ch);
                st.push(x);
            }
        }
        int sum = 0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
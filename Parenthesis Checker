class Solution
{
    public:
    bool ispar(string x)
    {
        //CodeGenius
        stack<char>st;
        for(auto i:x){
            if(i=='('|| i=='[' || i=='{') st.push(i);
            else{
                 if(st.empty()) return false;
                if(i==')' && st.top()=='(') st.pop();
                else if(i==']' && st.top()=='[') st.pop();
                else if(i=='}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }

};

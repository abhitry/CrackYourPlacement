class Solution {
public:
    bool isValid(string st) {
        stack<char>s;int i=0;
        while(i<st.size())
        {
            if(st[i]=='[' || st[i]=='(' || st[i]=='{')
            {
                s.push(st[i]);
            }
            else
            {
                if(s.empty())return false;
                char c=s.top();
                if(st[i]==')' && c=='(')s.pop();
                else if (st[i]==']' && c=='[')s.pop();
                else if (st[i]=='}' && c=='{')s.pop();
                else return false;
            }
            
            i++;
        }
        if(s.empty())
        {return true;}
        return false;
    }
};

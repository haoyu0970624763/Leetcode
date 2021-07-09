class Solution
{
public:
    bool isValid(string s)
    {

        if (s.length() & 0x01)
        {
            return false;
        }
        else
        {
            std::stack<char> myStack;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    myStack.push(s[i]);
                    continue;
                }
                else
                {
                    if (myStack.empty())
                    {
                        return false;
                    }
                    else
                    {
                        if (s[i] == ')')
                        {
                            if (myStack.top() == '(')
                            {
                                myStack.pop();
                            }
                            else
                                return false;
                        }
                        else if (s[i] == ']')
                        {
                            if (myStack.top() == '[')
                            {
                                myStack.pop();
                            }
                            else
                                return false;
                        }
                        else if (s[i] == '}')
                        {
                            if (myStack.top() == '{')
                            {
                                myStack.pop();
                            }
                            else
                                return false;
                        }
                    }
                }
            }
            if (myStack.empty())
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
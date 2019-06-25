int Solution::braces(string A) {
    stack<char> s;
    auto i = 0;
    while(i<A.length())
    {
        char c = A[i];
        if (c == '(' || c == '+' || c == '*' || c == '-' || c == '/')
            s.push(c);
        else if (c == ')')
        {
            if (s.top() == '(')
                return 1;
            else
            {
                while (!s.empty() && s.top() != '(')
                    s.pop();
                s.pop();
            }
        }
        i++;
    }
    return 0;
}

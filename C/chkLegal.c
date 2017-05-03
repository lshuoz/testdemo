bool chkLegal(string A){
    stack<char> charStack;
    char* p = A.c_str();
    int index = 0;
    while(index < A.size()){
        switch(p[index]){
            case'(':
            case'[':
            case'{':
                charStack.push(p[index]);
                break;
            case')':
                if(!charStack.empty() && '(' == charStack.top())
                    charStack.pop();
                else
                    return false;
            case']':
                if(!charStack.empty() && '[' == charStack.top())
                    charStack.pop();
                else
                    return false;
            case'}':
                if(!charStack.empty() && '{' == charStack.top())
                    charStack.pop();
                else
                    return false;
            default:
                break;
        }
        ++index;
    }
    return true;
}

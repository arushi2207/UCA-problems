bool isValid(char* s) {
    char arr[10000];
    int top = -1;
    int n = strlen(s);
    for(int i = 0; i<n; i++){
        char c = s[i];

        if(c == '(' || c == '{' || c == '['){
            arr[++top] = c;
        }
        else{
              if(top>=0 && c=='}' && arr[top]=='{'){
                    top--;
                }else if(top>=0 && c==']' && arr[top]=='['){
                    top--;
                }else if(top>=0 && c==')' && arr[top]=='('){
                    top--;
                }else{
                    return false;
                }
        }
    }
    if(top==-1){
        return true;
    }else{
        return false;
        }
}
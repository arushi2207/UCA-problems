int evalRPN(char** tokens, int n) {
    int arr[10000];
    int top  = -1;
    for(int i = 0;i<n;i++){
        if(strcmp(tokens[i],"+")==0){
            arr[top-1] = arr[top-1] + arr[top];
            top--;
        }else if(strcmp(tokens[i],"-")==0){
            arr[top-1] = arr[top-1] - arr[top];
            top--;
        }else if(strcmp(tokens[i],"*")==0){
            arr[top-1] = arr[top-1] * arr[top];
            top--;
        }else if(strcmp(tokens[i],"/")==0){
            arr[top-1] = arr[top-1] / arr[top];
            top--;
        }else{
            arr[++top] = atoi(tokens[i]);
            printf("%d\n",arr[top]);
        }
    }
    return arr[0];
}
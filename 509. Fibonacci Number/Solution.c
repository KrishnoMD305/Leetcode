

int fib(int n){
    if(n==0){
        return 0;
    }
    int *fibo = (int*)malloc((n+1)*sizeof(int));
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n];
}

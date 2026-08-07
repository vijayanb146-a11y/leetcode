int pivotInteger(int n) {
    int* arr=(int *)malloc(n*sizeof(int));
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    int right=0;int left=0;
    int total=(n*(n+1))/2;

    for(int i=0;i<n;i++){
        right=right+arr[n-i-1];
        left=total-right+arr[n-i-1];
        if(left==right){
            return arr[n-i-1];
        }
    }
    return -1;
    
}
long long sumAndMultiply(int n) {
    int sum=0;long long x=0;long long i=1;
    while(n>0){
        if(n%10!=0){
            sum=sum+n%10;
            x=x+(n%10)*i;
            i=i*10;
        }
        n=n/10;
}
return x*sum;
}
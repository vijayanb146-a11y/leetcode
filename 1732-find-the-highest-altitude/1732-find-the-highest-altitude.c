int largestAltitude(int* gain, int gainSize) {
    int *prefarr=(int *)malloc((gainSize+1)*sizeof(int));
    for(int i=0;i<=gainSize;i++){
        if(i==0){
            prefarr[i]=0;
        }
        else{
        prefarr[i]=prefarr[i-1]+gain[i-1];
    }
    }
    int max=prefarr[0];
    for(int i=1;i<=gainSize;i++){
        if(prefarr[i]>max){
           max=prefarr[i];
        }
    }
    return max;

    
}
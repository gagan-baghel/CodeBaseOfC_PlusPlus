int middle(int A, int B, int C){
        int R=(A+B+C)-min(min(A,B),min(B,C))-max(max(A,B),max(B,C));
        return R;
    }.
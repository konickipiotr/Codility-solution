import java.util.Arrays;

class Solution {
    public int solution(int[] A) {
        int N = A.length;
        if(N < 1 || N > 100000)
            return 0;
        
        Arrays.sort(A);
        if(A[0] != 1)
            return 0;
        
        for(int i = 1; i<N; i++){
            if(A[i]<1 || A[i]>1000000000)
                return 0;
            if(A[i] != (A[i-1]+1))
                return 0;
        }                   
        return 1;
    }
}
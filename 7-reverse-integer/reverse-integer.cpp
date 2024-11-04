class Solution {
public:
    long reverse(int x) {
        long revno=0;
        while(x!=0){
            int ld=x%10;
            if ((revno > INT_MAX / 10) || (revno < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            revno=(revno*10)+ld;
            x=x/10;
        }
        return revno;
    }
    
};
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 ==0 && x!=0)){
            return false;
        }
        int dup=x;
        int y=0;
        while(x>y){
            int ld=x%10;
            y=(y*10)+ld;
        
            x=x/10;
        }
        return x == y || x == y / 10;
    
    }
    
};
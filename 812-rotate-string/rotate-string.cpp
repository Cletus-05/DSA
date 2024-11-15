class Solution {
public:
    bool rotateString(string s, string goal) {
        string double_s;
        double_s=s+s;
        if(s.length()!=goal.size()){
            return false;
        }

        int pos= double_s.find(goal);
        if(pos!=string::npos){
            return true;
        }else{
            return false;
        }
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>charmap;

        for(int i=0;i<s.length();i++){
            char sc=s[i];
            char tc=t[i];
            if(charmap.count(sc)){
                if(charmap[sc]!=tc){
                    return false;
                }
            }
                else{
                    for(auto &pair:charmap){
                        if(pair.second==tc) return false;
                    
                }
                charmap[sc]=tc; 
            }
        }
        return true;
    }
};
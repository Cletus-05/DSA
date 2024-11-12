#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int n=s.length();
        string result;
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n)break;
            j=i+1;
            while(j<n && s[j]!=' ')j++;
            string w=s.substr(i,j-i);
            if(result.size()==0) result=w;
            else result=w+ " " +result;
            i=j+1;
        }
        return result;
        
    }
};
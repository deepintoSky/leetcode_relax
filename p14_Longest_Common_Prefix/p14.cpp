class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        else if(strs.size()==0) return "";
        string str="";
        int n=strs[0].length();
        int i=1;
        int min_i=0;
        for(;i<strs.size();i++){
            if (strs[i].length()<n){
               n=strs[i].length(); 
               min_i=i;
            }
        }
        i=0;
        int j;
        str=strs[min_i];
        while(i<n){
            for(j=1;j<strs.size();j++)
            {
                if(strs[j-1][i]!=strs[j][i]){
                    str=strs[0].substr(0,i);
                    i=INT_MAX-1;
                    break;
                }
            }
            i++;
        }
        
        return str;
    }
};
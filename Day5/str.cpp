class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        for(int i=shifts.size()-1;i>0;i-- )
        {   
            shifts[i-1]=(shifts[i]+shifts[i-1])%26;
        }


        for(int i=0;i<s.length();i++)
        {
           shifts[i]%=26;  
         int n=s[i]-'a'+shifts[i];
          s[i]='a'+n%26; 
        
        }
        return s;
    }
};
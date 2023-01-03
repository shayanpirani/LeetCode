class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() == 0)
        {
            return true;
        }
        int j =0 ;
        for(int i=0; i<t.length();i++)
        {
            
            if(s[j] == t[i])
            {
                j++;
            }
            if(j >= s.length())
            {
                return true;
            }
        }
        return false;
    }
};

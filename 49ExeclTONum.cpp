
class Solution{
    public:
    int ExcelColumnNumber(string s)
    {
        // Your code goes here
        int result =0;
        int len=s.length();
        for(int i=0;i<len;i++){
            result=26*result + s[i]-'A'+1; 
        }
        return result;
    }
};

class Solution{
    public:
    string colName (long long int n)
    {
        // using yash sirs basic logic
      
        string str; // dynamic string
        while(n>0){
            int rem=n%26;
            if(rem==0){
                str='Z' + str ;//not append but prepend new char 
                n=(n/26)-1;
            }
            else{
                char add=rem-1 +'A';
                str= add + str ;
                n=n/26;
            }
        }
       return str;
    }
};

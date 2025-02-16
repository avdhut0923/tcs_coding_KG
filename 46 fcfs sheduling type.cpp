
class Solution{
public:
    int waitingTime(int N, int X){
        // code here
        if(X<=10){
            return (N-1)*(10-X);
        }
        else return 0;
    }
};

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n =arr.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
        for(int i=0;i<count;i++){
            arr[i]=0;
        }
        for(int i=count;i<n;i++){
            arr[i]=1;
        }
    }
};

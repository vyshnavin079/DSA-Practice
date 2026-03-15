
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        vector<int> newarr;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            newarr.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=newarr[i]){
                return false;
            }
        }
        return true;
    }
};

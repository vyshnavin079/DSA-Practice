class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int n= arr.size();
        int good = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] <= k)
            good++;
    }

    int bad = 0;
    for(int i = 0; i < good; i++) {
        if(arr[i] > k)
            bad++;
    }

    int ans = bad;

    for(int i = 1; i + good - 1 < n; i++) {
        
        if(arr[i - 1] > k)
            bad--;
        
        if(arr[i + good - 1] > k)
            bad++;
        
        ans = min(ans, bad);
    }

    return ans;
    }
};

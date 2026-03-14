/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        int n= arr.size();
        int freq=0;
        for(auto it = arr.begin();it != arr.end();it++){
            if(*it==x){
                freq++;
            }
        }
        return freq;
    }
};
class Solution {
  public:
    int countWords(string list[], int n) {
        // code here.
        unordered_map<string, int>mp;
        int count =0;
        for(int i=0;i<n;i++){
            mp[list[i]]++;
        }
        for(auto it:mp){
            if(it.second==2){
                count++;
            }
        }   
        return count;
    }    
};
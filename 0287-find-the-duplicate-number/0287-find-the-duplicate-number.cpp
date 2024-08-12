class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int  n=nums.size();
        int ans;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
         mp[nums[i]]++;
       }
       for(auto m:mp){
        if(m.second>1){
             ans=m.first;
        }
       }
return ans;
    }
};
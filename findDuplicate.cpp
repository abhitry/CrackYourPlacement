class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<bool>v(n+1);
        for(int i=0;i<n;i++)
        {
            v[i]=false;
        }
        for(int i=0;i<n;i++)
        {
            if(v[nums[i]]==true)return nums[i];
            v[nums[i]]=true;
        }
        return -1;
    }
};

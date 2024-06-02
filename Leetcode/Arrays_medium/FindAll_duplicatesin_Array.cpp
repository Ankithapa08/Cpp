//Leetcode Problem->442
vector<int> findDuplicates(vector<int>& nums) {
  int max=-1,i;
for(i=0;i<nums.size();i++){
if(nums[i]>max)
max=nums[i];
}
vector<int> ans;
for(i=0;i<max;i++){
ans.push_back(0);
}
for(i=0;i<nums.size();i++){
ans[nums[i]]++;
}
vector<int> ans2;
for(i=0;i<ans.size();i++){
  if(ans[i]==2)
            ans2.push_back(i);
        }
        return ans2;
    }


//Leetcode Problem->26
 int removeDuplicates(vector<int>& nums) {
   vector<int> expectedNums;
int i,j;
expectedNums.push_back(nums[0]);
for(i=1;i<nums.size();i++){
if(nums[i]==nums[i-1]){
}
else
expectedNums.push_back(nums[i]);
]
int n= expectedNums.size();
 for(i=0;i<n;i++){
nums[i]= expectedNums[i];
 } 
return n;
}
  

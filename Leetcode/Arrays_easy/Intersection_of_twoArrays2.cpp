//Leetcode->350
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
sort(nums1.begin(),nums1.end());
sort(nums2.begin(),nums2.end());
int i=0,j=0;
vector<int> res;
while(i<nums1.size() and j<nums2.size()){
  if(nums[i]==nums[j]){
  res.push_back(nums1[i));
 i++;
 j++;
}
else if(nums1[i]<nums2[j]){
 i++;
]
else if(nums1[i]>nums2[j]){
  j++;
   }
 }
return res;
}
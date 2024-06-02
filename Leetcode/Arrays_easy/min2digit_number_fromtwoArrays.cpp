//Leetcode Problem-> 2605
 int minNumber(vector<int>& nums1, vector<int>& nums2){
   int ans=0,first=0,second=0;
sort(nums1.begin(),nums1.end());
sort(nums2.begin(),nums2.end());
if(nums1[0]<nums2[0]){
 first=nums1[0];
 second=nums2[0];
 }
else{
first=nums2[0];
second=nums1[0];
}
for(int i=0,j=0;i<nums1.size() and j<nums2.size();){ 
if(nums1[i]==nums2[j]){
 first=0;
second=nums1[i];
break;
  i++;
  j++;
}
else if(nums1[i]<nums2[j]){
  i++;
}
else{
  j++;
  }
 }
ans=first*10+second;
return ans;
 }

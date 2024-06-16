//Leetcode Problem->409  https://leetcode.com/problems/longest-palindrome
  int longestPalindrome(string s) {
    int n=s.size(),count=0;
vector<int> v(52);
for(int i=0;i<n;i++){
if((int(s[i]))>96){
   v[(int(s[i])-'a')]++;
}
else{
  v[(int(s[i])-'A'+26)]++;
}
}
for(int i=0;i<52;i++){
if(v[i]%2==1){
count++;
}
if(count>0){
  count--;
}
return s.size()-1;
}

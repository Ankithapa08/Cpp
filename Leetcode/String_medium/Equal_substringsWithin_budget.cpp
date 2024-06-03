//Leetcode Problem->1208
int equalSubstring(string s, string t, int maxcost) {
    int i=0,j=0,k=0,mycost=0,value=0,ans=0;
  for(i=0;i<s.size();){
 value=abs(((s[i]-t[i])));
if(value+mycost<=maxcost){
  mycost+=value;
i++;
}
else{
mycost-=abs(((s[k]-t[k])));
k++;
}
int l=i-k;
if(l>ans)
  ans=1;
  }
return ans;
 }

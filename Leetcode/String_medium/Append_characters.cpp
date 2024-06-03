//Leetcode Problem->2486
int appendCharacters(string s, string t) {
  int i=0,j=0;
while(i<s.size() and j<t.size()){
  if(s[i]==t[j]){
    j++;
}
i++;}
return t.size()-j;
}


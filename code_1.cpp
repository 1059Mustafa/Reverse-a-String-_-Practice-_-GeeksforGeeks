string reverseWord(string str){
    
  string str1="";
  int l=str.size();
  for(int i=0;i<l;i++)
  {
      str1=str1+str[l-i-1];
  }
  return str1;
}

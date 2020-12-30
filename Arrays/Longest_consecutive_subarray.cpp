int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  int Max=0;
  int curMax=0;
  int curNum=0;
  set<int>hashSet;
  
  for(int i:arr)
    hashSet.insert(i);
  
  for(int i:arr){
      if(!hashSet.count(i-1)){
          curNum=i;
          curMax=1;
          
          while(hashSet.count(curNum+1)){
              curMax+=1;
              curNum+=1;
          }
          
          Max=max(Max,curMax);
          
          
      }
  }
  
 
  return Max;
  
  
}
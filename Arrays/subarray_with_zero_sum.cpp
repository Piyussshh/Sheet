bool subArrayExists(int arr[], int n)
{
    //Your code here
    
    unordered_map<int,bool> sumMap;
    
    int i,sum=0;
    
    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0 || sumMap[sum]==true){
            return 1;
        }
        sumMap[sum]=true;
    }
    return 0;
    
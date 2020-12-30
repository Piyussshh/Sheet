class Solution{
public:
    long long max(long long x, long long y){
    return x > y?x:y;
    }
    long long min(long long x, long long y){
    return x < y?x:y;
    }

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long maxVal=arr[0];
	    long long minVal=arr[0];
	    long long maxProd=arr[0];
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            long long temp;
	            temp=maxVal;
	            maxVal=minVal;
	            minVal=temp;
	        }
	        
	        maxVal=max(arr[i],maxVal*arr[i]);
	        minVal=min(arr[i],minVal*arr[i]);
	        
	        maxProd=max(maxProd,maxVal);
	    }
	    return maxProd;
	    
	}
};
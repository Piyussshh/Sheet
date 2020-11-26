#include<iostream>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    int i=0,j=0;
	    
	    for(i=n;i<m+n;i++){
	        arr1[i]=arr2[i-n];
	    }
	    sort(arr1,arr1+(m+n));
		for(i=n;i<m+n;i++){
	        arr2[i-n]=arr1[i];
	    }
	}
	    
	    
};


int main(){
	int n,m,i;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(i=0;i<m;i++){
		cin>>arr2[i];
	}
	Solution obj;
	obj.merge(arr1,arr2,n,m);
	for(i=0;i<n;i++){
		cout<<arr1[i]<< " ";
	}
	for(i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
	

}
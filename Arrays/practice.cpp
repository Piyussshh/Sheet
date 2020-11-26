#include<iostream>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    int i=0,j=0;                  //inserttion sort approach
	    
		for(i=0;i<n;i++){
				j=0;
				if(arr1[i]>arr2[j])
				{
					int temp=arr1[i];
					arr1[i]=arr2[j];
					arr2[j]=temp;

					for(j=0;j<m-1;j++){
						if(arr2[j]>arr2[j+1]){
							int temp2=arr2[j];
							arr2[j]=arr2[j+1];
							arr2[j+1]=temp;
						}
					}
				}

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
	cout<<endl;
	for(i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
	

}
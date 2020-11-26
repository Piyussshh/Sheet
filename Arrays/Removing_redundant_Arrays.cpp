#include<iostream>
using namespace std;
int main(){
	int a1[100],a2[100];
	int i,j,k=1;
    int n;
	bool match = false;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a1[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			if(a1[i]==a2[j]){
				match=true;
			}
		}
		if(!match){
			a2[j-1]=a1[i];
			k++;
			}
			match=false;
	}

	for(i=0;i<k-1;i++){
		cout<<a2[i]<<" ";
	}
    cout<<k-1;
}
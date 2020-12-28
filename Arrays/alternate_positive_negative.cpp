#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;

int arr[n];


for ( i = 0; i < n; i++)
{
    cin>>arr[i];

}

i=0;
int j=n;

while (i<j)
{
    while (i<=n-1 && arr[i]>0)
    {
        i++;
    }
    while (j>=0 && arr[j]<0)
    {
        j--;
    }
    if(i<j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    
}

// if(i==0 || i==n){
//     cout<<"no more switch"<<endl;
// }

int k=0;

while (k<n && i<n)
{
    int temp;
    temp=arr[k];
    arr[k]=arr[i];
    arr[i]=temp;

    i++;
    k+=2;
}

for ( i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}

}
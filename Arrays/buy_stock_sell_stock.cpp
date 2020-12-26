#include<iostream>
using namespace std;


int maxProfit(vector<int>& prices) {
        int i,Max=INT_MIN,Min=INT_MAX,profit=0;
        
    //     for(i=1;i<prices.size();i++){
    //         if(prices[i]<Min){
    //             Min=prices[i];
    //             Min_idx=i;
    //         }
    //     }
    //     for(i=0;i<prices.size();i++){
    //         if(prices[i]>Max && i>Min_idx){
    //             Max=prices[i];
    //             Max_idx=i;
    //         }
    //     }
        
    //     if(Max>0){
    //         profit=Max-Min;
    //     }
    //    return profit;
    profit=0;
    
    for(i=0;i<n;i++){
        Min=min(Min,prices[i]);
        profit=Max(profit,prices[i]-Min);
    }    

    // dont believe in terminals they are coorect and optimal as well

    return profit;
        
		
}

int main()
{
	vector<int> vec;
	int i;
	int n;

	cin>>n;
	for(i=0;i<n;i++){
		cin>>vec[i];
	}

	cout<<maxProfit(vec)<<endl;
}





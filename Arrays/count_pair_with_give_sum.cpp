// int getPairsCount(int arr[], int n, int k) {
//        unordered_map <int ,int> m;
//        for(int i=0;i<n;i++){
//            m[arr[i]]++;   //frequency counting;
//        }
//        int count=0;
       
//        for(int i=0;i<n;i++){
//           count+=m[k-arr[i]];
//           if(k-arr[i]==arr[i])
//           count--;
          
          
          
//        }
        
//         return count/2;
//     }
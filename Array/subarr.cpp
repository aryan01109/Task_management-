#include<iostream>
using namespace std;

void subarrays(int arr[],int n){
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++){
            cout<<arr[k];
           }
           cout<<",";
        }
        cout<<endl;
    }

}
//brute force approach
// O(n^3) time complexity
void max_sub_array1(int arr[],int n){
    int max_sum=INT_MIN;
     
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum= sum+arr[k];
                
               }cout<<sum<<",";
                max_sum=max(max_sum,sum);
               
                
            }cout<<endl;
        }
        
                 cout<<" Max sum is : "<<max_sum;
                
            
    }



//optimal approach
// O(n^2) time complexity
void max_sub_array2(int arr[],int n){
    int max_sum=INT_MIN;
     
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
           sum=sum +arr[j];
           max_sum=max(max_sum,sum);
           cout<<sum<<",";
        }cout<<endl;
    }
        
        cout<<" Max sum is : "<<max_sum;
                
            
    }

//kadane's algorithm
// O(n) time complexity

void kadane_algorithm(int arr[],int n){
    int max_sum=INT_MIN;
    int curr_sum=0;

    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        max_sum=max(max_sum,curr_sum);
    }
    cout<<" Max sum is : "<<max_sum;
}

// best buy and sell stock

void best_buy_sell_stock(int arr[],int n){
   int Bestbuy[10000];
   Bestbuy[0]=INT_MAX;
   for(int i=1;i<n;i++){
    Bestbuy[i]=min(Bestbuy[i-1],arr[i-1]);
    cout<<Bestbuy[i]<<",";
   }

    int max_profit=0;
    for(int i=0;i<n;i++){
        int current_profit=arr[i]-Bestbuy[i];
        max_profit=max(max_profit,current_profit);
        }
    
    cout<<" Max profit is : "<<max_profit;

}

//water trapper 
void water_trapper(int arr[],int n){

    int right_max[10000];
    int left_max[10000];
    left_max[0]=INT_MIN;
    cout<<left_max[0]<<",";

    for(int i=1;i<n;i++){
        left_max[i]=max(left_max[i-1],arr[i-1]);
        cout<<left_max[i]<<",";
    }
    cout<<endl;

    right_max[n-1]=INT_MIN;
    for(int i=n-2;i>0;i--){
        right_max[i]=max(right_max[i+1],arr[i+1]);
        cout<<right_max[i]<<",";
    }
    cout<<endl;
    int total_water=0;
    for(int i=0;i<n;i++){
        int water_level=min(left_max[i],right_max[i]);
        if(water_level>arr[i]){
            cout<<" at index "<<i<<" water trapped is : "<<water_level - arr[i]<<endl;
        }
        else{
            cout<<" at index "<<i<<" water trapped is : 0"<<endl;
        }
        water_level=min(left_max[i],right_max[i]);
        if(water_level>arr[i]){
            total_water+=water_level - arr[i];
        }
    }
    cout<<endl;
    cout<<" Water trapped total is : "<<total_water<<endl;



}
int main(){

    int arr[]={4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // subarrays(arr,n);
    // max_sub_array1(arr,n);
    // max_sub_array2(arr,n);
    // kadane_algorithm(arr,n);
    // best_buy_sell_stock(arr,n);
    water_trapper(arr,n);


    return 0;

}
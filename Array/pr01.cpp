#include<iostream>
using namespace std;

//find maximum element
void findMax(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;
}

//find minimum element
void findmin(int arr[], int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element is: "<<min<<endl;
}

//linear search
void find_key(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"Key "<<key<<" found at index "<<i<<endl;
            return;
        }
    }
    cout<<"Key "<<key<<" not found in the array"<<endl;
}

//reverse array
void reverse_arr(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//bubble sort
void sort_arr(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//binary search
void binary_search(int arr[], int n, int key){
    sort_arr(arr,n);
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            cout<<"Key "<<key<<" found at index "<<mid<<endl;
            return;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout<<"Key "<<key<<" not found in the array"<<endl;
}

//slection sort
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    cout<<"Selection sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//insertion sort
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Insertion sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={11,9,26,29,31};
    int n=sizeof(arr)/sizeof(int);

    findMax(arr,n);
    findmin(arr,n);
    find_key(arr,n,29);
    reverse_arr(arr,n);
    binary_search(arr,n,26);
    selection_sort(arr,n);
    insertion_sort(arr,n);

    return 0;
}
#include<iostream>
#include<vector>
class solution{
 public:
  void insertionSort(vector<int>&arr){
    int n=arr.size();
        for(int i=1;i<n;i++){
            int y=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>y){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=y;
        }
    }
}
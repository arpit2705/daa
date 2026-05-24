#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[], int start_index, int end_index, int key)
{
    while(start_index <= end_index)
    {
        int mid = start_index +(end_index - start_index)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start_index = mid+1;
        }
        else{
            end_index = mid-1;
        }
        }
    return -1;
}
int main()
{
    int n,key;
    printf("Enter the number of elemnts in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key that need to be searched:\n");
    scanf("%d",&key);
    int result = BinarySearch(arr,0,n-1,key);
    if(result == -1){
        printf("Elemnet not found in the array.\n");
    }
    else{
        printf("Element fount at the index %d.\n",result);
    }
}
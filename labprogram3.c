#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAXSIZE 30000
#define NTIMES 5000
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int b[MAXSIZE];
    i =low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k] = a[i];
            i++;
        } else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k] = a[j];
        j++;
        k++;
    }
    for(i = low;i<=high;i++){
        a[i] = b[i];
    }
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high){
        mid = low+(high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(){
    int a[MAXSIZE],i,n,k;
    clock_t start,end;
    double runtime =0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    for(k=1;k<=NTIMES;k++){
       srand(1);
       for(i=1;i<=n;i++){
        a[i] = rand();
       }
       start = clock();
       mergesort(a,1,n);
       end = clock();
       runtime = runtime+(double)(end-start)/CLOCKS_PER_SEC;
    }
    runtime = runtime /NTIMES;
    printf("\nSorted elements are:\n");
    for(i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }
    printf("Avergae time taken to sort %d elememts is %lf seconds.\n",n,runtime);
}
#include<stdio.h>

//mini
int min(int arr[],int n){
    int sm=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<sm)
        {
            sm=arr[i];
        }
    }
    return sm;
}

//max
int max(int arr[],int n){
    int big=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>big)
        {
            big=arr[i];
        }
    }
    return big;
}

//main
int main(){
    //input
    int n;
    scanf("%d",&n);
    //array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //calling mini function
    int mini=min(arr,n);
    //calling max function
    int maxi=max(arr,n);
    //printing
    printf("%d %d",mini,maxi);
    
return 0;
}
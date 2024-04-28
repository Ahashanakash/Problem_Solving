#include<stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }        
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i]==max)
        {
            printf("%d ",min);
        }
        else if (arr[i]==min)
        {
            printf("%d ",max);
        }
        else printf("%d ",arr[i]);
        
    }
    
    
return 0;
}
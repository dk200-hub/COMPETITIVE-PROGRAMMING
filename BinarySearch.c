#include<stdio.h>

int binary(int arr[],int start,int end,int tar)
{int mid =start+(end-start)/2;
    if (start<end)
    {
       if (arr[mid]==tar)
       {
         return mid;
       }
       if (arr[mid]>tar)
       {
        return binary(arr,mid-1,end,tar);
       }
       if (arr[mid]<tar)
       {
        return binary(arr,start,mid+1,tar);
       }
       
       
    }
}
int main()
{
    int arr[10],n,i,tar;
    printf("Enter");
    scanf("%d",&n);
    printf("Enter the Elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("ENTER TARGET\n");
    scanf("%d",&tar);
    int r= binary(arr,0,9,tar);
    if(r!=-1)
    {
        printf("%d is at %d ",tar,r);
    }
    else
    {
        printf(" %d is not found",tar);
    }
    
    
}
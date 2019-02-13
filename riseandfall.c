#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[]={1,0,0,0,1,1,0,1,0,0,1,0,1,1,0,1,1,1,0,0,1,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=0,f=0,l=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            printf("Voltage level: %d\n\t\t Falling edge detected\n\n",arr[i]);f++;
        }
        else if(arr[i+1]>arr[i])
        {
            printf("Voltage level: %d\n\t\t Rising edge detected\n\n",arr[i]);r++;
        }
        else if(arr[i+1]==arr[i])
        {
            printf("Voltage level: %d\n\t\t Level detected\n\n",arr[i]);l++;
        }


    }
    printf("Voltage level: %d\n\nRises=%d\tFalls=%d\tLevels=%d\t",arr[n-1],r,f,l);
    return 0;
}

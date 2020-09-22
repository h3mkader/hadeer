#include <stdio.h>
#include <stdlib.h>


int sum(int arr[], int size)
{   int sum=0;
    for(int i=0; i<size ;i++)
    {
       sum+=arr[i];

    }
return sum ;

}

int main()
{   int n=20;
    int arr[n], i;
    printf("Please enter a number.\n");
    for(i=0; i<n ; i++){
       scanf("%d",&arr[i]);
        for( int j=i-1 ;j>=0 ; j--){
           if (arr[i]==arr[j]){

            printf("This number already exists -_- .\n");
            n--;
            i--;
            break;
           }

        }

    }
   printf("sum=%d\n",sum(arr,n));
   for ( i =0; i<n ; i++){
    printf("  %d  \t", arr[i]);
   }


    return 0;
}

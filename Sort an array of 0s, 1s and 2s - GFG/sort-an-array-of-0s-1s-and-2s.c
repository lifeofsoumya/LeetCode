// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int zero = 0;
       int one = 0;
       int two=0;
       int count=0;
       while(count <n){
           if(a[count] == 0)
           zero++;
           
           if(a[count] == 1)
           one++;
           
           if(a[count] == 2)
           two++;
           count++;
       }
      for(int i=0;i<n;i++){
          if(zero != 0)
         {
             a[i]= 0;
              zero--;
         }
         else if(one != 0){
             a[i] = 1;
             one--;
         }
         else if(two !=0){
             a[i] = 2;
             two--;
         }
      }  
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
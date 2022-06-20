// { Driver Code Starts
//Initial Template for C

// C program for implementation of Bubble sort
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends
//User function Template for C


//Function to sort the array using bubble sort algorithm.
void bubbleSort(int arr[], int n)
{   
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++;
    }
}

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}  // } Driver Code Ends
//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
 int main(){
  int n,m,i,j,flag;
  printf("Enter the rows of array:\n");
  scanf("%d",&n);
    printf("Enter the column of array:\n");
      scanf("%d",&m);
  int arr[n][m];
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("Enter the elements of array[%d][%d]:",i+1,j+1); 
        scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(arr[i][j]!=arr[j][i]){
           flag=0;
            break;
        }
    }
}   
if(flag)  printf("symmetric") ;
     else    printf("Non-Symmetric");
          

  return 0;
}
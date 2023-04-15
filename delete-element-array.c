#include<stdio.h>
int main(){

    //input the array
    int n;
    scanf("%d", &n);
    int ar[n]; // akane insert korar jonno n+1 hoice
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int pos;
    scanf("%d", &pos);

    //moving to left

    for(int i=pos; i<n-1; i++){
        ar[i]=ar[i+1];
    }
  
    // display the array
    for(int i=0; i<n-1; i++){
        printf("%d ", ar[i]);
    }
          
  return 0;
}

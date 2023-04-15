#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int ar[n+1];
  for(int i=0; i<n; i++){

  scanf("%d", &ar[i]);
  }
   int pos, value;
   scanf("%d %d", &pos, &value);


   // moving to right

   for(int i=n; i<=pos+1; i--){
    ar[i]= ar[i-1];

   }

   // noton index a value add kora

   ar[pos]=value;

   // noton array ke display korano

   for(int i = 0; i<=n; i++){
    printf("%d ", ar[i]);
   }

  return 0;
}

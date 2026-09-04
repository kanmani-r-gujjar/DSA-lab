#include <stdio.h>

int main() {
   // Traversal
  int a[7]={1,2,4,3,9};
  int size=5;
  printf("Traversing: ");
  for(int i=0;i<size;i++){
      printf("%d ",a[i]);}
      
   //Linear Search
  int target=3;
  for(int i=0;i<size;i++){
      if(a[i]==target){
        printf("\nThe element %d is found at position %d",target,i+1);  
      }
  }
   //Maximum
   int max=a[0];
   for(int i=0;i<size;i++){
       if(a[i]>max){
         max=a[i];
       }
   }
    printf("\nMaximum element:%d",max);
    
   //Minimum
   int min=a[0];
   for(int i=0;i<size;i++){
       if(a[i]<min){
         min=a[i];
       }
   }
   printf("\nMinimum element:%d\n",min);
   
   //Insertion at begining
   int val=7;
   int pos=1;
   for(int i=size+1;i>=pos-1;i--){
       a[i+1]=a[i];
   }
   printf("After Insertion at begining:");
   a[pos-1]=val;
   for(int i=0;i<size+1;i++){
   printf(" %d",a[i]);}
   
   //Insertion at end 
   int val2=7;
   int pos2=7;
   for(int i=pos2;i>=pos2-1;i--){
       a[i+1]=a[i];
   }
   printf("\nAfter Insertion at end:");
   a[pos2-1]=val2;
   for(int i=0;i<pos2;i++){
   printf(" %d",a[i]);}
   
   //Deletion at begining
   int del_pos1=1;
   for(int i=del_pos1;i<7;i++){
       a[i-1]=a[i];
   }
   printf("\nAfter Deletion at begining:");
   for(int i=0;i<size+1;i++){
   printf(" %d",a[i]);}
   
   //Deletion at end
   int del_pos2=6;
   printf("\nAfter Deletion at end:");
   for(int i=0;i<del_pos2-1;i++){
   printf(" %d",a[i]);}
   
   //sum of all elements in array
   int sum=0;
   for(int i=0;i<size;i++){
    sum+=a[i];
   }
   printf("\nSum of all elements in array:%d",sum);
  return 0;
}






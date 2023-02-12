#include<stdio.h>
int partition(int a[],int lb,int ub)
{int start,end,temp;
int pivot=a[lb];
start=lb;
end=ub;
while(start<end){
    while(a[start]<=pivot){
        start++;
    }
while(a[end]>pivot){
    end--;
}
if(start<end){
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
}}
temp=a[lb];
a[lb]=a[end];
a[end]=temp;
return end;
}
int quick(int a[],int lb,int ub,int n){
    int loc;
  if(lb<ub){
      loc=partition(a,lb,ub);
      quick(a,lb,loc-1,n);
      quick(a,loc+1,ub,n);
  }}
 
  int main()
  {int n; 
  scanf("%d",&n);
  
  int a[n];
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  partition(a,0,n-1);
  quick(a,0,n-1,n);
   for(int i=0;i<n;i++){
      printf("%d ",a[i]);}
      
  }
  
  
      
      
      
  
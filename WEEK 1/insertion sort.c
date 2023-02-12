#include <stdio.h>
int N(int a[],int n){
    int j,temp;
for(int i=1;i<n;i++){
    temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;}
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int n;
     scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
    
    N(a,n);
    return 0;
}
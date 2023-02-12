/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
void s(int a[],int n){
    int min,temp,j;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }}
            if(min!=i){
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
                
            }
        }
        for(int i=0;i<n;i++){
            printf(" %d",a[i]);
        }
    }


int main()
{
int n=5;
int a[5];


s(a,n);
    
}

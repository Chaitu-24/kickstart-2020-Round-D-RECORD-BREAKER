#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    long int l;
    cin>>l;
for(long int x=0;x<l;x++){
long int n,i,j,m,c=0;
cin>>n;
long int a[n];

for(i=0;i<n;i++)
    cin>>a[i];
m=a[0];
if(n==1)
 printf("Case #%ld: 1\n",x+1);
 else{
if(a[0]>a[1])
    c++;
for(i=1;i<n-1;i++){
 if(m<a[i]&&a[i]>a[i+1])   
        c++;
 if(m<a[i])
    m=a[i];
}
if(a[n-1]>m){
    c++;
}
printf("Case #%ld: %ld\n",x+1,c);
}
    
}
}

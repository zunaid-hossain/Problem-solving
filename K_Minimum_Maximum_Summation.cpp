#include<stdio.h>
int main (){
int n,i,sum,min,max;
scanf("%d",&n);
int x[n];
i=0;
sum=0;
for(i=0;i<n;i++){
scanf("%d",&x[i]);
sum+=x[i];}
max=min=x[0];
for(i=0;i<n;i++){
max=(max>x[i])?max:x[i];
}
for(i=0;i<n;i++){
min=(min<x[i])?min:x[i];
}
printf("%d %d %d\n",min,max,sum);
return 0;}
#include<stdio.h>
#include<conio.h>
int getchange(int n,int c[3]);
int main()
{
int t,minchange;
int coins[]={1,3,4};	
printf("enter the amount");
scanf("%d",&t);
minchange=getchange(t,coins);
printf("no of coins %d",minchange);
}
int getchange(int n,int c[3])
{
int arr[n+1],i,s,coin=0,j;
for(i=0;i<=n;i++)
arr[i]=i;
for(i=0;i<3;i++)
{
for(j=1;j<=n;j++)
{
if(j>=c[i])
{
s=j-c[i];
coin++;
coin=coin+arr[s];
if(coin<arr[j])
arr[j]=coin;
coin=0;
}
}}
return arr[n];
}

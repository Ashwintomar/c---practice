#include <iostream> 
using namespace std;
void sort(int a[],int left,int right)
{
if(left>=right)
{
return;
}
int start=left; int end=right;
int mid=start+(end-start)/2; int pivot=a[mid];


while(start<=end)
{
while(a[start]<pivot)
{
start++;
}
while(a[end]>pivot)
{
end--;
}
int swap=a[start]; a[start]=a[end]; a[end]=swap; start++;
end--;
}
sort(a,start,right); sort(a,left,end);
}
int main()
{
int n;
cout<<"Enter value of n :  "; 
cin>>n;
int a[n];
cout<<"Enter the elements of array : "<<endl;
for(int i=0;i<n;i++)
{
 cin>>a[i];
}
cout<<"The sorted array : "<<endl;
sort(a,0,n-1); 
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}

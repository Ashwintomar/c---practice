#include<iostream>
using namespace std;
int BSrecursion(int arr[], int left, int right, int num)
{
    int middle;
    if(left>right)
        return 0;
    middle = (left+right)/2;
    if(arr[middle]==num)
        return (middle+1);
    else if(arr[middle]>num)
        BSrecursion(arr, left, middle-1, num);
    else if(arr[middle]<num)
        BSrecursion(arr, middle+1, right, num);

}
int main()
{
    int i, arr[10], num, pos;
    cout<<"Enter 10 element in sorted format"<<endl;
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout << "Enter term to search"<<endl;
    cin>>num;
    pos = BSrecursion(arr, 0, 9, num);
    if(pos==0)
        cout<<endl<<num<<" is Not in list"<<endl;
    else
        cout<<endl<<"Term found at :  "<<pos<<" position";
    cout<<endl;
    return 0;
}

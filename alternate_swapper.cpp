#include <iostream>

using namespace std;
void swap(int a,int b,int arr[])
{
    int temp=arr[a];
     arr[a]=arr[b];
     arr[b]=temp;
}
int main()
{
    int n;
    int arr[10];
    cout<<"Enter the length\n";
    cin>>n;
    cout<<"Enter the array\n";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];   
    
   }
   for(int i=0;i<n;i=i+2)
   {
       if(i<n-1)
       {
      
    swap(i,i+1,arr);
       }
   }
   
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   

    return 0;
}

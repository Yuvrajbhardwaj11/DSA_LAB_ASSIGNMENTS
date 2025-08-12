#include<iostream>
using namespace std ;
int a[100];
void reverse_array(){
int n;
cout<<"Enter the size of array"<<endl;
cin>> n ;
cout<<"Enter the element in array"<<endl;
for(int i=0;i<n;i++)
{cin>> a[i];}
cout<<"Reverse array is"<<endl;
for(int i=0;i<n/2;i++){
    int temp = a[i];
   a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;


}
 for(int i=0;i<n;i++){
    cout<<a[i]<<" "; }

}
int main (){
 reverse_array() ;

}
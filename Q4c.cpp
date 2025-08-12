#include<iostream>
using namespace std ;
int a[100][100];
int b[100][100] ;
void transpose_matrix(){
    int n,m ;
    cout<<"enter no. of rows"<<endl;
    cin>> n;
    cout<<"enter no. of column"<<endl;
    cin>> m;
    cout<<"Enter the element in matrix "<<endl;
    for(int i=0;i<n;i++){
       for(int j=0; j<m;j++){

            cin>>a[i][j];
} }
cout<<endl;
for(int i=0;i<n;i++){
       for(int j=0; j<m;j++){

            cout<<a[i][j]<<" ";}
            cout<<" "<<endl;
       } 

       cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        b[j][i]=a[i][j] ;
    }
  

} for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<< b[i][j]<<" "; 
    }  cout<<" "<<endl;}












}

int main () 
{ transpose_matrix();}
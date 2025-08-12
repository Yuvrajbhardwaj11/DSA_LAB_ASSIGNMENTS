#include<iostream>
using namespace std ;
int a[100][100];
int b[100][100] ;
int result[100][100];
void matrix_multiplication () {
    int n,m ;
    cout<<"enter no. of rows for first  matrix "<<endl;
    cin>> n;
    cout<<"enter no. of column for first matrix"<<endl;
    cin>> m;
    cout<<"Enter the element in matrix "<<endl;
    for(int i=0;i<n;i++){
       for(int j=0; j<m;j++){

            cin>>a[i][j];
} }

int q,r;
    cout<<"enter no. of rows for second  matrix "<<endl;
    cin>> q;
    cout<<"enter no. of column for second matrix"<<endl;
    cin>> r;
    cout<<"Enter the element in matrix "<<endl;
    for(int i=0;i<n;i++){
       for(int j=0; j<m;j++){

            cin>>b[i][j];
} }

if(m!=q){cout<<"matrix cannot my multiplied"<<endl;}
else {

for(int i=0;i<n;i++){
    for(int j=0;j<r;j++){
        for(int k=0;k<m;k++){
              result[i][j] += a[i][k] * b[k][j];
}
}
}
}
 

for(int i=0;i<n;i++){
       for(int j=0; j<r;j++){

            cout<<result[i][j]<<" ";
} 
cout<<endl;}
}



int main () {
    matrix_multiplication () ;
    return 0;
}
#include<iostream>
using namespace std ;
int a[] = {1,2,3,7,5};
int n = sizeof(a) / sizeof(a[0]);

int duplicate_element(int a[],int n){
for(int i=0;i<n;i++){
for(int j=i+1; j<n;j++){
   if(a[i]==a[j]){return i;}
}
} return -1;
}

int result = duplicate_element(a,n) ;

void Deletion_of_duplicate_element() {

if(result>=0){


for(int i=result;i<n;i++){    // Deletion of postion in Array 
    a[i]=a[i+1];
    
    }n--;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";    // printing of Array
}
 } else {cout<<"duplicate element not found "<<endl; 
    for(int i=0;i<n;i++){
    cout<<a[i]<<" "; }
    } }
int main () {
Deletion_of_duplicate_element();
}

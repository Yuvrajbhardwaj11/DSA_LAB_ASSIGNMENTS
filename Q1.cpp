#include<iostream>
using namespace std ;
int n;
int Arr[100];

void createArr(){
cout<<"enter size of Array  "<<endl;
cin>> n ;
cout<<"Enter the elements in Array"<<endl;
for(int i=0;i<n;i++)
cin>> Arr[i];
}

void Display (){
if(n==0){cout<<"array not created"<<endl;}
for(int i=0; i<n;i++)
cout<<Arr[i]<<endl; }

void insert() {
int key ;
cout<<"Enter element which u want to insert"<<endl;
cin>> key;
int pos ;
cout<<"enter at which postion u want to insert"<< endl;
cin>> pos ;
if(pos<0 || pos>n){ cout<<" invalid postion"<< endl;}
n++;
pos--;
for(int i=n;i>pos;i--){          // creting postion for inserting element 
Arr[i]=Arr[i-1];}
Arr[pos]=key;           // inserting key 
for(int i=0; i<n;i++) {   // printing of array
cout<< Arr[i]<<" " ;
}cout<<endl;
}

void Deletion() {
int pos ;
cout<<"Emter which postion u want do Delete"<<endl;
cin>> pos ;
pos--;
for(int i=pos;i<n;i++){    // Deletion of postion in Array 
    Arr[i]=Arr[i+1];
    
    }n--;
for(int i=0;i<n;i++){
    cout<<Arr[i]<<" ";    // printing of Array
}
}
  
void liner(){
int tar ;
cout<<"enter target value "<<endl;
cin>> tar ;
int flag =0;
for(int i=0 ;i<n;i++){
if(Arr[i]==tar){
    cout<<"target value is "<< tar << " and index is "<< i <<endl;

flag++; }

}if(flag==0){cout<<"target not found"<<endl;}
}

int main () {
     int value = 1;
     while(value<6) {

        cout<<"Enter 1 to create  array:  "<<endl;
        cout<<"Enter 2 to display array:  "<<endl;
        cout<<"Enter 3 to insert element in  array:  "<<endl;
        cout<<"Enter 4 to delete element in  array:  "<<endl;
        cout<<"Enter 5 to search "<<endl;
        cout<<"Enter 6 to exit"<<endl;
        
    cin>> value;

switch (value)
{
case 1: createArr();
    break;
case 2: Display();
    break;
case 3: insert();
    break;
case 4: Deletion();
    break;
 case 5: liner() ;  

    default:
    break;
}
     }
    

return 0;

}
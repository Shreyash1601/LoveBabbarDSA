#include<bits/stdc++.h>
using namespace std;
void Reverse(int A[],int n){
    int i=0,j=n-1,temp;
    while(i<j){
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<" "<<i+1<<endl;
        cin>>A[i];
    }
    cout<<"Array entered by you is"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Reversed array is"<<endl;
    Reverse(A,n);
     for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
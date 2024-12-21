#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,4,1,3,3,4};
    
    for(int i=0; i<8; ++i){
        
        int count=1;
        for(int j=i+1; j<8; ++j){
            
            if(arr[i]==arr[j]){
                arr[j]=-1;
               count++;
            }
        }
        if(arr[i]!=-1){
            cout<<"frequently "<<arr[i]<<" is "<<count<<endl;
        }
    }
}
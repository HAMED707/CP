#include<iostream>
#include<vector>



using namespace std;
void shifting0Two_PointerTechnique(int arr[],int size){
    

     int count = 0; 


    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

 
    while (count < size) {
        arr[count++] = 0;
    }
    
}
void  shifting0_CountingandDirectOutput(int arr[],int size){
    int cnt=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i])cout<< arr[i]<<" ";
        else{cnt++;}
    }
    for (int i = 0; i < cnt; i++) {
        cout << '0' << ' ';
    }
    
} 
int main(){
    int size;
    cin>>size;
 int arr[size];
 for (int i = 0; i < size; i++)
 {
    cin>>arr[i];
 }
 
// shifting0Two_PointerTechnique(arr,size);
// for (int i = 0; i < size; i++)
//  {
//     cout<<arr[i]<<" ";
//  }
 shifting0_CountingandDirectOutput(arr,size);

return 0;
}
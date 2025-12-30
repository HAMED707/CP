    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
        int students,puzzels,mx,mn,res=10001;
        cin>>students>>puzzels;
        int arr[puzzels];
        for (int i = 0; i < puzzels; i++){
            cin>>arr[i];}
            sort(arr,arr+puzzels);
        
        for (int d = 0; d <=(puzzels-students); d++)
        {
            mn=arr[d];
            mx=arr[d+students-1];
            res=min(res,mx-mn);
            //cout<<mx-mn<<" "<<res<<" "<<mx<<" "<<mn<<endl;
        }
        
        cout<<res;

    return 0;
    }
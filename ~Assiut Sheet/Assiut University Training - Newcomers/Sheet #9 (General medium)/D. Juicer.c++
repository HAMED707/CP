    #include<iostream>

    using namespace std;
    int main(){
    int orgs,fit,waste,ans=0,continer=0;
    cin>>orgs>>fit>>waste;
    while (orgs--)
    {
        int o;
        cin>>o;
        if(o<=fit){
            continer+=o;
            if(continer>waste){
                continer=0;
                ans++;
            }
        }
    }
    cout<<ans;
    }
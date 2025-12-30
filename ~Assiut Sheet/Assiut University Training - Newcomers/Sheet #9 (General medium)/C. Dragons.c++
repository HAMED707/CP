    #include<iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    int main(){
    int s,cnt,flg=0;
    cin>>s>>cnt;
    vector<pair<int ,int >>v(cnt);
for (int i = 0; i < cnt; i++)
{
    cin>>v[i].first>>v[i].second;
    
}
sort(v.begin(),v.end());

    for(int i=0;i<cnt;i++)
    {
        if(v[i].first<s){s+=v[i].second;}
        else {flg=1; break;}
    }
    if(flg==1)cout<<"NO";
    else cout<<"YES\n";
    return 0;
    }
#include<iostream>
#include<string>
using namespace std;
void draw(int n ,char c){
    if(n==0)return;
    cout<<c;
    draw(n-1,c);
}
void drawPyramid(int i,int n){
    if(i>n)return;
    draw(n-i,' ');
    draw(i*2-1,'*');
    cout<<endl;
    drawPyramid(i+1,n);
}
int main(){
  int x;
  cin>>x;  
    drawPyramid(1,x);
  
}
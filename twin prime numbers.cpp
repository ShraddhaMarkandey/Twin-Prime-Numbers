#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int n1,n2,check=0,check1=0;
cout<<"Enter First Number : "<<'\n';
cin>>n1;
cout<<"Enter Second Number : "<<'\n';
cin>>n2;
for(int i=2;i<=n1/2;i++){
    if(n1%i==0)
    {
        check=1;
    }
}
for(int i=2;i<=n2/2;i++)
{
    if(n2%i==0){
        check1=1;
    }
}
if(check1==0&&check==0)
{
    int diff;
    diff=abs(n1-n2);
    if(diff==2)
    {
      cout<<"Twin Prime Numbers"<<'\n';
    }
    else
    {
        cout<<"Not Twin Prime Numbers"<<'\n';
    }
}
  else{
    cout<<"Numbers are not prime"<<'\n';
  }
    return 0;
}

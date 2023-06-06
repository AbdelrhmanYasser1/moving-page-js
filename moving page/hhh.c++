#include<iostream.h>
int main (){
    int x,d1,d2,d4,d5;
    cout<<"enter number";
    cin>>x;
    d1=x/10000;
    d2=x%10000/1000;
    d4=x%10000%1000%100/10;
    d5=x%10000%1000%100%10;
    if (d1==d5 && d2==d4);
    {COUT<<X<<"NUMBER IS PALINDRUM";}
    else 
    {cout<<x<<"number is not palindrum";}
return 0;
}
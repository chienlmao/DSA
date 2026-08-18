#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >>a >>b >>c;
if (b+c>a && a+c>b && a+b>c && a>0 && b>0 && c>0){
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        cout<< "It is a right triangle";
    }
    else{
        cout<< "It is not a right triangle";
    }
}
else{
    cout<< "It is not a triangle";
}
}
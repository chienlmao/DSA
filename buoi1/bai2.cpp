#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
char a[100];
cin>>a;
for(int i=0; i<strlen(a); i++){
    a[i]=toupper(a[i]);
}
cout<<a<<endl;

for (int i=0; i<strlen(a); i++){
    a[i]=tolower(a[i]);
}
cout<<a<<endl;
}
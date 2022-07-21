#include<iostream>
using namespace std;

int main(){
    string ch="My name is kiran \0";
    char c[20]="My name is kiran \0";
    cout<<ch<<endl;
    cout<<c;
    return 0;
}
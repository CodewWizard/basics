#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    
    int a = 5;
    auto check = [=] (){
        a = 10;
    };
    check();
    cout<<a;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int rev=0;
    int n;
    cout<< "Enter a number:";
    cin>>n;
    while(n>0){
    int last=n%10;
    rev=rev*10 +last;
    n=n/10;
    }
    cout<< rev;
    

    return 0;
}
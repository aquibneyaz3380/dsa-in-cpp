// ARMSTRONG FOR 3 DIGITS.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum=0;
    int n;
    cout<<"enter a number:";
    cin>>n;
   int temp=n;
    while(n>0){
     int last=n%10;
     sum=sum+(last*last*last);
     n=n/10;
    }
    if(temp==sum){
        cout<<"Armstrong number"<<endl<<sum;
    }
    else{
        cout<<"Not an Armstrong number";
    }
}
// ARMSTRONG FOR N DIGITS
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int digits = 0;
    int sum = 0;

    // Count digits
    int temp2 = n;
    while(temp2 > 0) {
        digits++;
        temp2 = temp2 / 10;
    }

    // Armstrong calculation
    while(n > 0) {
        int last = n % 10;
        sum = sum + pow(last, digits);
        n = n / 10;
    }

    if(temp == sum) {
        cout << "Armstrong number";
    }
    else {
        cout << "Not an Armstrong number";
    }
}
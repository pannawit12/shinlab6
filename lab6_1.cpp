#include<iostream>
using namespace std;

int main(){
    int num=1,even=-1,odd=0;
    while(num!=0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num%2==0) even++;
        else odd++;
    }
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}

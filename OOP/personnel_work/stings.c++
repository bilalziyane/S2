#include <iostream>
#include <string>
using namespace std;
int main(){
    string test;
    cout << "what's your name :";
    cin >> test;
    cout << "your name is :" << test << endl ;
    cout << "size : " << test.size() << endl ;
    cout << "first letter " << test[0] << endl ;
}
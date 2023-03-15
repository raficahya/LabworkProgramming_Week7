#include <iostream>
#include <string>
using namespace std;

string stringFromRight(string st, int n){
    int length = st.length();
    return st.substr((length-n), n);
}

int main(){
    int n;
    string st;

    cout << "Input the number N!";
    cin >> n;
    cout << "Input the string!";
    getline (cin >> ws, st);

    string result = stringFromRight(st, n);
    cout << result;
}

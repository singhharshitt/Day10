#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool isPalindrome(const string &str) {
    string cleanedStr = "";
    for (char ch : str) {
        if (isalnum(ch)) { 
            cleanedStr += tolower(ch); 
        }
    }

    int left = 0;
    int right = cleanedStr.length() - 1;

    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    if(isPalindrome(str)){
        cout<<"True"<<endl;
    }else{
        cout<<"False";
    }
    return 0;
}

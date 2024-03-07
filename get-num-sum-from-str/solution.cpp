#include <iostream>
#include <string>
using namespace std;
long long solution(const string& str) {
    long long sum = 0;
    int currentNumber = 0;
    bool isNumber = false;

    for (char ch : str) 
    {
        if (isdigit(ch)) 
        {
            currentNumber = currentNumber * 10 + (ch - '0');
            isNumber = true;
        } 
        else if (isNumber)
        {
            
            sum += currentNumber;
            currentNumber = 0;
            isNumber = false;
        }
    }

    if (isNumber) {
        sum += currentNumber;
    }

    return sum;
}

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        cout<<solution(str)<<endl;
    }
    return 0;
}

链接：https://www.nowcoder.com/questionTerminal/e0480b2c6aa24bfba0935ffcca3ccb7b?f=discussion
来源：牛客网

#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch;
    int a, b;
    while (cin >> a >> ch >> b)
    {
        while (a != 1){
            if (b % (a - 1) == 0){
                cout << 1 << "/" << b / (a - 1) << "+";
                a = 1;
            }
            else{
                int c;
                c = b / a + 1;
                a = a - b%a;
                b = b*c;
                cout << 1 << "/" << c << "+";
                if (b%a == 0){
                    b = b / a;
                    a = 1;
                }
            }
        }
        cout << 1 << "/" << b << endl;
    }
    return 0;
}

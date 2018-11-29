#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(int x) {
    if (x < 0) return false;
    vector<int> intVec;
    int xTemp(x);
    while (xTemp) {
        intVec.push_back(xTemp % 10);
        xTemp = xTemp / 10;
    }
    int i(0), j(intVec.size() - 1);
    int flag(0);
    while (i <= j) {
        if (intVec[i] == intVec[j]) {
            ++i;
            --j;
        }
        else if (intVec[i] != intVec[j]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else if(flag == 0)
        return true;
}
int main() {
    int x(2);
    bool y = isPalindrome(x);
    cout << y;
    return 0;
}

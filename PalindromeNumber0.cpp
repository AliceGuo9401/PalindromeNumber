#include <iostream>

using namespace std;
/*start*/
bool isPalindrome(int x) {
    if (x < 0)
        return false;
    else if (x == 0)
        return true;
    else if (x > 0) {
        int reverseX(0);
        int xTemp = x;  /**/
        while (xTemp != 0) {
            if (reverseX <= 214748363 || (reverseX == 214748364 && xTemp % 10 <= 7)) {
                reverseX = reverseX * 10 + xTemp % 10;
                xTemp = xTemp / 10;
            }else
                return false;
        }
        if (reverseX == x)
            return true;
        return false;
    }
}
/*end*/
int main() {
    int x(-121);
    bool i = isPalindrome(x);
    cout << i;
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

inline int interval(int a, int b){
    int x = 0;
    x = a + rand() % (b - a + 1);
    return x;
}

int main(){
    double n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    int x = 0;
    for (int i = 0; i < 10000000; i++)
    {
        x = interval(1,6);
        switch(x){
            case 1:
                n1++;   break;
            case 2:
                n2++;   break;
            case 3:
                n3++;   break;
            case 4:
                n4++;   break;
            case 5:
                n5++;   break;
            case 6:
                n6++; break;
        }
    }
    cout << "Relatives frequency:" << endl;
    cout << "1      |      " << n1/10000000 << endl;
    cout << "2      |      " << n2/10000000 << endl;
    cout << "3      |      " << n3/10000000 << endl;
    cout << "4      |      " << n4/10000000 << endl;
    cout << "5      |      " << n5/10000000 << endl;
    cout << "6      |      " << n6/10000000 << endl;
}
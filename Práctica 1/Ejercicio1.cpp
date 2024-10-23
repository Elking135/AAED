#include <algorithm>
#include <iostream>

using namespace std;

inline void interval(int a, int b){
    int x = 0;
    x = a + rand() % (b - a + 1);
    cout << x << endl;
}
int main(){
    int a = 0, b = 0;
    cout << "Introduce a" << endl;
    cin >> a;
    cout << "Introduce b" << endl;
    cin >> b;
    interval(a,b);
}

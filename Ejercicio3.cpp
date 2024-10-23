#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

inline void interval(int a, int b){
    double x = 0;
    x = a + rand() * (b - a) / RAND_MAX + (double(rand()) / RAND_MAX);
    if(x>b)
        x=int(x);
    printf("%.2lf\n", x);
}

int main(){
    srand(time(nullptr));
    int a = 0, b = 0;
    cout << "Introduce a" << endl;
    cin >> a;
    cout << "Introduce b" << endl;
    cin >> b;
    interval(a,b);
}
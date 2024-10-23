#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;

inline double interval(int a, int b){
    double x = 0;
    x = a + rand() * (b - a) / RAND_MAX + (double(rand()) / RAND_MAX);
    if(x>b)
        x=int(x);
    return x;
}

int main(){
    srand(time(nullptr));
    double x = 0, sum = 0;
    for (int i = 0; i < 10000000; i++)
    {
        x = interval(0,1);
        sum += 4 * sqrt(1 - pow(x,2));
    }
    sum = sum / 10000000;
    cout << "The mean is " << sum << endl;
}
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

inline int ordered(int v[]){
    if(v[0] < v[1] && v[1] < v[2] && v[2] < v[3] && v[3] < v[4] && v[4] < v[5])
        return 1;
    else
        return 0;
}
int main(){
    srand(time(nullptr));
    int v[6] = {1,2,3,4,5,6}, cont = 0, i = 0;
    do{
        random_shuffle(v,v+6);
        if(ordered(v))
            cont++;
        i++;
    }while(i<10000000);
    cout << "There are " << cont << " permutations that are ordered" << endl;
}
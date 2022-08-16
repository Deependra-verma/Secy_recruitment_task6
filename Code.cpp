#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(0));
    int t,n,m;
    t = 12;
    ofstream output;
    output.open("cases.txt");
    output << t << endl;
    while (t--){
        m = rand()%200;
        n = rand()%250;
        if (n<m){
            n += m;
        }
        output << m << " " << n << endl;
    }
    return 0;
}
#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    
    int t = rnd.next(1, 1000);
    cout << t << endl;
    
    for (int tc = 0; tc < t; tc++)
    {
        int len = rnd.next(0, 49);
        
        cout << rnd.next(1, 9);
        for (int i = 0; i < len; i++)
        {
            cout << rnd.next(0, 9);
        }
        
        cout << endl;
    }
}
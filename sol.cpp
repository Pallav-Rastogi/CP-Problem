#include <bits/stdc++.h>
using namespace std;

int main(){
    int flag;
    int flag2;
    int t;
    cin >> t;
    
    for(int test=0;test<t;test++){
        
        char arr[100];
        cin >> arr;
        
        flag = 0;
        flag2 = 0;
        
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i] != '0')
            {
                if (flag != 0)
                {
                    cout << "NO" << endl;
                    flag2 = 1;
                    break;
                }
                flag = 1;             
            }
        
            else{
                flag = 0;                
            }        
        }
        
        if (flag2)
        {
            continue;
        }
        cout << "YES" << endl;      
        
    }
    
    return 0;
}
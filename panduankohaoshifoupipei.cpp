#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

//I guess i had do some changes
int main(){
    int n = 5;
    int a[] = {2, 1, 5, 3, 4};
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if ((a[i] > a[i+1]) && (a[i]-1 != a[i+1]))
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Legal";
    } else
    {
        cout << "Illegal";
    }
    system("PAUSE");    
    return 0;
}
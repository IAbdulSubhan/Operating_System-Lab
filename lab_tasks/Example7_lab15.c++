#include <iostream>
using namespace std;

int main()
{
    int list[]={0,5};
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(i==2 && list[j]==0)
            continue;
            else if(i==4 && list[j]==1)
            cout<<i<<endl;
            else
            cout<<" "<<i<<" "<<j;
        }
        
    }
    
    return 0;

}
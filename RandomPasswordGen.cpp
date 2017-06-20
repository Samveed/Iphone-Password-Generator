#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int j=0;
    for(int i=1;i<=(10+j);i++)
    {
        int digits=0;
        int pass=(rand()%100)*(rand()%100);
        int dup=pass;
        while(pass>0)
        {
            pass/=10;
            digits++;
        }
        if(digits!=4)
        {
            j++;
        }
        else
        {
            cout<<dup<<endl;
            break;
        }
    }
}


#include <iostream>

using namespace std;


bool dfs(const int u, const int tag);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int y;
        cin>>y;
        if(y<1952)
        {
            cout<<"Not Established"<<endl;
        }
        else if(y<1956)
        {
            cout<<"Nanjing College of Aviation Industry"<<endl;
        }
        else if(y<1993)
        {
            cout<<"Nanjing Aeronautical Institute"<<endl;
        }   
        else
        {
            cout<<"Nanjing University of Aeronautics and Astronautic"<<endl;
        }
    }

}


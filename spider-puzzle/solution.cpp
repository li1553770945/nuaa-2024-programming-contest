#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int n;
struct Point
{
    int x;
    int y;
    bool operator == (const Point & rhs)const{
        return x==rhs.x && y == rhs.y;
    }
    bool operator != (const Point & rhs)const{
        return !(*this == rhs);
    }

};
bool IsLegal(Point p)
{
    int x = p.x,y = p.y;
    if(p.x==0)
    {
        return p.y ==1;
    }
    if(x<1 || x >n || y<1 || y>n)
    {
        return false;
    }
    return true;
}

bool IsOneStep(Point p1,Point p2)
{
    int x1 = p1.x,x2 = p2.x;
    int y1 = p1.y,y2 = p2.y;
    if(p1==p2)
    {
        return false;
    }
    if(x1==0&&x2==1)
    {
        return true;
    }
    if(x2==0&&x1==1)
    {
        return true;
    }

    if(x1==x2)
    {
        return abs(y1-y2)==1;
    }

    if(y1==y2)
    {
        return abs(x1-x2)==1;
    }
    return false;
}

Point GetNextPoint(Point current,Point enemy)
{
    
    
    int x1 = current.x,y1 = current.y;
    int x2 = enemy.x,y2 = enemy.y;
    
    Point ans;
    
    int dx = abs(x1-x2);
    int dy = abs(y1-y2);
    if(dx<dy)
    {
        if(y2>y1)
        {
            ans.x = x1;
            ans.y = y1 + 1;
        }
        else
        {
            ans.x = x1;
            ans.y = y1 - 1;
        }
    }
    else
    {
        ans.x = x1 + 1;
        ans.y = y1;
    }
    return ans;

}
int main()
{

    cin>>n;
    Point self;
    Point enemy;
    for(int i=n-1;i>=1;i--)
    {
        cout<<i<<" "<<n<<endl;
        fflush(stdout);
        int temp;
        cin>>temp>>temp;
    }

    // (1,n)
    self.x = 0;
    self.y = 1;
    cout<<0<<" "<<1<<endl;
    fflush(stdout);
    cin>>enemy.x>>enemy.y; 

    if(IsOneStep(self,enemy))
    {
        cout<<enemy.x<<" "<<enemy.y<<endl;
        fflush(stdout);
        return 0;

    }

    self.x = 1;
    if(n%2==1)
    {
        self.y = enemy.y;
    }
    else
    {
        self.y = enemy.y;
        if(self.y==1)
        {
            self.y++;
        }
        else
        {
            self.y--;
        }
    }
    
    cout<<self.x<<" "<<self.y<<endl;
    fflush(stdout);

    for(int i=1;i<=3*n;i++)
    {
        cin>>enemy.x>>enemy.y;
        self = GetNextPoint(self,enemy);
        cout<<self.x <<" "<<self.y<<endl;
        fflush(stdout);
        if(self == enemy)
        {
            break;
        }
    }
    return 0;

    
}


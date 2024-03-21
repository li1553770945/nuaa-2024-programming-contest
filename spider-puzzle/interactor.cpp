#include "testlib.h"
#include <iostream>
 
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
Point GetNextPoint(Point current,Point solder)
{
    int dx[5] = {0,0,0,1,-1};
    int dy[5] = {0,1,-1,0,0};
    int x1 = current.x,y1 = current.y;
    int x2 = solder.x,y2 = solder.y;
    
    Point ans;
    if(x1==0)
    {
        ans.x = 1;
        for(int y=1;y<=n;y++)
        {
            
            ans.y = y;
            if(IsLegal(ans) && ans!=solder && !IsOneStep(ans,solder))
            {
                break;
            }
        }
        return ans;
    }
    else if(x1==1)
    {
        for(int i=1;i<=3;i++)
        {
            ans.x = x1 + dx[i];
            ans.y = y1 + dy[i];
            if(IsLegal(ans) && ans!=solder && !IsOneStep(ans,solder))
            {
                return ans;
            }

           
        }
        ans.x = 0;
        ans.y =1;
        return ans;
    }
    else
    {
       for(int i=1;i<=4;i++)
        {
            ans.x = x1 + dx[i];
            ans.y = y1 + dy[i];
            if(IsLegal(ans) && ans!=solder && !IsOneStep(ans,solder))
            {
                break;
            }
        }
        

    }
    return ans;

}

int main(int argc, char *argv[]) {
    setName("Interactor Spider Puzzle");
    registerInteraction(argc, argv);
 
    n = inf.readInt();
    cout<<n<<endl;
    Point last_a,last_b;
    last_a.x = n;
    last_a.y = n;

    last_b.x = n;
    last_b.y = n-2;
    for (int i = 1; i <= 3*n; i++) {
        
        Point a,b;  
        a.x = ouf.readInt();
        ouf.readSpace();
        a.y = ouf.readInt();
        ouf.readEoln();
        quitf(_wa, "You do not catch the spider in 3n steps!");
        if(!IsLegal(a))
        {
            quitf(_wa, "You move is not legal!");
        }

        if(!IsOneStep(a,last_a))
        {
            quitf(_wa, "You move is not one step!");
        }
        if(a == last_b)
        {
            quitf(_ok, "You have catched the spider");
        }
        else
        {
            b = GetNextPoint(last_b,a);
            cout << b.x << " " << b.y << endl;
            fflush(stdout);
        }

        last_a = a;
        last_b = b;
        
    }
 
    quitf(_wa, "You do not catch the spider in 3n steps!");
}
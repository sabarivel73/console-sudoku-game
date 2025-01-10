#include<bits/stdc++.h>
#include<windows.h>
#include<ctime>
using namespace std;
void fun(vector<char>& a)
{
    vector<char>b1;
    vector<char>b2;
    int s = 0;
    srand(time(NULL));
    vector<vector<int>>s1 = {{3,6,4},{7,2,8},{5,9,1}};
    vector<vector<int>>ms;
    for(int i=0;i<9;i++)
    {
        vector<int>a;
        int v = rand()%9;
        a.push_back(v);
        v = rand()%9;
        while(find(a.begin(),a.end(),v)!=a.end())
        {
            v = rand()%9;
        }
        a.push_back(v);
        ms.push_back(a);
    }
    sort(ms[0].begin(),ms[0].end());
    sort(ms[1].begin(),ms[1].end());
    sort(ms[2].begin(),ms[2].end());
    sort(ms[3].begin(),ms[3].end());
    sort(ms[4].begin(),ms[4].end());
    sort(ms[5].begin(),ms[5].end());
    sort(ms[6].begin(),ms[6].end());
    sort(ms[7].begin(),ms[7].end());
    sort(ms[8].begin(),ms[8].end());
    int j1 = 0;
    int j2 = 0;
    int j3 = 0;
    for(int i=0;i<9;i++)
    {
        if(s==0)
        {
            j1 = 0;
            j2 = 1;
            j3 = 2;
        }
        else if(s==9)
        {
            j1 = 2;
            j2 = 0;
            j3 = 1;
        }
        else if(s==18)
        {
            j1 = 1;
            j2 = 2;
            j3 = 0;
        }
        else if(s==27)
        {
            s1.clear();
            s1 = {{2,9,6},{7,5,3},{8,1,4}};
            j1 = 0;
            j2 = 1;
            j3 = 2;
        }
        else if(s==36)
        {
            j1 = 2;
            j2 = 0;
            j3 = 1;
        }
        else if(s==45)
        {
            j1 = 1;
            j2 = 2;
            j3 = 0;
        }
        else if(s==54)
        {
            s1.clear();
            s1 = {{1,4,8},{5,3,7},{9,6,2}};
            j1 = 0;
            j2 = 1;
            j3 = 2;
        }
        else if(s==63)
        {
            j1 = 2;
            j2 = 0;
            j3 = 1;
        }
        else if(s==72)
        {
            j1 = 1;
            j2 = 2;
            j3 = 0;
        }
        for(int i1=0;i1<3;i1++)
        {
            string g = to_string(s1[j1][i1]);
            a[i1+s] = g[0];
        }
        for(int i1=0;i1<3;i1++)
        {
            string g = to_string(s1[j2][i1]);
            a[i1+3+s] = g[0];
        }
        for(int i1=0;i1<3;i1++)
        {
            string g = to_string(s1[j3][i1]);
            a[i1+6+s] = g[0];
        }
        int v1 = ms[i][0];
        int v2 = ms[i][1];
        b1.push_back(a[v1+s]);
        b1.push_back(a[v2+s]);
        a[v1+s] = '.';
        a[v2+s] = '.';
        s+=9;
    }
    s = 0;
    for(int i=0;i<9;i++)
    {
        if(i==0)
        {
            cout<<"\t\t\t\t\t ___ ___ ___ ___ ___ ___ ___ ___ ___ "<<endl;
        }
        cout<<"\t\t\t\t\t|   |   |   |   |   |   |   |   |   |"<<endl;
        cout<<"\t\t\t\t\t| "<<a[0+s]<<" | "<<a[1+s]<<" | "<<a[2+s]<<" | "<<a[3+s]<<" | "<<a[4+s]<<" | "<<a[5+s]<<" | "<<a[6+s]<<" | "<<a[7+s]<<" | "<<a[8+s]<<" |"<<endl;
        cout<<"\t\t\t\t\t|___|___|___|___|___|___|___|___|___|"<<endl;
        s += 9;
    }
    int i1 = 1;
    while(i1<=18)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
        char v;
        s = 0;
        cout<<"Enter the "<<i1<<"-Position value : ";
        cin>>v;
        if(i1<3)
        {
            if(i1==1)
            {
                a[ms[0][0]] = v;
            }
            else
            {
                a[ms[0][1]] = v;
            }
        }
        else if(i1<5)
        {
            if(i1==3)
            {
                a[ms[1][0]+9] = v;
            }
            else
            {
                a[ms[1][1]+9] = v;
            }
        }
        else if(i1<7)
        {
            if(i1==5)
            {
                a[ms[2][0]+18] = v;
            }
            else
            {
                a[ms[2][1]+18] = v;
            }
        }
        else if(i1<9)
        {
            if(i1==7)
            {
                a[ms[3][0]+27] = v;
            }
            else
            {
                a[ms[3][1]+27] = v;
            }
        }
        else if(i1<11)
        {
            if(i1==9)
            {
                a[ms[4][0]+36] = v;
            }
            else
            {
                a[ms[4][1]+36] = v;
            }
        }
        else if(i1<13)
        {
            if(i1==11)
            {
                a[ms[5][0]+45] = v;
            }
            else
            {
                a[ms[5][1]+45] = v;
            }
        }
        else if(i1<15)
        {
            if(i1==13)
            {
                a[ms[6][0]+54] = v;
            }
            else
            {
                a[ms[6][1]+54] = v;
            }
        }
        else if(i1<17)
        {
            if(i1==15)
            {
                a[ms[7][0]+63] = v;
            }
            else
            {
                a[ms[7][1]+63] = v;
            }
        }
        else if(i1<19)
        {
            if(i1==17)
            {
                a[ms[8][0]+72] = v;
            }
            else
            {
                a[ms[8][1]+72] = v;
            }
        }
        for(int i=0;i<9;i++)
        {
            cout<<"\t\t\t\t\t|   |   |   |   |   |   |   |   |   |"<<endl;
            cout<<"\t\t\t\t\t| "<<a[0+s]<<" | "<<a[1+s]<<" | "<<a[2+s]<<" | "<<a[3+s]<<" | "<<a[4+s]<<" | "<<a[5+s]<<" | "<<a[6+s]<<" | "<<a[7+s]<<" | "<<a[8+s]<<" |"<<endl;
            cout<<"\t\t\t\t\t|___|___|___|___|___|___|___|___|___|"<<endl;
            s += 9;
        }
        b2.push_back(v);
        i1++;
    }
    if(b1==b2)
    {
        cout<<"You Won Buddy"<<endl;
    }
    else
    {
        cout<<"Try Again Buddy"<<endl;
    }
}
int main()
{
    vector<char>a(81,'.');
    fun(a);
    return 0;
}

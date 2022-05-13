#include<bits/stdc++.h>
using namespace std;
void spiralmatrix(int n)
{
                vector<vector<int>> ans (n, vector<int>(n));

    int dir=0;
    int left=0;
    int right=n;
    int top=0;
    int bot=n;
    int num=1;
    while(left<right and top<bot)
    {
        if(dir==0)
        {
            for(int i=left;i<right;i++)
            {
                ans[left][i]=num;
                num++;
            }
            dir+=1;
            top++;
        }
        if(dir==1)
        {
            for(int i=top;i<bot;i++)
            {
                ans[i][right-1]=num;
                num++;
            }
            dir+=1;
            right--;
            }
        
        if(dir==2)
        {
            for(int i=right-1;i>=left;i--)
            {
                ans[bot-1][i]=num;
                num++;
            }
            dir+=1;
            bot--;
        }
        if(dir==3)
        {
            for(int i=bot-1;i>=top;i--)
            {
                ans[i][left]=num;
                num++;
            }
            dir+=1;
            left++;
        }
    
    dir=dir%4;
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}


int main()
{
    int n=4;
    spiralmatrix(n);
}
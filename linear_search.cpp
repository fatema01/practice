#include<bits\stdc++.h>
using namespace std;
int main()
{
    int T,a[100],n,x,y,s=0;
    cin>>T;
    for(int i=1; i<=T; i++)
    {

        cout<<"Enter the number"<<endl;
        cin>>n;

        cout<<"enter the array element"<<endl;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];

        }
        cout<<"select the index"<<endl;
        cin>>x>>y;
        for(int i=x; i<=y; i++)
        {
            cout<<i;
            s=s+a[i];
        }

        cout<<"Case : "<< i <<" The sum of enter element : "<<s<<endl;
    }
    return 0;
}

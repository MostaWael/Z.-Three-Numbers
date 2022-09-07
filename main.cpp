#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    int x,z,sum=0;
    cin>>x>>z;

    int refZ=z;

    for(int i=0;i<=z;i++){
        for(int j=0,y=refZ;j<=refZ,y>=0;j++,y--){

            cout<<i<<" "<<j<<" "<<y<<endl;

            sum++;
        }
        refZ--;

        cout<<"-----------------"<<endl;

    }

    cout<<endl;
    cout<<"The Result : "<<sum<<endl;
    return 0;
}

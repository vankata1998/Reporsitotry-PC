#include <iostream>
using namespace std;
int main()
{
    int n,Sum=0;
    cin>>n;
    for (int i=10;i<n;i++)
    {
        Sum+=(i%100)/10+i%10;
    }
cout<<"Sum = "<<Sum<<endl;
}

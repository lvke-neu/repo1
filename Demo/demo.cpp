#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   vector<int> v1(10,100);
   vector<int> v2;
   v1=v2;
    cout<<v1<<endl;
    return 0;
}

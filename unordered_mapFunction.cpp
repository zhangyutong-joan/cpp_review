#include<map>
#include<unordered_map>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int,int> map={
        pair<int,int>(1,2),
        pair<int,int>(3,4)
    };
    //值传递遍历
    for(pair<int,int> kv:map){
            cout<<kv.first<<kv.second<<endl;
        }

    return 0;
}
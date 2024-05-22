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
    //判断key是否存在用count函数或者find
    cout<<"---------------------------"<<endl;
    int key=2;
    if(map.count(key)){
        cout<<key<<"是map的其中一个键"<<endl;
    }else{
        cout<<"map中没有值为"<<key<<"的键"<<endl;
    }


    return 0;
}
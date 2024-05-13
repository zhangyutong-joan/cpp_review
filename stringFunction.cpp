#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string a="ssfhdgr";
    string b="ss";
    //find()用法：在字符串a中找字串b，找到则返回子串出现的第一个位置下标
    cout << a.find(b) << endl;
    cout << (a.find("aaa")==string::npos)<< endl;//没找到则返回npos
    return 0;
}
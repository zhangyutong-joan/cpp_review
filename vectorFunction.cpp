#include<vector>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

void input(vector<int>& ls){
    cout<<"输入元素："<<endl;
    for(int i=0;i<ls.size();i++){
        cin>>ls[i];
    }
    cout<<"输入完成"<<endl;
}

void output(vector<int>& ls){
    int n=ls.size();

    for(int i=0;i<n-1;i++){
        cout<<ls[i]<<",";
    }
    cout<<ls[n-1]<<endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"数组大小n=";
    cin>>n;
    vector<int> ls(n);
    //输入
    input(ls);

    //一些常用的内置函数
    //1.最大值最小值
    int maxVal=*max_element(ls.begin(),ls.end());
    cout<<"数组最大值："<<maxVal<<endl;
    int minVal=*min_element(ls.begin(),ls.end());
    cout<<"数组最小值："<<minVal<<endl;
    //2.累加
    int sum=accumulate(ls.begin(),ls.end(),0); //要包含<numeric>头文件,3个参数，最后一个参数是累加和的初始值
    cout<<"数组求和: "<<sum<<endl;
    //3.排序
    sort(ls.begin(),ls.end());
    cout<<"排序后："<<endl;


    //输出
    output(ls);
    return 0;
}
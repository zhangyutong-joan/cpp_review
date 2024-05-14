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

// void input2(vector<vector<int>>& ls){
//     cout<<"输入元素："<<endl;
//     for(int i=0;i<ls.size();i++){
//         for(int j=0;j)
//         cin>>ls[i];
//     }
//     cout<<"输入完成"<<endl;
// }

void output2(vector<vector<int>>& ls){
    int n=ls.size();
    int m=ls[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++)
            cout<<ls[i][j]<<",";
        cout<<ls[i][m-1]<<endl;
    }
    
}
/*自定义排序函数
（目标：对 二维vector<vector> ls2中第二个元素进行排序）*/
static bool cmp(const vector<int>& a,const vector<int>& b){
    return a.back()<b.back();
 }
int main(int argc, char const *argv[])
{
    // int n;
    // cout<<"数组大小n=";
    // cin>>n;
    // vector<int> ls(n);
    // //输入
    // input(ls);

    // //一些常用的内置函数
    // //1.最大值最小值
    // int maxVal=*max_element(ls.begin(),ls.end());
    // cout<<"数组最大值："<<maxVal<<endl;
    // int minVal=*min_element(ls.begin(),ls.end());
    // cout<<"数组最小值："<<minVal<<endl;
    // //2.累加
    // int sum=accumulate(ls.begin(),ls.end(),0); //要包含<numeric>头文件,3个参数，最后一个参数是累加和的初始值
    // cout<<"数组求和: "<<sum<<endl;
    // //3.排序
    // sort(ls.begin(),ls.end());
    // cout<<"排序后："<<endl;
    // //输出
    // output(ls);

    cout<<"-----------二维------------"<<endl;
    //4.二维vector排序
    vector<vector<int>> ls2={{2,6},{1,5},{6,4},{5,8}};
    cout<<"排序前："<<endl;
    output2(ls2);
    sort(ls2.begin(),ls2.end());
    cout<<"按第一个关键字排序后："<<endl;
    output2(ls2);

    sort(ls2.begin(),ls2.end(),cmp);
    cout<<"按第二个关键字排序后："<<endl;
    output2(ls2);




    return 0;
}
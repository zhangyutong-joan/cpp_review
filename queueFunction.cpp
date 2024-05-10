#include <iostream>
#include <queue>
using namespace std;

int main(){
    //轮转数组
    int n;
    cout<<"n=";
    cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++){
        cout<<i<<"..";
        q.push(i);
    }
    cout<<endl;
    cout<<"入队ok"<<endl;
    // cout<<"q.front():"<<q.front()<<endl;
    // cout<<"q.back():"<<q.back()<<endl;
    // int f=q.front();
    // q.pop();
    // cout<<"pop一个后"<<endl;
    // cout<<"q.front():"<<q.front()<<endl;
    // cout<<"q.back():"<<q.back()<<endl;
    // cout<<"加上pop的"<<endl;
    // q.push(f);
    // cout<<"q.front():"<<q.front()<<endl;
    // cout<<"q.back():"<<q.back()<<endl;
    int k;
    cout<<"k=";
    cin>>k;
    for(int j=1;j<=k;j++){
        int item=q.front();
        cout<<item<<"-";
        q.pop();
        q.push(item);
        cout<<endl;
        cout<<"q.front():"<<q.front()<<endl;
        cout<<"q.back():"<<q.back()<<endl;
    }
    //输出看看
    vector<int> v(n);
    int i=0;
    for(;i<n;i++){
        v[i]=q.front();
        q.pop();
    }
    cout<<endl;
    for(i=0;i<n-1;i++){
        cout<<v[i]<<",";
    }
    cout<<v[n-1]<<endl;
    return 0;
}
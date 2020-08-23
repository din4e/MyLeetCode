#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<stack>
using namespace std;
struct Thing{
    int time;
    int ID; 
    int S;
    bool flag;
    vector<int> vec;
    Thing() {}
    Thing(int _t, int _id, int _s) :time(_t), ID(_id), S(_s), flag(false), vec(vector<int>()) {}
};
int main(){
    int N;
    int T;
    cin >> T; // 多少组测试数据
    for (int group = 0; group < T; group++){
        stack<Thing> sta;
        map<int, int > thingMap; // 自身需要多久
        map<int, int > realMap; // 对外需要多久
        cin >> N;
        for (int i = 0; i < N; i++){
        int t, e, s;
        cin >> t >> e >> s;
        Thing tmp_thing(t, e, s);
        if (sta.empty()){
            sta.push(tmp_thing);}
   else if (sta.top().ID != tmp_thing.ID)
   {
    auto tmp = sta.top();
    sta.pop();
    tmp.flag = true;
    tmp.vec.push_back(tmp_thing.ID);
    sta.push(tmp);

    sta.push(tmp_thing);
   }
   else if (sta.top().ID == tmp_thing.ID)
   {
    realMap[tmp_thing.ID] = tmp_thing.time - sta.top().time;
    if (sta.top().flag == false) // 无嵌套
    {
        auto tmp = sta.top();
        sta.pop();
     thingMap[tmp.ID] = tmp_thing.time - tmp.time;
    }
    else // 有嵌套的情况
    {
     auto tmp = sta.top();
     sta.pop();
     int time = tmp_thing.time - tmp.time;
     for (auto tmp_id : tmp.vec)
     {
      time -= realMap[tmp_id];
     }
     thingMap[tmp.ID] = time;
    }
   }
  }
  int max = -1;
  int max_id = -1;
  for (auto tmp : thingMap)
  {
   if (tmp.second > max)
   {
    max = tmp.second;
    max_id = tmp.first;
   }
   else if (tmp.second == max)
   {
    if (max_id > tmp.first)
    {
     max = tmp.second;
     max_id = tmp.first;
    }
   }
  }
  cout << max_id << endl;
    }
}
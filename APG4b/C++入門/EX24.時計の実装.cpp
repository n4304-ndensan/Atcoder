#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

struct Clock {
    int hour;
    int minute;
    int second;

    void set(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    string to_str(){
        string jikoku;
        if (hour / 10  <= 1){
            jikoku += "0" + to_string(hour);
        }
        else{
            jikoku += to_string(hour);
        }
        jikoku += ":";
        if (minute / 10  <= 1){
            jikoku += "0" + to_string(minute);
        }
        else{
            jikoku += to_string(minute);
        }
        jikoku += ":";
        if (second / 10  <= 1){
            jikoku += "0" + to_string(second);
        }
        else{
            jikoku += to_string(second);
        }
        return jikoku;
    }

    void shift(int diff_second) {
        int now_time, next_time;
        now_time = (hour*60*60) + (minute*60) + (second);
        next_time = now_time + diff_second;
        if(next_time < 0){
            next_time += 86400;
        }
        hour = next_time / (60 * 60);
        next_time = next_time - (hour * 60 * 60);
        minute = next_time / 60;
        next_time = next_time - (minute * 60);
        second =  next_time;
        if(hour >= 24) {
            hour -= 24;
        }
    }


};

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}

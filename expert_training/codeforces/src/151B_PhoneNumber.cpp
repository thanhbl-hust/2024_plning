/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

bool checkTaxi(string s){
  for(int i = 1; i < s.size(); i++){
    if(s[i] != '-' and s[i] != s[0]) return false;
  }
  return true;
}

bool checkPizza(string s){
  int a = stoi(s.substr(0, 1));
  int b = stoi(s.substr(1, 1));
  int c = stoi(s.substr(3, 1));
  int d = stoi(s.substr(4, 1));
  int e = stoi(s.substr(6, 1));
  int f = stoi(s.substr(7, 1));
  if(a > b and b > c and c > d and d > e and e > f) return true;
  return false;
}

void solve(){
  int num; cin >> num;
  vector<vector<int>> board(3, vector<int> (num, 0));
  string name[num];
  for(int i = 0; i < num; i++){
    int query; cin >> query >> name[i];
    for(int j = 0; j < query; j++){
      string s; cin >> s;
      if(checkTaxi(s)){
        board[0][i] += 1;
      }else if(checkPizza(s)){
        board[1][i] += 1;
      }else board[2][i] += 1;
    }
  }
  int max_taxi = *max_element(board[0].begin(), board[0].end());
  int max_pizza = *max_element(board[1].begin(), board[1].end());
  int max_girl = *max_element(board[2].begin(), board[2].end());
  vector<string> taxi;
  vector<string> pizza;
  vector<string> girl;

  for(int i = 0; i < num; i++){
    if(board[0][i] == max_taxi) taxi.push_back(name[i]);
    if(board[1][i] == max_pizza) pizza.push_back(name[i]);
    if(board[2][i] == max_girl) girl.push_back(name[i]);
  }

  cout << "If you want to call a taxi, you should call: ";
  for(int i = 0; i < taxi.size(); i++){
    if(i == taxi.size() - 1){
      cout << taxi[i] << '.';
      cout << endl;
    }else cout << taxi[i] << ", ";
  }

  cout << "If you want to order a pizza, you should call: ";
  for(int i = 0; i < pizza.size(); i++){
    if(i == pizza.size() - 1){
      cout << pizza[i] << '.';
      cout << endl;
    }else cout << pizza[i] << ", ";
  }

  cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
  for(int i = 0; i < girl.size(); i++){
    if(i == girl.size() - 1){
      cout << girl[i] << '.';
      cout << endl;
    }else cout << girl[i] << ", ";
  }
}

int main(){
  solve();
  return 0;
}
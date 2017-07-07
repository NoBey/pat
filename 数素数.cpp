/*
  题目描述
    令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有素数。

  输入描述:
    输入在一行中给出M和N，其间以空格分隔。

  输出描述:
    输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
*/
#include<iostream>
#include <cmath>
#include <queue>
using namespace std;
bool prime(int x)
{
     int y;
     for(y=2;y<=sqrt(x);y++)
         if (x%y==0)
            return false;
     return true;
}

int main()
{
  int M=0,N=0;
  queue<int> arr;
  cin>>M>>N;
  for (int ii=1; ii <= 10000; ii++) {
    if(prime(ii)){
      arr.push(ii);
    }
  }

  int i=0;
  bool bl=true;
  int num = N-M;
  while (M--) {
      arr.pop();
  }
  while (bl) {

    int tt = arr.front();
    i++;
    if(i>num){
      cout << tt ;
      break;
    }
    if(i%10!=0){
      cout << tt << ' ';
    }
    if(i%10==0){
      cout << tt << '\n';
    }
    arr.pop();

  }
}

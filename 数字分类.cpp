/*
   题目描述
      给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
      A1 = 能被5整除的数字中所有偶数的和；
      A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
      A3 = 被5除后余2的数字的个数；
      A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
      A5 = 被5除后余4的数字中最大数字。

   输入描述:
      每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

   输出描述:
      对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
      若其中某一类数字不存在，则在相应位置输出“N”。
*/
#include<iostream>
#include <queue>
using namespace std;
int main()
{
  int x=0,tmp=0,A1=0,A2=0,A3=0,A5=0;
  float A4=0;
  queue<int> a1,a2,a3,a4,a5;
  cin>>x;

  for (int i = 0; i < x; i++) {
    cin>>tmp;
    int o = tmp%5;
    switch (tmp) {
      case 0 :
        a1.push(tmp);
        break; // 可选的
      case 1  :
        a2.push(tmp);
        break; // 可选的
      case 2 :
        a3.push(tmp);
        break; // 可选的
      case 3  :
        a4.push(tmp);
        break; // 可选的
      case 4  :
        a5.push(tmp);
        break; // 可选的
      default : // 可选的
        break;
    }
  }

  while (a1.empty()==false) {
    int tmp=a1.front();
    a1.pop();
    if (tmp%2==0){
      A1+=tmp;
    }
  }

  while (a2.empty()==false) {
    int tmp = a2.front();
    a2.pop();
    bool p = true;
    if(p){
      A2+=tmp;
      p = false;
    }else{
      A2-=tmp;
      p = true;
    }
  }

  if (a3.empty()==false) {
    A3 = a3.size();
  }

  int a4l = a4.size();
  while (a4.empty()==false) {
    int tmp = a4.front();
    a4.pop();
    A4+=tmp;
  }
  A4 = A4/a4l;

  while (a5.empty()==false) {
    int tmp = a5.front();
    a5.pop();
    if (A4<tmp){
      A4 = tmp;
    }
  }



  if(A1==0){
    cout << 'N'+' ';
  }else{
    cout << A1 +' ';
  }

  if(A2==0){
    cout << 'N'+' ';
  }else{
    cout << A2+' ';
  }

  if(A3==0){
    cout << 'N'+' ';
  }else{
    cout << A3+' ';
  }

  if(A4==0){
    cout << 'N'+' ';
  }else{
    cout << A4+' ';
  }

  if(A5==0){
    cout << 'N'+' ';
  }else{
    cout << A5+' ';
  }
}

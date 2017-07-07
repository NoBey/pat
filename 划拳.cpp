#include <cstdio>

int main(int argc, char const *argv[]) {

  int n,a=0,b=0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int a1,a2,b1,b2;
    scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
    int sum = a1 + b1;
    if(a2==sum && b2!= sum){
      a++;
    }
    if(a2!=sum && b2== sum){
      b++;
    }
  }
  printf("%d %d\n", a, b);
  return 0;
}

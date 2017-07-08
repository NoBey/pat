#include <cstdio>
int main(int argc, char const *argv[]) {
  int n;
  int pa=0,pb=0,pp=0;
  int wina[100], winb[100];
  wina[0]=1;
  wina[1]=1;
  wina[2]=1;
  winb[0]=1;
  winb[1]=1;
  winb[2]=1;
  scanf("%d", &n);
  for(int i = 0; i<n; i++){
    char a,b;
    scanf("%c%c", &a, &b);
    if(a==b){
      pp++;
      continue;
    }
    if(a=='B'){
      if(b=='C'){
        pa++;
        wina[0]++;
      }
      if(b=='J'){
        pb++;
        winb[2]++;
      }
    }
    if(a=='C'){
      if(b=='B'){
        pb++;
        winb[0]++;
      }
      if(b=='J'){
        pa++;
        wina[1]++;
      }
    }
    if(a=='J'){
      if(b=='B'){
        pa++;
        wina[2]++;
      }
      if(b=='C'){
        pb++;
        winb[1]++;
      }
    }
  }

  printf("%d %d %d\n", pa, pp, pb);
  printf("%d %d %d\n", pb, pp, pa);

  if(wina[0]>wina[1] && wina[0]>wina[2]){
    printf("B ");
  }
  if(wina[1]>wina[0] && wina[1]>wina[2]){
    printf("C ");
  }
  if(wina[2]>wina[0] && wina[2]>wina[1]){
    printf("J ");
  }


  if(winb[0]>winb[1] && winb[0]>winb[2]){
    printf("B\n");
  }
  if(winb[1]>winb[0] && winb[1]>winb[2]){
    printf("C\n");
  }
  if(winb[2]>winb[0] && winb[2]>winb[1]){
    printf("J\n");
  }

  // printf("%d %d %d\n", &pb, %pp, &pa);
  return 0;
}

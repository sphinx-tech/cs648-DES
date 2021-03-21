#include<bits/stdc++.h>
using namespace std;
int main()
{
  char ch[100], chr[100];
  FILE *fi,*fo;
  fi = fopen("output.txt","r+");
  fo = fopen("output_clean.txt","w+");
  long i=0;
  while (i<400030)
  {
    fscanf(fi, "%s", ch);    
    if(ch[0]=='.'){
      fscanf(fi, "%s", chr);
      fprintf(fo, "%s\n", chr);
      i++;
    }
  }
  return 0;
}
//hqlifnlstomnuujnkpjgljsjppotgigg
//hqlifnlstomnuujnkpjgljsjppotgigg


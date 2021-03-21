#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
int ex[8][6] = {
    32, 1, 2, 3, 4, 5,
    4, 5, 6, 7, 8, 9,
    8, 9, 10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32, 1};
int main()
{
    // FILE *g,*f;
    // f = fopen("final.txt", "w+");
    // g = fopen("gamm.txt", "r+");
    ifstream ifile;
    ofstream ofile;
    //char ch[64]; // = {'1','0','1','1','0','1','1','0','0','0','1','0','0','0','1','1','0','1','1','0','1','0','0','1','0','1','1','0','1','0','1','1','0','1','0','0','0','1','0','1','1','1','0','0','1','0','1','0','0','1','1','0','0','1','0','0','0','1','1','0','1','1','1','1'};

    int chr[48];
    ofile.open("gamma.txt");
    ifile.open("reverse.txt");
    long int i = 0;
    // cout<< 1^1 << 1^0 << 0^1 <<1^1;

    while (i < 99999)
    {
        i++;
        string s, t;
        getline(ifile, s);

        //fscanf(g,"%s",ch);
        for (int m = 0; m < 8; m++)
        {
            for (int n = 0; n < 6; n++)
            {
                int sat = (s[ex[m][n] - 1] - 48);
                ofile << sat;
            }
        }
        ofile << "\n";
        getline(ifile, s);
        //     fprintf(f,"%s\n",chr);
    }
}

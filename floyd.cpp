#include <iostream>
#include <conio.h>
using namespace std;
void flds(int b[][7])
{
  int i, j, k;
  for (k = 0; k < 7; k++)
  {
    for (i = 0; i < 7; i++)
    {
      for (j = 0; j < 7; j++)
      {
        if ((b[i][k] * b[k][j] != 0) && (i != j))
        {
          if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
          {
            b[i][j] = b[i][k] + b[k][j];
          }
        }
      }
    }
  }
  for (i = 0; i < 7; i++)
  {
    cout << "\nMinimum Cost : " << i << endl;
    for (j = 0; j < 7; j++)
    {
      cout << b[i][j] << "\t";
    }
  }
}
int main()
{
  int b[7][7];
  cout << "Enter the values\n\n";
  for (int i = 0; i < 7; i++)
  {
    cout << "enter values for " << (i + 1) << " row" << endl;
    for (int j = 0; j < 7; j++)
    {
      cin >> b[i][j];
    }
  }
  flds(b);
  getch();
}
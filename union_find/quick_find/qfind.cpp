#include "uf.h"
#include <iostream>

int main()
{
  const int n = 10;
  UF uf = UF(n);
  int cmds[n][2] = 
  { {4,3},
    {3,8},
    {6,5},
    {9,4},
    {2,1},
    {8,9},
    {5,0},
    {7,2},
    {6,1},
    {1,0} };
  for (int i = 0; i < 10; i++){
    int p = cmds[i][0];
    int q = cmds[i][1];
    uf.unify(p, q);
  }
  for (int i = 0; i < 10; i++){
    std::cout << uf.get(i) << "\n";
  }
  return 0;
}


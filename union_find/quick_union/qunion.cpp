#include "uf.h"
#include <iostream>
#include <string>

int main()
{
  const int n = 10;
  UF uf = UF(n);
  
  // a test set of union commands
  int cmds[n][2] = {
    {4,3},
    {3,8},
    {6,5},
    {9,4},
    {2,1},
    {8,9},
    {5,0},
    {7,2},
    {6,1},
    {1,0}
  };
  
  // send UF instance each pair of union commands
  for (int i = 0; i < 10; i++)
  {
    uf.unify(cmds[i][0], cmds[i][1]);
  }

  // connection test
  std::cout << "Connection Tests...\n";
  for (int i = 0; i < 10; i++)
  {
    int l = cmds[i][0];
    int r = cmds[i][1];
    bool proof = uf.connected(l, r);
    std::string passes;
    if (proof == true)
    {
      passes = "true";
    } else
    {
      passes = "false";
    }
    std::cout << "connected(" << l  << "," << r << ") ... " << passes << "\n";

  }

  // failure test
  // 3 should not be in a connected component with 0 
  
  std::cout << "\nFailure Tests...\n";
  bool proof = uf.connected(3, 0);
  std::string passes;
  if (proof == false)
  {
    passes = "true";
  } else
  {
    passes = "false";
  }
  std::cout << "!connected(" << 0  << "," << 3 << ") ... " << passes << "\n";

  return 0;
}


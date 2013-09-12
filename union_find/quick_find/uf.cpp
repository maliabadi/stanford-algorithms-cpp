#include <iostream>
#include "uf.h"

UF::UF(int ne)
{
  n = ne;
  id = new int[10];
  for (int i = 0; i < n; i++)
  {
    id[i] = i;
  }
}

bool UF::connected(int p, int q)
{
  return id[p] == id[q];
}

void UF::unify(int p, int q)
{
  int qid = id[q];
  int pid = id[p];
  for (int i = 0; i < n; i++)
  {
    if (id[i] == pid)
    {
      id[i] = qid;
    }
  }
}

int UF::get(int i){
  return id[i];
}
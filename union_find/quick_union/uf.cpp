#include <iostream>
#include "uf.h"

UF::UF(int N)
{
  n = N;
  id = new int[10];
  for (int i = 0; i < n; i++)
  {
    id[i] = i;
  }
}

bool UF::connected(int p, int q)
{
  int left = root(p);
  int right = root(q);
  return left == right;
}

void UF::unify(int p, int q)
{
  int proot = root(p);
  int qroot = root(q);
  id[proot] = qroot;
}

int UF::get(int i){
  return id[i];
}

int UF::root(int p){
  int pc = p;
  while (pc != id[pc])
  {
    pc = id[pc];
  }
  return pc;
}
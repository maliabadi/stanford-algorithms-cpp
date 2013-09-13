#ifndef UF_QU_H_
#define UF_QU_H_

class UF
{
  private:
    int * id;
    int n;
  public:
    UF(int n);
    int root(int p);
    bool connected(int p, int q);
    void unify(int p, int q);
    int get(int i);
};

#endif
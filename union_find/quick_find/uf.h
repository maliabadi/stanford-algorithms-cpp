#ifndef UF_H_
#define UF_H_

class UF
{
  private:
    int * id;
    int n;
  public:
    UF(int n);
    bool connected(int p, int q);
    void unify(int p, int q);
    int get(int i);
};

#endif
void func_003D7650(unsigned int *arg0, int arg1);
void func_003D7678(unsigned int *arg0, int arg1);
extern int func_003D9FC8(unsigned int);
int func_003D76E0(unsigned int a);
typedef struct 
{
  unsigned int unk0;
  int unk4;
  int unk8;
  int unkC;
} S003D77E0;
extern void func_003D7F00(void);
void func_003D77E0(S003D77E0 *arg0, int arg1, int arg2, int arg3)
{
  if (arg0->unk0 & 0x100)
  {
    func_003D7F00();
  }
  arg0->unk8 = arg3;
  arg0->unk4 = arg2;
  arg0->unkC = arg1;
}


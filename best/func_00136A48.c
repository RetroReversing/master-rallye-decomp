#include "context.h"
extern void func_001D4040(void *arg0, const char *arg1);
void func_0016D178(void *arg0, f32 *arg1);
extern char D_0044A890[];
extern char D_0044CF68[];
void *func_00136A48(void *arg0)
{
  void **new_var2;
  s32 sp[4];
  int new_var;
  func_001D4040(sp, D_0044A890);
  new_var = 2;
  ((s32 *) arg0)[0] = -1;
  ((s32 *) arg0)[1] = sp[0];
  ((s32 *) arg0)[new_var] = (s32) D_0044CF68;
  ((s32 *) arg0)[0x68 / 4] = 1;
  ((s32 *) arg0)[0x6C / 4] = 10;
  ((s32 *) arg0)[0x70 / 4] = 3;
  ((s32 *) arg0)[0x14 / 4] = (((s32 *) arg0)[0x0C / 4] = 0);
  ((s32 *) arg0)[0x10 / 4] = 0;
  ((s32 *) arg0)[0x18 / 4] = 0;
  ;
  ((s32 *) arg0)[0x1C / 4] = 0;
  ((s32 *) (*(&arg0)))[0x20 / 4] = 0;
  ((s32 *) (*(&arg0)))[0x24 / 4] = 0;
  ((s32 *) (*(&arg0)))[0x30 / 4] = (((s32 *) (*(&arg0)))[0x28 / 4] = 0);
  ((s32 *) (*(&arg0)))[0x2C / 4] = 0;
  ((s32 *) (*(&arg0)))[0x54 / 4] = 3;
  ((s32 *) (*(&arg0)))[0x58 / 4] = 3;
  ((s32 *) (*(&arg0)))[0x5C / 4] = 3;
  ((s32 *) (*(&arg0)))[0x60 / 4] = 3;
  ((s32 *) (*(&arg0)))[0x64 / 4] = 3;
  return *(&arg0);
}

extern void *func_001E3820(s32, s32, void *);
void func_001A5618(void *arg0, s32 arg1);
extern char D_00449E38[];
extern char D_0044D0A8[];
void *func_00130A70(void *arg0);

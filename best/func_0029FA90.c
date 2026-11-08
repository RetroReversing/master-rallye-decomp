extern int D_0043C3B0[];
void func_003F0B30(int arg0, int arg1, int arg2);
extern int func_00297500(void);
extern int func_002971B0(int);
extern void func_0029FE48(void *, void *, int, int, int *);
void func_0029FDA0(void *arg0, void *arg1);
extern void *D_0044DCD8;
extern void *D_0047CA78;
extern int D_00494BF8;
void *func_0029FA90(void *arg0)
{
  void *new_var;
  *((int *) (((char *) arg0) + 4)) = 0;
  *((void **) (((char *) arg0) + 8)) = &D_0044DCD8;
  {
    void *v = D_00494BF8;
    void *vt = &D_0047CA78;
    *((void **) (((char *) arg0) + 8)) = vt;
    *((void **) (((char *) arg0) + 4)) = v;
    *((int *) (((char *) arg0) + 0)) = -1;
  }
  *((int *) (((char *) arg0) + 0x20)) = 3;
  new_var = arg0;
  *((int *) (((char *) arg0) + 0xC)) = 0;
  *((int *) (((char *) arg0) + 0x10)) = 0;
  *((int *) (((char *) arg0) + 0x14)) = 0;
  *((int *) (((char *) new_var) + 0x18)) = 3;
  *((int *) (((char *) arg0) + 0x24)) = 3;
  *((int *) (((char *) arg0) + 0x1C)) = 3;
  *((int *) (((char *) arg0) + 0x28)) = 0;
  *((int *) (((char *) arg0) + 0x2C)) = 0;
  return arg0;
}

void func_0029FA68(void *arg0, void *arg1, void *arg2);

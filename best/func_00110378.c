extern char D_00446528;
extern char D_00446540;
extern void *D_00428F24;
extern void func_003F9698(char *, char *);
extern s32 func_002C20D0(void);
extern void func_002C39D8(s32);
extern s32 func_002C2EE0(void);
extern void func_00110098(void);
void func_00110378(void)
{
  void *obj;
  void *new_var;
  void **vt;
  func_003F9698(&D_00446528, &D_00446540);
  func_002C39D8(func_002C20D0());
  if (D_00428F24 == 0)
  {
    func_002C39D8(func_002C2EE0());
  }
  obj = D_00428F24;
  obj = *((void **) obj);
  vt = obj;
  {
    void (*f)(void *, s32) = (void (*)(void *, s32)) vt[15];
    new_var = obj;
    f(((char *) new_var) + (*((s16 *) (((char *) vt) + 0x38))), 1);
  }
  func_00110098();
  func_00110098();
  {
    void **vt2 = *((void **) new_var);
    void (*f)(void *) = (void (*)(void *)) vt2[11];
    f(((char *) new_var) + (*((s16 *) (((char *) vt2) + 0x28))));
  }
  {
    void **vt2 = *((void **) new_var);
    void (*f)(void *) = (void (*)(void *)) vt2[7];
    f(((char *) new_var) + (*((s16 *) (((char *) vt2) + 0x18))));
  }
}


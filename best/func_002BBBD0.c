extern void *func_002BFBD8(s32 arg0, s32 arg1);
extern void func_003F9698(char *fmt, ...);
extern char D_00480270[];
typedef struct 
{
  u8 pad0[8];
  struct 
  {
    u8 pad0[0x78];
    s16 unk78;
    u8 pad7A[2];
    s32 (*unk7C)(void *arg);
  } *unk8;
  u8 padC[4];
  s32 unk10;
} BBC58_Obj;
typedef struct 
{
  s32 v;
} __attribute__((packed)) UnalignedS32;
s32 func_002BBC58(BBC58_Obj *arg0, s32 arg1);
extern s32 func_002BB070(void *arg0);
extern u8 D_00428978[];
extern char D_00480238[];
s32 func_002BBBD0(void *arg0, s32 arg1)
{
  s32 var_s2;
  s32 new_var2;
  long long new_var3;
  s32 new_var;
  u8 *entry;
  u8 *ptr;
  new_var3 = 0;
  new_var = func_002BB070(D_00428978);
  var_s2 = new_var3;
  if (new_var != new_var3)
  {
    new_var2 = arg1;
    entry = D_00428978 + (new_var2 * 12);
  }
  else
  {
    entry = NULL;
  }
  if (entry != NULL)
  {
    ptr = *((u8 **) entry);
    var_s2 = ((UnalignedS32 *) (ptr + 8))->v;
  }
  else
  {
    func_003F9698(D_00480238);
  }
  return var_s2;
}


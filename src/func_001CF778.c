extern void D_002AD390(s32);
extern void D_0044DCD8;
typedef struct 
{
  char unk0[0x8];
  void *vtable;
} UnkCFE90;
void func_001CFE90(void *arg0, s32 arg1);
typedef struct 
{
  char unk0[0xB8];
  void *unkB8;
} UnkCF778;
void func_001CF778(void *arg0, s32 arg1, s32 arg2)
{
  UnkCF778 *sp;
  s32 *ptr = (s32 *) (((char *) ((UnkCF778 *) arg0)->unkB8) + (arg2 * 4));
  *((s32 *) (((char *) ((UnkCF778 *) arg0)->unkB8) + (arg2 * 4))) = arg1;
}

typedef struct 
{
  char unk0[0xB0];
  char *unkB0;
} UnkCF718;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
void func_001CF718(void *arg0, Vec3 *arg1, s32 arg2);
typedef struct 
{
  char unk0[0xB4];
  char *unkB4;
} UnkCF748;
void func_001CF748(void *arg0, Vec3 *arg1, s32 arg2);

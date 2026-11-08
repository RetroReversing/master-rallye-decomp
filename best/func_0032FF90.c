extern void *func_002B2028(void *);
extern void func_00342D00(void *, s32, void *, void *);
extern u32 D_0040E618[];
void func_0032FF90(void *arg0, void *arg1)
{
  char *p0 = (char *) arg0;
  char *p1 = (char *) arg1;
  char *b430 = p0 + 0x430;
  char *b440 = p0 + 0x440;
  char *b10 = p1 + 0x10;
  s32 v0 = *((s32 *) p1);
  *((s32 *) (p0 + 0x430)) = v0;
  *((s32 *) b430) = *((s32 *) (p1 + 4));
  if (1)
  {
    *((f32 *) (p0 + 0x440)) = *((f32 *) (p1 + 0x10));
    *((f32 *) (b440 + 4)) = *((f32 *) ((p1 + 0x10) + 4));
  }
  *((f32 *) (b440 + 8)) = *((f32 *) ((p1 + 0x10) + 8));
  *((f32 *) (b440 + 0xC)) = *((f32 *) (b10 + 0xC));
  *((f32 *) (b430 + 0x20)) = *((f32 *) (p1 + 0x20));
  *((f32 *) (b430 + 0x24)) = *((f32 *) (p1 + 0x24));
  *((f32 *) (b430 + 0x28)) = *((f32 *) (p1 + 0x28));
  *((f32 *) (b430 + 0x2C)) = *((f32 *) (p1 + 0x2C));
  *((f32 *) (p0 + 0x454)) = 0.25f;
  *((f32 *) (p0 + 0x458)) = 512.0f;
  func_00342D00(*((void **) (p0 + 0x30)), *((s32 *) (p0 + 0x434)), b440, p1 + 0x10);
}

void *func_0033F588(void *src, void *end, void *dst);
typedef struct 
{
  void *unk0;
  s32 unk4;
  void *unk8;
} Elem;
void func_003276C8(void *obj);
void *func_00326C10(void *src, void *end, void *dst);

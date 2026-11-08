extern s32 D_002AD408(s32);
extern void *func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void *, void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, s32);
extern char D_00446858[];

typedef struct {
    s32 _pad0[(0x74 - 0x00) / 4];
    void *unk74;
} Arg0;

typedef struct {
    f32 unk50;
    f32 unk54;
    f32 unk58;
    s32 _pad[8];
    s64 unk78;
} Temp2;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} Arg3;

void *func_00113778(void *arg0, void *arg1, void *arg2, s32 arg3)
{
    void *obj;
    Temp2 *temp_2;
    s32 sp0;

    obj = func_0021E290(D_002AD408(0x7C));
    ((void **)arg0)[0x74 / 4] = obj;
    temp_2 = (Temp2 *)func_00205BF8(D_002AD408(0x90));
    temp_2->unk78 = ((temp_2->unk78 & -3) | 2) & -2;
    temp_2->unk50 = ((Arg3 *)arg2)->unk0;
    temp_2->unk54 = ((Arg3 *)arg1)->unk4;
    temp_2->unk58 = ((Arg3 *)arg1)->unk8;
    func_0021E540(obj, temp_2, -2);
    func_001D4040(&sp0, D_00446858);
    func_0021E748(obj, &sp0);
    func_0021E740(obj, 2);
    return obj;
}

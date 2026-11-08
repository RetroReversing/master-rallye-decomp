extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, s32);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_00262838(void);
extern void func_001D4040(void *, const char *);
extern void func_002623F0(s32, void *);
extern void func_00112730(void *);
extern char D_00446660[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 _pad0[(0x38 - 8) / 4];
    s32 unk38;
    s32 unk3C;
} Arg0;

void func_00112660(void *arg0)
{
    void *obj;
    s32 limit;
    s32 count;
    s32 s0;
    s32 v0;
    char buf[16];

    obj = func_001E37E8(func_001E4280(), (s32)((char *)arg0 + 0x38));
    if (obj == NULL) {
        return;
    }
    limit = func_001E3650(func_001E4280(), (s32)((char *)arg0 + 0x3C)) + 1;
    count = (((s32 *)obj)[4] - ((s32 *)obj)[0]) >> 2;
    if ((u32)limit < (u32)count) {
        s0 = limit;
    } else {
        s0 = limit - count;
    }
    v0 = func_001E4280();
    func_001E3EC0(v0, (char *)arg0 + 0x3C, s0);
    v0 = func_00262838();
    func_001D4040(buf, D_00446660);
    func_002623F0(v0, buf);
    func_00112730(arg0);
}

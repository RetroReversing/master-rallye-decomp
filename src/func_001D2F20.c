extern s32 *func_001D2458(s32 *, s32);
extern s32 *func_001D2488(s32 *, s32 *);
extern void func_001535C8(void *, s32, void *);
extern s32 func_003FAFB8(s32, s32);
extern void D_002AD390(void *);

typedef struct { s32 unk0; s32 unk4; s32 unk8; } S_f20_arg2;
typedef struct { s32 unk0; } S_f20_local;

void func_001D2F20(s32 **arg0, s32 arg1, S_f20_arg2 *arg2) {
    S_f20_local sp;
    s32 v;
    if (*arg0 == 0) return;
    v = func_003FAFB8((s32)*arg0, arg1);
    if (v == 0) return;
    do {
        func_001D2458(&sp, v);
        if (arg2->unk4 != arg2->unk8) {
            if (arg2->unk4 != 0)
                func_001D2488((s32*)arg2->unk4, &sp);
            arg2->unk4 = arg2->unk4 + 4;
        } else {
            func_001535C8(arg2, arg2->unk4, &sp);
        }
        v = func_003FAFB8(0, arg1);
        D_002AD390(sp.unk0);
    } while (v != 0);
}

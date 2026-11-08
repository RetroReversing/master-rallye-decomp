extern void func_001D4040(void *arg0, s32 arg1);
extern s32 func_001E3598(s32 arg0, void *arg1);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32 arg0, void *arg1);

typedef struct { u8 pad[0x14]; s32 unk14; } S_91678;
typedef struct { u8 pad[0x1C]; s32 unk1C; } S_91710;
typedef struct { u8 pad[0x20]; s32 unk20; } S_91758;

void func_00191678(S_91678 *arg0) {
    s32 sp[4] __attribute__((aligned(16)));
    s32 v = func_001E4280();
    func_001D4040(sp, arg0->unk14);
    func_001E3650(v, sp);
}

void func_00191710(S_91710 *arg0) {
    s32 sp[4] __attribute__((aligned(16)));
    s32 v = func_001E4280();
    func_001D4040(sp, arg0->unk1C);
    func_001E3650(v, sp);
}

void func_00191758(S_91758 *arg0) {
    s32 sp[4] __attribute__((aligned(16)));
    s32 v = func_001E4280();
    func_001D4040(sp, arg0->unk20);
    func_001E3598(v, sp);
}

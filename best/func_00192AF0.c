typedef signed char s8;
typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;
typedef float f32;

extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern s32 func_001E4280(void);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3E90(s32, void *, f32);
extern void func_001E33C8(s32, void *, s32);

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x74 - 0x10];
    s32 unk74;
    s32 unk78;
    s32 unk7C;
} S_00192AF0;

void func_00192AF0(S_00192AF0 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x10];
    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk74);
    func_001D4040(sp, arg0->unkC);
    func_001E3EC0(func_001E4280(), sp, arg2);
    func_001E33C8(func_001E4280(), sp, 0);
}

void func_00192B68(S_00192AF0 *arg0, f32 arg1) {
    u8 sp[0x10];
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk78);
    func_001D4040(sp, arg0->unkC);
    func_001E3E90(func_001E4280(), sp, arg1);
    func_001E33C8(func_001E4280(), sp, 0);
}

void func_00192BE0(S_00192AF0 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x10];
    s32 tmp;
    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk7C);
    tmp = func_001E4280();
    func_001D4040(sp, arg0->unkC);
    func_001E3EC0(tmp, sp, arg2);
}

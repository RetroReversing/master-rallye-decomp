extern void func_0040AF58(void);
extern void func_0040AFA0(void);

typedef struct {
    /* 0x00 */ u32 unk0;
    /* 0x04 */ u32 unk4;
} S_func_003E70C0_arg1;

s32 func_003E70C0(void *arg0, S_func_003E70C0_arg1 *arg1) {
    *(volatile s32 *)0x1000E010 = 0x10;
    if (arg1->unk0 == 0) {
        return 1;
    }
    if (arg1->unk0 > 0xFFFFU) {
        func_0040AF58();
        *(volatile u32 *)0x1000B410 = arg1->unk4;
        *(volatile u32 *)0x1000B420 = 0xFFFF;
        *(volatile u32 *)0x1000B400 = 0x101;
        func_0040AFA0();
        arg1->unk0 -= 0xFFFF;
        arg1->unk4 = (arg1->unk4 + 0xFFFF0) & 0x0FFFFFFF;
    } else {
        func_0040AF58();
        *(volatile u32 *)0x1000B410 = arg1->unk4;
        *(volatile u32 *)0x1000B420 = arg1->unk0;
        *(volatile u32 *)0x1000B400 = 0x101;
        func_0040AFA0();
        arg1->unk0 = 0;
    }
    return 0;
}

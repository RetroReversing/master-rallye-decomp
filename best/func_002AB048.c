s32 func_001C6700(void);

void func_002AB048(void *arg0, void *arg1, void *arg2, unsigned char *arg3) {
    unsigned char *ptr;
    ptr = (unsigned char *)(*(unsigned int *)((char *)arg0 + 4) + func_001C6700());
    *ptr = *arg3;
}

extern void *D_0047C938;
extern void *D_0044DCD8;
extern void D_002AD390(void *);

void func_002A9C90(void *arg0, int arg1) {
    *(void **)((char *)arg0 + 8) = D_0047C938;
    D_002AD390(*(void **)((char *)arg0 + 0x3C));
    D_002AD390(*(void **)((char *)arg0 + 0x38));
    *(void **)((char *)arg0 + 8) = D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void *D_0047CAB8;

void func_002A9908(void *arg0, int arg1) {
    *(void **)((char *)arg0 + 8) = D_0047CAB8;
    D_002AD390(*(void **)((char *)arg0 + 0x30));
    *(void **)((char *)arg0 + 8) = D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void func_002ABBE8(s64 *arg0, void *arg1);
extern void func_002AD320(s32 a0, s32 a1, s32 a2, s64 a3, s64 t0);

void func_002AC758(s64 arg0) {
    s64 sp20[2];
    s64 sp10;
    
    sp20[0] = arg0;
    func_002ABBE8(sp20, (void *)0); // pass sp as arg1
    sp10 = *(s64 *)((char *)sp20 + 0x10); // or different offset
    // This is a guess - let us look up actual stack layout
    // From asm: after func_002ABBE8, reads from sp+0x10, sp+0x0, sp+0x4, sp+0x8
    // func_002ABBE8 takes (sp+0x20, sp) - so sp20 is at offset 0x20 from sp base?
    // In our frame, we have sp20 array starting at some offset
    s32 v0_0 = *(s32 *)((char *)sp20 - 0x20); // sp+0x0 relative to sp base
    s32 v0_4 = *(s32 *)((char *)sp20 - 0x1C);
    s32 v0_8 = *(s32 *)((char *)sp20 - 0x18);
    s64 v0_10 = *(s64 *)((char *)sp20 - 0x10);
    s64 temp8 = (s64)(v0_10 * 4) >> 32; // dsll by 2 then dsra32 by 0 gives (v0_10*4) >> 32 in 64-bit terms?
    s64 t7 = (v0_10 & 0x3FFFFFFF) == 0 ? temp8 : (temp8 | 1);
    func_002AD320(v0_0, v0_4, v0_8, t7, temp8);
}

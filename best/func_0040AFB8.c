/* funcs.c – definitions for the four claimed functions.
 * context.h is prepended automatically by the compile step.
 * Each function is judged independently by compile_and_diff.
 */

/* Externs used by the functions – fill in as needed. */
extern s32 CreateSema_2(s32, void *);
extern s32 _ExecPS2_2(s32, s32, s32);
extern s32 func_0040B278(void);
extern s32 Deci2Call_2(s32, void *, s32, s32, s32, s32);
extern s32 Deci2Call_2_2(s32, void *);

/* Data symbols from the ROM. */
extern s32 D_004411D4;
extern s32 D_004411D8;
extern s32 D_004A1768;

/* --------------------------------------------------------------- */
/* func_0040AFB8 – 72 bytes, 18 instructions */
void func_0040AFB8(void) {
    /* stack frame: addiu $29,$29,-0x50 */
    s32 sp28 = 1;
    s32 sp24 = 1;
    char sp20[32];               /* 0x20 bytes, matches addiu $4,$29,0x20 */
    (void)CreateSema_2(1, &sp20);
    (void)CreateSema_2(1, &D_004411D4);
    /* D_004411D4 and D_004411D8 are written by CreateSema_2; we just store results */
    D_004411D4 = 0; /* placeholder; actual value set by callee */
    D_004411D8 = 0;
}

/* --------------------------------------------------------------- */
/* func_0040B280 – 92 bytes, 23 instructions */
void func_0040B280(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    /* preserve callee‑saved registers */
    s32 r19, r18, r17, r16, r31;
    r19 = arg0;   /* daddu $19,$7,$0 – $7 was arg0 */
    r18 = arg1;   /* daddu $18,$6,$0 */
    r17 = arg2;   /* daddu $17,$5,$0 */
    r16 = arg3;   /* daddu $16,$4,$0 */
    /* call func_0040B278 */
    func_0040B278();
    /* call _ExecPS2_2 with args in $4-$7 derived from the saved registers */
    _ExecPS2_2(r16, r17, r18);
    /* restore */
}

/* --------------------------------------------------------------- */
/* func_0040B388 – 68 bytes, 17 instructions */
void func_0040B388(s32 arg0, s32 arg1, s32 arg2) {
    /* build base address: (u32)&D_004A1768 with high bits set */
    s32 base = ( (s32)(&D_004A1768) & 0xFFFF0000 ) | 0x20000000 | ( (s32)(&D_004A1768) & 0xFFFF );
    Deci2Call_2(1, (void *)((s32)&D_004A1768 & 0xFFFF), arg0 & 0xFFFF, arg1, arg2, base);
}

/* --------------------------------------------------------------- */
/* func_0040B3D0 – 36 bytes, 9 instructions */
void func_0040B3D0(s32 arg0) {
    Deci2Call_2_2(2, (void *)((s32)&D_004A1768 & 0xFFFF));
    /* placeholder; actual implementation may ignore second arg */
}

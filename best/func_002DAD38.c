extern void func_002DAA98(s32, void *, s32);

void func_002DAD38(s32 arg0, s32 arg1) {
    s32 sp0, sp4, sp8, spC;
    s32 sp10, sp14, sp18, sp1C;
    s32 var_17 = arg0;
    if (var_17 != arg1) {
        s32 *var_16 = (s32 *)(var_17 + 0x10);
        do {
            s32 temp_4 = var_17;
            var_17 += 0x20;
            sp0 = var_16[-4];        /* -0x10 */
            sp4 = *(f32 *)((char *)var_16 - 0x0C);
            sp8 = *(f32 *)((char *)var_16 - 0x08);
            spC = *(f32 *)((char *)var_16 - 0x04);
            sp10 = var_16[0];
            sp14 = *(f32 *)((char *)var_16 + 0x04);
            sp18 = *(f32 *)((char *)var_16 + 0x08);
            sp1C = *(f32 *)((char *)var_16 + 0x0C);
            var_16 += 0x20;
            func_002DAA98(temp_4, &sp0, var_16[-8]); /* var_16->unk-10 after +=0x20 => var_16[-8]? */
        } while (var_17 != arg1);
    }
}

s32 func_003D89B0(s32 arg0, u32 arg1, s32 arg2) {
    u32 end = arg1 + arg2;
    if (arg1 < end) {
        u32 count = ~end + end; /* gives -1 */
        u8 *p = (u8 *)(end - 1);
        do {
            if (*p == 0xA) {
                count = count + 1;
                return count;
            }
            p--;
        } while (arg1 < (u32)p);
        /* wait - target checks sltu $2,$5,$3 after decrement in delay slot? Look: at .L003D89E4 does sltu $2,$5,$3, bnez $2,.L003D89D0, addiu $3,$3,-1. So checks if arg1 < $3 (current p) - if true, go back to loop start which will check *$3. But they already did addiu $3,$3,-1 in delay slot of bnez? Delay slot executes whether branch taken or not. So if bnez taken, it goes to loop start (L003D89D0) which does lb $2,0($3) - but $3 was just decremented in delay slot. Also if bnez not taken (arg1 >= $3 means we've gone past start?), it falls through to .L003D89F0. This is a bit tricky. */
    }
    return arg0 + arg2;
}

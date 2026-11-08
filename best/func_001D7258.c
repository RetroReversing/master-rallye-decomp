extern void func_001D9080(void *arg0, s32 arg1, s32 arg2, void *arg3);
extern void func_003F93CC(s32 arg0, s32 arg1, s32 arg2);

void func_001D7258(void *arg0, u32 arg1) {
    s32 *obj = (s32 *)arg0;
    s32 temp_16 = obj[0];
    s32 temp_17 = obj[1];
    s32 temp_3 = temp_17 - temp_16;
    s32 temp_16_2;
    if (arg1 < (u32)temp_3) {
        temp_16_2 = temp_16 + arg1;
        func_003F93CC(temp_16_2, temp_17, 0);
        obj[1] = (s32)((s32)obj[1] - (temp_17 - temp_16_2));
    } else {
        func_001D9080(arg0, temp_17, arg1 - temp_3, (void *)0);
    }
    obj[2] = 0;
}

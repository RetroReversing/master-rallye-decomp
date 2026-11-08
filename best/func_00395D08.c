extern s32 func_003A3880(s32);
extern s32 func_001D9598(s32, s32, s32, s32);

/* func_003D5858 */
void func_003D5858(void) {
    // calls through jalr $5; placeholder
}

/* func_00395D88 */
u32 *func_00395D88(u32 *arg0, u32 *arg1) {
    u32 *var_2;

    if ((u32) *arg0 < (u32) *arg1) {
        var_2 = arg1;
    } else {
        var_2 = arg0;
    }
    return var_2;
}

/* func_00395D08 */
s32 func_00395D08(s32 arg0, s32 arg1, s32 arg2) {
    s32 local0;

    local0 = arg0;
    return func_00395C80(arg0, arg1, arg2, func_003A3880(local0));
}

/* func_00395C80 */
s32 func_00395C80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_001D9598(arg0, arg1, arg2, arg3);
}

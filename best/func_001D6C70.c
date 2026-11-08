#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 D_004761E0;
extern s32 D_004763B8;
extern s32 **func_002AD408(s32);
extern void func_001D6D20(void *);
extern s32 func_003F93CC(s32, s32, s32);

/* func_001D3920 */
s32 func_001D3920(void *arg0) {
    s32 *v = M2C_FIELD(arg0, s32 **, 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

/* func_001D6BF8 */
void *func_001D6BF8(void *arg0) {
    s32 **t2, **t2_2, **t2_3;
    t2 = func_002AD408(4);
    *t2 = &D_004761E0;
    t2_2 = func_002AD408(0xC);
    *t2_2 = &D_004763B8;
    t2_3 = func_002AD408(4);
    M2C_FIELD(t2_3, s32 **, 0) = NULL;
    M2C_FIELD(t2_3, s32 *, 4) = 0;
    M2C_FIELD(t2_3, s32 *, 8) = 0;
    func_001D6D20(arg0);
    return arg0;
}

/* func_001D6C70 */
void func_001D6C70(void *arg0, s32 arg1) {
    /* placeholder */
}

/* func_001D6D20_impl */
void func_001D6D20_impl(void *arg0) {
    s32 temp_16, temp_18;
    void *temp_17;
    temp_17 = (void *)M2C_FIELD(arg0, void **, 4);
    temp_18 = M2C_FIELD(temp_17, s32 *, 0);
    temp_16 = M2C_FIELD(temp_17, s32 *, 4);
    func_003F93CC(temp_18, temp_16, 0);
    M2C_FIELD(temp_17, s32 *, 4) = (s32)(M2C_FIELD(temp_17, s32 *, 4) - (temp_16 - temp_18));
}

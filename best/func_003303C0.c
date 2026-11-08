extern s32 func_002B2028(void *a, void *b, void *c);
extern s32 D_00437E18;

void func_003D1110(void **arg0, s32 arg1) {
    void *temp_6 = *arg0;
    void *temp_5 = (char *)temp_6 - 0x10;
    int temp_2 = *(int *)((char *)temp_5 + 8) - 1;
    *(int *)((char *)temp_5 + 8) = temp_2;
    if (temp_2 == 0) {
        int temp_3 = *(int *)((char *)temp_5 + 4);
        if ((u32) (temp_3 + 0x10) >= 0x81U) {
            func_002B2028(temp_5, temp_5, temp_6);
        } else {
            int index = (((u32) (temp_3 + 0x17)) >> 3) - 1;
            void **temp_2_2 = (void **)((char *) &D_00437E18 + (index * 4));
            *temp_2_2 = temp_5;
            *(void **)((char *)temp_6 - 0x10) = temp_5;
        }
    }
    *arg0 = (void *) (arg1 + 0x10);
}

extern s32 func_00337A98(void *a, s32 b);
extern s32 func_003F93CC(s32 *a, s32 b, int c);

void func_003303C0(void *arg0) {
    void *temp_3 = (char *)arg0 + 0x20;
    void *var_16 = *(void **)((char *)arg0 + 0x20);
    void *temp_17 = (char *)arg0 + 0x20;
    void *temp_18 = *(void **)((char *)arg0 + 0x20);
    s32 temp_16 = *(s32 *)((char *)temp_17 + 4);
    func_003F93CC(temp_18, temp_16, 0);
}

extern s32 D_002AD408(int);
extern s32 func_0034E698(int, void *);
extern s32 func_00357E70(int, float, float, int);
extern s32 func_003581E8(int, int);
extern s32 D_0042DD2C;

void func_003375A0(void *arg0, void *arg1) {
    void *temp_2 = *(void **)((char *)arg0 + 0x34);
    func_00357E70(0, 0, 0, 0);
}

extern s32 func_001577C8(s32 *a, void *b, s32 c);

void func_00337638(void *arg0, s32 arg1, s32 arg3) {
    s32 var_3 = 0;
    s32 temp_2 = 0;
    return;
}

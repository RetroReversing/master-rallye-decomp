extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

f32 func_003AC6C8(f32 *arg0, f32 *arg1) {
    f32 dx = arg0[0] - arg1[0];
    f32 dy = arg0[1] - arg1[1];
    f32 dz = arg0[2] - arg1[2];
    f32 res = (dx * dx) + (dy * dy);
    res = res + (dz * dz);
    return res;
}

extern s32 func_003A3268(void *); 
extern s32 func_003A3CC8(void *);
extern s32 func_003ABF68(s32, s32);
extern s8 func_003B1968(void);
extern void func_003D13A0(s32, void *);

void func_003AC518(void *arg0) {
    s8 sp0;
    s32 temp1;
    s32 temp2;

    temp1 = func_003A3268(arg0);
    temp2 = func_003ABF68(temp1, func_003A3CC8(arg0));
    sp0 = func_003B1968();
    func_003D13A0(temp2, &sp0);
}

extern u8 D_004262D0[];
extern s32 func_003ABEA8(void *, s32);
extern s32 func_003AB828(s32);
extern void func_003ABE58(void *, s32);

void func_003AC488(s32 *arg0) {
    s32 sp0;
    s32 temp;

    if (*arg0 >= 0) {
        temp = func_003AB828(func_003ABEA8(D_004262D0, *arg0));
        sp0 = temp;
        if (temp == 0) {
            func_003ABE58(D_004262D0, *arg0);
        }
        *arg0 = -1;
    }
}

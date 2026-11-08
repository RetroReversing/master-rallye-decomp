extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void *func_002EDE98(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 *t3 = p + 4;   /* 0x10 */
    s32 *t5 = p + 13;  /* 0x34 */
    s32 *t6 = p + 16;  /* 0x40 */

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;       /* 0x10 */
    t3[2] = 0;      /* 0x18 */
    t3[1] = 0;      /* 0x14 */
    p[13] = 0;      /* 0x34 */
    t5[2] = 0;      /* 0x3C */
    t5[1] = 0;      /* 0x38 */
    p[16] = 0;      /* 0x40 */
    t6[2] = 0;      /* 0x48 */
    t6[1] = 0;      /* 0x44 */
    p[22] = 0;      /* 0x58 */
    p[7] = 0;       /* 0x1C */
    p[8] = 0;       /* 0x20 */
    p[9] = 0;       /* 0x24 */
    p[10] = 0;      /* 0x28 */
    p[11] = 0;      /* 0x2C */
    p[12] = 0;      /* 0x30 */
    p[19] = 0;      /* 0x4C */
    p[20] = 0;      /* 0x50 */
    p[21] = 0;      /* 0x54 */
    return arg0;
}

extern void func_001C6938(void *a, s32 b);
extern void func_002B2028(void *p);

typedef struct S_func_002ED278_arg1 {
    u8 pad0[8];
    struct S_func_002ED278_arg1 *left;
    s32 field_0c;
} S_func_002ED278_arg1;

void func_002ED278(void *arg0, S_func_002ED278_arg1 *arg1) {
    while (arg1 != 0) {
        S_func_002ED278_arg1 *next;
        func_001C6938(arg0, arg1->field_0c);
        next = arg1->left;
        func_002B2028(arg1);
        arg1 = next;
    }
}

void func_002E4948(void *arg0, S_func_002ED278_arg1 *arg1) {
    while (arg1 != 0) {
        S_func_002ED278_arg1 *next;
        func_001C6938(arg0, arg1->field_0c);
        next = arg1->left;
        func_002B2028(arg1);
        arg1 = next;
    }
}

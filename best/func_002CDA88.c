extern s32 func_0030D400(void);
extern void func_0030DA70(void);
extern u32 D_004294D8[];

s32 func_002D2E00(s32 a, s32 b, s32 c) {
    s32 m = a < b ? a : b;
    return c < m ? c : m;
}

s32 func_002CDD18(u32 a) {
    s32 v = 0;
    if (a < 0x30u) {
        v = func_0030D400() != 0;
    }
    return v;
}

void func_002CDA88(s32 arg0) {
    if (arg0 != -1) {
        u16 *p = (u16 *)D_004294D8[1];
        if (p[arg0] == 0) {
            func_0030DA70();
            p[arg0] = 1;
        }
    }
}

s32 func_002CDA18(void) {
    s32 count = D_004294D8[0];
    s32 result = -1;
    u16 *arr = (u16 *)D_004294D8[1];
    if (count > 0) {
        if (arr[0] != 0) {
            arr[0] = 0;
            result = 0;
        } else {
            s32 i = 1;
            for (;;) {
                i += 1;
                if (!(i < count)) break;
                if (arr[i] != 0) {
                    arr[i] = 0;
                    result = i;
                    break;
                }
            }
        }
    }
    return result;
}

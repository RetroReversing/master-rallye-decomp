void func_003E3650(void *arg0) {
}

void func_003E3CA8(void *arg0, void *arg1) {
}

void func_003E50C8(s32);
void func_003E3F80(void) {
    func_003E50C8(3);
}

void func_003E1708(void *, s32, s32, s32);
extern char D_00489D50[];
s32 func_003E4660(void *arg0, void *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 var_9 = 1;
    s32 temp_10 = *(s32*)((u8*)arg0 + 0x810) * 0x140;
    s32 *p;
    p = (s32*)((u8*)arg0 + temp_10 + 0x6CC);
    *p = 1;
    *(s32*)((u8*)arg0 + 0x1B0) = 1;
    if (*(s32*)((u8*)arg0 + 0x150) == 2) {
        *(s32*)((u8*)arg1 + 0) = 0;
        *(s32*)((u8*)arg1 + 0x14) = 0;
        *(s32*)((u8*)arg1 + 0x10) = 0;
        *(s32*)((u8*)arg1 + 4) = 0;
    }
    if (*(s32*)((u8*)arg0 + 0x174) != 3) {
        *arg2 = 1;
        s32 t = *(s32*)((u8*)arg0 + 0x174) == 2;
        *arg3 = t;
        *(s32*)((u8*)arg3 + 4) = t;
    } else {
        *arg2 = 2;
    }
    if (*(s32*)((u8*)arg0 + 0x150) == 1) {
        func_003E1708(D_00489D50, 2, 1, temp_10);
        var_9 = 0;
    }
    *arg4 = *arg4 & ~1;
    return var_9;
}

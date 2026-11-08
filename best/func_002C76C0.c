void func_002C76C0(void *arg0) {
    u64 *p = (u64 *)((u8 *)arg0 + 0x10);
    u64 *q = (u64 *)((u8 *)arg0 + 0x30);
    u16 *r = (u16 *)((u8 *)arg0 + 0x18);
    u16 *s = (u16 *)((u8 *)arg0 + 0x1A);
    u64 valp = *p;
    valp = valp | ((u64)1);
    valp = valp | ((u64)2);
    valp = valp | ((u64)0x40);
    valp = valp | ((u64)0x80);
    *p = valp;
    u64 valq = *q;
    valq = valq | ((u64)0x8000 << 18);
    valq = valq | ((u64)0x8000 << 19);
    *q = valq;
    *s = 4;
    *r = 16;
}

void func_002C7720(void *arg0) {
    u64 *p = (u64 *)((u8 *)arg0 + 0x10);
    u64 *q = (u64 *)((u8 *)arg0 + 0x30);
    u16 *t = (u16 *)((u8 *)arg0 + 0x1C);
    u64 valp = *p;
    valp = valp | ((u64)0x1000);
    valp = valp | ((u64)0x2000);
    valp = valp | ((u64)0x4000);
    valp = valp | ((u64)0x8000);
    valp = valp | ((u64)0x10000);
    valp = valp | ((u64)0x20000);
    valp = valp | ((u64)0x40000);
    valp = valp | ((u64)0x80000);
    *p = valp;
    u64 valq = *q;
    valq = valq | ((u64)0x8000 << 17);
    *q = valq;
    *t = 8;
}

void func_002C8018(void *arg0, s32 arg1) {
    s64 var_4;
    u16 temp_3;
    var_4 = 0;
    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        temp_3 = *(u16 *)((u8 *)arg0 + 0x18);
        if ((arg1 < (s32)temp_3) && (temp_3 < 0x11U)) {
            var_4 = 0;
        }
    }
}

void func_002C8070(void *arg0, s32 arg1) {
    s64 var_4;
    u16 temp_3;
    var_4 = 0;
    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        temp_3 = *(u16 *)((u8 *)arg0 + 0x18);
        if ((arg1 < (s32)temp_3) && (temp_3 < 0x11U)) {
            var_4 = 0;
        }
    }
}

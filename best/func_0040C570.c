extern s64 func_002ABEC8(s64, s64);
extern s64 func_002ABF20(s64, s64);
extern s64 func_002ABF88(s64, s64);
extern s32 func_002AC4B0(s64, s64);
extern s64 func_002AC650(s64);
extern s64 func_0040C758(s64);

s64 func_0040C570(s64 arg0) {
    s64 s0 = arg0;
    s64 s1;
    s64 c = (s64)(0x81E0ULL << 47);
    s64 lo_arg;
    s64 lo;
    s64 v;

    if (func_002AC4B0(0, 0) < 0) {
        return 0;
    }

    v = func_002AC650(func_002ABF88(arg0, (s64)(0xF7C0ULL << 46)));

    if (v < 0) {
        lo_arg = (s32)s0;
        s1 = func_0040C758(v);
    } else {
        lo_arg = (s32)s0;
        s1 = func_0040C758(v >> 1);
        s1 = func_002ABEC8(v, s1);
    }

    s0 = lo_arg;
    s1 = func_002ABF20(arg0, s1);

    if (func_002AC4B0(s1, 0) < 0) {
        return v - ((u64)func_002AC650(func_002ABF20(0, s1)) & 0xFFFFFFFFULL);
    }

    return v + ((u64)func_002AC650(s1) & 0xFFFFFFFFULL);
}

typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;

s64 func_002AC500(s64);
s64 func_002ABF88(s64, s64);
s64 func_002ABEC8(s64, s64);

s64 func_0040C758(s64 arg0) {
    s64 s0 = arg0;
    s64 s1;
    s64 c = 0x81E0ULL << 47;

    s1 = func_002ABF88(func_002AC500((s64)((s32)(s0 >> 32))), c);
    s1 = func_002ABF88(s1, c);
    {
        s64 lo_arg = (s64)((s32)s0);
        s64 lo = func_002AC500(lo_arg);
        if (lo_arg >= 0) {
            return func_002ABEC8(s1, lo);
        } else {
            s64 neg = func_002ABEC8(lo, 0x83E0ULL << 47);
            return func_002ABEC8(s1, neg);
        }
    }
}

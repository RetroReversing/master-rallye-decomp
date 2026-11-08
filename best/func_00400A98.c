s32 func_00400A98(s64 arg0) {
    s32 v0, a0r, v1, a1r, a2r;

    v0 = (s32)((u64)arg0 << 32 >> 32);
    a0r = (s32)((u64)arg0 >> 32);
    v1 = 0x7FFFFFFF;
    a1r = -v0;
    v0 = v0 | a1r;
    a0r = a0r & v1;
    v0 = (u32)v0 >> 31;
    a1r = 0x7FF00000;
    a0r = a0r | v0;
    a2r = a1r - a0r;
    v0 = 1;
    v1 = -a2r;
    a2r = a2r | v1;
    a2r = (u32)a2r >> 31;
    return v0 - a2r;
}

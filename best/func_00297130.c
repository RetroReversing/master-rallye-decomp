void *func_00297130(void *arg0, void *arg1) {
    f32 f1 = *(f32 *)((char *)arg1 + 0x28);
    f32 f0 = *(f32 *)((char *)arg1 + 0x5C) - f1;
    f32 f2 = *(f32 *)((char *)arg1 + 0x50);
    f32 f3;
    if (f1 <= f2) {
        f3 = *(f32 *)((char *)arg1 + 0x54) * f1;
    } else {
        f0 = *(f32 *)((char *)arg1 + 0x4C);
        f3 = *(f32 *)((char *)arg1 + 0x58) * (f0 - f1);
    }
    *(f32 *)((char *)arg0 + 0) = *(f32 *)((char *)arg1 + 0x40) * f3;
    *(f32 *)((char *)arg0 + 4) = *(f32 *)((char *)arg1 + 0x44) * f3;
    *(f32 *)((char *)arg0 + 8) = *(f32 *)((char *)arg1 + 0x48) * f3;
    return arg0;
}

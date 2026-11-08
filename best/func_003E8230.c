extern f32 D_0043BFD0;

void func_003E8230(void) {
    f32 v = D_0043BFD0;
    f32 a = v + 0.033f;
    if ((s32)(v * 30.0f) != (s32)(a * 30.0f))
        return;
    D_0043BFD0 = a;
    f32 x = a;
    do {
        x += 0.00035f;
    } while ((s32)(x * 30.0f) == (s32)(v * 30.0f));
    D_0043BFD0 = x;
}

void func_00220AF8(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp[4];
    f32 t7 = arg0[1] - arg1[1];
    f32 t5 = arg0[0] - arg1[0];
    f32 t6 = arg0[2] - arg1[2];
    f32 n1 = arg2[1];
    f32 n0 = arg2[0];

    sp[0] = t5;
    t6 = arg0[2] - arg1[2];
    sp[1] = t7;
    sp[2] = t6;

    {
        f32 d = n0 * t5 + n1 * t7 + arg2[2] * t6;
        f32 p0 = n0 * d;
        arg3[0] = p0;
        arg4[0] = p0 - t5;
        arg3[1] = arg2[1] * d;
        arg3[2] = arg2[2] * d;
        arg4[1] = arg3[1] - t7;
        arg4[2] = arg3[2] - t6;
    }
}

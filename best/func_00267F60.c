void func_001E3F50(void *, void *, void *);

void func_00267F60(void *arg0) {
    char *s0 = (char *)arg0;
    float sp80[4];
    float sp70[4];
    float sp60[4];
    float sp50[4];
    float sp40[3];
    float sp30[3];
    float sp20[3];
    float sp10[3];
    float sp00[3];
    char *m = s0 + 0xBC;
    char *sv = s0 + 0x94;
    char *a = s0 + 0xA0;
    char *ec = s0 + 0xEC;
    char *e0 = s0 + 0xE0;
    char *f8p = s0 + 0xF8;
    float sy = *(float *)(sv + 4);
    float sx = *(float *)(sv + 0);
    float m1 = *(float *)(m + 4);
    float m3 = *(float *)(m + 0xC);
    float m4 = *(float *)(m + 0x10);
    float m6 = *(float *)(m + 0x18);
    float m7 = *(float *)(m + 0x1C);
    float m0 = *(float *)(m + 0);
    float m2 = *(float *)(m + 8);
    float m5 = *(float *)(m + 0x14);
    float m8 = *(float *)(m + 0x20);
    float sz = *(float *)(sv + 8);
    float t9 = m1 * sy;
    float t3 = m3 * sx;
    float t8 = m4 * sy;
    float t2 = m6 * sx;
    float t4 = m7 * sy;
    float t0 = m0 * sx;
    float a0v = *(float *)(a + 0);
    float ry, rz, rx;
    float dx, dz, dy;
    float ec0, ec1, ec2, e00, e01, e02, f80, f81, f82;
    void *ret;
    float one = 1.0f;

    t3 = t3 + t8;
    t2 = t2 + t4;
    t0 = t0 + t9;
    t9 = m5 * sz;
    t8 = m2 * sz;
    t4 = m8 * sz;
    ry = t3 + t9;
    rz = t2 + t4;
    rx = t0 + t8;
    sp20[1] = ry; sp20[2] = rz; sp20[0] = rx;

    dx = a0v - rx;
    dz = *(float *)(a + 8) - rz;
    dy = *(float *)(a + 4) - ry;
    sp10[0] = dx; sp00[0] = dx;
    sp00[2] = dz; sp10[1] = dy;
    sp10[2] = dz; sp00[1] = dy;

    ec0 = *(float *)(ec + 0); ec1 = *(float *)(ec + 4); ec2 = *(float *)(ec + 8);
    sp10[0] = ec0; sp10[1] = ec1; sp10[2] = ec2;
    e00 = *(float *)(e0 + 0); e01 = *(float *)(e0 + 4); e02 = *(float *)(e0 + 8);
    sp30[0] = e00; sp30[1] = e01; sp30[2] = e02;
    f80 = *(float *)(f8p + 0); f81 = *(float *)(f8p + 4); f82 = *(float *)(f8p + 8);
    sp40[0] = f80; sp40[1] = f81; sp40[2] = f82;

    sp80[0] = dx; sp80[1] = dy; sp80[3] = one; sp80[2] = dz;
    sp50[0] = sp10[0]; sp50[1] = sp10[1]; sp50[3] = 0.0f; sp50[2] = sp10[2];
    sp60[0] = sp30[0]; sp60[1] = sp30[1]; sp60[3] = 0.0f; sp60[2] = sp30[2];
    sp70[0] = sp40[0]; sp70[1] = sp40[1]; sp70[2] = sp40[2]; sp70[3] = 0.0f;

    ret = ((void *(*)(float *, void *, void *, void *, void *, float, float))func_001E4280)(
        sp80, a, ec, e0, f8p, dx, dy);
    func_001E3F50(ret, s0 + 0x1D8, sp50);
}

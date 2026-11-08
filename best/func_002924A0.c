extern void func_002929C8(void *a0, int a1);
extern void func_00292928(void *a0);
extern void func_001D4810(void *a0, int a1);

void func_002924A0(void *arg0) {
    unsigned char *p = (unsigned char *)arg0;
    int i;
    unsigned char *q;

    func_002929C8(p + 0x3C, 0);
    func_002929C8(p + 0x44, 0);
    func_002929C8(p + 0x40, 0);

    *(int *)(p + 0x3C) |= 0x22;
    *(int *)(p + 0x44) |= 0x1C;
    *(int *)(p + 0x40) |= 0x1C;

    *(signed char *)(p + 0xD1) = 3;
    *(signed char *)(p + 0xD0) = 3;
    *(int *)(p + 0xD4) = 0;

    q = p;
    for (i = 3; i >= 0; i--) {
        func_00292928(q);
        q += 8;
    }

    func_001D4810(p + 0x2C, 0);
    func_001D4810(p + 0x30, 0);

    *(int *)(p + 0x34) = 0;
    *(int *)(p + 0x38) = 0;
    *(int *)(p + 0x28) = 0;

    /* vectors at 0x50..0xCF: 8 vec4f = identity-like columns/rows? {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1},{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1} */
    {
        float v[4];
        v[0] = 1.0f; v[1] = 0.0f; v[2] = 0.0f; v[3] = 0.0f;
        *(float *)(p + 0x50) = v[0]; *(float *)(p + 0x54) = v[1]; *(float *)(p + 0x58) = v[2]; *(float *)(p + 0x5C) = v[3];
        v[0] = 0.0f; v[1] = 1.0f;
        *(float *)(p + 0x60) = v[0]; *(float *)(p + 0x64) = v[1]; *(float *)(p + 0x68) = v[2]; *(float *)(p + 0x6C) = v[3];
        v[1] = 0.0f; v[2] = 1.0f;
        *(float *)(p + 0x70) = v[0]; *(float *)(p + 0x74) = v[1]; *(float *)(p + 0x78) = v[2]; *(float *)(p + 0x7C) = v[3];
        v[2] = 0.0f; v[3] = 1.0f;
        *(float *)(p + 0x80) = v[0]; *(float *)(p + 0x84) = v[1]; *(float *)(p + 0x88) = v[2]; *(float *)(p + 0x8C) = v[3];
        v[3] = 0.0f; v[0] = 1.0f;
        *(float *)(p + 0x90) = v[0]; *(float *)(p + 0x94) = v[1]; *(float *)(p + 0x98) = v[2]; *(float *)(p + 0x9C) = v[3];
        v[0] = 0.0f; v[1] = 1.0f;
        *(float *)(p + 0xA0) = v[0]; *(float *)(p + 0xA4) = v[1]; *(float *)(p + 0xA8) = v[2]; *(float *)(p + 0xAC) = v[3];
        v[1] = 0.0f; v[2] = 1.0f;
        *(float *)(p + 0xB0) = v[0]; *(float *)(p + 0xB4) = v[1]; *(float *)(p + 0xB8) = v[2]; *(float *)(p + 0xBC) = v[3];
        v[2] = 0.0f; v[3] = 1.0f;
        *(float *)(p + 0xC0) = v[0]; *(float *)(p + 0xC4) = v[1]; *(float *)(p + 0xC8) = v[2]; *(float *)(p + 0xCC) = v[3];
    }
}

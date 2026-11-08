void func_00298F90(void *arg0, float f12, float f13) {
    float sp[3];
    void *t = (char *)arg0 + 0x2C;
    sp[0] = f12;
    sp[1] = f13;
    sp[2] = 0.0f;
    *(float *)t = sp[0];
    *(float *)((char *)t + 4) = sp[1];
    *(float *)((char *)t + 8) = sp[2];
    *(int *)((char *)arg0 + 0x48) = 1;
}

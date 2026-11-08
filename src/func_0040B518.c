extern s32 Deci2Call_2(s32 cmd, void *buf);

void func_0040B488(s32 arg0, s32 arg1, s32 arg2) {
    s32 buf[3];
    s32 a1 = arg1;
    s32 a2 = arg2 & 0xFFFF;
    buf[0] = arg0;
    buf[1] = a1;
    buf[2] = a2;
    Deci2Call_2(-6, buf);
}

void func_0040B4C0(s32 arg0, s8 arg1) {
    s32 buf[2];
    buf[0] = arg0;
    buf[1] = (s32)arg1;
    Deci2Call_2(-7, buf);
}

void func_0040B4F0(s32 arg0) {
    s32 buf[1];
    buf[0] = arg0;
    Deci2Call_2(-8, buf);
}

void func_0040B518(s32 arg0) {
    s32 buf[1];
    buf[0] = arg0;
    Deci2Call_2(-9, buf);
}

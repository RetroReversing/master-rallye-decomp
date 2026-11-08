void func_003F94D0(s32, s8);
void func_003D1290(s32 arg0, s8 *arg1) {
    func_003F94D0(arg0, *arg1);
}

s32 func_002F84F0(s32, s32, s32, s32);
s32 func_00342CD0(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    func_002F84F0(arg0, *(s32 *)((char *)arg1 + 0x144), arg2, arg3);
    return arg0;
}

extern s32 D_002AD408(s32, s32);
extern s32 func_002F7640(s32);
extern s32 D_00485D28;
void *func_00342BB8(void *arg0) {
    *(s32 **)((char *)arg0 + 0x148) = &D_00485D28;
    *(s32 *)((char *)arg0 + 0x100) = 0;
    *(f32 *)((char *)arg0 + 0x10C) = 1.0f;
    *(s32 *)((char *)arg0 + 0x108) = 0;
    *(s32 *)((char *)arg0 + 0x110) = 0;
    *(s32 *)((char *)arg0 + 0x124) = 1;
    *(s32 *)((char *)arg0 + 0x104) = 0;
    *(s32 *)((char *)arg0 + 0x114) = 0;
    *(s32 *)((char *)arg0 + 0x118) = 0;
    *(s32 *)((char *)arg0 + 0x11C) = 0;
    *(s32 *)((char *)arg0 + 0x120) = 0;
    *(s32 *)((char *)arg0 + 0x128) = 0;
    *(s32 *)((char *)arg0 + 0x130) = 0;
    *(s32 *)((char *)arg0 + 0x134) = 0;
    *(s32 *)((char *)arg0 + 0x138) = 0;
    *(s32 *)((char *)arg0 + 0x140) = 0;
    *(s32 *)((char *)arg0 + 0x13C) = 0;
    *(s32 *)((char *)arg0 + 0x144) = func_002F7640(D_002AD408(0x84, 1));
    return arg0;
}

s32 func_003CB2D0(s32, s32, s32);
s32 func_00342B90(s32 arg0, s32 arg1, s32 arg2) {
    func_003CB2D0(arg2, arg1, arg0);
    return arg0;
}

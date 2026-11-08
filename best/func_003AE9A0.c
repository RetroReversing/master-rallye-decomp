typedef signed int s32;
typedef float f32;

extern char D_00487690[];
extern void func_003A4790(void *, char *);
extern void *D_002AD408(s32);
extern void *func_00327E60(void *, void *);
extern void *func_00327EA0(void *, void *);

void *func_003AE9A0(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    *(s32 *)((char *)s1 + 0x28) = 10;
    *(s32 *)((char *)s1 + 0x2C) = 1;
    *(s32 *)((char *)s1 + 0x3C) = 1;
    *(s32 *)((char *)s1 + 0x40) = 1;
    func_003A4790((char *)s1 + 0x38, D_00487690);
    *(s32 *)((char *)s1 + 0x24) = (s32)func_00327EA0(D_002AD408(0x10), (char *)s1 + 0x4C);
    *(f32 *)((char *)s1 + 0x44) = 1.0f;
    return s0;
}

void *func_003AEA50(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    *(s32 *)((char *)s1 + 0x28) = 9;
    *(s32 *)((char *)s1 + 0x2C) = 1;
    *(s32 *)((char *)s1 + 0x3C) = 1;
    *(s32 *)((char *)s1 + 0x40) = 1;
    func_003A4790((char *)s1 + 0x38, D_00487690);
    *(s32 *)((char *)s1 + 0x24) = (s32)func_00327E60(D_002AD408(0x10), (char *)s1 + 0x4C);
    *(f32 *)((char *)s1 + 0x44) = 0.25f;
    return s0;
}

/* func_003F0B30 */
extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_0040B000 */
extern s32 D_80000000[];
extern s32 D_80000004[];

s32 *func_0040B000(s32 arg0) {
    s32 *p = D_80000000;
    if (*p == arg0) {
        return p;
    }
    do {
        p++;
    } while (*p != arg0);
    return p;
}

/* func_0040B160 */
typedef struct {
    u32 a;
} OsdConfig;

void GetOsdConfigParam_2(OsdConfig *p);
void SetOsdConfigParam_2(OsdConfig *p);

s32 func_0040B160(void) {
    OsdConfig sp;
    OsdConfig sp4;
    GetOsdConfigParam_2(&sp);
    sp4.a = (sp.a & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam_2(&sp4);
    GetOsdConfigParam_2(&sp4);
    SetOsdConfigParam_2(&sp);
    return (((sp4.a >> 13) & 7) == 0);
}

/* func_0040B1C8 */
typedef void (*SyscallFn)(void);
extern void SetSyscall_9(s32 num, s32 addr);
extern void Copy_5(void *dst, void *src, s32 len);
extern void FlushCache_2(s32 mode);
extern s32 GetEntryAddress_7(s32 num);
extern s32 func_0040B160(void);
extern s32 D_00441988[];
extern u8 D_004411E0[];

void func_0040B1C8(void) {
    s32 i;
    s32 *p;
    s32 num;
    s32 addr;

    if (func_0040B160() == 0) {
        return;
    }
    i = 2;
    p = &D_00441988[0];
    SetSyscall_9(p[0], p[1]);
    Copy_5((void *)0x80074000, D_004411E0, 0x7A8);
    FlushCache_2(0);
    FlushCache_2(2);
    SetSyscall_9(p[2], p[3]);
    p = &D_00441988[4];
    do {
        i++;
        num = p[0];
        addr = GetEntryAddress_7(num);
        p += 2;
        SetSyscall_9(num, addr);
    } while (i < 3);
}

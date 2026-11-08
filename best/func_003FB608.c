extern s32 func_003F74F8(void *);
extern s32 func_003FB6C0(void *, s32, s32);

struct Frame {
    void *f00;      /* 0x00 */
    s32 f04;        /* 0x04 */
    s32 f08;        /* 0x08 */
    u16 f0C;        /* 0x0C */
    u16 f0E;        /* 0x0E */
    void *f10;      /* 0x10 */
    s32 f14;        /* 0x14 */
    s32 f18;        /* 0x18 */
    s32 f1C;        /* 0x1C */
    char pad20[0x34]; /* 0x20..0x54 */
    s32 f54;        /* 0x54 */
    char pad58[0x08]; /* 0x58..0x60 */
    char buf[0x400]; /* 0x60..0x460 */
};

s32 func_003FB608(void *arg0, s32 arg1, s32 arg2) {
    struct Frame frame;
    void *p = &frame;
    s32 var_16;

    frame.f54 = *(s32 *)((char *)arg0 + 0x54);
    frame.f0C = *(u16 *)((char *)arg0 + 0x0C) & 0xFFFD;
    frame.f0E = *(u16 *)((char *)arg0 + 0x0E);
    frame.f1C = *(s32 *)((char *)arg0 + 0x1C);
    *(s32 *)((char *)p + 0x24) = *(s32 *)((char *)arg0 + 0x24);
    frame.f10 = (void *)((char *)p + 0x60);
    frame.f14 = 0x400;
    frame.f00 = (void *)((char *)p + 0x60);
    frame.f08 = 0x400;
    frame.f18 = 0;

    var_16 = func_003FB6C0(p, arg1, arg2);
    if (var_16 >= 0) {
        if (func_003F74F8(p) != 0) {
            var_16 = -1;
        }
    }
    if (frame.f0C & 0x40) {
        *(u16 *)((char *)arg0 + 0x0C) = *(u16 *)((char *)arg0 + 0x0C) | 0x40;
    }
    return var_16;
}

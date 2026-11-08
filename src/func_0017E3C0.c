extern void func_001E2460(void *, s32);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_003F9698(const char *, ...);
extern void *func_0017E500(void *, s32, s32);

extern const char D_0046F6D0[];
extern const char D_0046F6E0[];
extern const char D_0046FB00[];
extern const char D_0046FB18[];
extern const char D_0046FB30[];

typedef struct { s32 id; s32 variant; char *str; } Entry;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_0017E3C0(void *arg0, s32 id) {
    Entry *e;
    s32 count;

    e = (Entry *)func_0017E500(arg0, id, 0);
    if (e == 0) {
        return 0;
    }
    e++;
    count = 1;
    if (e->id == id) {
        do {
            e++;
            count++;
        } while (e->id == id);
    }
    return count;
}

static inline void *init_a(void *p, s32 a) {
    func_001E2460(p, a);
    return p;
}

void func_00181678(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_a(buf, arg2);
    func_001E2510(buf, D_0046FB00, (u8 *)arg0 + 0xC);
    func_001E25B0(buf, D_0046FB18, (u8 *)arg0 + 0x10);
    func_001E2510(buf, D_0046FB30, (u8 *)arg0 + 0x14);
}

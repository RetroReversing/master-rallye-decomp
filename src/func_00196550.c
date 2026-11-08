/* identical to func_00191E60 (matched), with its names changed by decompdecomp */
#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern void func_001D4040(void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);

typedef struct { s32 v[4]; } Key16;

void func_00191DB0(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[11]);
    func_001E3D10(tmp, &key, arg1);
}

void func_00191E08(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[13]);
    func_001E3D10(tmp, &key, arg1);
}

void func_00196550(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[14]);
    func_001E3EC0(tmp, &key, arg1);
}

#include "context.h"

/* func_0016D178 */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_00196CE0 */
extern void func_00196358(void);
extern void func_001D2900(void *arg0, s32 arg1);
extern void func_001D4040(void *arg0, void *arg1);
extern s32 func_001E4280(void);
extern void func_001E3650(s32 arg0, void *arg1);

void func_00196CE0(void *arg0) {
    s32 tmp;
    char buf[16];

    func_00196358();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x30));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3650(tmp, buf);
}

/* func_00196DB0 */
void func_00196DB0(void *arg0) {
    s32 tmp;
    char buf[16];

    func_00196358();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x34));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3650(tmp, buf);
}

/* func_00196E10 */
extern s32 D_00425D80;
extern s32 D_002AD408(s32 arg0);
extern s32 func_00196070(s32 arg0);

s32 func_00196E10(void) {
    if (D_00425D80 == 0) {
        D_00425D80 = func_00196070(D_002AD408(0x3C));
    }
    return D_00425D80;
}

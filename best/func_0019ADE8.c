#include "context.h"

void func_0019ADE8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 m;
    s32 t;
    s32 v;

    p[0x1E4 / 4] = 0;
    t = p[0x230 / 4];
    if (t != 0) {
        p[0x230 / 4] = 0;
    } else {
        p[0x230 / 4] = 1;
    }

    m = p[0x1E8 / 4];
    switch (m) {
    case 0:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 1;
            p[0x1E8 / 4] = v;
        } else {
            v = 2;
            p[0x1E8 / 4] = v;
        }
        break;
    case 1:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 2;
            p[0x1E8 / 4] = v;
        } else {
            v = 3;
            p[0x1E8 / 4] = v;
        }
        break;
    case 2:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 3;
            p[0x1E8 / 4] = v;
        } else {
            v = 0;
            p[0x1E8 / 4] = 0;
        }
        break;
    case 3:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 0;
            p[0x1E8 / 4] = 0;
        } else {
            v = 1;
            p[0x1E8 / 4] = v;
        }
        break;
    default:
        break;
    }
}

#include "context.h"

s32 func_003DB498(u32 *arg0) {
    u32 var3 = *arg0;
    if (var3 & 7) {
        if (var3 & 1) {
            return 0;
        }
        if (var3 & 2) {
            *arg0 = var3 >> 1;
            return 1;
        }
        *arg0 = var3 >> 2;
        return 2;
    }
    s32 var5 = 0;
    if ((var3 & 0xFFFF) == 0) {
        var5 = 0x10;
        var3 >>= 16;
    }
    if ((var3 & 0xFF) == 0) {
        var5 += 8;
        var3 >>= 8;
    }
    if ((var3 & 0xF) == 0) {
        var5 += 4;
        var3 >>= 4;
    }
    if ((var3 & 0x3) == 0) {
        var5 += 2;
        var3 >>= 2;
    }
    if ((var3 & 0x1) == 0) {
        var3 >>= 1;
        var5 += 1;
        if (var3 == 0) {
            return 0x20;
        }
    }
    *arg0 = var3;
    return var5;
}

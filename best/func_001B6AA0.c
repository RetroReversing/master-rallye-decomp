#include "context.h"

void func_001B6E48(void *);

s32 func_001B6AA0(void *arg0) {
    s32 var_3;

    var_3 = 1;
    if (!(*(f32 *)((u8 *)arg0 + 0xD8) < *(f32 *)((u8 *)arg0 + 0xBC))) {
        var_3 = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0x3C) == 0) {
        if (var_3 != 0) {
            if (*(s32 *)((u8 *)arg0 + 0x50) == 0) {
                if (*(s32 *)((u8 *)arg0 + 0xC0) == 0) {
                    func_001B6E48(arg0);
                    var_3 = 1;
                    if (!(*(f32 *)((u8 *)arg0 + 0xAC) > 0.0f)) {
                        var_3 = 0;
                    }
                    *(s32 *)((u8 *)arg0 + 0xC0) = var_3;
                    return var_3;
                }
                return 1;
            }
        }
    }
    return 0;
}

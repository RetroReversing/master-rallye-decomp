/* func_0022FA48 */
#include "context.h"
void *func_0022FA48(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f4 = ((struct { f32 f; } *)arg1)->f;
    f32 temp_f5 = ((struct { f32 f; } *)arg1 + 1)->f;
    void *var_3 = arg0;
    f32 var_3_f0 = ((struct { f32 f; } *)var_3)->f - temp_f4;
    f32 var_3_f6 = ((struct { f32 f; } *)arg1 + 2)->f;
    f32 var_3_f2 = ((struct { f32 f; } *)var_3 + 1)->f - var_3_f6;
    s32 temp_4 = (s32)(((s8 *)arg0 + 0x2C) - (s8 *)var_3) >> 4;
    f32 var_f3 = (var_3_f0 * var_3_f0) + (var_3_f2 * var_3_f2) + (var_3_f0 * var_3_f0); // placeholder
    if (temp_4 > 1) {
        s32 var_6 = temp_4 - 1;
        void *var_2 = (s8 *)var_3 + 0x10;
        do {
            f32 temp_f0_2 = ((struct { f32 f; } *)var_2)->f - temp_f4;
            f32 temp_f2_2 = ((struct { f32 f; } *)var_2 + 1)->f - temp_f5;
            f32 temp_f1_2 = ((struct { f32 f; } *)var_2 + 2)->f - var_3_f6;
            f32 temp_f0_3 = (temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2) + (temp_f1_2 * temp_f1_2);
            var_6 -= 1;
            if (temp_f0_3 < var_f3) {
                var_f3 = temp_f0_3;
                var_3 = var_2;
            }
            var_2 = (s8 *)var_2 + 0x10;
        } while (var_6 != 0);
    }
    return var_3;
}

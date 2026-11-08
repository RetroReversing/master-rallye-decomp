void func_003CB668(f32);
void func_003CB710(void*, void*, f32);
void func_003CB7B8(void*, void*, f32);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} S_func_003CB860_arg2;

void func_003CB860(void *arg0, void *arg1, S_func_003CB860_arg2 *arg2) {
    func_003CB668(arg2->unk8);
    func_003CB7B8(arg0, arg0, arg2->unk4);
    func_003CB710(arg0, arg0, arg2->unk0);
}

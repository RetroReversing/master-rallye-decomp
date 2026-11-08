typedef struct {
    char data[8];
} Unk8;

void func_0026BA68(Unk8 *arg0, Unk8 *arg1) {
    arg0[0xAC/8] = arg1[0];
    arg0[0xB4/8] = arg1[1];
    arg0[0xBC/8] = arg1[2];
    arg0[0xC4/8] = arg1[3];
    arg0[0xCC/8] = arg1[4];
    arg0[0xD4/8] = arg1[5];
    *(int *)((char*)arg0 + 0xDC) = *(int *)((char*)arg1 + 0x30);
}

extern void func_003E0EA0(int,void*);extern void func_003E4F40(void*,int);extern void func_003E4F70(void*);extern void func_0040AF58(void);extern void func_0040AFA0(void);
void func_003E1D20(void*p,int a,unsigned addr){int cmd[8];cmd[0]=2;
func_003E0EA0(*(int*)((char*)p+0x858),cmd);func_003E4F70(p);
*(volatile unsigned*)0x10002000=0;func_003E4F70(p);func_0040AF58();
*(volatile unsigned*)0x1000b410=addr&0xfffffff;*(volatile unsigned*)0x1000b420=4;*(volatile unsigned*)0x1000b400=0x101;func_0040AFA0();
func_003E4F40(p,a);func_003E4F70(p);cmd[0]=3;func_003E0EA0(*(int*)((char*)p+0x858),cmd);
}

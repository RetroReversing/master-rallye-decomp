extern void FlushCache_2(int);extern void func_0040AF58(void);extern void func_0040AFA0(void);
void func_003E1760(unsigned p,unsigned src,int size){
unsigned base=((p+0x88f)>>4)<<4;char *out=(char*)base;
while(size>0){int n=size<=0xfff40?size:0xfff40;size-=n; s64 tag=size?3:0; int q=(n+15)/16;
*(volatile u64*)out=((u64)(src&0x0fffffff)<<32)|(tag<<28)|(unsigned)q;
src+=n;out+=16;}
FlushCache_2(0);func_0040AF58();
*(volatile unsigned*)0x1000b430=base&0x0fffffff;
*(volatile unsigned*)0x1000b420=0;
*(volatile unsigned*)0x1000b400=0x105;
func_0040AFA0();
}

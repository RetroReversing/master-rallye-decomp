typedef unsigned int U128 __attribute__((mode(TI)));
u32 func_003F6EC0(s64 x){s32 lo=(s32)x; s32 hi=(s32)(x>>32);u32 nz=(u32)(lo|-lo)>>31;hi&=0x7fffffff;return (u32)(0x7ff00000-(hi|nz))>>31;}
int func_003F9288(const unsigned char *a,const unsigned char *b,u32 n){
 if(n>=16&&!(((u32)a|(u32)b)&15)){do{u64 d=*(const u64 *)b^*(const u64 *)a;
 d|=*(const u64 *)(b+8)^*(const u64 *)(a+8);if(d)break;a+=16;b+=16;n-=16;}while(n>=16);}
 while(n--){unsigned x=*a++,y=*b++;if(x!=y)return x-y;}return 0;
}
void *func_003F931C(void *dest,const void *src,u32 n){
 unsigned char *d=dest;const unsigned char*s=src;
 if(n>=32&&!(((u32)s|(u32)dest)&15)){do{*(U128 *)d=*(const U128 *)s;d+=16;s+=16;*(U128 *)d=*(const U128 *)s;d+=16;s+=16;n-=32;}while(n>=32);
 while(n>=8){*(u64 *)d=*(const u64 *)s;d+=8;s+=8;n-=8;}}
 while(n--)*d++=*s++;return dest;
}
void *func_003F94D0(void *dest,int c,u32 n){unsigned char *d=dest;
 if(n>=8&&!((u32)dest&15)){u64 w=(unsigned char)c;U128 q;w|=w<<8;w|=w<<16;w|=w<<32;
 {union {U128 q;u64 w[2];} v;v.w[0]=w;v.w[1]=w;q=v.q;}
 while(n>=32){*(U128 *)d=q;d+=16;*(U128 *)d=q;d+=16;n-=32;}
 while(n>=8){*(u64 *)d=w;d+=8;n-=8;}}
 while(n--)*d++=c;return dest;}

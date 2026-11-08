typedef unsigned int U128 __attribute__((mode(TI)));
u32 func_003F6EC0(s64 x){s32 hi=(s32)(x>>32);s32 lo=(s32)x;u32 nz=(u32)(lo|-lo)>>31;hi&=0x7fffffff;hi|=nz;hi=0x7ff00000-hi;return (u32)hi>>31;}
int func_003F9288(const unsigned char *a,const unsigned char *b,u32 n){
 if(n>=16&&!(((u32)a|(u32)b)&15)){do{u64 d=*(const u64 *)b^*(const u64 *)a;
 d|=*(const u64 *)(b+8)^*(const u64 *)(a+8);a+=16;if(d){a-=16;break;}b+=16;{u32 old=n;n-=16;if(old<32)break;}}while(1);}
 while(n--){unsigned x=*a++,y=*b++;if(x!=y)return x-y;}return 0;
}
void *func_003F931C(void *dest,const void *src,int n){
 unsigned char *d=dest,*tail=dest;const unsigned char*s=src;int left;
 if((u32)n>=32&&!(((u32)s|(u32)dest)&15)){do{*(U128 *)d=*(const U128 *)s;d+=16;s+=16;*(U128 *)d=*(const U128 *)s;d+=16;s+=16;n-=32;}while((u32)n>=32);
 while((u32)n>=8){*(u64 *)d=*(const u64 *)s;d+=8;s+=8;n-=8;}tail=d;}
 n--;if(n!=-1){do{unsigned char b=*s;n--;s++;*tail=b;tail++;}while(n!=-1);}return dest;
}
void *func_003F94D0(void *dest,int c,u32 n){unsigned char *d=dest;
 if(n>=8&&!((u32)dest&15)){u64 w=(unsigned char)c;U128 q;w*=0x0101010101010101ULL;
 {union {U128 q;u64 w[2];} v;v.w[0]=w;v.w[1]=w;q=v.q;}
 while(n>=32){*(U128 *)d=q;d+=16;*(U128 *)d=q;d+=16;n-=32;}
 while(n>=8){*(u64 *)d=w;d+=8;n-=8;}}
 while(n--)*d++=c;return dest;}

// librkaudio_common.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012a78 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== skv_fast_log2 @ 00012a9c size=12 ===== */

void skv_fast_log2(void)

{
  (*(code *)PTR_skv_fast_log2_0003c00c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012aa8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003c010)();
  return;
}



/* ===== skv_fft_generate_twiddles_float32 @ 00012ab4 size=12 ===== */

void skv_fft_generate_twiddles_float32(void)

{
  (*(code *)PTR_skv_fft_generate_twiddles_float32_0003c014)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012ac0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003c018)(__nmemb);
  return pvVar1;
}



/* ===== skv_radix2_r2c_c @ 00012acc size=12 ===== */

void skv_radix2_r2c_c(void)

{
  (*(code *)PTR_skv_radix2_r2c_c_0003c01c)();
  return;
}



/* ===== skv_fft_alloc_r2c_float32 @ 00012ad8 size=12 ===== */

void skv_fft_alloc_r2c_float32(void)

{
  (*(code *)PTR_skv_fft_alloc_r2c_float32_0003c020)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003c028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::floor @ 00012afc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_floor_0003c02c)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== skv_fast_sqrtf @ 00012b08 size=12 ===== */

void skv_fast_sqrtf(void)

{
  (*(code *)PTR_skv_fast_sqrtf_0003c030)();
  return;
}



/* ===== skv_radix8_c2r_c @ 00012b14 size=12 ===== */

void skv_radix8_c2r_c(void)

{
  (*(code *)PTR_skv_radix8_c2r_c_0003c034)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00012b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003c038)(__dest);
  return pvVar1;
}



/* ===== skv_fft_fix_destroy @ 00012b2c size=12 ===== */

void skv_fft_fix_destroy(void)

{
  (*(code *)PTR_skv_fft_fix_destroy_0003c03c)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00012b50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0003c048)(__ptr);
  return pvVar1;
}



/* ===== SKV_ABSC @ 00012b5c size=12 ===== */

void SKV_ABSC(void)

{
  (*(code *)PTR_SKV_ABSC_0003c04c)();
  return;
}



/* ===== fix_kiss_fftr_alloc @ 00012b68 size=12 ===== */

void fix_kiss_fftr_alloc(void)

{
  (*(code *)PTR_fix_kiss_fftr_alloc_0003c050)();
  return;
}



/* ===== skv_radix8_r2c_c @ 00012b80 size=12 ===== */

void skv_radix8_r2c_c(void)

{
  (*(code *)PTR_skv_radix8_r2c_c_0003c058)();
  return;
}



/* ===== <EXTERNAL>::feof @ 00012b8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0003c05c)(__stream);
  return iVar1;
}



/* ===== skv_fft @ 00012b98 size=12 ===== */

void skv_fft(void)

{
  (*(code *)PTR_skv_fft_0003c060)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012ba4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003c064)();
  return;
}



/* ===== skv_factor @ 00012bbc size=12 ===== */

void skv_factor(void)

{
  (*(code *)PTR_skv_factor_0003c06c)();
  return;
}



/* ===== <EXTERNAL>::powf @ 00012bc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_0003c070)();
  return fVar1;
}



/* ===== rkaudio_agc_init @ 00012bd4 size=12 ===== */

void rkaudio_agc_init(void)

{
  (*(code *)PTR_rkaudio_agc_init_0003c074)();
  return;
}



/* ===== skv_fft_ne10_init @ 00012be0 size=12 ===== */

void skv_fft_ne10_init(void)

{
  (*(code *)PTR_skv_fft_ne10_init_0003c078)();
  return;
}



/* ===== skv_radix4_r2c_c @ 00012bec size=12 ===== */

void skv_radix4_r2c_c(void)

{
  (*(code *)PTR_skv_radix4_r2c_c_0003c07c)();
  return;
}



/* ===== gainCal_new @ 00012bf8 size=12 ===== */

void gainCal_new(RKAudioAGCState_ *param_1,float param_2)

{
  (*(code *)PTR_gainCal_new_0003c080)(param_1);
  return;
}



/* ===== skv_fft_destroy_r2c_float32 @ 00012c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void skv_fft_destroy_r2c_float32(void *__ptr)

{
  (*(code *)PTR_skv_fft_destroy_r2c_float32_0003c088)(__ptr);
  return;
}



/* ===== spx_drft_clear @ 00012c1c size=12 ===== */

void spx_drft_clear(void)

{
  (*(code *)PTR_spx_drft_clear_0003c08c)();
  return;
}



/* ===== <EXTERNAL>::expf @ 00012c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_expf_0003c090)();
  return fVar1;
}



/* ===== <EXTERNAL>::__assert @ 00012c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0003c098)(__assertion);
  return;
}



/* ===== rkaudio_agc_destory @ 00012c4c size=12 ===== */

void rkaudio_agc_destory(void)

{
  (*(code *)PTR_rkaudio_agc_destory_0003c09c)();
  return;
}



/* ===== skv_fft_generate_twiddles_transposed_float32 @ 00012c58 size=12 ===== */

void skv_fft_generate_twiddles_transposed_float32(void)

{
  (*(code *)PTR_skv_fft_generate_twiddles_transposed_float32_0003c0a0)();
  return;
}



/* ===== rkaudio_agc_process @ 00012c70 size=12 ===== */

void rkaudio_agc_process(void)

{
  (*(code *)PTR_rkaudio_agc_process_0003c0a8)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00012c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0003c0ac)(__tp);
  return tVar1;
}



/* ===== fix_kiss_fftr2 @ 00012c88 size=12 ===== */

void fix_kiss_fftr2(void)

{
  (*(code *)PTR_fix_kiss_fftr2_0003c0b0)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00012c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003c0b4)(__stream);
  return iVar1;
}



/* ===== spx_drft_init @ 00012ca0 size=12 ===== */

void spx_drft_init(void)

{
  (*(code *)PTR_spx_drft_init_0003c0b8)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00012cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003c0bc)(__ptr);
  return sVar1;
}



/* ===== fix_kiss_fft_alloc @ 00012cb8 size=12 ===== */

void fix_kiss_fft_alloc(void)

{
  (*(code *)PTR_fix_kiss_fft_alloc_0003c0c0)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00012cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0003c0c8)(__filename);
  return pFVar1;
}



/* ===== skv_fast_cos @ 00012cdc size=12 ===== */

void skv_fast_cos(void)

{
  (*(code *)PTR_skv_fast_cos_0003c0cc)();
  return;
}



/* ===== skv_fft_fix_init @ 00012ce8 size=12 ===== */

void skv_fft_fix_init(void)

{
  (*(code *)PTR_skv_fft_fix_init_0003c0d0)();
  return;
}



/* ===== kiss_fft @ 00012cf4 size=12 ===== */

void kiss_fft(void)

{
  (*(code *)PTR_kiss_fft_0003c0d4)();
  return;
}



/* ===== skv_fft_small_init @ 00012d00 size=12 ===== */

void skv_fft_small_init(void)

{
  (*(code *)PTR_skv_fft_small_init_0003c0d8)();
  return;
}



/* ===== <EXTERNAL>::__isnanf @ 00012d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnanf(float __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___isnanf_0003c0dc)();
  return iVar1;
}



/* ===== IsEmpltyOfComplexMatrix @ 00012d18 size=12 ===== */

void IsEmpltyOfComplexMatrix(void)

{
  (*(code *)PTR_IsEmpltyOfComplexMatrix_0003c0e0)();
  return;
}



/* ===== skv_fft_fix @ 00012d24 size=12 ===== */

void skv_fft_fix(void)

{
  (*(code *)PTR_skv_fft_fix_0003c0e4)();
  return;
}



/* ===== <EXTERNAL>::ferror @ 00012d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_0003c0ec)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__isinff @ 00012d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isinff(float __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___isinff_0003c0f0)();
  return iVar1;
}



/* ===== skv_fft_small_destroy @ 00012d60 size=12 ===== */

void skv_fft_small_destroy(void)

{
  (*(code *)PTR_skv_fft_small_destroy_0003c0f8)();
  return;
}



/* ===== skv_fft_c2c_1d_int32_neon @ 00012d6c size=12 ===== */

void skv_fft_c2c_1d_int32_neon(void)

{
  (*(code *)PTR_skv_fft_c2c_1d_int32_neon_0003c0fc)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00012d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003c104)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00012d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003c108)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003c118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sin @ 00012dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_sin_0003c11c)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::rand @ 00012dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0003c120)();
  return iVar1;
}



/* ===== skv_fft_ne10_destroy @ 00012de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void skv_fft_ne10_destroy(void *__ptr)

{
  (*(code *)PTR_skv_fft_ne10_destroy_0003c124)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fmodf @ 00012df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float fmodf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_fmodf_0003c128)();
  return fVar1;
}



/* ===== <EXTERNAL>::exit @ 00012dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003c12c)(__status);
  return;
}



/* ===== skv_logtab_init @ 00012e14 size=12 ===== */

void skv_logtab_init(void)

{
  (*(code *)PTR_skv_logtab_init_0003c134)();
  return;
}



/* ===== PowC1 @ 00012e20 size=12 ===== */

void PowC1(void)

{
  (*(code *)PTR_PowC1_0003c138)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 00012e2c size=12 ===== */

void __aeabi_idiv(void)

{
  (*(code *)PTR___aeabi_idiv_0003c13c)();
  return;
}



/* ===== fix_kiss_fft @ 00012e38 size=12 ===== */

void fix_kiss_fft(void)

{
  (*(code *)PTR_fix_kiss_fft_0003c140)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00012e44 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_0003c144)();
  return;
}



/* ===== skv_radix2_c2r_c @ 00012e50 size=12 ===== */

void skv_radix2_c2r_c(void)

{
  (*(code *)PTR_skv_radix2_c2r_c_0003c148)();
  return;
}



/* ===== Multi1 @ 00012e68 size=12 ===== */

void Multi1(void)

{
  (*(code *)PTR_Multi1_0003c150)();
  return;
}



/* ===== <EXTERNAL>::free @ 00012e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003c154)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003c158)(__nptr);
  return iVar1;
}



/* ===== skv_fast_sin @ 00012e8c size=12 ===== */

void skv_fast_sin(void)

{
  (*(code *)PTR_skv_fast_sin_0003c15c)();
  return;
}



/* ===== <EXTERNAL>::cos @ 00012e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_cos_0003c160)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== Add1 @ 00012ea4 size=12 ===== */

void Add1(void)

{
  (*(code *)PTR_Add1_0003c164)();
  return;
}



/* ===== skv_radix4_c2r_c @ 00012ebc size=12 ===== */

void skv_radix4_c2r_c(void)

{
  (*(code *)PTR_skv_radix4_c2r_c_0003c16c)();
  return;
}



/* ===== kiss_fft_alloc @ 00012ec8 size=12 ===== */

void kiss_fft_alloc(void)

{
  (*(code *)PTR_kiss_fft_alloc_0003c170)();
  return;
}



/* ===== <EXTERNAL>::roundf @ 00012ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float roundf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_roundf_0003c174)();
  return fVar1;
}



/* ===== <EXTERNAL>::log10f @ 00012eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log10f(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_log10f_0003c17c)();
  return fVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012ef8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003c180)();
  return;
}



/* ===== entry @ 00012f10 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00012f5c + 0x12f28 == DAT_00012f58 + 0x12f20) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012f60 + 0x12f30 + DAT_00012f64);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012fcc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013040 + 0x12fe8;
  if (*(char *)(DAT_0001303c + 0x12fdc) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00013044) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013048 + 0x13008));
  }
  entry();
  if (*(int *)(iVar1 + DAT_0001304c) != 0) {
    __deregister_frame_info(DAT_00013050 + 0x13028);
  }
  *(undefined1 *)(DAT_00013054 + 0x13038) = 1;
  return;
}



/* ===== _INIT_0 @ 00013058 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013090 + 0x13068 + DAT_00013094) != 0) {
    __register_frame_info(DAT_0001309c + 0x13088,DAT_00013098 + 0x13084);
  }
  if (((DAT_00012fc0 + 0x12f80) - (DAT_00012fbc + 0x12f78) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012fc4 + 0x12f88 + DAT_00012fc8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000130a0 @ 000130a0 size=128 ===== */

int FUN_000130a0(FILE *param_1,uint *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined2 local_12;
  
  sVar1 = fread(&local_12,1,1,param_1);
  if ((sVar1 != 0) && (sVar1 = fread((void *)((int)&local_12 + 1),1,1,param_1), sVar1 != 0)) {
    *param_2 = (uint)local_12;
    return 1;
  }
  iVar2 = feof(param_1);
  return -(uint)(iVar2 == 0);
}



/* ===== FUN_00013120 @ 00013120 size=200 ===== */

int FUN_00013120(FILE *param_1,uint *param_2)

{
  size_t sVar1;
  int iVar2;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11 [5];
  
  sVar1 = fread(&local_14,1,1,param_1);
  if ((((sVar1 == 0) || (sVar1 = fread(&local_13,1,1,param_1), sVar1 == 0)) ||
      (sVar1 = fread(&local_12,1,1,param_1), sVar1 == 0)) ||
     (sVar1 = fread(local_11,1,1,param_1), sVar1 == 0)) {
    iVar2 = feof(param_1);
    iVar2 = -(uint)(iVar2 == 0);
  }
  else {
    iVar2 = 1;
    *param_2 = (uint)local_13 << 0x10 | (uint)local_14 << 0x18 | (uint)local_11[0] |
               (uint)local_12 << 8;
  }
  return iVar2;
}



/* ===== FUN_000131e8 @ 000131e8 size=200 ===== */

int FUN_000131e8(FILE *param_1,uint *param_2)

{
  size_t sVar1;
  int iVar2;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11 [5];
  
  sVar1 = fread(&local_14,1,1,param_1);
  if ((((sVar1 == 0) || (sVar1 = fread(&local_13,1,1,param_1), sVar1 == 0)) ||
      (sVar1 = fread(&local_12,1,1,param_1), sVar1 == 0)) ||
     (sVar1 = fread(local_11,1,1,param_1), sVar1 == 0)) {
    iVar2 = feof(param_1);
    iVar2 = -(uint)(iVar2 == 0);
  }
  else {
    iVar2 = 1;
    *param_2 = (uint)local_12 << 0x10 | (uint)local_11[0] << 0x18 | (uint)local_14 |
               (uint)local_13 << 8;
  }
  return iVar2;
}



/* ===== wave_reader_open @ 000132b0 size=664 ===== */

void * wave_reader_open(char *param_1,undefined4 *param_2)

{
  void *__ptr;
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  int local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  undefined1 auStack_2c [4];
  int local_28;
  undefined4 local_24;
  undefined1 auStack_20 [4];
  long local_1c;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)((int)&DAT_00013548 + DAT_00013560),(char *)(DAT_0001355c + 0x13544),0xab);
  }
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)(DAT_00013554 + 0x13528),(char *)(DAT_00013550 + 0x13524),0xac);
  }
  __ptr = calloc(1,0x18);
  if (__ptr == (void *)0x0) {
    *param_2 = 3;
    return (void *)0x0;
  }
  pFVar1 = fopen(param_1,(char *)(DAT_00013548 + 0x132f8));
  *(FILE **)((int)__ptr + 0x14) = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    *param_2 = 1;
    goto LAB_000133b4;
  }
  iVar2 = FUN_00013120(pFVar1,&local_3c);
  if (iVar2 == 0) {
LAB_000133a4:
    pFVar1 = *(FILE **)((int)__ptr + 0x14);
    *param_2 = 2;
  }
  else {
    pFVar1 = *(FILE **)((int)__ptr + 0x14);
    if (local_3c == 0x52494646) {
      iVar2 = FUN_000131e8(pFVar1,auStack_38);
      if (iVar2 != 0) {
        while (iVar2 = FUN_00013120(*(undefined4 *)((int)__ptr + 0x14),&local_34), iVar2 != 0) {
          if (local_34 == 0x57415645) {
            iVar2 = FUN_00013120(*(undefined4 *)((int)__ptr + 0x14),&local_30);
            if (iVar2 == 1) {
              pFVar1 = *(FILE **)((int)__ptr + 0x14);
              if (local_30 != 0x666d7420) goto LAB_000133cc;
              iVar2 = FUN_000131e8(pFVar1,auStack_2c);
              if (((((iVar2 == 1) &&
                    (iVar2 = FUN_000130a0(*(undefined4 *)((int)__ptr + 0x14),__ptr), iVar2 == 1)) &&
                   (iVar2 = FUN_000130a0(*(undefined4 *)((int)__ptr + 0x14),(int)__ptr + 4),
                   iVar2 == 1)) &&
                  ((iVar2 = FUN_000131e8(*(undefined4 *)((int)__ptr + 0x14),(int)__ptr + 8),
                   iVar2 == 1 &&
                   (iVar2 = FUN_000131e8(*(undefined4 *)((int)__ptr + 0x14),auStack_20), iVar2 == 1)
                   ))) && ((iVar2 = FUN_000130a0(*(undefined4 *)((int)__ptr + 0x14),&local_1c),
                           iVar2 == 1 &&
                           ((iVar2 = FUN_000130a0(*(undefined4 *)((int)__ptr + 0x14),
                                                  (int)__ptr + 0xc), iVar2 == 1 &&
                            (iVar2 = FUN_00013120(*(undefined4 *)((int)__ptr + 0x14),&local_28),
                            iVar2 == 1)))))) {
                pFVar1 = *(FILE **)((int)__ptr + 0x14);
                if (local_28 != 0x64617461) goto LAB_000133cc;
                iVar2 = FUN_000131e8(pFVar1,&local_24);
                if (iVar2 == 1) {
                  iVar2 = *(int *)((int)__ptr + 0xc) * *(int *)((int)__ptr + 4);
                  if (iVar2 < 0) {
                    iVar2 = iVar2 + 7;
                  }
                  uVar3 = __aeabi_idiv(local_24,iVar2 >> 3);
                  *(undefined4 *)((int)__ptr + 0x10) = uVar3;
                  return __ptr;
                }
              }
            }
            pFVar1 = *(FILE **)((int)__ptr + 0x14);
            if (iVar2 == 0) {
              uVar3 = 4;
            }
            else {
              uVar3 = 2;
            }
            *param_2 = uVar3;
            goto LAB_000133b0;
          }
          iVar2 = FUN_000131e8(*(undefined4 *)((int)__ptr + 0x14),&local_1c);
          if ((iVar2 == 0) || (iVar2 = fseek(*(FILE **)((int)__ptr + 0x14),local_1c,1), iVar2 == -1)
             ) break;
        }
      }
      goto LAB_000133a4;
    }
LAB_000133cc:
    *param_2 = 4;
  }
LAB_000133b0:
  fclose(pFVar1);
LAB_000133b4:
  free(__ptr);
  return (void *)0x0;
}



/* ===== wave_reader_close @ 00013564 size=32 ===== */

void wave_reader_close(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  fclose(*(FILE **)((int)param_1 + 0x14));
  free(param_1);
  return;
}



/* ===== wave_reader_get_format @ 00013584 size=52 ===== */

undefined4 wave_reader_get_format(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_000135b8 + DAT_000135c0),(char *)(DAT_000135bc + 0x135b4),0xf4);
}



/* ===== wave_reader_get_num_channels @ 000135c4 size=52 ===== */

undefined4 wave_reader_get_num_channels(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_000135f8 + DAT_00013600),(char *)(DAT_000135fc + 0x135f4),0xfc);
}



/* ===== wave_reader_get_sample_rate @ 00013604 size=52 ===== */

undefined4 wave_reader_get_sample_rate(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013638 + DAT_00013640),(char *)(DAT_0001363c + 0x13634),0x104);
}



/* ===== wave_reader_get_sample_bits @ 00013644 size=52 ===== */

undefined4 wave_reader_get_sample_bits(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013678 + DAT_00013680),(char *)(DAT_0001367c + 0x13674),0x10c);
}



/* ===== wave_reader_get_num_samples @ 00013684 size=52 ===== */

undefined4 wave_reader_get_num_samples(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_000136b8 + DAT_000136c0),(char *)(DAT_000136bc + 0x136b4),0x114);
}



/* ===== wave_reader_get_samples @ 000136c4 size=176 ===== */

size_t wave_reader_get_samples(int param_1,size_t param_2,void *param_3)

{
  size_t sVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)((int)&DAT_00013774 + DAT_00013788),(char *)(DAT_00013784 + 0x13770),0x11e);
  }
  if (param_3 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    sVar1 = fread(param_3,iVar2 >> 3,param_2,*(FILE **)(param_1 + 0x14));
    if ((int)param_2 <= (int)sVar1) {
      return sVar1;
    }
    iVar2 = ferror(*(FILE **)(param_1 + 0x14));
    if (iVar2 != 0) {
      sVar1 = 0xffffffff;
    }
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)(DAT_0001377c + 0x13754),(char *)(DAT_00013778 + 0x13750),0x11f);
}



/* ===== FUN_0001378c @ 0001378c size=168 ===== */

undefined4 FUN_0001378c(FILE *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 local_11;
  
  local_11 = (undefined1)((uint)param_2 >> 0x18);
  sVar1 = fwrite(&local_11,1,1,param_1);
  uVar2 = 0;
  if (sVar1 != 0) {
    local_11 = (undefined1)((uint)param_2 >> 0x10);
    sVar1 = fwrite(&local_11,1,1,param_1);
    uVar2 = 0;
    if (sVar1 != 0) {
      local_11 = (undefined1)((uint)param_2 >> 8);
      sVar1 = fwrite(&local_11,1,1,param_1);
      uVar2 = 0;
      if (sVar1 != 0) {
        local_11 = (undefined1)param_2;
        sVar1 = fwrite(&local_11,1,1,param_1);
        uVar2 = 0;
        if (sVar1 != 0) {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00013834 @ 00013834 size=168 ===== */

undefined4 FUN_00013834(FILE *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 local_11;
  
  local_11 = (undefined1)param_2;
  sVar1 = fwrite(&local_11,1,1,param_1);
  uVar2 = 0;
  if (sVar1 != 0) {
    local_11 = (undefined1)((uint)param_2 >> 8);
    sVar1 = fwrite(&local_11,1,1,param_1);
    uVar2 = 0;
    if (sVar1 != 0) {
      local_11 = (undefined1)((uint)param_2 >> 0x10);
      sVar1 = fwrite(&local_11,1,1,param_1);
      uVar2 = 0;
      if (sVar1 != 0) {
        local_11 = (undefined1)((uint)param_2 >> 0x18);
        sVar1 = fwrite(&local_11,1,1,param_1);
        uVar2 = 0;
        if (sVar1 != 0) {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}



/* ===== FUN_000138dc @ 000138dc size=36 ===== */

void FUN_000138dc(void)

{
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013900 + DAT_00013908),(char *)(DAT_00013904 + 0x138fc),0x1e);
}



/* ===== FUN_0001390c @ 0001390c size=812 ===== */

undefined4 * FUN_0001390c(undefined4 *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *__ptr;
  uint uVar4;
  int *piVar5;
  undefined4 *extraout_r2;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  undefined8 uVar9;
  undefined1 local_19 [5];
  
  pFVar8 = (FILE *)param_1[5];
  local_19[0] = 0x52;
  sVar1 = fwrite(local_19,1,1,pFVar8);
  if (sVar1 == 0) {
    return (undefined4 *)0x0;
  }
  local_19[0] = 0x49;
  sVar1 = fwrite(local_19,1,1,pFVar8);
  if (sVar1 == 0) {
    return (undefined4 *)0x0;
  }
  local_19[0] = 0x46;
  sVar1 = fwrite(local_19,1,1,pFVar8);
  if (sVar1 == 0) {
    return (undefined4 *)0x0;
  }
  local_19[0] = 0x46;
  sVar1 = fwrite(local_19,1,1,pFVar8);
  if (sVar1 == 0) {
    return (undefined4 *)0x0;
  }
  uVar2 = param_1[5];
  iVar6 = param_1[3] * param_1[1] * param_1[4];
  iVar3 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  uVar4 = iVar3 >> 3;
  if (iVar6 < -7) {
LAB_00013c34:
    uVar9 = FUN_000138dc(uVar2);
    piVar5 = (int *)((ulonglong)uVar9 >> 0x20);
    if ((char *)uVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert((char *)((int)&DAT_00013df4 + DAT_00013e18),(char *)(DAT_00013e14 + 0x13df0),0xb8);
    }
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert((char *)(DAT_00013e0c + 0x13dd4),(char *)(DAT_00013e08 + 0x13dd0),0xb9);
    }
    if (extraout_r2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert((char *)(DAT_00013e00 + 0x13db4),(char *)(DAT_00013dfc + 0x13db0),0xba);
    }
    if (((*piVar5 - 1U < 0xc) && (piVar5[2] == 0x10 || (piVar5[2] & 0xffffffefU) == 8)) &&
       (iVar3 = piVar5[1],
       iVar3 == 48000 ||
       (iVar3 == 0xac44 ||
       (iVar3 == 32000 ||
       (iVar3 == 24000 ||
       (iVar3 == 0x5622 || (iVar3 == 16000 || (iVar3 == 0x2b11 || iVar3 == 8000)))))))) {
      __ptr = calloc(1,0x18);
      if (__ptr == (undefined4 *)0x0) {
        *extraout_r2 = 3;
        return (undefined4 *)0x0;
      }
      pFVar8 = fopen((char *)uVar9,(char *)(DAT_00013df4 + 0x13d0c));
      __ptr[5] = pFVar8;
      if (pFVar8 == (FILE *)0x0) {
        *extraout_r2 = 1;
      }
      else {
        iVar3 = piVar5[1];
        iVar6 = piVar5[2];
        iVar7 = *piVar5;
        *__ptr = 1;
        __ptr[2] = iVar3;
        __ptr[1] = iVar7;
        __ptr[3] = iVar6;
        __ptr[4] = 0;
        iVar3 = FUN_0001390c(__ptr);
        if (iVar3 != 0) {
          return __ptr;
        }
        pFVar8 = (FILE *)__ptr[5];
        *extraout_r2 = 2;
        fclose(pFVar8);
      }
      free(__ptr);
      return (undefined4 *)0x0;
    }
    *extraout_r2 = 4;
    return (undefined4 *)0x0;
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 + 1;
  }
  iVar3 = FUN_00013834(uVar2,uVar4 + 0x24);
  if ((((iVar3 != 0) && (iVar3 = FUN_0001378c(param_1[5],0x57415645), iVar3 != 0)) &&
      (iVar3 = FUN_0001378c(param_1[5],0x666d7420), iVar3 != 0)) &&
     (iVar3 = FUN_00013834(param_1[5],0x10), iVar3 != 0)) {
    pFVar8 = (FILE *)param_1[5];
    uVar2 = *param_1;
    local_19[0] = (undefined1)uVar2;
    sVar1 = fwrite(local_19,1,1,pFVar8);
    if (sVar1 == 0) {
      return (undefined4 *)0x0;
    }
    local_19[0] = (undefined1)((uint)uVar2 >> 8);
    sVar1 = fwrite(local_19,1,1,pFVar8);
    if (sVar1 == 0) {
      return (undefined4 *)0x0;
    }
    pFVar8 = (FILE *)param_1[5];
    uVar2 = param_1[1];
    local_19[0] = (undefined1)uVar2;
    sVar1 = fwrite(local_19,1,1,pFVar8);
    if (sVar1 == 0) {
      return (undefined4 *)0x0;
    }
    local_19[0] = (undefined1)((uint)uVar2 >> 8);
    sVar1 = fwrite(local_19,1,1,pFVar8);
    if (sVar1 == 0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_00013834(param_1[5],param_1[2]);
    if (iVar3 != 0) {
      iVar3 = param_1[3] * param_1[1] * param_1[2];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      iVar3 = FUN_00013834(param_1[5],iVar3 >> 3);
      if (iVar3 != 0) {
        pFVar8 = (FILE *)param_1[5];
        iVar6 = param_1[3] * param_1[1];
        iVar3 = iVar6 + 7;
        if (-1 < iVar6) {
          iVar3 = iVar6;
        }
        local_19[0] = (undefined1)(iVar3 >> 3);
        sVar1 = fwrite(local_19,1,1,pFVar8);
        if (sVar1 == 0) {
          return (undefined4 *)0x0;
        }
        local_19[0] = (undefined1)(iVar3 >> 0xb);
        sVar1 = fwrite(local_19,1,1,pFVar8);
        if (sVar1 == 0) {
          return (undefined4 *)0x0;
        }
        pFVar8 = (FILE *)param_1[5];
        uVar2 = param_1[3];
        local_19[0] = (undefined1)uVar2;
        sVar1 = fwrite(local_19,1,1,pFVar8);
        if (sVar1 == 0) {
          return (undefined4 *)0x0;
        }
        local_19[0] = (undefined1)((uint)uVar2 >> 8);
        sVar1 = fwrite(local_19,1,1,pFVar8);
        if (sVar1 == 0) {
          return (undefined4 *)0x0;
        }
        iVar3 = FUN_0001378c(param_1[5],0x64617461);
        if (iVar3 != 0) {
          uVar2 = param_1[5];
          iVar6 = param_1[3] * param_1[1] * param_1[4];
          iVar3 = iVar6 + 7;
          if (-1 < iVar6) {
            iVar3 = iVar6;
          }
          uVar4 = iVar3 >> 3;
          if (-8 < iVar6) {
            if ((uVar4 & 1) != 0) {
              uVar4 = uVar4 + 1;
            }
            iVar3 = FUN_00013834(uVar2,uVar4);
            return (undefined4 *)(uint)(iVar3 != 0);
          }
          goto LAB_00013c34;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}



/* ===== wave_writer_open @ 00013c38 size=444 ===== */

undefined4 * wave_writer_open(char *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *__ptr;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)((int)&DAT_00013df4 + DAT_00013e18),(char *)(DAT_00013e14 + 0x13df0),0xb8);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)(DAT_00013e0c + 0x13dd4),(char *)(DAT_00013e08 + 0x13dd0),0xb9);
  }
  if (param_3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)(DAT_00013e00 + 0x13db4),(char *)(DAT_00013dfc + 0x13db0),0xba);
  }
  if (((*param_2 - 1U < 0xc) && (param_2[2] == 0x10 || (param_2[2] & 0xffffffefU) == 8)) &&
     (iVar3 = param_2[1],
     iVar3 == 48000 ||
     (iVar3 == 0xac44 ||
     (iVar3 == 32000 ||
     (iVar3 == 24000 || (iVar3 == 0x5622 || (iVar3 == 16000 || (iVar3 == 0x2b11 || iVar3 == 8000))))
     )))) {
    __ptr = calloc(1,0x18);
    if (__ptr == (undefined4 *)0x0) {
      *param_3 = 3;
      return (undefined4 *)0x0;
    }
    pFVar1 = fopen(param_1,(char *)(DAT_00013df4 + 0x13d0c));
    __ptr[5] = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      *param_3 = 1;
    }
    else {
      iVar3 = param_2[1];
      iVar2 = param_2[2];
      iVar4 = *param_2;
      *__ptr = 1;
      __ptr[2] = iVar3;
      __ptr[1] = iVar4;
      __ptr[3] = iVar2;
      __ptr[4] = 0;
      iVar3 = FUN_0001390c(__ptr);
      if (iVar3 != 0) {
        return __ptr;
      }
      pFVar1 = (FILE *)__ptr[5];
      *param_3 = 2;
      fclose(pFVar1);
    }
    free(__ptr);
    return (undefined4 *)0x0;
  }
  *param_3 = 4;
  return (undefined4 *)0x0;
}



/* ===== wave_writer_close @ 00013e1c size=244 ===== */

undefined4 wave_writer_close(void *param_1,undefined4 *param_2)

{
  FILE *__s;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_11;
  
  if (param_1 == (void *)0x0) {
    return 1;
  }
  iVar2 = *(int *)((int)param_1 + 0xc) * *(int *)((int)param_1 + 4) * *(int *)((int)param_1 + 0x10);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if (-8 < iVar2) {
    __s = *(FILE **)((int)param_1 + 0x14);
    if ((iVar1 >> 3 & 1U) != 0) {
      local_11 = 0;
      fwrite(&local_11,1,1,__s);
      __s = *(FILE **)((int)param_1 + 0x14);
    }
    iVar1 = fseek(__s,0,0);
    if ((iVar1 == 0) && (iVar1 = FUN_0001390c(param_1), iVar1 != 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *param_2 = 2;
    }
    fclose(*(FILE **)((int)param_1 + 0x14));
    free(param_1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013f10 + DAT_00013f18),(char *)(DAT_00013f14 + 0x13f0c),0xeb);
}



/* ===== wave_writer_get_format @ 00013f1c size=52 ===== */

undefined4 wave_writer_get_format(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013f50 + DAT_00013f58),(char *)(DAT_00013f54 + 0x13f4c),0x107);
}



/* ===== wave_writer_get_num_channels @ 00013f5c size=52 ===== */

undefined4 wave_writer_get_num_channels(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013f90 + DAT_00013f98),(char *)(DAT_00013f94 + 0x13f8c),0x10f);
}



/* ===== wave_writer_get_sample_rate @ 00013f9c size=52 ===== */

undefined4 wave_writer_get_sample_rate(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00013fd0 + DAT_00013fd8),(char *)(DAT_00013fd4 + 0x13fcc),0x117);
}



/* ===== wave_writer_get_sample_bits @ 00013fdc size=52 ===== */

undefined4 wave_writer_get_sample_bits(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00014010 + DAT_00014018),(char *)(DAT_00014014 + 0x1400c),0x11f);
}



/* ===== wave_writer_get_num_samples @ 0001401c size=52 ===== */

undefined4 wave_writer_get_num_samples(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_00014050 + DAT_00014058),(char *)(DAT_00014054 + 0x1404c),0x127);
}



/* ===== wave_writer_put_samples @ 0001405c size=156 ===== */

void wave_writer_put_samples(int param_1,size_t param_2,void *param_3)

{
  size_t sVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert((char *)(DAT_00014100 + 0x140d8),(char *)(DAT_000140fc + 0x140d4),0x131);
  }
  if (param_3 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    sVar1 = fwrite(param_3,iVar2 >> 3,param_2,*(FILE **)(param_1 + 0x14));
    if ((int)param_2 <= (int)sVar1) {
      *(size_t *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + sVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert((char *)((int)&DAT_000140f8 + DAT_0001410c),(char *)(DAT_00014108 + 0x140f4),0x132);
}



/* ===== skv_bigorsmall @ 00014110 size=8 ===== */

undefined4 skv_bigorsmall(void)

{
  return 0;
}



/* ===== skv_bytes2floats @ 00014118 size=852 ===== */

/* skv_bytes2floats(unsigned char*, float*, int, int, int) */

int skv_bytes2floats(uchar *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  uint in_fpscr;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_4 != 0x10) {
    if (0 < param_3) {
      if (param_3 - 1U < 0xf || param_2 < param_1 + param_3 && param_1 < param_2 + param_3) {
        pbVar9 = param_1 + -1;
        pbVar8 = pbVar9 + param_3;
        do {
          pbVar9 = pbVar9 + 1;
          fVar12 = (float)VectorUnsignedToFloat((uint)*pbVar9,(byte)(in_fpscr >> 0x16) & 3);
          *param_2 = fVar12;
          param_2 = param_2 + 1;
        } while (pbVar9 != pbVar8);
        return param_3;
      }
      pfVar5 = param_2;
      pauVar10 = (undefined1 (*) [16])param_1;
      do {
        auVar13 = *pauVar10;
        pauVar10 = pauVar10 + 1;
        auVar14 = VectorCopyLong(auVar13._0_8_,1,1);
        pfVar6 = pfVar5 + 0x10;
        auVar13 = VectorCopyLong(auVar13._8_8_,1,1);
        auVar16 = VectorCopyLong(auVar14._0_8_,2,1);
        auVar15 = VectorCopyLong(auVar13._0_8_,2,1);
        auVar14 = VectorCopyLong(auVar14._8_8_,2,1);
        auVar13 = VectorCopyLong(auVar13._8_8_,2,1);
        auVar16 = FixedToFP(auVar16,0,0,0,0x20);
        auVar14 = FixedToFP(auVar14,0,0,0,0x20);
        auVar15 = FixedToFP(auVar15,0,0,0,0x20);
        auVar13 = FixedToFP(auVar13,0,0,0,0x20);
        *(longlong *)pfVar5 = auVar16._0_8_;
        *(longlong *)(pfVar5 + 2) = auVar16._8_8_;
        *(longlong *)(pfVar5 + 4) = auVar14._0_8_;
        *(longlong *)(pfVar5 + 6) = auVar14._8_8_;
        *(longlong *)(pfVar5 + 8) = auVar15._0_8_;
        *(longlong *)(pfVar5 + 10) = auVar15._8_8_;
        *(longlong *)(pfVar5 + 0xc) = auVar13._0_8_;
        *(longlong *)(pfVar5 + 0xe) = auVar13._8_8_;
        pfVar5 = pfVar6;
      } while (pfVar6 != param_2 + (param_3 & 0xfffffff0));
      uVar7 = param_3 & 0xfffffff0;
      if (param_3 != uVar7) {
        iVar4 = uVar7 + 1;
        fVar12 = (float)VectorUnsignedToFloat((uint)param_1[uVar7],(byte)(in_fpscr >> 0x16) & 3);
        param_2[uVar7] = fVar12;
        if (iVar4 < param_3) {
          iVar11 = uVar7 + 2;
          fVar12 = (float)VectorUnsignedToFloat((uint)param_1[iVar4],(byte)(in_fpscr >> 0x16) & 3);
          param_2[iVar4] = fVar12;
          if (iVar11 < param_3) {
            iVar4 = uVar7 + 3;
            fVar12 = (float)VectorUnsignedToFloat
                                      ((uint)param_1[iVar11],(byte)(in_fpscr >> 0x16) & 3);
            param_2[iVar11] = fVar12;
            if (iVar4 < param_3) {
              iVar11 = uVar7 + 4;
              fVar12 = (float)VectorUnsignedToFloat
                                        ((uint)param_1[iVar4],(byte)(in_fpscr >> 0x16) & 3);
              param_2[iVar4] = fVar12;
              if (iVar11 < param_3) {
                iVar4 = uVar7 + 5;
                fVar12 = (float)VectorUnsignedToFloat
                                          ((uint)param_1[iVar11],(byte)(in_fpscr >> 0x16) & 3);
                param_2[iVar11] = fVar12;
                if (iVar4 < param_3) {
                  iVar11 = uVar7 + 6;
                  fVar12 = (float)VectorUnsignedToFloat
                                            ((uint)param_1[iVar4],(byte)(in_fpscr >> 0x16) & 3);
                  param_2[iVar4] = fVar12;
                  if (iVar11 < param_3) {
                    iVar4 = uVar7 + 7;
                    fVar12 = (float)VectorUnsignedToFloat
                                              ((uint)param_1[iVar11],(byte)(in_fpscr >> 0x16) & 3);
                    param_2[iVar11] = fVar12;
                    if (iVar4 < param_3) {
                      iVar11 = uVar7 + 8;
                      fVar12 = (float)VectorUnsignedToFloat
                                                ((uint)param_1[iVar4],(byte)(in_fpscr >> 0x16) & 3);
                      param_2[iVar4] = fVar12;
                      if (iVar11 < param_3) {
                        iVar4 = uVar7 + 9;
                        fVar12 = (float)VectorUnsignedToFloat
                                                  ((uint)param_1[iVar11],
                                                   (byte)(in_fpscr >> 0x16) & 3);
                        param_2[iVar11] = fVar12;
                        if (iVar4 < param_3) {
                          iVar11 = uVar7 + 10;
                          fVar12 = (float)VectorUnsignedToFloat
                                                    ((uint)param_1[iVar4],
                                                     (byte)(in_fpscr >> 0x16) & 3);
                          param_2[iVar4] = fVar12;
                          if (iVar11 < param_3) {
                            iVar4 = uVar7 + 0xb;
                            fVar12 = (float)VectorUnsignedToFloat
                                                      ((uint)param_1[iVar11],
                                                       (byte)(in_fpscr >> 0x16) & 3);
                            param_2[iVar11] = fVar12;
                            if (iVar4 < param_3) {
                              iVar11 = uVar7 + 0xc;
                              fVar12 = (float)VectorUnsignedToFloat
                                                        ((uint)param_1[iVar4],
                                                         (byte)(in_fpscr >> 0x16) & 3);
                              param_2[iVar4] = fVar12;
                              if (iVar11 < param_3) {
                                iVar4 = uVar7 + 0xd;
                                fVar12 = (float)VectorUnsignedToFloat
                                                          ((uint)param_1[iVar11],
                                                           (byte)(in_fpscr >> 0x16) & 3);
                                param_2[iVar11] = fVar12;
                                if (iVar4 < param_3) {
                                  iVar11 = uVar7 + 0xe;
                                  fVar12 = (float)VectorUnsignedToFloat
                                                            ((uint)param_1[iVar4],
                                                             (byte)(in_fpscr >> 0x16) & 3);
                                  param_2[iVar4] = fVar12;
                                  if (iVar11 < param_3) {
                                    fVar12 = (float)VectorUnsignedToFloat
                                                              ((uint)param_1[iVar11],
                                                               (byte)(in_fpscr >> 0x16) & 3);
                                    param_2[iVar11] = fVar12;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return param_3;
  }
  iVar4 = param_3 / 2;
  if (param_3 < 1) {
    return iVar4;
  }
  if (param_5 == 0) {
    iVar11 = 0;
    do {
      iVar3 = iVar11 + 1;
      iVar1 = iVar11 >> 1;
      puVar2 = param_1 + iVar11;
      iVar11 = iVar11 + 2;
      fVar12 = (float)VectorSignedToFloat((int)CONCAT11(param_1[iVar3],*puVar2),
                                          (byte)(in_fpscr >> 0x16) & 3);
      param_2[iVar1] = fVar12;
    } while (iVar11 < param_3);
    return iVar4;
  }
  if (param_5 == 1) {
    iVar11 = 0;
    do {
      puVar2 = param_1 + iVar11;
      iVar1 = iVar11 >> 1;
      iVar3 = iVar11 + 1;
      iVar11 = iVar11 + 2;
      fVar12 = (float)VectorSignedToFloat((int)CONCAT11(*puVar2,param_1[iVar3]),
                                          (byte)(in_fpscr >> 0x16) & 3);
      param_2[iVar1] = fVar12;
    } while (iVar11 < param_3);
    return iVar4;
  }
  return iVar4;
}



/* ===== skv_floats2bytes @ 0001446c size=2556 ===== */

/* skv_floats2bytes(float*, unsigned char*, int, int, int) */

int skv_floats2bytes(float *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  uchar *puVar11;
  int iVar12;
  int iVar13;
  uchar *puVar14;
  longlong lVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if (param_4 == 0x10) {
    iVar13 = param_3 * 2;
    if (0 < param_3) {
      if (param_5 == 0) {
        pfVar4 = (float *)param_2;
        if (param_3 - 1U < 0xf || param_1 < param_2 + iVar13 && param_2 < param_1 + param_3) {
          do {
            fVar16 = *param_1;
            param_1 = param_1 + 1;
            pfVar3 = (float *)((int)pfVar4 + 2);
            *(char *)pfVar4 = (char)(int)fVar16;
            *(char *)((int)pfVar4 + 1) = (char)((uint)(int)fVar16 >> 8);
            pfVar4 = pfVar3;
          } while (pfVar3 != (float *)(param_2 + iVar13));
        }
        else {
          pauVar6 = (undefined1 (*) [16])param_1;
          puVar11 = param_2;
          do {
            pauVar9 = pauVar6 + 2;
            pauVar10 = pauVar6 + 1;
            pauVar7 = pauVar6 + 3;
            auVar20 = FPToFixed(*pauVar6,0,0,3,0x20);
            pauVar6 = pauVar6 + 4;
            auVar18 = FPToFixed(*pauVar10,0,0,3,0x20);
            auVar27 = FPToFixed(*pauVar9,0,0,3,0x20);
            auVar24 = FPToFixed(*pauVar7,0,0,3,0x20);
            auVar28._0_8_ = VectorCopyNarrow(auVar20,4);
            auVar28._8_8_ = VectorCopyNarrow(auVar18,4);
            auVar18 = VectorCopyLong(auVar28._0_8_,2,0);
            auVar21 = VectorCopyLong(auVar28._8_8_,2,0);
            auVar27._0_8_ = VectorCopyNarrow(auVar27,4);
            auVar27._8_8_ = VectorCopyNarrow(auVar24,4);
            VectorCopyNarrow(auVar28,2);
            VectorCopyNarrow(auVar27,2);
            auVar24 = VectorSignedFixedToFloat(auVar18,8);
            auVar20 = VectorCopyLong(auVar27._0_8_,2,0);
            auVar18 = VectorCopyLong(auVar27._8_8_,2,0);
            auVar21 = VectorSignedFixedToFloat(auVar21,8);
            auVar20 = VectorSignedFixedToFloat(auVar20,8);
            auVar18 = VectorSignedFixedToFloat(auVar18,8);
            auVar26._0_8_ = VectorCopyNarrow(auVar24,4);
            auVar26._8_8_ = VectorCopyNarrow(auVar21,4);
            auVar23._0_8_ = VectorCopyNarrow(auVar20,4);
            auVar23._8_8_ = VectorCopyNarrow(auVar18,4);
            VectorCopyNarrow(auVar26,2);
            VectorCopyNarrow(auVar23,2);
            puVar1 = (uchar *)0x3e0;
            puVar2 = (uchar *)0x3f0;
            lVar15 = 8;
            puVar14 = puVar11;
            while( true ) {
              *puVar14 = *puVar1;
              puVar14[1] = *puVar2;
              puVar14 = puVar14 + 2;
              lVar15 = lVar15 + -1;
              if (lVar15 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
            }
            puVar1 = (uchar *)0x3e8;
            puVar2 = (uchar *)0x3f8;
            lVar15 = 8;
            while( true ) {
              *puVar14 = *puVar1;
              puVar14[1] = *puVar2;
              puVar14 = puVar14 + 2;
              lVar15 = lVar15 + -1;
              if (lVar15 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
            }
            puVar11 = puVar11 + 0x20;
          } while (pauVar6 != (undefined1 (*) [16])(param_1 + (param_3 & 0xfffffff0)));
          uVar5 = param_3 & 0xfffffff0;
          if (param_3 != uVar5) {
            pfVar4 = param_1 + uVar5;
            iVar12 = uVar5 + 1;
            fVar16 = *pfVar4;
            param_2[uVar5 * 2] = (uchar)(int)fVar16;
            param_2[uVar5 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
            if (iVar12 < param_3) {
              fVar16 = pfVar4[1];
              iVar8 = uVar5 + 2;
              param_2[iVar12 * 2] = (uchar)(int)fVar16;
              param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
              if (iVar8 < param_3) {
                fVar16 = pfVar4[2];
                iVar12 = uVar5 + 3;
                param_2[iVar8 * 2] = (uchar)(int)fVar16;
                param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                if (iVar12 < param_3) {
                  fVar16 = pfVar4[3];
                  iVar8 = uVar5 + 4;
                  param_2[iVar12 * 2] = (uchar)(int)fVar16;
                  param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                  if (iVar8 < param_3) {
                    fVar16 = pfVar4[4];
                    iVar12 = uVar5 + 5;
                    param_2[iVar8 * 2] = (uchar)(int)fVar16;
                    param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                    if (iVar12 < param_3) {
                      fVar16 = pfVar4[5];
                      iVar8 = uVar5 + 6;
                      param_2[iVar12 * 2] = (uchar)(int)fVar16;
                      param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                      if (iVar8 < param_3) {
                        fVar16 = pfVar4[6];
                        iVar12 = uVar5 + 7;
                        param_2[iVar8 * 2] = (uchar)(int)fVar16;
                        param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                        if (iVar12 < param_3) {
                          fVar16 = pfVar4[7];
                          iVar8 = uVar5 + 8;
                          param_2[iVar12 * 2] = (uchar)(int)fVar16;
                          param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                          if (iVar8 < param_3) {
                            fVar16 = pfVar4[8];
                            iVar12 = uVar5 + 9;
                            param_2[iVar8 * 2] = (uchar)(int)fVar16;
                            param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                            if (iVar12 < param_3) {
                              fVar16 = pfVar4[9];
                              iVar8 = uVar5 + 10;
                              param_2[iVar12 * 2] = (uchar)(int)fVar16;
                              param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                              if (iVar8 < param_3) {
                                fVar16 = pfVar4[10];
                                iVar12 = uVar5 + 0xb;
                                param_2[iVar8 * 2] = (uchar)(int)fVar16;
                                param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                                if (iVar12 < param_3) {
                                  fVar16 = pfVar4[0xb];
                                  iVar8 = uVar5 + 0xc;
                                  param_2[iVar12 * 2] = (uchar)(int)fVar16;
                                  param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                                  if (iVar8 < param_3) {
                                    fVar16 = pfVar4[0xc];
                                    iVar12 = uVar5 + 0xd;
                                    param_2[iVar8 * 2] = (uchar)(int)fVar16;
                                    param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                                    if (iVar12 < param_3) {
                                      fVar16 = pfVar4[0xd];
                                      iVar8 = uVar5 + 0xe;
                                      param_2[iVar12 * 2] = (uchar)(int)fVar16;
                                      param_2[iVar12 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                                      if (iVar8 < param_3) {
                                        fVar16 = pfVar4[0xe];
                                        param_2[iVar8 * 2] = (uchar)(int)fVar16;
                                        param_2[iVar8 * 2 + 1] = (uchar)((uint)(int)fVar16 >> 8);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (param_5 == 1) {
        pfVar4 = (float *)param_2;
        if (param_3 - 1U < 0xf || param_1 < param_2 + iVar13 && param_2 < param_1 + param_3) {
          do {
            fVar16 = *param_1;
            param_1 = param_1 + 1;
            pfVar3 = (float *)((int)pfVar4 + 2);
            *(char *)((int)pfVar4 + 1) = (char)(int)fVar16;
            *(char *)pfVar4 = (char)((uint)(int)fVar16 >> 8);
            pfVar4 = pfVar3;
          } while (pfVar3 != (float *)(param_2 + iVar13));
        }
        else {
          pauVar6 = (undefined1 (*) [16])param_1;
          puVar11 = param_2;
          do {
            pauVar9 = pauVar6 + 2;
            pauVar10 = pauVar6 + 1;
            pauVar7 = pauVar6 + 3;
            auVar21 = FPToFixed(*pauVar6,0,0,3,0x20);
            pauVar6 = pauVar6 + 4;
            auVar18 = FPToFixed(*pauVar10,0,0,3,0x20);
            auVar20 = FPToFixed(*pauVar9,0,0,3,0x20);
            auVar24 = FPToFixed(*pauVar7,0,0,3,0x20);
            auVar21._0_8_ = VectorCopyNarrow(auVar21,4);
            auVar21._8_8_ = VectorCopyNarrow(auVar18,4);
            auVar18 = VectorCopyLong(auVar21._0_8_,2,0);
            auVar27 = VectorCopyLong(auVar21._8_8_,2,0);
            auVar20._0_8_ = VectorCopyNarrow(auVar20,4);
            auVar20._8_8_ = VectorCopyNarrow(auVar24,4);
            auVar28 = VectorSignedFixedToFloat(auVar18,8);
            VectorCopyNarrow(auVar21,2);
            VectorCopyNarrow(auVar20,2);
            auVar21 = VectorCopyLong(auVar20._0_8_,2,0);
            auVar18 = VectorCopyLong(auVar20._8_8_,2,0);
            auVar24 = VectorSignedFixedToFloat(auVar27,8);
            auVar20 = VectorSignedFixedToFloat(auVar21,8);
            auVar18 = VectorSignedFixedToFloat(auVar18,8);
            uVar17 = VectorCopyNarrow(auVar28,4);
            uVar19 = VectorCopyNarrow(auVar24,4);
            auVar24._0_8_ = VectorCopyNarrow(auVar20,4);
            auVar24._8_8_ = VectorCopyNarrow(auVar18,4);
            auVar18._8_8_ = uVar19;
            auVar18._0_8_ = uVar17;
            VectorCopyNarrow(auVar18,2);
            VectorCopyNarrow(auVar24,2);
            puVar1 = (uchar *)0x320;
            puVar2 = (uchar *)0x330;
            lVar15 = 8;
            puVar14 = puVar11;
            while( true ) {
              *puVar14 = *puVar1;
              puVar14[1] = *puVar2;
              puVar14 = puVar14 + 2;
              lVar15 = lVar15 + -1;
              if (lVar15 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
            }
            puVar1 = (uchar *)0x328;
            puVar2 = (uchar *)0x338;
            lVar15 = 8;
            while( true ) {
              *puVar14 = *puVar1;
              puVar14[1] = *puVar2;
              puVar14 = puVar14 + 2;
              lVar15 = lVar15 + -1;
              if (lVar15 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
            }
            puVar11 = puVar11 + 0x20;
          } while (pauVar6 != (undefined1 (*) [16])(param_1 + (param_3 & 0xfffffff0)));
          uVar5 = param_3 & 0xfffffff0;
          if (param_3 != uVar5) {
            pfVar4 = param_1 + uVar5;
            iVar12 = uVar5 + 1;
            fVar16 = *pfVar4;
            param_2[uVar5 * 2] = (uchar)((uint)(int)fVar16 >> 8);
            param_2[uVar5 * 2 + 1] = (uchar)(int)fVar16;
            if (iVar12 < param_3) {
              fVar16 = pfVar4[1];
              iVar8 = uVar5 + 2;
              param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
              param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
              if (iVar8 < param_3) {
                fVar16 = pfVar4[2];
                iVar12 = uVar5 + 3;
                param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                if (iVar12 < param_3) {
                  fVar16 = pfVar4[3];
                  iVar8 = uVar5 + 4;
                  param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                  param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                  if (iVar8 < param_3) {
                    fVar16 = pfVar4[4];
                    iVar12 = uVar5 + 5;
                    param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                    param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                    if (iVar12 < param_3) {
                      fVar16 = pfVar4[5];
                      iVar8 = uVar5 + 6;
                      param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                      param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                      if (iVar8 < param_3) {
                        fVar16 = pfVar4[6];
                        iVar12 = uVar5 + 7;
                        param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                        param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                        if (iVar12 < param_3) {
                          fVar16 = pfVar4[7];
                          iVar8 = uVar5 + 8;
                          param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                          param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                          if (iVar8 < param_3) {
                            fVar16 = pfVar4[8];
                            iVar12 = uVar5 + 9;
                            param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                            param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                            if (iVar12 < param_3) {
                              fVar16 = pfVar4[9];
                              iVar8 = uVar5 + 10;
                              param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                              param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                              if (iVar8 < param_3) {
                                fVar16 = pfVar4[10];
                                iVar12 = uVar5 + 0xb;
                                param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                                param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                                if (iVar12 < param_3) {
                                  fVar16 = pfVar4[0xb];
                                  iVar8 = uVar5 + 0xc;
                                  param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                                  param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                                  if (iVar8 < param_3) {
                                    fVar16 = pfVar4[0xc];
                                    iVar12 = uVar5 + 0xd;
                                    param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                                    param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                                    if (iVar12 < param_3) {
                                      fVar16 = pfVar4[0xd];
                                      iVar8 = uVar5 + 0xe;
                                      param_2[iVar12 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                                      param_2[iVar12 * 2 + 1] = (uchar)(int)fVar16;
                                      if (iVar8 < param_3) {
                                        fVar16 = pfVar4[0xe];
                                        param_2[iVar8 * 2] = (uchar)((uint)(int)fVar16 >> 8);
                                        param_2[iVar8 * 2 + 1] = (uchar)(int)fVar16;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar13 = param_3;
    if (0 < param_3) {
      pfVar4 = param_1 + param_3;
      if (param_3 - 1U < 0xf || param_1 < param_2 + param_3 && param_2 < pfVar4) {
        puVar11 = param_2 + -1;
        do {
          fVar16 = *param_1;
          param_1 = param_1 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = (0.0 < fVar16) * (char)(int)fVar16;
        } while (param_1 != pfVar4);
      }
      else {
        pauVar6 = (undefined1 (*) [16])param_1;
        puVar11 = param_2;
        do {
          pauVar9 = pauVar6 + 2;
          pauVar10 = pauVar6 + 1;
          pauVar7 = pauVar6 + 3;
          auVar24 = FPToFixed(*pauVar6,0,0,3,0x20);
          pauVar6 = pauVar6 + 4;
          auVar21 = FPToFixed(*pauVar10,0,0,3,0x20);
          auVar20 = FPToFixed(*pauVar9,0,0,3,0x20);
          auVar18 = FPToFixed(*pauVar7,0,0,3,0x20);
          auVar25._0_8_ = VectorCopyNarrow(auVar24,4);
          auVar25._8_8_ = VectorCopyNarrow(auVar21,4);
          auVar22._0_8_ = VectorCopyNarrow(auVar20,4);
          auVar22._8_8_ = VectorCopyNarrow(auVar18,4);
          uVar17 = VectorCopyNarrow(auVar25,2);
          uVar19 = VectorCopyNarrow(auVar22,2);
          *(undefined8 *)puVar11 = uVar17;
          *(undefined8 *)(puVar11 + 8) = uVar19;
          puVar11 = puVar11 + 0x10;
        } while (pauVar6 != (undefined1 (*) [16])(param_1 + (param_3 & 0xfffffff0)));
        uVar5 = param_3 & 0xfffffff0;
        if (param_3 != uVar5) {
          iVar12 = uVar5 + 1;
          param_2[uVar5] = (0.0 < param_1[uVar5]) * (char)(int)param_1[uVar5];
          if (iVar12 < param_3) {
            iVar8 = uVar5 + 2;
            param_2[iVar12] = (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
            if (iVar8 < param_3) {
              iVar12 = uVar5 + 3;
              param_2[iVar8] = (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
              if (iVar12 < param_3) {
                iVar8 = uVar5 + 4;
                param_2[iVar12] = (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                if (iVar8 < param_3) {
                  iVar12 = uVar5 + 5;
                  param_2[iVar8] = (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                  if (iVar12 < param_3) {
                    iVar8 = uVar5 + 6;
                    param_2[iVar12] = (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                    if (iVar8 < param_3) {
                      iVar12 = uVar5 + 7;
                      param_2[iVar8] = (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                      if (iVar12 < param_3) {
                        iVar8 = uVar5 + 8;
                        param_2[iVar12] = (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                        if (iVar8 < param_3) {
                          iVar12 = uVar5 + 9;
                          param_2[iVar8] = (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                          if (iVar12 < param_3) {
                            iVar8 = uVar5 + 10;
                            param_2[iVar12] = (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                            if (iVar8 < param_3) {
                              iVar12 = uVar5 + 0xb;
                              param_2[iVar8] = (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                              if (iVar12 < param_3) {
                                iVar8 = uVar5 + 0xc;
                                param_2[iVar12] =
                                     (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                                if (iVar8 < param_3) {
                                  iVar12 = uVar5 + 0xd;
                                  param_2[iVar8] =
                                       (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                                  if (iVar12 < param_3) {
                                    iVar8 = uVar5 + 0xe;
                                    param_2[iVar12] =
                                         (0.0 < param_1[iVar12]) * (char)(int)param_1[iVar12];
                                    if (iVar8 < param_3) {
                                      param_2[iVar8] =
                                           (0.0 < param_1[iVar8]) * (char)(int)param_1[iVar8];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar13;
}



/* ===== skv_bytes2shorts @ 00014e68 size=644 ===== */

uint skv_bytes2shorts(undefined1 (*param_1) [16],undefined8 *param_2,uint param_3,int param_4,
                     int param_5)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_4 != 0x10) {
    if (0 < (int)param_3) {
      if (param_3 - 1 < 0xf ||
          param_2 < *param_1 + param_3 &&
          param_1 < (undefined1 (*) [16])((int)param_2 + param_3 * 2)) {
        pbVar7 = param_1[-1] + 0xf;
        puVar3 = (ushort *)((int)param_2 + -2);
        pbVar2 = pbVar7 + param_3;
        do {
          pbVar7 = pbVar7 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = (ushort)*pbVar7;
        } while (pbVar7 != pbVar2);
        return param_3;
      }
      puVar4 = param_2;
      pauVar8 = param_1;
      do {
        auVar10 = *pauVar8;
        pauVar8 = pauVar8 + 1;
        puVar5 = puVar4 + 4;
        auVar11 = VectorCopyLong(auVar10._0_8_,1,1);
        auVar10 = VectorCopyLong(auVar10._8_8_,1,1);
        *puVar4 = auVar11._0_8_;
        puVar4[1] = auVar11._8_8_;
        puVar4[2] = auVar10._0_8_;
        puVar4[3] = auVar10._8_8_;
        puVar4 = puVar5;
      } while (puVar5 != param_2 + (param_3 >> 4) * 4);
      uVar6 = param_3 & 0xfffffff0;
      if (param_3 != uVar6) {
        iVar1 = uVar6 + 1;
        *(ushort *)((int)param_2 + uVar6 * 2) = (ushort)(byte)(*param_1)[uVar6];
        if (iVar1 < (int)param_3) {
          iVar9 = uVar6 + 2;
          *(ushort *)((int)param_2 + iVar1 * 2) = (ushort)(byte)(*param_1)[iVar1];
          if (iVar9 < (int)param_3) {
            iVar1 = uVar6 + 3;
            *(ushort *)((int)param_2 + iVar9 * 2) = (ushort)(byte)(*param_1)[iVar9];
            if (iVar1 < (int)param_3) {
              iVar9 = uVar6 + 4;
              *(ushort *)((int)param_2 + iVar1 * 2) = (ushort)(byte)(*param_1)[iVar1];
              if (iVar9 < (int)param_3) {
                iVar1 = uVar6 + 5;
                *(ushort *)((int)param_2 + iVar9 * 2) = (ushort)(byte)(*param_1)[iVar9];
                if (iVar1 < (int)param_3) {
                  iVar9 = uVar6 + 6;
                  *(ushort *)((int)param_2 + iVar1 * 2) = (ushort)(byte)(*param_1)[iVar1];
                  if (iVar9 < (int)param_3) {
                    iVar1 = uVar6 + 7;
                    *(ushort *)((int)param_2 + iVar9 * 2) = (ushort)(byte)(*param_1)[iVar9];
                    if (iVar1 < (int)param_3) {
                      iVar9 = uVar6 + 8;
                      *(ushort *)((int)param_2 + iVar1 * 2) = (ushort)(byte)(*param_1)[iVar1];
                      if (iVar9 < (int)param_3) {
                        iVar1 = uVar6 + 9;
                        *(ushort *)((int)param_2 + iVar9 * 2) = (ushort)(byte)(*param_1)[iVar9];
                        if (iVar1 < (int)param_3) {
                          iVar9 = uVar6 + 10;
                          *(ushort *)((int)param_2 + iVar1 * 2) = (ushort)(byte)(*param_1)[iVar1];
                          if (iVar9 < (int)param_3) {
                            iVar1 = uVar6 + 0xb;
                            *(ushort *)((int)param_2 + iVar9 * 2) = (ushort)(byte)(*param_1)[iVar9];
                            if (iVar1 < (int)param_3) {
                              iVar9 = uVar6 + 0xc;
                              *(ushort *)((int)param_2 + iVar1 * 2) =
                                   (ushort)(byte)(*param_1)[iVar1];
                              if (iVar9 < (int)param_3) {
                                iVar1 = uVar6 + 0xd;
                                *(ushort *)((int)param_2 + iVar9 * 2) =
                                     (ushort)(byte)(*param_1)[iVar9];
                                if (iVar1 < (int)param_3) {
                                  iVar9 = uVar6 + 0xe;
                                  *(ushort *)((int)param_2 + iVar1 * 2) =
                                       (ushort)(byte)(*param_1)[iVar1];
                                  if (iVar9 < (int)param_3) {
                                    *(ushort *)((int)param_2 + iVar9 * 2) =
                                         (ushort)(byte)(*param_1)[iVar9];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return param_3;
  }
  uVar6 = (int)param_3 / 2;
  if ((int)param_3 < 1) {
    return uVar6;
  }
  if (param_5 == 0) {
    iVar1 = 0;
    do {
      iVar9 = iVar1 + 2;
      *(ushort *)((int)param_2 + iVar1) = CONCAT11((*param_1)[iVar1 + 1],(*param_1)[iVar1]);
      iVar1 = iVar9;
    } while (iVar9 < (int)param_3);
    return uVar6;
  }
  if (param_5 == 1) {
    iVar1 = 0;
    do {
      iVar9 = iVar1 + 2;
      *(ushort *)((int)param_2 + iVar1) = CONCAT11((*param_1)[iVar1],(*param_1)[iVar1 + 1]);
      iVar1 = iVar9;
    } while (iVar9 < (int)param_3);
    return uVar6;
  }
  return uVar6;
}



/* ===== skv_shorts2bytes @ 000150ec size=2136 ===== */

uint skv_shorts2bytes(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,int param_4
                     ,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_4 == 0x10) {
    uVar10 = param_3 * 2;
    if (0 < (int)param_3) {
      if (param_5 == 0) {
        if (param_3 - 1 < 0xf || param_1 < param_2 + 2 && param_2 < param_1 + 2) {
          puVar3 = (undefined2 *)(param_1[-1] + 0xe);
          pauVar5 = param_2;
          do {
            puVar3 = puVar3 + 1;
            uVar2 = *puVar3;
            puVar4 = *pauVar5;
            (*pauVar5)[0] = (char)uVar2;
            (*pauVar5)[1] = (char)((ushort)uVar2 >> 8);
            pauVar5 = (undefined1 (*) [16])(puVar4 + 2);
          } while ((undefined1 (*) [16])(puVar4 + 2) != (undefined1 (*) [16])(*param_2 + uVar10));
        }
        else {
          pauVar5 = param_1;
          pauVar8 = param_2;
          do {
            pauVar6 = pauVar5 + 2;
            auVar13 = *pauVar5;
            auVar16 = pauVar5[1];
            auVar17 = VectorCopyLong(auVar13._0_8_,2,0);
            auVar15 = VectorCopyLong(auVar13._8_8_,2,0);
            VectorCopyNarrow(auVar13,2);
            VectorCopyNarrow(auVar16,2);
            auVar18 = VectorCopyLong(auVar16._0_8_,2,0);
            auVar13 = VectorCopyLong(auVar16._8_8_,2,0);
            auVar17 = VectorSignedFixedToFloat(auVar17,8);
            auVar18 = VectorSignedFixedToFloat(auVar18,8);
            auVar13 = VectorSignedFixedToFloat(auVar13,8);
            auVar16 = VectorSignedFixedToFloat(auVar15,8);
            auVar18._0_8_ = VectorCopyNarrow(auVar18,4);
            auVar18._8_8_ = VectorCopyNarrow(auVar13,4);
            auVar15._0_8_ = VectorCopyNarrow(auVar17,4);
            auVar15._8_8_ = VectorCopyNarrow(auVar16,4);
            VectorCopyNarrow(auVar15,2);
            VectorCopyNarrow(auVar18,2);
            puVar4 = (undefined1 *)0x3e0;
            puVar9 = (undefined1 *)0x3f0;
            lVar11 = 8;
            pauVar5 = pauVar8;
            while( true ) {
              (*pauVar5)[0] = *puVar4;
              (*pauVar5)[1] = *puVar9;
              pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
              lVar11 = lVar11 + -1;
              if (lVar11 == 0) break;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar4 = (undefined1 *)0x3e8;
            puVar9 = (undefined1 *)0x3f8;
            lVar11 = 8;
            while( true ) {
              (*pauVar5)[0] = *puVar4;
              (*pauVar5)[1] = *puVar9;
              pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
              lVar11 = lVar11 + -1;
              if (lVar11 == 0) break;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            pauVar8 = pauVar8 + 2;
            pauVar5 = pauVar6;
          } while (pauVar6 != param_1 + (param_3 >> 4) * 2);
          uVar7 = param_3 & 0xfffffff0;
          if (param_3 != uVar7) {
            iVar1 = uVar7 * 2;
            uVar2 = *(undefined2 *)(*param_1 + iVar1);
            (*param_2)[uVar7 * 2] = (char)uVar2;
            (*param_2)[iVar1 + 1] = (char)((ushort)uVar2 >> 8);
            if ((int)(uVar7 + 1) < (int)param_3) {
              uVar2 = *(undefined2 *)(*param_1 + iVar1 + 2);
              (*param_2)[uVar7 * 2 + 2] = (char)uVar2;
              (*param_2)[uVar7 * 2 + 3] = (char)((ushort)uVar2 >> 8);
              if ((int)(uVar7 + 2) < (int)param_3) {
                uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 4);
                (*param_2)[uVar7 * 2 + 4] = (char)uVar2;
                (*param_2)[uVar7 * 2 + 5] = (char)((ushort)uVar2 >> 8);
                if ((int)(uVar7 + 3) < (int)param_3) {
                  uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 6);
                  (*param_2)[uVar7 * 2 + 6] = (char)uVar2;
                  (*param_2)[uVar7 * 2 + 7] = (char)((ushort)uVar2 >> 8);
                  if ((int)(uVar7 + 4) < (int)param_3) {
                    uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 8);
                    (*param_2)[uVar7 * 2 + 8] = (char)uVar2;
                    (*param_2)[uVar7 * 2 + 9] = (char)((ushort)uVar2 >> 8);
                    if ((int)(uVar7 + 5) < (int)param_3) {
                      uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 10);
                      (*param_2)[uVar7 * 2 + 10] = (char)uVar2;
                      (*param_2)[uVar7 * 2 + 0xb] = (char)((ushort)uVar2 >> 8);
                      if ((int)(uVar7 + 6) < (int)param_3) {
                        uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 0xc);
                        (*param_2)[uVar7 * 2 + 0xc] = (char)uVar2;
                        (*param_2)[uVar7 * 2 + 0xd] = (char)((ushort)uVar2 >> 8);
                        if ((int)(uVar7 + 7) < (int)param_3) {
                          uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 0xe);
                          (*param_2)[uVar7 * 2 + 0xe] = (char)uVar2;
                          (*param_2)[uVar7 * 2 + 0xf] = (char)((ushort)uVar2 >> 8);
                          if ((int)(uVar7 + 8) < (int)param_3) {
                            uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2);
                            param_2[1][uVar7 * 2] = (char)uVar2;
                            param_2[1][uVar7 * 2 + 1] = (char)((ushort)uVar2 >> 8);
                            if ((int)(uVar7 + 9) < (int)param_3) {
                              uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 2);
                              param_2[1][uVar7 * 2 + 2] = (char)uVar2;
                              param_2[1][uVar7 * 2 + 3] = (char)((ushort)uVar2 >> 8);
                              if ((int)(uVar7 + 10) < (int)param_3) {
                                uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 4);
                                param_2[1][uVar7 * 2 + 4] = (char)uVar2;
                                param_2[1][uVar7 * 2 + 5] = (char)((ushort)uVar2 >> 8);
                                if ((int)(uVar7 + 0xb) < (int)param_3) {
                                  uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 6);
                                  param_2[1][uVar7 * 2 + 6] = (char)uVar2;
                                  param_2[1][uVar7 * 2 + 7] = (char)((ushort)uVar2 >> 8);
                                  if ((int)(uVar7 + 0xc) < (int)param_3) {
                                    uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 8);
                                    param_2[1][uVar7 * 2 + 8] = (char)uVar2;
                                    param_2[1][uVar7 * 2 + 9] = (char)((ushort)uVar2 >> 8);
                                    if ((int)(uVar7 + 0xd) < (int)param_3) {
                                      uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 10);
                                      param_2[1][uVar7 * 2 + 10] = (char)uVar2;
                                      param_2[1][uVar7 * 2 + 0xb] = (char)((ushort)uVar2 >> 8);
                                      if ((int)(uVar7 + 0xe) < (int)param_3) {
                                        uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 0xc);
                                        param_2[1][uVar7 * 2 + 0xc] = (char)uVar2;
                                        param_2[1][uVar7 * 2 + 0xd] = (char)((ushort)uVar2 >> 8);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (param_5 == 1) {
        if (param_3 - 1 < 0xf || param_1 < param_2 + 2 && param_2 < param_1 + 2) {
          puVar3 = (undefined2 *)(param_1[-1] + 0xe);
          pauVar5 = param_2;
          do {
            puVar3 = puVar3 + 1;
            uVar2 = *puVar3;
            puVar4 = *pauVar5;
            (*pauVar5)[1] = (char)uVar2;
            (*pauVar5)[0] = (char)((ushort)uVar2 >> 8);
            pauVar5 = (undefined1 (*) [16])(puVar4 + 2);
          } while ((undefined1 (*) [16])(puVar4 + 2) != (undefined1 (*) [16])(*param_2 + uVar10));
        }
        else {
          pauVar5 = param_1;
          pauVar8 = param_2;
          do {
            pauVar6 = pauVar5 + 2;
            auVar13 = *pauVar5;
            auVar16 = pauVar5[1];
            auVar17 = VectorCopyLong(auVar13._0_8_,2,0);
            auVar15 = VectorCopyLong(auVar13._8_8_,2,0);
            auVar18 = VectorCopyLong(auVar16._0_8_,2,0);
            VectorCopyNarrow(auVar13,2);
            VectorCopyNarrow(auVar16,2);
            auVar13 = VectorCopyLong(auVar16._8_8_,2,0);
            auVar16 = VectorSignedFixedToFloat(auVar17,8);
            auVar18 = VectorSignedFixedToFloat(auVar18,8);
            auVar17 = VectorSignedFixedToFloat(auVar13,8);
            auVar13 = VectorSignedFixedToFloat(auVar15,8);
            uVar12 = VectorCopyNarrow(auVar18,4);
            uVar14 = VectorCopyNarrow(auVar17,4);
            auVar16._0_8_ = VectorCopyNarrow(auVar16,4);
            auVar16._8_8_ = VectorCopyNarrow(auVar13,4);
            VectorCopyNarrow(auVar16,2);
            auVar13._8_8_ = uVar14;
            auVar13._0_8_ = uVar12;
            VectorCopyNarrow(auVar13,2);
            puVar4 = (undefined1 *)0x320;
            puVar9 = (undefined1 *)0x330;
            lVar11 = 8;
            pauVar5 = pauVar8;
            while( true ) {
              (*pauVar5)[0] = *puVar4;
              (*pauVar5)[1] = *puVar9;
              pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
              lVar11 = lVar11 + -1;
              if (lVar11 == 0) break;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar4 = (undefined1 *)0x328;
            puVar9 = (undefined1 *)0x338;
            lVar11 = 8;
            while( true ) {
              (*pauVar5)[0] = *puVar4;
              (*pauVar5)[1] = *puVar9;
              pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
              lVar11 = lVar11 + -1;
              if (lVar11 == 0) break;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            pauVar8 = pauVar8 + 2;
            pauVar5 = pauVar6;
          } while (pauVar6 != param_1 + (param_3 >> 4) * 2);
          uVar7 = param_3 & 0xfffffff0;
          if (param_3 != uVar7) {
            iVar1 = uVar7 * 2;
            uVar2 = *(undefined2 *)(*param_1 + iVar1);
            (*param_2)[uVar7 * 2] = (char)((ushort)uVar2 >> 8);
            (*param_2)[iVar1 + 1] = (char)uVar2;
            if ((int)(uVar7 + 1) < (int)param_3) {
              uVar2 = *(undefined2 *)(*param_1 + iVar1 + 2);
              (*param_2)[uVar7 * 2 + 2] = (char)((ushort)uVar2 >> 8);
              (*param_2)[uVar7 * 2 + 3] = (char)uVar2;
              if ((int)(uVar7 + 2) < (int)param_3) {
                uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 4);
                (*param_2)[uVar7 * 2 + 4] = (char)((ushort)uVar2 >> 8);
                (*param_2)[uVar7 * 2 + 5] = (char)uVar2;
                if ((int)(uVar7 + 3) < (int)param_3) {
                  uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 6);
                  (*param_2)[uVar7 * 2 + 6] = (char)((ushort)uVar2 >> 8);
                  (*param_2)[uVar7 * 2 + 7] = (char)uVar2;
                  if ((int)(uVar7 + 4) < (int)param_3) {
                    uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 8);
                    (*param_2)[uVar7 * 2 + 8] = (char)((ushort)uVar2 >> 8);
                    (*param_2)[uVar7 * 2 + 9] = (char)uVar2;
                    if ((int)(uVar7 + 5) < (int)param_3) {
                      uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 10);
                      (*param_2)[uVar7 * 2 + 10] = (char)((ushort)uVar2 >> 8);
                      (*param_2)[uVar7 * 2 + 0xb] = (char)uVar2;
                      if ((int)(uVar7 + 6) < (int)param_3) {
                        uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 0xc);
                        (*param_2)[uVar7 * 2 + 0xc] = (char)((ushort)uVar2 >> 8);
                        (*param_2)[uVar7 * 2 + 0xd] = (char)uVar2;
                        if ((int)(uVar7 + 7) < (int)param_3) {
                          uVar2 = *(undefined2 *)(*param_1 + uVar7 * 2 + 0xe);
                          (*param_2)[uVar7 * 2 + 0xe] = (char)((ushort)uVar2 >> 8);
                          (*param_2)[uVar7 * 2 + 0xf] = (char)uVar2;
                          if ((int)(uVar7 + 8) < (int)param_3) {
                            uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2);
                            param_2[1][uVar7 * 2] = (char)((ushort)uVar2 >> 8);
                            param_2[1][uVar7 * 2 + 1] = (char)uVar2;
                            if ((int)(uVar7 + 9) < (int)param_3) {
                              uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 2);
                              param_2[1][uVar7 * 2 + 2] = (char)((ushort)uVar2 >> 8);
                              param_2[1][uVar7 * 2 + 3] = (char)uVar2;
                              if ((int)(uVar7 + 10) < (int)param_3) {
                                uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 4);
                                param_2[1][uVar7 * 2 + 4] = (char)((ushort)uVar2 >> 8);
                                param_2[1][uVar7 * 2 + 5] = (char)uVar2;
                                if ((int)(uVar7 + 0xb) < (int)param_3) {
                                  uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 6);
                                  param_2[1][uVar7 * 2 + 6] = (char)((ushort)uVar2 >> 8);
                                  param_2[1][uVar7 * 2 + 7] = (char)uVar2;
                                  if ((int)(uVar7 + 0xc) < (int)param_3) {
                                    uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 8);
                                    param_2[1][uVar7 * 2 + 8] = (char)((ushort)uVar2 >> 8);
                                    param_2[1][uVar7 * 2 + 9] = (char)uVar2;
                                    if ((int)(uVar7 + 0xd) < (int)param_3) {
                                      uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 10);
                                      param_2[1][uVar7 * 2 + 10] = (char)((ushort)uVar2 >> 8);
                                      param_2[1][uVar7 * 2 + 0xb] = (char)uVar2;
                                      if ((int)(uVar7 + 0xe) < (int)param_3) {
                                        uVar2 = *(undefined2 *)(param_1[1] + uVar7 * 2 + 0xc);
                                        param_2[1][uVar7 * 2 + 0xc] = (char)((ushort)uVar2 >> 8);
                                        param_2[1][uVar7 * 2 + 0xd] = (char)uVar2;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar10 = param_3;
    if (0 < (int)param_3) {
      if (param_3 - 1 < 0xf ||
          param_1 < (undefined1 (*) [16])(*param_2 + param_3) &&
          param_2 < (undefined1 (*) [16])(*param_1 + param_3 * 2)) {
        puVar4 = param_2[-1] + 0xf;
        puVar3 = (undefined2 *)(param_1[-1] + 0xe);
        puVar9 = puVar4 + param_3;
        do {
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = (char)*puVar3;
        } while (puVar4 != puVar9);
      }
      else {
        pauVar5 = param_1;
        pauVar8 = param_2;
        do {
          pauVar6 = pauVar5 + 2;
          uVar12 = VectorCopyNarrow(*pauVar5,2);
          uVar14 = VectorCopyNarrow(pauVar5[1],2);
          *(undefined8 *)*pauVar8 = uVar12;
          *(undefined8 *)(*pauVar8 + 8) = uVar14;
          pauVar8 = pauVar8 + 1;
          pauVar5 = pauVar6;
        } while (pauVar6 != param_1 + (param_3 >> 4) * 2);
        uVar7 = param_3 & 0xfffffff0;
        if (param_3 != uVar7) {
          (*param_2)[uVar7] = (char)*(undefined2 *)(*param_1 + uVar7 * 2);
          if ((int)(uVar7 + 1) < (int)param_3) {
            (*param_2)[uVar7 + 1] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 2);
            if ((int)(uVar7 + 2) < (int)param_3) {
              (*param_2)[uVar7 + 2] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 4);
              if ((int)(uVar7 + 3) < (int)param_3) {
                (*param_2)[uVar7 + 3] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 6);
                if ((int)(uVar7 + 4) < (int)param_3) {
                  (*param_2)[uVar7 + 4] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 8);
                  if ((int)(uVar7 + 5) < (int)param_3) {
                    (*param_2)[uVar7 + 5] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 10);
                    if ((int)(uVar7 + 6) < (int)param_3) {
                      (*param_2)[uVar7 + 6] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 0xc);
                      if ((int)(uVar7 + 7) < (int)param_3) {
                        (*param_2)[uVar7 + 7] = (char)*(undefined2 *)(*param_1 + uVar7 * 2 + 0xe);
                        if ((int)(uVar7 + 8) < (int)param_3) {
                          (*param_2)[uVar7 + 8] = (char)*(undefined2 *)(param_1[1] + uVar7 * 2);
                          if ((int)(uVar7 + 9) < (int)param_3) {
                            (*param_2)[uVar7 + 9] =
                                 (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 2);
                            if ((int)(uVar7 + 10) < (int)param_3) {
                              (*param_2)[uVar7 + 10] =
                                   (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 4);
                              if ((int)(uVar7 + 0xb) < (int)param_3) {
                                (*param_2)[uVar7 + 0xb] =
                                     (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 6);
                                if ((int)(uVar7 + 0xc) < (int)param_3) {
                                  (*param_2)[uVar7 + 0xc] =
                                       (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 8);
                                  if ((int)(uVar7 + 0xd) < (int)param_3) {
                                    (*param_2)[uVar7 + 0xd] =
                                         (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 10);
                                    if ((int)(uVar7 + 0xe) < (int)param_3) {
                                      (*param_2)[uVar7 + 0xe] =
                                           (char)*(undefined2 *)(param_1[1] + uVar7 * 2 + 0xc);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar10;
}



/* ===== skv_datestr2sec @ 00015944 size=136 ===== */

void skv_datestr2sec(char *param_1)

{
  int iVar1;
  tm local_3c;
  
  local_3c.tm_min = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c.tm_hour = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_3c.tm_mday = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_3c.tm_isdst = 0;
  local_3c.tm_sec = 0;
  local_3c.tm_mon = 0;
  local_3c.tm_wday = 0;
  local_3c.tm_gmtoff = 0;
  local_3c.tm_year = local_3c.tm_min;
  local_3c.tm_yday = local_3c.tm_min;
  local_3c.tm_zone = (char *)local_3c.tm_min;
  iVar1 = atoi(param_1);
  local_3c.tm_year = iVar1 + -0x76c;
  local_3c.tm_mon = atoi(param_1 + 5);
  local_3c.tm_mon = local_3c.tm_mon + -1;
  local_3c.tm_mday = atoi(param_1 + 8);
  local_3c.tm_hour = atoi(param_1 + 0xb);
  local_3c.tm_min = atoi(param_1 + 0xe);
  local_3c.tm_sec = atoi(param_1 + 0x11);
  mktime(&local_3c);
  return;
}



/* ===== skv_strlwr @ 000159cc size=80 ===== */

/* skv_strlwr(char*) */

void skv_strlwr(char *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)*param_1;
  if (uVar1 == 0) {
    return;
  }
  do {
    while (uVar1 - 0x41 < 0x1a) {
      *param_1 = (char)uVar1 + 0x20;
      param_1 = param_1 + 1;
      uVar1 = (uint)(byte)*param_1;
      if (uVar1 == 0) {
        return;
      }
    }
    param_1 = param_1 + 1;
    uVar1 = (uint)(byte)*param_1;
  } while (uVar1 != 0);
  return;
}



/* ===== skv_itoa @ 00015a20 size=732 ===== */

/* skv_itoa(int, char*) */

void skv_itoa(int param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined8 in_d18;
  undefined8 in_d19;
  
  pcVar9 = param_2 + -1;
  iVar10 = DAT_00015d10 + 0x15a48;
  iVar11 = 0;
  pcVar12 = pcVar9;
  do {
    iVar4 = iVar11;
    iVar11 = iVar4 + 1;
    pcVar12 = pcVar12 + 1;
    *pcVar12 = *(char *)(iVar10 + param_1 % 10);
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  uVar2 = iVar11 >> 1;
  if (uVar2 == 0) {
    return;
  }
  if ((int)(iVar11 - uVar2) < (int)uVar2 || uVar2 - 1 < 0xf) {
    pcVar12 = param_2 + iVar11;
    pcVar8 = pcVar9 + uVar2;
    do {
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar12 = pcVar12 + -1;
      *pcVar9 = *pcVar12;
      *pcVar12 = cVar3;
    } while (pcVar9 != pcVar8);
    return;
  }
  pcVar9 = param_2 + iVar4 + -0xf;
  pcVar8 = param_2 + (uVar2 & 0xfffffff0);
  pcVar12 = pcVar9;
  do {
    pcVar9 = pcVar9 + -0x10;
    VectorTableLookup(pcVar9,pcVar8,2);
    puVar5 = (undefined8 *)VectorTableLookup(param_2,pcVar8,2);
    *puVar5 = in_d18;
    puVar5[1] = in_d19;
    iVar11 = VectorTableLookup(pcVar9,pcVar8,2);
    VectorTableLookup(param_2,pcVar8,2);
    *(undefined8 *)pcVar12 = in_d18;
    *(undefined8 *)(pcVar12 + 8) = in_d19;
    pcVar12 = pcVar12 + -0x10;
  } while ((char *)(puVar5 + 2) != pcVar8);
  uVar6 = uVar2 & 0xfffffff0;
  if (uVar2 == uVar6) {
    return;
  }
  cVar3 = param_2[uVar6];
  iVar10 = uVar6 + 1;
  param_2[uVar6] = param_2[iVar11 - uVar6];
  param_2[iVar11 - uVar6] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 2;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if ((int)uVar2 <= iVar4) {
    return;
  }
  cVar3 = param_2[iVar4];
  iVar10 = uVar6 + 3;
  param_2[iVar4] = param_2[iVar11 - iVar4];
  param_2[iVar11 - iVar4] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 4;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if ((int)uVar2 <= iVar4) {
    return;
  }
  cVar3 = param_2[iVar4];
  iVar10 = uVar6 + 5;
  param_2[iVar4] = param_2[iVar11 - iVar4];
  param_2[iVar11 - iVar4] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 6;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if ((int)uVar2 <= iVar4) {
    return;
  }
  cVar3 = param_2[iVar4];
  iVar10 = uVar6 + 7;
  param_2[iVar4] = param_2[iVar11 - iVar4];
  param_2[iVar11 - iVar4] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 8;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if ((int)uVar2 <= iVar4) {
    return;
  }
  cVar3 = param_2[iVar4];
  iVar10 = uVar6 + 9;
  param_2[iVar4] = param_2[iVar11 - iVar4];
  param_2[iVar11 - iVar4] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 10;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if ((int)uVar2 <= iVar4) {
    return;
  }
  cVar3 = param_2[iVar4];
  iVar10 = uVar6 + 0xb;
  param_2[iVar4] = param_2[iVar11 - iVar4];
  param_2[iVar11 - iVar4] = cVar3;
  if ((int)uVar2 <= iVar10) {
    return;
  }
  cVar3 = param_2[iVar10];
  iVar4 = uVar6 + 0xc;
  param_2[iVar10] = param_2[iVar11 - iVar10];
  param_2[iVar11 - iVar10] = cVar3;
  if (iVar4 < (int)uVar2) {
    cVar3 = param_2[iVar4];
    iVar10 = uVar6 + 0xd;
    param_2[iVar4] = param_2[iVar11 - iVar4];
    param_2[iVar11 - iVar4] = cVar3;
    if (iVar10 < (int)uVar2) {
      iVar4 = iVar11 - iVar10;
      iVar7 = uVar6 + 0xe;
      cVar3 = param_2[iVar10];
      if (iVar7 < (int)uVar2) {
        iVar11 = iVar11 - iVar7;
      }
      param_2[iVar10] = param_2[iVar4];
      param_2[iVar4] = cVar3;
      if (iVar7 < (int)uVar2) {
        cVar3 = param_2[iVar7];
        param_2[iVar7] = param_2[iVar11];
        param_2[iVar11] = cVar3;
      }
      return;
    }
    return;
  }
  return;
}



/* ===== FUN_00015d14 @ 00015d14 size=192 ===== */

void FUN_00015d14(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_5;
  iVar6 = param_5[1];
  if (iVar6 == 1) {
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        puVar3 = (undefined4 *)(param_1 + iVar6 * 8);
        uVar1 = *param_2;
        uVar2 = param_2[1];
        iVar6 = iVar6 + 1;
        param_2 = param_2 + param_3 * param_4 * 2;
        *puVar3 = uVar1;
        puVar3[1] = uVar2;
      } while (iVar4 != iVar6);
      return;
    }
  }
  else if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_00015d14(param_1,param_2,param_3 * iVar4,param_4,param_5 + 2,param_6);
      param_2 = param_2 + param_3 * param_4 * 2;
      param_1 = param_1 + iVar6 * 8;
    } while (iVar4 != iVar5);
  }
  return;
}



/* ===== FUN_00015dd4 @ 00015dd4 size=3592 ===== */

void FUN_00015dd4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
                 int *param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  int *piVar27;
  float *pfVar28;
  int iVar29;
  uint in_fpscr;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  int local_164;
  int local_15c;
  int local_158;
  int local_154;
  int local_14c;
  float local_f8 [4];
  float local_e8 [5];
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  iVar18 = DAT_00016bdc + 0x15df0;
  iVar21 = *param_5;
  iVar24 = param_5[1];
  if (iVar24 != 1) {
    FUN_00015dd4(param_1,param_2,param_3 * iVar21,param_4,param_5 + 2,param_6,param_7 * iVar21,
                 iVar24);
  }
  switch(iVar21) {
  case 2:
    if (param_6[1] == 0) {
      if (0 < param_7) {
        if (0 < iVar24) {
          param_1 = param_1 + 8;
          iVar18 = 0;
          do {
            iVar29 = 0;
            pfVar7 = (float *)(param_6 + 0x42);
            iVar21 = iVar24 * 8 + param_1;
            iVar12 = param_1;
            do {
              iVar29 = iVar29 + 1;
              fVar40 = pfVar7[1];
              fVar42 = *pfVar7;
              pfVar7 = pfVar7 + param_3 * 2;
              fVar38 = *(float *)(iVar21 + -8);
              fVar35 = (float)VectorSignedToFloat((int)(-(fVar40 * *(float *)(iVar21 + -4)) +
                                                       fVar38 * fVar42),(byte)(in_fpscr >> 0x16) & 3
                                                 );
              *(float *)(iVar21 + -8) = *(float *)(iVar12 + -8) - fVar35;
              fVar40 = (float)VectorSignedToFloat((int)(fVar38 * fVar40 +
                                                       fVar42 * *(float *)(iVar21 + -4)),
                                                  (byte)(in_fpscr >> 0x16) & 3);
              *(float *)(iVar21 + -4) = *(float *)(iVar12 + -4) - fVar40;
              *(float *)(iVar12 + -8) = *(float *)(iVar12 + -8) + fVar35;
              *(float *)(iVar12 + -4) = *(float *)(iVar12 + -4) + fVar40;
              iVar21 = iVar21 + 8;
              iVar12 = iVar12 + 8;
            } while (iVar24 != iVar29);
            iVar18 = iVar18 + 1;
            param_1 = param_1 + param_8 * 8;
          } while (param_7 != iVar18);
        }
      }
    }
    else if (0 < param_7) {
      if (0 < iVar24) {
        param_1 = param_1 + 8;
        iVar18 = 0;
        do {
          iVar29 = 0;
          pfVar7 = (float *)(param_6 + 0x42);
          iVar21 = iVar24 * 8 + param_1;
          iVar12 = param_1;
          do {
            pfVar5 = pfVar7 + 1;
            iVar29 = iVar29 + 1;
            fVar42 = *pfVar7;
            pfVar7 = pfVar7 + param_3 * 2;
            fVar40 = -(*pfVar5 * *(float *)(iVar21 + -4)) + *(float *)(iVar21 + -8) * fVar42;
            fVar42 = fVar42 * *(float *)(iVar21 + -4) + *(float *)(iVar21 + -8) * *pfVar5;
            *(float *)(iVar21 + -8) = *(float *)(iVar12 + -8) - fVar40;
            *(float *)(iVar21 + -4) = *(float *)(iVar12 + -4) - fVar42;
            *(float *)(iVar12 + -8) = *(float *)(iVar12 + -8) + fVar40;
            *(float *)(iVar12 + -4) = *(float *)(iVar12 + -4) + fVar42;
            iVar21 = iVar21 + 8;
            iVar12 = iVar12 + 8;
          } while (iVar24 != iVar29);
          iVar18 = iVar18 + 1;
          param_1 = param_1 + param_8 * 8;
        } while (param_7 != iVar18);
      }
    }
    break;
  case 3:
    if (0 < param_7) {
      iVar21 = param_1 + iVar24 * 8 + 4;
      iVar18 = param_1 + iVar24 * 0x10 + 4;
      iVar12 = 0;
      do {
        fVar40 = (float)param_6[(iVar24 * param_3 + 0x21) * 2 + 1];
        piVar4 = param_6;
        iVar29 = iVar21 + -4;
        iVar17 = iVar21;
        iVar20 = iVar24 * -8 + 4 + iVar21;
        iVar15 = iVar18 + -4;
        iVar10 = iVar24;
        iVar25 = iVar18;
        piVar19 = param_6;
        do {
          pfVar7 = (float *)(piVar4 + 0x43);
          iVar10 = iVar10 + -1;
          pfVar5 = (float *)(piVar19 + 0x43);
          pfVar8 = (float *)(piVar19 + 0x42);
          piVar19 = piVar19 + param_3 * 2;
          pfVar11 = (float *)(piVar4 + 0x42);
          piVar4 = piVar4 + param_3 * 4;
          fVar38 = -(*pfVar7 * *(float *)(iVar15 + 4)) + *(float *)(iVar25 + -4) * *pfVar11;
          fVar30 = -(*pfVar5 * *(float *)(iVar29 + 4)) + *(float *)(iVar17 + -4) * *pfVar8;
          fVar42 = fVar30 + fVar38;
          fVar31 = *pfVar8 * *(float *)(iVar29 + 4) + *(float *)(iVar17 + -4) * *pfVar5;
          fVar32 = *pfVar11 * *(float *)(iVar15 + 4) + *(float *)(iVar25 + -4) * *pfVar7;
          fVar35 = fVar31 + fVar32;
          *(float *)(iVar17 + -4) = *(float *)(iVar20 + -8) + -fVar42 * 0.5;
          fVar31 = fVar31 - fVar32;
          *(float *)(iVar29 + 4) = *(float *)(iVar20 + -4) + -fVar35 * 0.5;
          fVar30 = fVar30 - fVar38;
          *(float *)(iVar20 + -8) = *(float *)(iVar20 + -8) + fVar42;
          *(float *)(iVar20 + -4) = *(float *)(iVar20 + -4) + fVar35;
          *(float *)(iVar25 + -4) = *(float *)(iVar17 + -4) + fVar40 * fVar31;
          *(float *)(iVar15 + 4) = *(float *)(iVar29 + 4) + -fVar40 * fVar30;
          *(float *)(iVar17 + -4) = *(float *)(iVar17 + -4) + -fVar40 * fVar31;
          *(float *)(iVar29 + 4) = *(float *)(iVar29 + 4) + fVar40 * fVar30;
          iVar29 = iVar29 + 8;
          iVar17 = iVar17 + 8;
          iVar20 = iVar20 + 8;
          iVar15 = iVar15 + 8;
          iVar25 = iVar25 + 8;
        } while (iVar10 != 0);
        iVar12 = iVar12 + 1;
        iVar21 = iVar21 + param_8 * 8;
        iVar18 = iVar18 + param_8 * 8;
      } while (param_7 != iVar12);
      return;
    }
    break;
  case 4:
    if (param_6[1] == 0) {
      if (0 < param_7) {
        pfVar7 = (float *)(param_6 + 0x42);
        if (0 < iVar24) {
          param_1 = param_1 + 8;
          iVar18 = 0;
          do {
            iVar12 = 0;
            pfVar5 = (float *)(iVar24 * 8 + -8 + param_1);
            pfVar8 = (float *)(iVar24 * 0x10 + -8 + param_1);
            pfVar11 = (float *)(iVar24 * 0x18 + -8 + param_1);
            iVar21 = param_1;
            pfVar16 = pfVar7;
            pfVar26 = pfVar7;
            pfVar28 = pfVar7;
            do {
              fVar30 = *pfVar26;
              iVar12 = iVar12 + 1;
              pfVar1 = pfVar26 + 1;
              pfVar26 = pfVar26 + param_3 * 2;
              pfVar2 = pfVar16 + 1;
              fVar42 = *pfVar28;
              pfVar3 = pfVar28 + 1;
              pfVar28 = pfVar28 + param_3 * 4;
              fVar40 = *pfVar16;
              pfVar16 = pfVar16 + param_3 * 6;
              fVar39 = -(*pfVar1 * pfVar5[1]) + *pfVar5 * fVar30;
              fVar35 = *(float *)(iVar21 + -8);
              fVar38 = *(float *)(iVar21 + -4);
              fVar32 = fVar42 * pfVar8[1] + *pfVar8 * *pfVar3;
              fVar36 = -(*pfVar3 * pfVar8[1]) + *pfVar8 * fVar42;
              fVar33 = fVar30 * pfVar5[1] + *pfVar5 * *pfVar1;
              fVar37 = -(*pfVar2 * pfVar11[1]) + *pfVar11 * fVar40;
              fVar34 = fVar40 * pfVar11[1] + *pfVar11 * *pfVar2;
              fVar40 = fVar39 + fVar37;
              fVar30 = fVar36 + fVar35;
              fVar31 = fVar32 + fVar38;
              *(float *)(iVar21 + -8) = fVar30;
              fVar42 = fVar33 + fVar34;
              *(float *)(iVar21 + -4) = fVar31;
              *pfVar8 = fVar30 - fVar40;
              pfVar8[1] = fVar31 - fVar42;
              fVar33 = fVar33 - fVar34;
              fVar39 = fVar39 - fVar37;
              fVar35 = fVar35 - fVar36;
              fVar38 = fVar38 - fVar32;
              *(float *)(iVar21 + -8) = *(float *)(iVar21 + -8) + fVar40;
              *(float *)(iVar21 + -4) = *(float *)(iVar21 + -4) + fVar42;
              *pfVar5 = fVar35 + fVar33;
              pfVar5[1] = fVar38 - fVar39;
              *pfVar11 = fVar35 - fVar33;
              pfVar11[1] = fVar38 + fVar39;
              pfVar5 = pfVar5 + 2;
              pfVar8 = pfVar8 + 2;
              pfVar11 = pfVar11 + 2;
              iVar21 = iVar21 + 8;
            } while (iVar24 != iVar12);
            iVar18 = iVar18 + 1;
            param_1 = param_1 + param_8 * 8;
          } while (param_7 != iVar18);
        }
      }
    }
    else if (0 < param_7) {
      pfVar7 = (float *)(param_6 + 0x42);
      if (0 < iVar24) {
        param_1 = param_1 + 8;
        iVar18 = 0;
        do {
          iVar12 = 0;
          pfVar5 = (float *)(iVar24 * 8 + -8 + param_1);
          pfVar8 = (float *)(iVar24 * 0x10 + -8 + param_1);
          pfVar11 = (float *)(iVar24 * 0x18 + -8 + param_1);
          iVar21 = param_1;
          pfVar16 = pfVar7;
          pfVar26 = pfVar7;
          pfVar28 = pfVar7;
          do {
            fVar30 = *pfVar26;
            iVar12 = iVar12 + 1;
            pfVar1 = pfVar26 + 1;
            pfVar26 = pfVar26 + param_3 * 2;
            pfVar2 = pfVar16 + 1;
            fVar42 = *pfVar28;
            pfVar3 = pfVar28 + 1;
            pfVar28 = pfVar28 + param_3 * 4;
            fVar40 = *pfVar16;
            pfVar16 = pfVar16 + param_3 * 6;
            fVar39 = -(*pfVar1 * pfVar5[1]) + *pfVar5 * fVar30;
            fVar35 = *(float *)(iVar21 + -8);
            fVar38 = *(float *)(iVar21 + -4);
            fVar32 = fVar42 * pfVar8[1] + *pfVar8 * *pfVar3;
            fVar36 = -(*pfVar3 * pfVar8[1]) + *pfVar8 * fVar42;
            fVar33 = fVar30 * pfVar5[1] + *pfVar5 * *pfVar1;
            fVar37 = -(*pfVar2 * pfVar11[1]) + *pfVar11 * fVar40;
            fVar34 = fVar40 * pfVar11[1] + *pfVar11 * *pfVar2;
            fVar40 = fVar39 + fVar37;
            fVar30 = fVar36 + fVar35;
            fVar31 = fVar32 + fVar38;
            *(float *)(iVar21 + -8) = fVar30;
            fVar42 = fVar33 + fVar34;
            *(float *)(iVar21 + -4) = fVar31;
            *pfVar8 = fVar30 - fVar40;
            pfVar8[1] = fVar31 - fVar42;
            fVar33 = fVar33 - fVar34;
            fVar39 = fVar39 - fVar37;
            fVar35 = fVar35 - fVar36;
            fVar38 = fVar38 - fVar32;
            *(float *)(iVar21 + -8) = *(float *)(iVar21 + -8) + fVar40;
            *(float *)(iVar21 + -4) = *(float *)(iVar21 + -4) + fVar42;
            *pfVar5 = fVar35 - fVar33;
            pfVar5[1] = fVar38 + fVar39;
            *pfVar11 = fVar35 + fVar33;
            pfVar11[1] = fVar38 - fVar39;
            pfVar5 = pfVar5 + 2;
            pfVar8 = pfVar8 + 2;
            pfVar11 = pfVar11 + 2;
            iVar21 = iVar21 + 8;
          } while (iVar24 != iVar12);
          iVar18 = iVar18 + 1;
          param_1 = param_1 + param_8 * 8;
        } while (param_7 != iVar18);
      }
    }
    break;
  case 5:
    if (0 < param_7) {
      iVar18 = iVar24 * 8;
      pfVar7 = (float *)(param_6 + iVar24 * param_3 * 2 + 0x42);
      if (0 < iVar24) {
        param_1 = param_1 + 8;
        iVar21 = 0;
        do {
          iVar17 = iVar18 + iVar18 + param_1;
          iVar20 = iVar18 + iVar17;
          fVar40 = pfVar7[1];
          iVar10 = 0;
          fVar42 = *pfVar7;
          fVar35 = pfVar7[iVar24 * param_3 * 2];
          fVar38 = (pfVar7 + iVar24 * param_3 * 2)[1];
          iVar12 = param_1;
          iVar29 = iVar18 + param_1;
          piVar4 = param_6;
          piVar19 = param_6;
          piVar22 = param_6;
          iVar15 = iVar18 + iVar20;
          piVar27 = param_6;
          do {
            iVar10 = iVar10 + 1;
            pfVar5 = (float *)(piVar22 + 0x43);
            pfVar8 = (float *)(piVar19 + 0x43);
            pfVar11 = (float *)(piVar22 + 0x42);
            piVar22 = piVar22 + param_3 * 2;
            pfVar16 = (float *)(piVar19 + 0x42);
            piVar19 = piVar19 + param_3 * 8;
            pfVar26 = (float *)(piVar27 + 0x43);
            pfVar28 = (float *)(piVar4 + 0x42);
            pfVar1 = (float *)(piVar4 + 0x43);
            pfVar2 = (float *)(piVar27 + 0x42);
            piVar27 = piVar27 + param_3 * 4;
            fVar33 = -(*pfVar5 * *(float *)(iVar29 + -4)) + *(float *)(iVar29 + -8) * *pfVar11;
            piVar4 = piVar4 + param_3 * 6;
            fVar30 = *(float *)(iVar12 + -8);
            fVar47 = -(*pfVar8 * *(float *)(iVar15 + -4)) + *(float *)(iVar15 + -8) * *pfVar16;
            fVar44 = *(float *)(iVar12 + -4);
            fVar34 = *pfVar11 * *(float *)(iVar29 + -4) + *(float *)(iVar29 + -8) * *pfVar5;
            fVar39 = *pfVar16 * *(float *)(iVar15 + -4) + *(float *)(iVar15 + -8) * *pfVar8;
            fVar32 = -(*pfVar1 * *(float *)(iVar20 + -4)) + *(float *)(iVar20 + -8) * *pfVar28;
            fVar37 = *pfVar28 * *(float *)(iVar20 + -4) + *(float *)(iVar20 + -8) * *pfVar1;
            fVar43 = -(*pfVar26 * *(float *)(iVar17 + -4)) + *(float *)(iVar17 + -8) * *pfVar2;
            fVar45 = fVar33 + fVar47;
            fVar36 = *pfVar2 * *(float *)(iVar17 + -4) + *(float *)(iVar17 + -8) * *pfVar26;
            fVar46 = fVar34 + fVar39;
            fVar31 = fVar43 - fVar32;
            fVar43 = fVar43 + fVar32;
            fVar48 = fVar36 - fVar37;
            fVar34 = fVar34 - fVar39;
            fVar41 = fVar30 + fVar35 * fVar45 + fVar42 * fVar43;
            fVar36 = fVar36 + fVar37;
            fVar33 = fVar33 - fVar47;
            fVar32 = fVar38 * fVar48 + fVar40 * fVar34;
            fVar37 = fVar30 + fVar42 * fVar45 + fVar35 * fVar43;
            fVar39 = fVar44 + fVar42 * fVar46 + fVar35 * fVar36;
            fVar48 = -(fVar34 * fVar38) + fVar40 * fVar48;
            fVar34 = -(fVar31 * fVar38) + -fVar40 * fVar33;
            fVar47 = fVar44 + fVar35 * fVar46 + fVar42 * fVar36;
            fVar31 = -(fVar31 * fVar40) + fVar38 * fVar33;
            *(float *)(iVar12 + -4) = fVar46 + fVar36 + fVar44;
            *(float *)(iVar12 + -8) = fVar45 + fVar43 + fVar30;
            *(float *)(iVar29 + -4) = fVar39 - fVar34;
            *(float *)(iVar29 + -8) = fVar37 - fVar32;
            *(float *)(iVar15 + -4) = fVar39 + fVar34;
            *(float *)(iVar15 + -8) = fVar37 + fVar32;
            *(float *)(iVar17 + -8) = fVar41 + fVar48;
            *(float *)(iVar17 + -4) = fVar47 + fVar31;
            *(float *)(iVar20 + -8) = fVar41 - fVar48;
            *(float *)(iVar20 + -4) = fVar47 - fVar31;
            iVar12 = iVar12 + 8;
            iVar29 = iVar29 + 8;
            iVar17 = iVar17 + 8;
            iVar20 = iVar20 + 8;
            iVar15 = iVar15 + 8;
          } while (iVar24 != iVar10);
          iVar21 = iVar21 + 1;
          param_1 = param_1 + param_8 * 8;
        } while (param_7 != iVar21);
      }
    }
    break;
  default:
    if (0 < param_7) {
      iVar12 = *param_6;
      if (0x11 < iVar21) {
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_00016be0),(char *)(DAT_00016bec + 0x16bd0),
                DAT_00016be8 + 0x16bc8,0x126,DAT_00016be4 + 0x16bc0);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      iVar29 = param_1 + iVar24 * 0x10;
      iVar18 = iVar29 + iVar24 * -8;
      param_8 = param_8 * 8;
      local_14c = 0;
      while( true ) {
        if (0 < iVar24) {
          puVar23 = (undefined4 *)(param_1 + 4);
          local_154 = 0;
          iVar17 = iVar24;
          local_164 = iVar24 * 0xe;
          local_15c = iVar24 * 7;
          local_158 = iVar24 << 2;
          do {
            if (0 < iVar21) {
              puVar14 = puVar23 + -1;
              uVar6 = *puVar14;
              uVar9 = *puVar23;
              if (iVar21 != 1) {
                iVar20 = iVar17 * 8;
                local_e8[0] = (float)*(undefined4 *)(param_1 + iVar20);
                local_e8[1] = (float)((undefined4 *)(param_1 + iVar20))[1];
                if (iVar21 != 2) {
                  local_e8[2] = (float)*(undefined4 *)(iVar18 + iVar20);
                  local_e8[3] = (float)((undefined4 *)(iVar18 + iVar20))[1];
                  if (iVar21 != 3) {
                    local_e8[4] = (float)*(undefined4 *)(iVar29 + iVar20);
                    uStack_d4 = ((undefined4 *)(iVar29 + iVar20))[1];
                    if (iVar21 != 4) {
                      iVar20 = local_158 * 8;
                      local_d0 = *(undefined4 *)(param_1 + iVar20);
                      uStack_cc = ((undefined4 *)(param_1 + iVar20))[1];
                      if (iVar21 != 5) {
                        local_c8 = *(undefined4 *)(iVar18 + iVar20);
                        uStack_c4 = ((undefined4 *)(iVar18 + iVar20))[1];
                        if (iVar21 != 6) {
                          local_c0 = *(undefined4 *)(iVar29 + iVar20);
                          uStack_bc = ((undefined4 *)(iVar29 + iVar20))[1];
                          if (iVar21 != 7) {
                            iVar20 = local_15c * 8;
                            local_b8 = *(undefined4 *)(param_1 + iVar20);
                            uStack_b4 = ((undefined4 *)(param_1 + iVar20))[1];
                            if (iVar21 != 8) {
                              local_b0 = *(undefined4 *)(iVar18 + iVar20);
                              uStack_ac = ((undefined4 *)(iVar18 + iVar20))[1];
                              if (iVar21 != 9) {
                                local_a8 = *(undefined4 *)(iVar29 + iVar20);
                                uStack_a4 = ((undefined4 *)(iVar29 + iVar20))[1];
                                if ((((iVar21 != 10) && (iVar21 != 0xb)) && (iVar21 != 0xc)) &&
                                   (((iVar21 != 0xd && (iVar21 != 0xe)) &&
                                    ((iVar21 != 0xf && (iVar21 == 0x11)))))) {
                                  puVar13 = (undefined4 *)(iVar29 + local_164 * 8);
                                  uStack_6c = puVar13[1];
                                  uStack_70 = *puVar13;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar15 = 0;
              puVar13 = puVar23;
              iVar20 = local_154;
              do {
                *puVar13 = uVar9;
                puVar13[-1] = uVar6;
                if (iVar21 != 1) {
                  iVar10 = 0;
                  fVar40 = (float)puVar13[-1];
                  fVar42 = (float)puVar14[1];
                  pfVar7 = local_f8 + 2;
                  do {
                    iVar10 = iVar10 + iVar20;
                    pfVar5 = pfVar7 + 2;
                    if (iVar12 <= iVar10) {
                      iVar10 = iVar10 - iVar12;
                    }
                    fVar38 = (float)(param_6 + iVar10 * 2 + 0x42)[1];
                    fVar35 = (float)param_6[iVar10 * 2 + 0x42];
                    fVar40 = fVar40 + -(pfVar7[3] * fVar38) + *pfVar5 * fVar35;
                    fVar42 = fVar42 + pfVar7[3] * fVar35 + *pfVar5 * fVar38;
                    puVar13[-1] = fVar40;
                    puVar14[1] = fVar42;
                    pfVar7 = pfVar5;
                  } while (pfVar5 != local_f8 + iVar21 * 2);
                }
                iVar15 = iVar15 + 1;
                puVar14 = puVar14 + iVar24 * 2;
                puVar13 = puVar13 + iVar24 * 2;
                iVar20 = iVar20 + iVar24 * param_3;
              } while (iVar21 != iVar15);
            }
            iVar17 = iVar17 + 1;
            puVar23 = puVar23 + 2;
            local_154 = local_154 + param_3;
            local_158 = local_158 + 1;
            local_15c = local_15c + 1;
            local_164 = local_164 + 1;
          } while (iVar24 << 1 != iVar17);
        }
        iVar29 = iVar29 + param_8;
        iVar18 = iVar18 + param_8;
        local_14c = local_14c + 1;
        if (param_7 == local_14c) break;
        param_1 = param_1 + param_8;
      }
    }
  }
  return;
}



/* ===== kiss_fft_alloc @ 00016bf0 size=1160 ===== */

uint * kiss_fft_alloc(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  int extraout_r1;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint in_fpscr;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = (param_1 + 0x21) * 8;
  if (param_4 == (uint *)0x0) {
    param_3 = calloc(uVar2,1);
    if (param_3 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  else {
    if ((param_3 == (uint *)0x0) || (*param_4 < uVar2)) {
      *param_4 = uVar2;
      return (uint *)0x0;
    }
    *param_4 = uVar2;
  }
  *param_3 = param_1;
  param_3[1] = param_2;
  if (0 < (int)param_1) {
    dVar11 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    dVar11 = DAT_00017010 / dVar11;
    uVar2 = 0;
    puVar5 = param_3;
    if (param_2 == 0) {
      do {
        uVar1 = uVar2 + 1;
        dVar10 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar10 * dVar11;
        dVar9 = cos(dVar10);
        puVar5[0x42] = (uint)(float)dVar9;
        dVar9 = sin(dVar10);
        puVar5[0x43] = (uint)(float)dVar9;
        uVar2 = uVar1;
        puVar5 = puVar5 + 2;
      } while (param_1 != uVar1);
    }
    else {
      uVar2 = 0;
      do {
        uVar1 = uVar2 + 1;
        dVar10 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar10 * dVar11;
        dVar9 = cos(dVar10);
        puVar5[0x42] = (uint)(float)dVar9;
        dVar9 = sin(-dVar10);
        puVar5[0x43] = (uint)(float)dVar9;
        uVar2 = uVar1;
        puVar5 = puVar5 + 2;
      } while (param_1 != uVar1);
    }
  }
  puVar5 = param_3 + 4;
  uVar2 = 4;
  puVar8 = param_3 + 2;
  do {
    while( true ) {
      __aeabi_idivmod(param_1,uVar2);
      puVar4 = puVar5;
      puVar7 = puVar8;
      if (extraout_r1 == 0) goto LAB_00016e48;
      uVar1 = param_1;
      puVar3 = puVar5;
      puVar6 = puVar8;
      if (uVar2 == 2) break;
      if (uVar2 == 4) {
        if (3 < (int)param_1) {
          if ((param_1 & 1) == 0) {
            uVar1 = (int)param_1 >> 1;
            *puVar8 = 2;
            puVar8[1] = uVar1;
            puVar3 = puVar8 + 4;
            puVar6 = puVar5;
            if ((uVar1 & 1) == 0) {
              uVar1 = (int)param_1 >> 2;
              *puVar5 = 2;
              puVar5[1] = uVar1;
              if (uVar1 == 1) {
                return param_3;
              }
              puVar7 = puVar5 + 4;
              puVar3 = puVar7;
              puVar6 = puVar8 + 4;
              if ((uVar1 & 1) == 0) {
                param_1 = (int)param_1 >> 3;
                puVar8[4] = 2;
                puVar8[5] = param_1;
                if (param_1 == 1) {
                  return param_3;
                }
                puVar4 = puVar8 + 8;
                uVar1 = param_1;
                puVar3 = puVar4;
                puVar6 = puVar7;
                if ((param_1 & 1) == 0) {
                  uVar2 = 2;
                  goto LAB_00016e48;
                }
              }
            }
          }
          break;
        }
        goto LAB_00016edc;
      }
      uVar2 = uVar2 + 2;
      if (32000 < (int)uVar2) goto LAB_00016edc;
LAB_00016ff0:
      if (uVar2 * uVar2 - param_1 != 0 && (int)param_1 <= (int)(uVar2 * uVar2)) {
LAB_00016edc:
        uVar2 = param_1;
      }
    }
    param_1 = uVar1;
    puVar5 = puVar3;
    puVar8 = puVar6;
    if ((int)uVar1 < 9) goto LAB_00016edc;
    param_1 = (int)uVar1 / 3;
    if (uVar1 == param_1 * 3) {
      uVar2 = 3;
      puVar6[1] = param_1;
      *puVar6 = 3;
      puVar5 = puVar6 + 4;
      if (param_1 % 3 == 0) {
        *puVar3 = 3;
        param_1 = (int)uVar1 / 9;
        puVar3[1] = param_1;
        if (param_1 == 1) {
          return param_3;
        }
        puVar7 = puVar3 + 4;
        puVar3 = puVar5;
        if (param_1 % 3 != 0) {
LAB_00016fe8:
          uVar2 = uVar2 + 2;
          puVar5 = puVar7;
          puVar8 = puVar3;
          goto LAB_00016ff0;
        }
        puVar6[4] = 3;
        param_1 = (int)uVar1 / 0x1b;
        puVar6[5] = param_1;
        if ((int)uVar1 < 0x36) {
          return param_3;
        }
        puVar4 = puVar6 + 8;
        uVar1 = param_1;
        puVar6 = puVar7;
        puVar3 = puVar4;
        if (param_1 % 3 != 0) {
LAB_00016fa4:
          uVar2 = uVar2 + 2;
          param_1 = uVar1;
          puVar5 = puVar3;
          puVar8 = puVar6;
          goto LAB_00016ff0;
        }
      }
      else {
        puVar8 = puVar3;
        if ((int)uVar1 < 0x4b) goto LAB_00016edc;
        puVar6 = puVar3;
        puVar4 = puVar5;
        if (param_1 % 5 != 0) {
LAB_00016fa0:
          puVar3 = puVar4;
          uVar2 = 5;
          uVar1 = param_1;
          goto LAB_00016fa4;
        }
        uVar2 = 5;
        puVar7 = puVar3;
      }
    }
    else {
      param_1 = uVar1;
      if ((int)uVar1 < 0x19) goto LAB_00016edc;
      param_1 = (int)uVar1 / 5;
      if (uVar1 == param_1 * 5) {
        *puVar6 = 5;
        puVar6[1] = param_1;
        puVar6 = puVar6 + 4;
        puVar7 = puVar6;
        if (param_1 % 5 != 0) {
          uVar2 = 5;
          goto LAB_00016fe8;
        }
        *puVar3 = 5;
        param_1 = (int)uVar1 / 0x19;
        puVar3[1] = param_1;
        if (param_1 == 1) {
          return param_3;
        }
        puVar4 = puVar3 + 4;
        if (param_1 % 5 != 0) goto LAB_00016fa0;
        uVar2 = 5;
      }
      else {
        param_1 = uVar1;
        if ((int)uVar1 < 0x31) goto LAB_00016edc;
        if (uVar1 != ((int)uVar1 / 7) * 7) {
          uVar2 = 7;
          goto LAB_00016fa4;
        }
        uVar2 = 7;
        puVar4 = puVar3;
        puVar7 = puVar6;
      }
    }
LAB_00016e48:
    param_1 = __aeabi_idiv(param_1,uVar2);
    *puVar7 = uVar2;
    puVar7[1] = param_1;
    if ((int)param_1 < 2) {
      return param_3;
    }
    puVar5 = puVar7 + 4;
    puVar8 = puVar4;
  } while( true );
}



/* ===== kiss_fft_stride @ 00017080 size=348 ===== */

void kiss_fft_stride(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 == param_3) {
    fprintf((FILE *)**(undefined4 **)(DAT_000171dc + 0x1709c + DAT_000171e0),
            (char *)(DAT_000171ec + 0x171d0),DAT_000171e8 + 0x171c8,0x205,DAT_000171e4 + 0x171c0);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar5 == 1) {
    if (0 < iVar4) {
      iVar5 = 0;
      puVar3 = param_2;
      do {
        iVar6 = iVar5 * 2;
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + param_4 * 2;
        param_3[iVar6] = uVar1;
        (param_3 + iVar6)[1] = uVar2;
      } while (iVar4 != iVar5);
    }
  }
  else if (0 < iVar4) {
    iVar6 = 0;
    puVar3 = param_3;
    puVar7 = param_2;
    do {
      iVar6 = iVar6 + 1;
      FUN_00015d14(puVar3,puVar7,iVar4,param_4,param_1 + 0x10,param_1);
      puVar3 = puVar3 + iVar5 * 2;
      puVar7 = puVar7 + param_4 * 2;
    } while (iVar4 != iVar6);
  }
  FUN_00015dd4(param_3,param_2,1,param_4,param_1 + 8,param_1,1,1);
  return;
}



/* ===== kiss_fft @ 000171f0 size=20 ===== */

void kiss_fft(void)

{
                    /* WARNING: Could not recover jumptable at 0x00012d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_kiss_fft_stride_0003c0e8)();
  return;
}



/* ===== FUN_000171f8 @ 000171f8 size=192 ===== */

void FUN_000171f8(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_5;
  iVar6 = param_5[1];
  if (iVar6 == 1) {
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        puVar3 = (undefined4 *)(param_1 + iVar6 * 8);
        uVar1 = *param_2;
        uVar2 = param_2[1];
        iVar6 = iVar6 + 1;
        param_2 = param_2 + param_3 * param_4 * 2;
        *puVar3 = uVar1;
        puVar3[1] = uVar2;
      } while (iVar4 != iVar6);
      return;
    }
  }
  else if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_000171f8(param_1,param_2,param_3 * iVar4,param_4,param_5 + 2,param_6);
      param_2 = param_2 + param_3 * param_4 * 2;
      param_1 = param_1 + iVar6 * 8;
    } while (iVar4 != iVar5);
  }
  return;
}



/* ===== FUN_000172b8 @ 000172b8 size=7764 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined1 (*) [16]
FUN_000172b8(undefined1 (*param_1) [16],undefined4 param_2,int param_3,undefined4 param_4,
            int *param_5,undefined1 (*param_6) [16],int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 (*pauVar28) [16];
  int *piVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  undefined4 uVar34;
  undefined4 *puVar35;
  int iVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  int **ppiVar39;
  int **ppiVar40;
  int iVar41;
  int iVar42;
  undefined1 (*pauVar43) [16];
  undefined8 *puVar44;
  undefined4 *puVar45;
  undefined1 uVar46;
  bool bVar47;
  undefined4 *puVar48;
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_q4 [16];
  undefined1 in_q6 [16];
  undefined1 in_q7 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar58;
  undefined1 auVar57 [16];
  undefined8 uVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int *local_258;
  undefined1 (*local_254) [16];
  int local_250;
  int local_24c;
  undefined1 (*local_248) [16];
  undefined1 (*local_244) [16];
  int *local_240;
  int local_23c;
  int *local_238;
  undefined1 (*local_234) [16];
  uint local_230;
  undefined1 (*local_22c) [16];
  undefined1 (*local_228) [16];
  undefined1 (*local_224) [16];
  undefined1 (*local_220) [16];
  int local_21c;
  int *local_218;
  undefined1 *local_214;
  undefined1 *local_210;
  undefined1 (*local_20c) [16];
  int local_208;
  undefined1 (*local_204) [16];
  undefined1 *local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  undefined1 *local_1f0;
  int local_1ec;
  undefined1 *local_1e8;
  int local_1e4;
  undefined1 *local_1e0;
  int local_1dc;
  undefined1 *local_1d8;
  int local_1d4;
  int local_f8 [37];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_44 = in_q6._0_8_;
  uStack_3c = in_q6._8_8_;
  uStack_34 = in_q7._0_8_;
  uStack_2c = in_q7._8_8_;
  iVar25 = DAT_00017b8c + 0x172d4;
  ppiVar40 = &local_258;
  ppiVar39 = &local_258;
  local_23c = param_5[1];
  iVar20 = *param_5;
  pauVar4 = param_1;
  if (local_23c != 1) {
    local_258 = param_5 + 2;
    local_250 = param_7 * iVar20;
    local_254 = param_6;
    local_24c = local_23c;
    pauVar4 = (undefined1 (*) [16])FUN_000172b8(param_1,param_2,param_3 * iVar20);
  }
  switch(iVar20) {
  case 2:
    local_224 = *(undefined1 (**) [16])(*param_6 + 4);
    if (local_224 == (undefined1 (*) [16])0x0) {
      if (0 < param_7) {
        local_1d4 = param_3 * 8;
        local_228 = (undefined1 (*) [16])(param_6[0x10] + 8);
        iVar20 = local_23c * 8;
        pauVar4 = param_6;
        if (0 < local_23c) {
          local_20c = (undefined1 (*) [16])(local_23c - 1);
          uVar9 = (uint)local_20c & 0xfffffffc;
          local_200 = (undefined1 *)((int)local_228 + uVar9 * local_1d4);
          local_218 = (int *)(*param_1 + iVar20);
          iVar23 = (int)local_20c * local_1d4 + 0x108;
          iVar25 = (int)local_20c * local_1d4 + 0x10c;
          if (-1 < local_1d4) {
            iVar23 = 0x108;
          }
          local_1e8 = local_200 + param_3 * 8;
          if (-1 >= local_1d4) {
            iVar25 = 0x10c;
          }
          local_1e0 = local_1e8 + param_3 * 8;
          auVar57._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar57._0_8_ = 0x400000004000;
          auVar54 = *(undefined1 (*) [16])(auVar57 << 0x40 | auVar57);
          local_1d8 = local_1e8 + param_3 * 8 + param_3 * 8;
          auVar53._8_8_ = DAT_00017db8;
          auVar53._0_8_ = 0x400000004000;
          local_210 = *param_6 + iVar23;
          iVar23 = param_3 << 5;
          local_1f4 = (int)param_6[param_3 + 0x10] + 8;
          local_214 = *param_6 + iVar25;
          local_1f8 = uVar9 << 3;
          local_1fc = uVar9 + 1;
          local_1dc = uVar9 + 3;
          local_1f0 = (undefined1 *)((int)param_6 + param_3 * 0x18 + 0x108);
          local_208 = param_8 << 3;
          local_1e4 = uVar9 + 2;
          local_22c = (undefined1 (*) [16])((uint)local_20c >> 2);
          local_204 = (undefined1 (*) [16])(iVar20 + -4);
          local_230 = iVar20 + 0x20;
          local_1ec = local_1d4 + 0x108;
          local_234 = local_224;
          local_238 = (int *)(*param_1 + iVar20);
          do {
            iVar26 = *(int *)((int)ppiVar39 + 0x24);
            iVar25 = *(int *)((int)ppiVar39 + 0x28);
            pauVar37 = *(undefined1 (**) [16])((int)ppiVar39 + 0x20);
            bVar47 = SBORROW4(iVar26,iVar25);
            iVar20 = iVar26 - iVar25;
            if (iVar26 < iVar25) {
              bVar47 = SBORROW4(iVar25 + -0x20,iVar26 + 0x20);
              iVar20 = (iVar25 + -0x20) - (iVar26 + 0x20);
            }
            pauVar4 = *(undefined1 (**) [16])((int)ppiVar39 + 0x48);
            puVar10 = (undefined8 *)(*(int *)((int)ppiVar39 + 0x40) + iVar26);
            *(undefined8 **)((int)ppiVar39 + 0x38) = puVar10;
            if ((*(uint *)((int)ppiVar39 + 0x4c) < 4 ||
                (iVar20 < 0 != bVar47 ||
                pauVar4 <= (undefined1 (*) [16])(pauVar37[-1] + 0xc) &&
                param_1 <= *(undefined1 (**) [16])((int)ppiVar39 + 0x44))) ||
                pauVar4 <= (undefined1 (*) [16])(*pauVar37 + *(int *)((int)ppiVar39 + 0x54)) &&
                pauVar37 <= *(undefined1 (**) [16])((int)ppiVar39 + 0x44)) {
              puVar11 = *(undefined8 **)((int)ppiVar39 + 0x30);
              iVar25 = *(int *)((int)ppiVar39 + 0x1c);
              iVar26 = *(int *)((int)ppiVar39 + 0x84);
              iVar20 = 0;
              pauVar37 = param_1;
              do {
                uVar55 = *puVar11;
                puVar11 = (undefined8 *)((int)puVar11 + iVar26);
                uVar52 = vrev(*puVar10,4);
                uVar58 = VectorTranspose(uVar55,4);
                uVar58 = VectorMultiply(uVar58,*puVar10,4);
                uVar52 = VectorMultiply(uVar52,uVar55,4);
                uVar55 = VectorShiftLeft(*(undefined8 *)*pauVar37,0xe,0x20,0);
                VectorAdd(uVar58,uVar52,4);
                uVar52 = VectorSub(uVar58,uVar52,4);
                VectorTableLookup(iVar20,pauVar4,2);
                uVar52 = VectorShiftRight(uVar52,1);
                uVar58 = VectorSub(uVar55,uVar52,4);
                uVar58 = VectorAdd(uVar58,auVar53._0_8_,4);
                uVar58 = VectorShiftRight(uVar58,0xf);
                *puVar10 = uVar58;
                puVar10 = puVar10 + 1;
                iVar7 = iVar20 * 8;
                iVar20 = iVar20 + 1;
                iVar24 = *(int *)(*pauVar37 + 4);
                pauVar4 = (undefined1 (*) [16])(*(int *)(*param_1 + iVar7) << 0xe);
                *(undefined1 (**) [16])((int)ppiVar39 + 0x100) = pauVar4;
                *(int *)((int)ppiVar39 + 0x104) = iVar24 << 0xe;
                uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar39 + 0x100),uVar52,4);
                uVar52 = VectorAdd(uVar52,auVar53._0_8_,4);
                uVar52 = VectorShiftRight(uVar52,0xf);
                *(undefined8 *)*pauVar37 = uVar52;
                pauVar37 = (undefined1 (*) [16])(*pauVar37 + 8);
              } while (iVar25 != iVar20);
            }
            else {
              *(undefined1 **)((int)ppiVar39 + 0x10) = *param_1 + 4;
              iVar20 = 0;
              pauVar4 = *(undefined1 (**) [16])((int)ppiVar39 + 0x20);
              puVar10 = (undefined8 *)
                        (*(int *)((int)ppiVar39 + 0x25c) + *(int *)((int)ppiVar39 + 0x6c));
              puVar11 = *(undefined8 **)((int)ppiVar39 + 0x30);
              puVar13 = *(undefined8 **)((int)ppiVar39 + 0x68);
              puVar16 = *(undefined8 **)((int)ppiVar39 + 100);
              *(undefined1 (**) [16])((int)ppiVar39 + 0x18) = pauVar4;
              *(undefined1 (**) [16])((int)ppiVar39 + 0x14) = param_1;
              *(undefined1 (**) [16])((int)ppiVar39 + 0x3c) = param_1;
              pauVar37 = pauVar4;
              do {
                iVar20 = iVar20 + 1;
                uVar34 = *(undefined4 *)puVar11;
                uVar52 = *puVar10;
                *(undefined8 *)((int)ppiVar39 + 0x158) = *puVar11;
                uVar46 = *(int *)((int)ppiVar39 + 0x2c) == iVar20;
                *(undefined8 *)((int)ppiVar39 + 0x160) = uVar52;
                uVar19 = *(undefined4 *)puVar10;
                uVar52 = *puVar16;
                uVar58 = *puVar13;
                *(undefined4 *)((int)ppiVar39 + 0x138) = uVar34;
                uVar34 = *(undefined4 *)puVar16;
                auVar65 = VectorTranspose(*(undefined1 (*) [16])((int)ppiVar39 + 0x158),4);
                *(undefined4 *)((int)ppiVar39 + 0x13c) = uVar19;
                *(undefined8 *)((int)ppiVar39 + 0x150) = uVar58;
                *(undefined4 *)((int)ppiVar39 + 0x140) = uVar34;
                puVar35 = *(undefined4 **)((int)ppiVar39 + 0x18);
                *(undefined8 *)((int)ppiVar39 + 0x148) = uVar52;
                auVar51 = *(undefined1 (*) [16])((int)ppiVar39 + 0x148);
                auVar57 = *pauVar4;
                pauVar43 = pauVar4 + 1;
                *(undefined4 *)((int)ppiVar39 + 0x144) = *(undefined4 *)puVar13;
                auVar57 = vrev(auVar57,4);
                uVar19 = *(undefined4 *)((int)puVar11 + 4);
                auVar61 = VectorTranspose(auVar51,4);
                auVar57 = VectorMultiply(*(undefined1 (*) [16])((int)ppiVar39 + 0x158),auVar57,4);
                puVar11 = (undefined8 *)((int)puVar11 + iVar23);
                puVar1 = (undefined4 *)0x360;
                puVar2 = (undefined4 *)0x370;
                lVar49 = 2;
                pauVar4 = pauVar4 + 2;
                pauVar38 = pauVar37;
                puVar48 = puVar35;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar1 = (undefined4 *)0x368;
                puVar2 = (undefined4 *)0x378;
                lVar49 = 2;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                *(undefined4 *)((int)ppiVar39 + 0x128) = uVar19;
                *(undefined4 **)((int)ppiVar39 + 0x18) = puVar35 + 8;
                pauVar37 = pauVar38 + 2;
                puVar1 = (undefined4 *)((int)puVar10 + 4);
                puVar10 = (undefined8 *)((int)puVar10 + iVar23);
                auVar62 = *pauVar43;
                VectorMultiply(*(undefined1 (*) [16])((int)ppiVar39 + 0x138),in_q6,4);
                *(undefined4 *)((int)ppiVar39 + 300) = *puVar1;
                puVar1 = (undefined4 *)((int)puVar16 + 4);
                pauVar43 = param_1 + 1;
                puVar16 = (undefined8 *)((int)puVar16 + iVar23);
                auVar50 = vrev(auVar62,4);
                *(undefined4 *)((int)ppiVar39 + 0x130) = *puVar1;
                VectorMultiply(*(undefined1 (*) [16])((int)ppiVar39 + 0x138),in_q7,4);
                puVar1 = (undefined4 *)((int)puVar13 + 4);
                puVar13 = (undefined8 *)((int)puVar13 + iVar23);
                auVar62 = *pauVar38;
                *(undefined4 *)((int)ppiVar39 + 0x134) = *puVar1;
                auVar50 = VectorMultiply(auVar51,auVar50,4);
                auVar66 = VectorMultiply(auVar65,auVar62,4);
                auVar62 = VectorMultiply(pauVar38[1],auVar61,4);
                auVar63 = VectorMultiplySubtract
                                    (*(undefined1 (*) [16])((int)ppiVar39 + 0x128),in_q7,4,0);
                auVar61 = VectorMultiplyAccumulate
                                    (*(undefined1 (*) [16])((int)ppiVar39 + 0x128),in_q6,4,0);
                auVar51 = *param_1;
                param_1 = param_1 + 2;
                auVar65 = VectorShiftLeft(*pauVar43,0xe,0x20,0);
                auVar64 = VectorAdd(auVar50,auVar62,4);
                auVar62 = VectorSub(auVar62,auVar50,4);
                VectorSub(auVar66,auVar57,4);
                VectorAdd(auVar57,auVar66,4);
                auVar57 = VectorShiftLeft(auVar51,0xe,0x20,0);
                puVar35 = (undefined4 *)VectorTableLookup(pauVar4,param_1,4);
                VectorTableLookup(pauVar37,param_1,4);
                auVar50 = VectorSignedFixedToFloat(auVar63,1);
                puVar44 = (undefined8 *)VectorTableLookup(pauVar4,puVar10,4);
                auVar51 = VectorSignedFixedToFloat(auVar62,1);
                VectorTableLookup(pauVar37,puVar10,4);
                auVar62 = VectorSignedFixedToFloat(auVar61,1);
                auVar51 = VectorSub(auVar65,auVar51,4);
                auVar65 = VectorSignedFixedToFloat(auVar64,1);
                auVar51 = VectorAdd(auVar51,auVar54,4);
                auVar57 = VectorSub(auVar57,auVar65,4);
                auVar51 = VectorSignedFixedToFloat(auVar51,0xf);
                auVar57 = VectorAdd(auVar57,auVar54,4);
                auVar57 = VectorSignedFixedToFloat(auVar57,0xf);
                *puVar44 = auVar57._0_8_;
                puVar44[1] = auVar57._8_8_;
                puVar44[2] = auVar51._0_8_;
                puVar44[3] = auVar51._8_8_;
                puVar45 = *(undefined4 **)((int)ppiVar39 + 0x14);
                puVar1 = (undefined4 *)0x320;
                puVar2 = (undefined4 *)0x330;
                lVar49 = 2;
                puVar48 = puVar45;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar1 = (undefined4 *)0x328;
                puVar2 = (undefined4 *)0x338;
                lVar49 = 2;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                *(undefined4 **)((int)ppiVar39 + 0x14) = puVar45 + 8;
                auVar51 = VectorShiftLeft(auVar61,0xe,0x20,0);
                puVar45 = *(undefined4 **)((int)ppiVar39 + 0x10);
                auVar51 = VectorAdd(auVar50,auVar51,4);
                puVar1 = (undefined4 *)0x320;
                puVar2 = (undefined4 *)0x330;
                lVar49 = 2;
                puVar48 = puVar45;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar1 = (undefined4 *)0x328;
                puVar2 = (undefined4 *)0x338;
                lVar49 = 2;
                while( true ) {
                  *puVar1 = *puVar48;
                  puVar48 = puVar48 + 1;
                  *puVar2 = *puVar48;
                  puVar48 = puVar48 + 1;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                auVar57 = VectorAdd(auVar51,auVar54,4);
                auVar51 = VectorShiftLeft(auVar61,0xe,0x20,0);
                *(undefined4 **)((int)ppiVar39 + 0x10) = puVar45 + 8;
                VectorSignedFixedToFloat(auVar57,0xf);
                auVar51 = VectorAdd(auVar62,auVar51,4);
                auVar51 = VectorAdd(auVar51,auVar54,4);
                VectorSignedFixedToFloat(auVar51,0xf);
                puVar1 = (undefined4 *)0x340;
                puVar2 = (undefined4 *)0x350;
                lVar49 = 2;
                while( true ) {
                  *puVar35 = *puVar1;
                  puVar35[1] = *puVar2;
                  puVar35 = puVar35 + 2;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar1 = (undefined4 *)0x348;
                puVar2 = (undefined4 *)0x358;
                lVar49 = 2;
                while( true ) {
                  *puVar35 = *puVar1;
                  puVar35[1] = *puVar2;
                  puVar35 = puVar35 + 2;
                  lVar49 = lVar49 + -1;
                  if (lVar49 == 0) break;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
              } while (!(bool)uVar46);
              iVar25 = *(int *)((int)ppiVar39 + 0x60);
              param_1 = *(undefined1 (**) [16])((int)ppiVar39 + 0x3c);
              puVar10 = (undefined8 *)(*(int *)((int)ppiVar39 + 0x38) + iVar25);
              iVar20 = *(int *)((int)ppiVar39 + 0x5c);
              iVar7 = *(int *)((int)ppiVar39 + 0x1c);
              puVar11 = (undefined8 *)(*param_1 + iVar25);
              uVar52 = vrev(*puVar10,4);
              uVar58 = VectorTranspose(**(undefined8 **)((int)ppiVar39 + 0x58),4);
              uVar58 = VectorMultiply(uVar58,*puVar10,4);
              uVar52 = VectorMultiply(**(undefined8 **)((int)ppiVar39 + 0x58),uVar52,4);
              uVar55 = VectorShiftLeft(*puVar11,0xe,0x20,0);
              VectorAdd(uVar52,uVar58,4);
              uVar52 = VectorSub(uVar58,uVar52,4);
              VectorTableLookup(puVar11,iVar20,2);
              uVar58 = VectorShiftRight(uVar52,1);
              uVar52 = VectorSub(uVar55,uVar58,4);
              uVar55 = auVar53._0_8_;
              uVar52 = VectorAdd(uVar52,uVar55,4);
              uVar52 = VectorShiftRight(uVar52,0xf);
              *puVar10 = uVar52;
              iVar26 = *(int *)((int)puVar11 + 4);
              pauVar4 = (undefined1 (*) [16])(*(int *)(*param_1 + iVar25) << 0xe);
              *(undefined1 (**) [16])((int)ppiVar39 + 0x120) = pauVar4;
              *(int *)((int)ppiVar39 + 0x124) = iVar26 << 0xe;
              uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar39 + 0x120),uVar58,4);
              uVar52 = VectorAdd(uVar52,uVar55,4);
              uVar52 = VectorShiftRight(uVar52,0xf);
              *puVar11 = uVar52;
              if (iVar20 < iVar7) {
                uVar52 = puVar10[1];
                iVar25 = *(int *)((int)ppiVar39 + 0x74);
                uVar59 = vrev(uVar52,4);
                uVar56 = VectorShiftLeft(puVar11[1],0xe,0x20,0);
                uVar58 = VectorTranspose(**(undefined8 **)((int)ppiVar39 + 0x70),4);
                uVar58 = VectorMultiply(uVar52,uVar58,4);
                uVar52 = VectorMultiply(uVar59,**(undefined8 **)((int)ppiVar39 + 0x70),4);
                VectorAdd(uVar52,uVar58,4);
                uVar52 = VectorSub(uVar58,uVar52,4);
                puVar13 = (undefined8 *)VectorTableLookup(puVar11,puVar10 + 1,2);
                uVar58 = VectorShiftRight(uVar52,1);
                uVar52 = VectorSub(uVar56,uVar58,4);
                uVar52 = VectorAdd(uVar52,uVar55,4);
                uVar52 = VectorShiftRight(uVar52,0xf);
                *puVar13 = uVar52;
                iVar20 = *(int *)((int)puVar11 + 0xc);
                *(int *)((int)ppiVar39 + 0x118) = *(int *)(puVar11 + 1) << 0xe;
                pauVar4 = (undefined1 (*) [16])(iVar20 << 0xe);
                *(undefined1 (**) [16])((int)ppiVar39 + 0x11c) = pauVar4;
                uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar39 + 0x118),uVar58,4);
                uVar52 = VectorAdd(uVar52,uVar55,4);
                uVar52 = VectorShiftRight(uVar52,0xf);
                puVar11[1] = uVar52;
                if (iVar25 < iVar7) {
                  uVar58 = puVar10[2];
                  iVar25 = *(int *)((int)ppiVar39 + 0x7c);
                  uVar52 = vrev(uVar58,4);
                  uVar56 = VectorTranspose(**(undefined8 **)((int)ppiVar39 + 0x78),4);
                  uVar58 = VectorMultiply(uVar58,uVar56,4);
                  uVar52 = VectorMultiply(uVar52,**(undefined8 **)((int)ppiVar39 + 0x78),4);
                  uVar56 = VectorShiftLeft(puVar11[2],0xe,0x20,0);
                  VectorAdd(uVar58,uVar52,4);
                  uVar52 = VectorSub(uVar58,uVar52,4);
                  puVar13 = (undefined8 *)VectorTableLookup(puVar11,puVar10 + 2,2);
                  uVar58 = VectorShiftRight(uVar52,1);
                  uVar52 = VectorSub(uVar56,uVar58,4);
                  uVar52 = VectorAdd(uVar52,uVar55,4);
                  uVar52 = VectorShiftRight(uVar52,0xf);
                  *puVar13 = uVar52;
                  iVar20 = *(int *)((int)puVar11 + 0x14);
                  *(int *)((int)ppiVar39 + 0x110) = *(int *)(puVar11 + 2) << 0xe;
                  pauVar4 = (undefined1 (*) [16])(iVar20 << 0xe);
                  *(undefined1 (**) [16])((int)ppiVar39 + 0x114) = pauVar4;
                  uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar39 + 0x110),uVar58,4);
                  uVar52 = VectorAdd(uVar52,uVar55,4);
                  uVar52 = VectorShiftRight(uVar52,0xf);
                  puVar11[2] = uVar52;
                  if (iVar25 < iVar7) {
                    uVar52 = puVar10[3];
                    uVar56 = **(undefined8 **)((int)ppiVar39 + 0x80);
                    uVar60 = vrev(uVar52,4);
                    uVar59 = VectorShiftLeft(puVar11[3],0xe,0x20,0);
                    uVar58 = VectorTranspose(uVar56,4);
                    uVar58 = VectorMultiply(uVar52,uVar58,4);
                    uVar52 = VectorMultiply(uVar56,uVar60,4);
                    VectorAdd(uVar58,uVar52,4);
                    uVar52 = VectorSub(uVar58,uVar52,4);
                    pauVar4 = (undefined1 (*) [16])
                              VectorTableLookup(puVar11,*(undefined8 **)((int)ppiVar39 + 0x80),2);
                    uVar58 = VectorShiftRight(uVar52,1);
                    uVar52 = VectorSub(uVar59,uVar58,4);
                    uVar52 = VectorAdd(uVar52,uVar55,4);
                    uVar52 = VectorShiftRight(uVar52,0xf);
                    puVar10[3] = uVar52;
                    iVar20 = *(int *)((int)puVar11 + 0x1c);
                    *(int *)((int)ppiVar39 + 0x108) = *(int *)(puVar11 + 3) << 0xe;
                    *(int *)((int)ppiVar39 + 0x10c) = iVar20 << 0xe;
                    uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar39 + 0x108),uVar58,4);
                    uVar52 = VectorAdd(uVar52,uVar55,4);
                    uVar52 = VectorShiftRight(uVar52,0xf);
                    puVar11[3] = uVar52;
                  }
                }
              }
            }
            iVar20 = *(int *)((int)ppiVar39 + 0x34);
            iVar25 = *(int *)((int)ppiVar39 + 0x50);
            *(int *)((int)ppiVar39 + 0x34) = iVar20 + 1;
            *(int *)((int)ppiVar39 + 0x24) = *(int *)((int)ppiVar39 + 0x24) + iVar25;
            param_1 = (undefined1 (*) [16])(*param_1 + iVar25);
            *(int *)((int)ppiVar39 + 0x28) = *(int *)((int)ppiVar39 + 0x28) + iVar25;
            *(int *)((int)ppiVar39 + 0x20) = *(int *)((int)ppiVar39 + 0x20) + iVar25;
          } while (*(int *)((int)ppiVar39 + 0x260) != iVar20 + 1);
        }
      }
    }
    else if (0 < param_7) {
      local_1d4 = param_3 * 8;
      local_228 = (undefined1 (*) [16])(param_6[0x10] + 8);
      iVar20 = local_23c * 8;
      pauVar4 = param_6;
      if (0 < local_23c) {
        local_210 = (undefined1 *)(local_23c - 1);
        uVar9 = (uint)local_210 & 0xfffffffc;
        pauVar37 = (undefined1 (*) [16])(*param_1 + iVar20);
        local_200 = (undefined1 *)((int)local_228 + uVar9 * local_1d4);
        iVar25 = param_3 << 5;
        auVar54._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar54._0_8_ = 0x400000004000;
        auVar54 = *(undefined1 (*) [16])(auVar54 << 0x40 | auVar54);
        local_204 = pauVar37;
        iVar26 = (int)local_210 * local_1d4 + 0x108;
        local_1e8 = local_200 + param_3 * 8;
        local_1e0 = local_1e8 + param_3 * 8;
        local_1d8 = local_1e8 + param_3 * 8 + param_3 * 8;
        iVar23 = (int)local_210 * local_1d4 + 0x10c;
        if (local_1d4 < 0) {
          iVar23 = 0x10c;
        }
        auVar51._8_8_ = DAT_00018690;
        auVar51._0_8_ = 0x400000004000;
        if (local_1d4 >= 0) {
          iVar26 = 0x108;
        }
        local_218 = (int *)(*param_6 + iVar23);
        local_1fc = uVar9 << 3;
        local_1f8 = uVar9 + 1;
        local_1dc = uVar9 + 3;
        local_1f0 = (undefined1 *)((int)param_6 + param_3 * 0x18 + 0x108);
        local_230 = (uint)local_210 >> 2;
        local_1f4 = (int)param_6[param_3 + 0x10] + 8;
        local_20c = (undefined1 (*) [16])(param_8 << 3);
        local_214 = *param_6 + iVar26;
        local_208 = iVar20 + -4;
        local_1e4 = uVar9 + 2;
        local_238 = (int *)0x0;
        local_234 = (undefined1 (*) [16])(iVar20 + 0x20);
        local_1ec = local_1d4 + 0x108;
        local_22c = (undefined1 (*) [16])0x0;
        do {
          iVar23 = *(int *)((int)ppiVar40 + 0x24);
          iVar26 = *(int *)((int)ppiVar40 + 0x20);
          bVar47 = SBORROW4(iVar26,iVar23);
          iVar20 = iVar26 - iVar23;
          if (iVar26 < iVar23) {
            bVar47 = SBORROW4(iVar23 + -0x20,iVar26 + 0x20);
            iVar20 = (iVar23 + -0x20) - (iVar26 + 0x20);
          }
          pauVar4 = (undefined1 (*) [16])(*(int *)((int)ppiVar40 + 0x54) + iVar26);
          *(undefined1 (**) [16])((int)ppiVar40 + 0x34) = pauVar4;
          if ((*(uint *)((int)ppiVar40 + 0x48) < 4 ||
              (iVar20 < 0 != bVar47 ||
              *(undefined1 **)((int)ppiVar40 + 0x44) <= pauVar37[-1] + 0xc &&
              param_1 <= *(undefined1 (**) [16])((int)ppiVar40 + 0x40))) ||
              *(undefined1 **)((int)ppiVar40 + 0x44) <= *pauVar37 + *(int *)((int)ppiVar40 + 0x50)
              && pauVar37 <= *(undefined1 (**) [16])((int)ppiVar40 + 0x40)) {
            iVar23 = *(int *)((int)ppiVar40 + 0x1c);
            puVar10 = *(undefined8 **)((int)ppiVar40 + 0x30);
            iVar26 = *(int *)((int)ppiVar40 + 0x84);
            iVar20 = 0;
            pauVar38 = param_1;
            do {
              uVar58 = *puVar10;
              puVar10 = (undefined8 *)((int)puVar10 + iVar26);
              uVar55 = vrev(uVar58,4);
              uVar52 = VectorTranspose(*(undefined8 *)*pauVar4,4);
              uVar58 = VectorMultiply(uVar52,uVar58,4);
              uVar52 = VectorMultiply(*(undefined8 *)*pauVar4,uVar55,4);
              VectorAdd(uVar58,uVar52,4);
              uVar52 = VectorSub(uVar58,uVar52,4);
              puVar11 = (undefined8 *)VectorTableLookup(iVar26,pauVar4,2);
              uVar52 = VectorAdd(uVar52,auVar51._0_8_,4);
              uVar52 = VectorShiftRight(uVar52,0xf);
              uVar58 = VectorSub(*(undefined8 *)*pauVar38,uVar52,4);
              *puVar11 = uVar58;
              pauVar4 = (undefined1 (*) [16])(puVar11 + 1);
              iVar7 = iVar20 * 8;
              iVar20 = iVar20 + 1;
              uVar19 = *(undefined4 *)(*pauVar38 + 4);
              *(undefined4 *)((int)ppiVar40 + 0x98) = *(undefined4 *)(*param_1 + iVar7);
              *(undefined4 *)((int)ppiVar40 + 0x9c) = uVar19;
              uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar40 + 0x98),uVar52,4);
              *(undefined8 *)*pauVar38 = uVar52;
              pauVar38 = (undefined1 (*) [16])(*pauVar38 + 8);
            } while (iVar23 != iVar20);
          }
          else {
            *(int *)((int)ppiVar40 + 0x10) = (int)*param_1 + 4;
            puVar11 = *(undefined8 **)((int)ppiVar40 + 0x30);
            puVar10 = (undefined8 *)
                      (*(int *)((int)ppiVar40 + 0x25c) + *(int *)((int)ppiVar40 + 0x6c));
            puVar13 = *(undefined8 **)((int)ppiVar40 + 0x68);
            puVar16 = *(undefined8 **)((int)ppiVar40 + 100);
            *(undefined1 (**) [16])((int)ppiVar40 + 0x18) = pauVar37;
            iVar20 = 0;
            *(undefined1 (**) [16])((int)ppiVar40 + 0x38) = pauVar37;
            *(undefined1 (**) [16])((int)ppiVar40 + 0x14) = param_1;
            *(undefined1 (**) [16])((int)ppiVar40 + 0x3c) = param_1;
            pauVar4 = pauVar37;
            pauVar38 = pauVar37;
            pauVar43 = param_1;
            do {
              uVar34 = *(undefined4 *)puVar10;
              uVar46 = *(int *)((int)ppiVar40 + 0x28) == iVar20 + 1;
              uVar19 = *(undefined4 *)puVar16;
              *(undefined4 *)((int)ppiVar40 + 0xf0) = *(undefined4 *)puVar11;
              *(undefined4 *)((int)ppiVar40 + 0xf4) = uVar34;
              *(undefined4 *)((int)ppiVar40 + 0xf8) = uVar19;
              uVar19 = *(undefined4 *)puVar13;
              uVar52 = *puVar10;
              *(undefined8 *)((int)ppiVar40 + 0xe0) = *puVar11;
              *(undefined4 *)((int)ppiVar40 + 0xfc) = uVar19;
              *(undefined8 *)((int)ppiVar40 + 0xe8) = uVar52;
              uVar52 = *puVar16;
              *(undefined8 *)((int)ppiVar40 + 0xd8) = *puVar13;
              auVar57 = *(undefined1 (*) [16])((int)ppiVar40 + 0xf0);
              auVar53 = *pauVar38;
              *(undefined8 *)((int)ppiVar40 + 0xd0) = uVar52;
              auVar61 = VectorTranspose(auVar53,4);
              puVar1 = (undefined4 *)((int)puVar11 + 4);
              puVar11 = (undefined8 *)((int)puVar11 + iVar25);
              auVar53 = pauVar38[1];
              auVar62 = VectorMultiply(auVar61,*(undefined1 (*) [16])((int)ppiVar40 + 0xe0),4);
              auVar61 = *pauVar37;
              auVar65 = pauVar37[1];
              *(undefined4 *)((int)ppiVar40 + 0xc0) = *puVar1;
              auVar53 = VectorTranspose(auVar53,4);
              puVar1 = (undefined4 *)((int)puVar10 + 4);
              puVar10 = (undefined8 *)((int)puVar10 + iVar25);
              *(undefined4 *)((int)ppiVar40 + 0xc4) = *puVar1;
              VectorTranspose(auVar61,4);
              puVar1 = (undefined4 *)((int)puVar16 + 4);
              auVar63 = VectorMultiply(auVar53,*(undefined1 (*) [16])((int)ppiVar40 + 0xd0),4);
              puVar16 = (undefined8 *)((int)puVar16 + iVar25);
              *(undefined4 *)((int)ppiVar40 + 200) = *puVar1;
              auVar53 = vrev(*(undefined1 (*) [16])((int)ppiVar40 + 0xd0),4);
              puVar1 = (undefined4 *)((int)puVar13 + 4);
              puVar13 = (undefined8 *)((int)puVar13 + iVar25);
              *(undefined4 *)((int)ppiVar40 + 0xcc) = *puVar1;
              VectorTranspose(auVar65,4);
              puVar45 = *(undefined4 **)((int)ppiVar40 + 0x18);
              pauVar28 = pauVar4 + 2;
              auVar64 = vrev(*(undefined1 (*) [16])((int)ppiVar40 + 0xe0),4);
              auVar50 = VectorMultiply(auVar53,auVar65,4);
              auVar53 = pauVar43[1];
              auVar64 = VectorMultiply(auVar64,auVar61,4);
              puVar35 = *(undefined4 **)((int)ppiVar40 + 0x14);
              puVar1 = (undefined4 *)0x300;
              puVar2 = (undefined4 *)0x310;
              lVar49 = 2;
              pauVar37 = pauVar37 + 2;
              puVar48 = puVar45;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar1 = (undefined4 *)0x308;
              puVar2 = (undefined4 *)0x318;
              lVar49 = 2;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar45 = puVar45 + 8;
              VectorMultiply(auVar57,auVar61,4);
              *(undefined4 **)((int)ppiVar40 + 0x18) = puVar45;
              VectorMultiply(auVar57,auVar65,4);
              VectorSub(auVar63,auVar50,4);
              VectorAdd(auVar50,auVar63,4);
              pauVar22 = (undefined1 (*) [16])((int)ppiVar40 + 0xc0);
              auVar65 = VectorMultiplySubtract(*pauVar22,auVar65,4,0);
              pauVar3 = (undefined1 (*) [16])((int)ppiVar40 + 0xc0);
              pauVar38 = (undefined1 (*) [16])VectorTableLookup(param_1,param_1,4);
              auVar61 = VectorMultiplyAccumulate(*pauVar3,auVar61,4,0);
              ppiVar40 = (int **)VectorTableLookup(puVar45,param_1,4);
              VectorSub(auVar62,auVar64,4);
              VectorAdd(auVar64,auVar62,4);
              auVar62 = VectorAdd(*pauVar22,auVar54,4);
              auVar57 = *pauVar43;
              auVar62 = VectorSignedFixedToFloat(auVar62,0xf);
              pauVar43 = pauVar43 + 2;
              auVar65 = VectorAdd(auVar65,auVar54,4);
              iVar20 = VectorTableLookup(param_1,puVar10,4);
              auVar61 = VectorAdd(auVar61,auVar54,4);
              auVar62 = VectorSub(auVar53,auVar62,4);
              iVar25 = VectorTableLookup(puVar45,puVar10,4);
              auVar65 = VectorSignedFixedToFloat(auVar65,0xf);
              auVar53 = VectorSignedFixedToFloat(auVar61,0xf);
              auVar61 = VectorAdd(*pauVar3,auVar54,4);
              auVar61 = VectorSignedFixedToFloat(auVar61,0xf);
              auVar57 = VectorSub(auVar57,auVar61,4);
              *(longlong *)*pauVar4 = auVar57._0_8_;
              *(longlong *)(*pauVar4 + 8) = auVar57._8_8_;
              pauVar22 = pauVar4 + 1;
              *(longlong *)*pauVar22 = auVar62._0_8_;
              *(longlong *)(pauVar4[1] + 8) = auVar62._8_8_;
              puVar1 = (undefined4 *)0x3e0;
              puVar2 = (undefined4 *)0x3f0;
              lVar49 = 2;
              pauVar4 = pauVar28;
              puVar48 = puVar35;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar1 = (undefined4 *)0x3e8;
              puVar2 = (undefined4 *)0x3f8;
              lVar49 = 2;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              VectorAdd(auVar65,auVar62,4);
              *(undefined4 **)((int)ppiVar40 + 0x14) = puVar35 + 8;
              puVar35 = *(undefined4 **)((int)ppiVar40 + 0x10);
              puVar1 = (undefined4 *)0x3e0;
              puVar2 = (undefined4 *)0x3f0;
              lVar49 = 2;
              puVar48 = puVar35;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar1 = (undefined4 *)0x3e8;
              puVar2 = (undefined4 *)0x3f8;
              lVar49 = 2;
              while( true ) {
                *puVar1 = *puVar48;
                puVar48 = puVar48 + 1;
                *puVar2 = *puVar48;
                puVar48 = puVar48 + 1;
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              VectorAdd(auVar53,auVar62,4);
              *(undefined4 **)((int)ppiVar40 + 0x10) = puVar35 + 8;
              puVar1 = (undefined4 *)0x360;
              puVar2 = (undefined4 *)0x370;
              lVar49 = 2;
              pauVar28 = param_1;
              while( true ) {
                *(undefined4 *)*pauVar28 = *puVar1;
                *(undefined4 *)(*pauVar28 + 4) = *puVar2;
                pauVar28 = (undefined1 (*) [16])(*pauVar28 + 8);
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar1 = (undefined4 *)0x368;
              puVar2 = (undefined4 *)0x378;
              lVar49 = 2;
              while( true ) {
                *(undefined4 *)*pauVar28 = *puVar1;
                *(undefined4 *)(*pauVar28 + 4) = *puVar2;
                pauVar28 = (undefined1 (*) [16])(*pauVar28 + 8);
                lVar49 = lVar49 + -1;
                if (lVar49 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
              }
              param_1 = param_1 + 2;
            } while (!(bool)uVar46);
            iVar23 = *(int *)((int)ppiVar40 + 0x5c);
            pauVar37 = *(undefined1 (**) [16])((int)ppiVar40 + 0x38);
            param_1 = *(undefined1 (**) [16])((int)ppiVar40 + 0x3c);
            puVar11 = (undefined8 *)(*(int *)((int)ppiVar40 + 0x34) + iVar23);
            pauVar4 = *(undefined1 (**) [16])((int)ppiVar40 + 0x1c);
            iVar20 = *(int *)((int)ppiVar40 + 0x60);
            puVar10 = (undefined8 *)(*param_1 + iVar23);
            uVar55 = vrev(**(undefined8 **)((int)ppiVar40 + 0x58),4);
            uVar52 = VectorTranspose(*puVar11,4);
            uVar58 = VectorMultiply(uVar52,**(undefined8 **)((int)ppiVar40 + 0x58),4);
            uVar52 = VectorMultiply(*puVar11,uVar55,4);
            uVar55 = VectorAdd(uVar58,uVar52,4);
            VectorSub(uVar58,uVar52,4);
            VectorTableLookup(pauVar22,pauVar4,2);
            uVar56 = auVar51._0_8_;
            uVar52 = VectorAdd(uVar55,uVar56,4);
            uVar52 = VectorShiftRight(uVar52,0xf);
            uVar58 = VectorSub(*puVar10,uVar52,4);
            *puVar11 = uVar58;
            *(undefined4 *)((int)ppiVar40 + 0xb8) = *(undefined4 *)(*param_1 + iVar23);
            *(undefined4 *)((int)ppiVar40 + 0xbc) = *(undefined4 *)((int)puVar10 + 4);
            uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar40 + 0xb8),uVar52,4);
            *puVar10 = uVar52;
            if (iVar20 < (int)pauVar4) {
              iVar20 = *(int *)((int)ppiVar40 + 0x74);
              uVar55 = vrev(**(undefined8 **)((int)ppiVar40 + 0x70),4);
              uVar52 = VectorTranspose(puVar11[1],4);
              uVar58 = VectorMultiply(uVar52,**(undefined8 **)((int)ppiVar40 + 0x70),4);
              uVar52 = VectorMultiply(puVar11[1],uVar55,4);
              uVar55 = VectorAdd(uVar58,uVar52,4);
              VectorSub(uVar58,uVar52,4);
              puVar13 = (undefined8 *)VectorTableLookup(pauVar22,pauVar4,2);
              uVar52 = VectorAdd(uVar55,uVar56,4);
              uVar52 = VectorShiftRight(uVar52,0xf);
              uVar58 = VectorSub(puVar10[1],uVar52,4);
              *puVar13 = uVar58;
              *(undefined4 *)((int)ppiVar40 + 0xb0) = *(undefined4 *)(puVar10 + 1);
              *(undefined4 *)((int)ppiVar40 + 0xb4) = *(undefined4 *)((int)puVar10 + 0xc);
              uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar40 + 0xb0),uVar52,4);
              puVar10[1] = uVar52;
              if (iVar20 < (int)pauVar4) {
                iVar20 = *(int *)((int)ppiVar40 + 0x7c);
                uVar55 = vrev(**(undefined8 **)((int)ppiVar40 + 0x78),4);
                uVar52 = VectorTranspose(puVar11[2],4);
                uVar58 = VectorMultiply(uVar52,**(undefined8 **)((int)ppiVar40 + 0x78),4);
                uVar52 = VectorMultiply(puVar11[2],uVar55,4);
                uVar55 = VectorAdd(uVar58,uVar52,4);
                VectorSub(uVar58,uVar52,4);
                puVar13 = (undefined8 *)VectorTableLookup(pauVar22,pauVar4,2);
                uVar52 = VectorAdd(uVar55,uVar56,4);
                uVar52 = VectorShiftRight(uVar52,0xf);
                uVar58 = VectorSub(puVar10[2],uVar52,4);
                *puVar13 = uVar58;
                *(undefined4 *)((int)ppiVar40 + 0xa8) = *(undefined4 *)(puVar10 + 2);
                *(undefined4 *)((int)ppiVar40 + 0xac) = *(undefined4 *)((int)puVar10 + 0x14);
                uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar40 + 0xa8),uVar52,4);
                puVar10[2] = uVar52;
                if (iVar20 < (int)pauVar4) {
                  uVar55 = puVar11[3];
                  uVar59 = vrev(**(undefined8 **)((int)ppiVar40 + 0x80),4);
                  uVar52 = VectorTranspose(uVar55,4);
                  uVar58 = VectorMultiply(uVar52,**(undefined8 **)((int)ppiVar40 + 0x80),4);
                  uVar52 = VectorMultiply(uVar55,uVar59,4);
                  uVar55 = VectorAdd(uVar58,uVar52,4);
                  VectorSub(uVar58,uVar52,4);
                  VectorTableLookup(pauVar22,pauVar4,2);
                  uVar52 = VectorAdd(uVar55,uVar56,4);
                  uVar52 = VectorShiftRight(uVar52,0xf);
                  uVar58 = VectorSub(puVar10[3],uVar52,4);
                  puVar11[3] = uVar58;
                  *(undefined4 *)((int)ppiVar40 + 0xa0) = *(undefined4 *)(puVar10 + 3);
                  *(undefined4 *)((int)ppiVar40 + 0xa4) = *(undefined4 *)((int)puVar10 + 0x1c);
                  uVar52 = VectorAdd(*(undefined8 *)((int)ppiVar40 + 0xa0),uVar52,4);
                  puVar10[3] = uVar52;
                }
              }
            }
          }
          iVar20 = *(int *)((int)ppiVar40 + 0x2c);
          iVar23 = *(int *)((int)ppiVar40 + 0x4c);
          *(int *)((int)ppiVar40 + 0x2c) = iVar20 + 1;
          *(int *)((int)ppiVar40 + 0x20) = *(int *)((int)ppiVar40 + 0x20) + iVar23;
          pauVar37 = (undefined1 (*) [16])(*pauVar37 + iVar23);
          param_1 = (undefined1 (*) [16])(*param_1 + iVar23);
          *(int *)((int)ppiVar40 + 0x24) = *(int *)((int)ppiVar40 + 0x24) + iVar23;
        } while (*(int *)((int)ppiVar40 + 0x260) != iVar20 + 1);
      }
    }
    break;
  case 3:
    if (0 < param_7) {
      iVar20 = *(int *)(*param_6 + 4);
      local_240 = (int *)((int)*param_1 + 8);
      local_224 = (undefined1 (*) [16])0x0;
      do {
        iVar25 = *(int *)(param_6[0x10] + local_23c * param_3 * 8 + 0xc);
        local_244 = param_6;
        local_248 = (undefined1 (*) [16])local_23c;
        piVar14 = (int *)((int)local_240 + (local_23c * 2 + -1) * 4);
        piVar29 = (int *)((int)local_240 + (local_23c * 4 + -2) * 4);
        piVar33 = local_240;
        pauVar4 = param_6;
        do {
          iVar26 = *(int *)((int)piVar33 + -8);
          iVar23 = *(int *)((int)piVar33 + -4);
          if (iVar20 == 0) {
            *(int *)((int)piVar33 + -8) = iVar26 * 0x2aaa + 0x4000 >> 0xf;
            *(int *)((int)piVar33 + -4) = iVar23 * 0x2aaa + 0x4000 >> 0xf;
            piVar14[-1] = piVar14[-1] * 0x2aaa + 0x4000 >> 0xf;
            *piVar14 = *piVar14 * 0x2aaa + 0x4000 >> 0xf;
            iVar7 = *piVar29 * 0x2aaa + 0x4000 >> 0xf;
            *piVar29 = iVar7;
            iVar24 = piVar29[1] * 0x2aaa + 0x4000 >> 0xf;
            piVar29[1] = iVar24;
            iVar26 = *(int *)((int)piVar33 + -8);
            iVar23 = *(int *)((int)piVar33 + -4);
          }
          else {
            iVar7 = *piVar29;
            iVar24 = piVar29[1];
          }
          local_248 = (undefined1 (*) [16])((int)local_248 + -1);
          pauVar37 = pauVar4 + 0x10;
          pauVar38 = pauVar4 + 0x10;
          pauVar4 = pauVar4 + param_3;
          iVar15 = *(int *)(local_244[0x10] + 8) * *piVar14 +
                   piVar14[-1] * *(int *)(local_244[0x10] + 0xc) + 0x4000 >> 0xf;
          iVar6 = iVar24 * *(int *)(*pauVar37 + 8) + iVar7 * *(int *)(*pauVar38 + 0xc) + 0x4000 >>
                  0xf;
          iVar12 = iVar6 + iVar15;
          iVar41 = (piVar14[-1] * *(int *)(local_244[0x10] + 8) -
                   *piVar14 * *(int *)(local_244[0x10] + 0xc)) + 0x4000 >> 0xf;
          iVar7 = (iVar7 * *(int *)(*pauVar37 + 8) - iVar24 * *(int *)(*pauVar38 + 0xc)) + 0x4000 >>
                  0xf;
          iVar24 = iVar7 + iVar41;
          piVar14[-1] = iVar26 - (iVar24 >> 1);
          *piVar14 = iVar23 - (iVar12 >> 1);
          *(int *)((int)piVar33 + -8) = *(int *)((int)piVar33 + -8) + iVar24;
          *(int *)((int)piVar33 + -4) = *(int *)((int)piVar33 + -4) + iVar12;
          iVar23 = iVar25 * (iVar15 - iVar6) + 0x4000 >> 0xf;
          pauVar37 = (undefined1 (*) [16])(iVar25 * (iVar41 - iVar7) + 0x4000 >> 0xf);
          *piVar29 = piVar14[-1] + iVar23;
          piVar29[1] = *piVar14 - (int)pauVar37;
          piVar14[-1] = piVar14[-1] - iVar23;
          *piVar14 = (int)(*pauVar37 + *piVar14);
          piVar14 = piVar14 + 2;
          piVar29 = piVar29 + 2;
          piVar33 = (int *)((int)piVar33 + 8);
          local_244 = (undefined1 (*) [16])(*local_244 + param_3 * 8);
        } while (local_248 != (undefined1 (*) [16])0x0);
        local_240 = (int *)((int)local_240 + param_8 * 8);
        local_224 = (undefined1 (*) [16])((int)local_224 + 1);
      } while ((undefined1 (*) [16])param_7 != local_224);
      return pauVar37;
    }
    break;
  case 4:
    if (*(int *)(*param_6 + 4) == 0) {
      if (0 < param_7) {
        pauVar37 = (undefined1 (*) [16])(param_6[0x10] + 8);
        pauVar4 = (undefined1 (*) [16])(local_23c * 0x10);
        if (0 < local_23c) {
          local_22c = (undefined1 (*) [16])((int)param_1 + local_23c * 0x18);
          local_240 = (int *)(*param_1 + local_23c * 8);
          local_228 = (undefined1 (*) [16])((int)param_1 + local_23c * 0x18 + 4);
          local_208 = 0;
          do {
            iVar20 = 0;
            piVar14 = (int *)((int)local_240 + (local_23c * 2 + 1) * 4);
            puVar30 = (undefined1 *)((int)local_240 + (local_23c * -2 + 2) * 4);
            pauVar4 = pauVar37;
            local_244 = pauVar37;
            local_224 = pauVar37;
            do {
              local_248 = pauVar4;
              iVar17 = *(int *)*local_244;
              iVar27 = *(int *)*local_248;
              iVar5 = *(int *)((int)local_240 + iVar20 * 8);
              iVar41 = *(int *)((int)local_22c + iVar20 * 8);
              iVar18 = *(int *)((int)local_240 + (iVar20 * 2 + 1) * 4);
              iVar8 = *(int *)(*local_248 + 4);
              iVar6 = *(int *)((int)local_228 + iVar20 * 8);
              iVar25 = (*(int *)*local_224 * piVar14[-1] - *(int *)(*local_224 + 4) * *piVar14) +
                       0x10000 >> 0x11;
              iVar23 = *(int *)(*local_224 + 4) * piVar14[-1] + *piVar14 * *(int *)*local_224 +
                       0x10000 >> 0x11;
              iVar26 = *(int *)(puVar30 + -8) + 2 >> 2;
              iVar12 = *(int *)(*local_244 + 4);
              *(int *)(puVar30 + -8) = iVar25 + iVar26;
              iVar7 = *(int *)(puVar30 + -4) + 2 >> 2;
              *(int *)(puVar30 + -4) = iVar23 + iVar7;
              iVar24 = (iVar27 * iVar5 - iVar8 * iVar18) + 0x10000 >> 0x11;
              iVar15 = (iVar17 * iVar41 - iVar12 * iVar6) + 0x10000 >> 0x11;
              piVar14[-1] = piVar14[-1] + 2 >> 2;
              *piVar14 = *piVar14 + 2 >> 2;
              iVar21 = iVar24 + iVar15;
              piVar14[-1] = *(int *)(puVar30 + -8) - iVar21;
              iVar6 = iVar12 * iVar41 + iVar6 * iVar17 + 0x10000 >> 0x11;
              iVar41 = iVar8 * iVar5 + iVar18 * iVar27 + 0x10000 >> 0x11;
              iVar12 = iVar41 + iVar6;
              iVar26 = iVar26 - iVar25;
              iVar24 = iVar24 - iVar15;
              iVar41 = iVar41 - iVar6;
              *piVar14 = *(int *)(puVar30 + -4) - iVar12;
              iVar7 = iVar7 - iVar23;
              *(int *)(puVar30 + -4) = *(int *)(puVar30 + -4) + iVar12;
              *(int *)(puVar30 + -8) = *(int *)(puVar30 + -8) + iVar21;
              *(int *)((int)local_240 + iVar20 * 8) = iVar26 + iVar41;
              *(int *)((int)local_240 + (iVar20 * 2 + 1) * 4) = iVar7 - iVar24;
              *(int *)((int)local_22c + iVar20 * 8) = iVar26 - iVar41;
              local_244 = (undefined1 (*) [16])((int)local_244 + param_3 * 0x18);
              *(int *)((int)local_228 + iVar20 * 8) = iVar7 + iVar24;
              iVar20 = iVar20 + 1;
              piVar14 = piVar14 + 2;
              puVar30 = puVar30 + 8;
              pauVar4 = (undefined1 (*) [16])(*local_248 + param_3 * 8);
              local_224 = local_224 + param_3;
            } while (local_23c != iVar20);
            local_208 = local_208 + 1;
            local_240 = (int *)((int)local_240 + param_8 * 8);
            local_22c = (undefined1 (*) [16])((int)local_22c + param_8 * 8);
            local_228 = (undefined1 (*) [16])((int)local_228 + param_8 * 8);
            pauVar4 = local_248;
          } while (param_7 != local_208);
        }
      }
    }
    else if (0 < param_7) {
      iVar20 = local_23c * 0x18;
      iVar25 = local_23c * 8;
      piVar14 = (int *)(param_6[0x10] + 8);
      if (0 < local_23c) {
        local_214 = (undefined1 *)0x0;
        local_224 = param_1;
        do {
          iVar23 = (int)*local_224 + 4;
          local_234 = (undefined1 (*) [16])0x0;
          pauVar37 = local_224;
          local_244 = (undefined1 (*) [16])piVar14;
          local_240 = piVar14;
          local_238 = piVar14;
          do {
            local_234 = (undefined1 (*) [16])((int)local_234 + 1);
            iVar12 = *(int *)local_244;
            piVar29 = (int *)((int)local_244 + 4);
            local_244 = (undefined1 (*) [16])((int)local_244 + param_3 * 6 * 4);
            iVar17 = *(int *)(iVar23 + -4);
            iVar26 = (*local_238 * *(int *)pauVar37[local_23c] -
                     local_238[1] * *(int *)(iVar23 + local_23c * 0x10)) + 0x4000 >> 0xf;
            iVar5 = iVar26 + iVar17;
            iVar7 = (*local_240 * *(int *)(*pauVar37 + iVar25) -
                    local_240[1] * *(int *)(iVar23 + local_23c * 8)) + 0x4000 >> 0xf;
            iVar24 = local_240[1] * *(int *)(*pauVar37 + iVar25) +
                     *(int *)(iVar23 + local_23c * 8) * *local_240 + 0x4000 >> 0xf;
            iVar15 = local_238[1] * *(int *)pauVar37[local_23c] +
                     *(int *)(iVar23 + local_23c * 0x10) * *local_238 + 0x4000 >> 0xf;
            iVar41 = *(int *)(*pauVar37 + 4);
            iVar6 = (iVar12 * *(int *)((int)pauVar37 + iVar20) -
                    *piVar29 * *(int *)(iVar23 + local_23c * 0x18)) + 0x4000 >> 0xf;
            iVar18 = iVar7 + iVar6;
            iVar7 = iVar7 - iVar6;
            iVar6 = *piVar29 * *(int *)((int)pauVar37 + iVar20) +
                    *(int *)(iVar23 + local_23c * 0x18) * iVar12 + 0x4000 >> 0xf;
            iVar12 = iVar24 + iVar6;
            *(int *)(iVar23 + -4) = iVar5;
            iVar8 = iVar15 + iVar41;
            *(int *)(*pauVar37 + 4) = iVar8;
            iVar41 = iVar41 - iVar15;
            *(int *)pauVar37[local_23c] = iVar5 - iVar18;
            *(int *)(iVar23 + local_23c * 0x10) = iVar8 - iVar12;
            iVar17 = iVar17 - iVar26;
            iVar24 = iVar24 - iVar6;
            *(int *)(iVar23 + -4) = *(int *)(iVar23 + -4) + iVar18;
            pauVar4 = (undefined1 (*) [16])(*(int *)(*pauVar37 + 4) + iVar12);
            *(undefined1 (**) [16])(*pauVar37 + 4) = pauVar4;
            *(int *)(*pauVar37 + iVar25) = iVar17 - iVar24;
            *(int *)(iVar23 + local_23c * 8) = iVar41 + iVar7;
            *(int *)((int)pauVar37 + iVar20) = iVar17 + iVar24;
            pauVar37 = (undefined1 (*) [16])(*pauVar37 + 8);
            *(int *)(iVar23 + local_23c * 0x18) = iVar41 - iVar7;
            iVar23 = iVar23 + 8;
            local_240 = local_240 + param_3 * 2;
            local_238 = local_238 + param_3 * 4;
          } while ((undefined1 (*) [16])local_23c != local_234);
          local_224 = (undefined1 (*) [16])(*local_224 + param_8 * 8);
          local_214 = (undefined1 *)((int)local_214 + 1);
        } while ((undefined1 *)param_7 != local_214);
      }
    }
    break;
  case 5:
    if (0 < param_7) {
      piVar14 = (int *)(param_6[0x10] + local_23c * param_3 * 8 + 8);
      if (0 < local_23c) {
        local_208 = (int)*param_1 + 8;
        local_1e4 = 0;
        do {
          iVar25 = local_208 + local_23c * 8;
          local_248 = (undefined1 (*) [16])(iVar25 + local_23c * 8);
          local_230 = local_208;
          iVar20 = (int)local_248 + local_23c * 8;
          iVar23 = *piVar14;
          iVar7 = piVar14[1];
          iVar15 = *(int *)(*param_6 + 4);
          iVar26 = piVar14[local_23c * param_3 * 2];
          iVar24 = (piVar14 + local_23c * param_3 * 2)[1];
          local_20c = param_6;
          local_220 = param_6;
          local_224 = param_6;
          local_228 = param_6;
          local_210 = (undefined1 *)0x0;
          local_22c = (undefined1 (*) [16])(iVar20 + local_23c * 8);
          do {
            local_244 = *(undefined1 (**) [16])(local_230 + -8);
            local_240 = *(int **)(local_230 + -4);
            if (iVar15 == 0) {
              *(int *)(local_230 + -8) = (int)local_244 * 0x1999 + 0x4000 >> 0xf;
              *(int *)(local_230 + -4) = (int)local_240 * 0x1999 + 0x4000 >> 0xf;
              *(int *)(iVar25 + -8) = *(int *)(iVar25 + -8) * 0x1999 + 0x4000 >> 0xf;
              *(int *)(iVar25 + -4) = *(int *)(iVar25 + -4) * 0x1999 + 0x4000 >> 0xf;
              *(int *)((int)local_248 + -8) = *(int *)((int)local_248 + -8) * 0x1999 + 0x4000 >> 0xf
              ;
              *(int *)((int)local_248 + -4) = *(int *)((int)local_248 + -4) * 0x1999 + 0x4000 >> 0xf
              ;
              *(int *)(iVar20 + -8) = *(int *)(iVar20 + -8) * 0x1999 + 0x4000 >> 0xf;
              *(int *)(iVar20 + -4) = *(int *)(iVar20 + -4) * 0x1999 + 0x4000 >> 0xf;
              iVar6 = *(int *)((int)local_22c + -8) * 0x1999 + 0x4000 >> 0xf;
              *(int *)((int)local_22c + -8) = iVar6;
              iVar41 = *(int *)((int)local_22c + -4) * 0x1999 + 0x4000 >> 0xf;
              *(int *)((int)local_22c + -4) = iVar41;
              local_244 = *(undefined1 (**) [16])(local_230 + -8);
              local_240 = *(int **)(local_230 + -4);
            }
            else {
              iVar41 = *(int *)((int)local_22c + -4);
              iVar6 = *(int *)((int)local_22c + -8);
            }
            local_210 = (undefined1 *)((int)local_210 + 1);
            pauVar4 = local_20c + 0x10;
            pauVar37 = local_20c + 0x10;
            pauVar38 = local_220 + 0x10;
            pauVar43 = local_220 + 0x10;
            local_20c = (undefined1 (*) [16])(*local_20c + param_3 * 8);
            local_220 = local_220 + param_3 * 2;
            iVar12 = (*(int *)(*pauVar4 + 8) * *(int *)(iVar25 + -8) -
                     *(int *)(*pauVar37 + 0xc) * *(int *)(iVar25 + -4)) + 0x4000 >> 0xf;
            iVar5 = *(int *)(*pauVar37 + 0xc) * *(int *)(iVar25 + -8) +
                    *(int *)(iVar25 + -4) * *(int *)(*pauVar4 + 8) + 0x4000 >> 0xf;
            iVar8 = iVar6 * *(int *)(*pauVar43 + 0xc) + iVar41 * *(int *)(*pauVar38 + 8) + 0x4000 >>
                    0xf;
            iVar31 = iVar5 + iVar8;
            iVar6 = (iVar6 * *(int *)(*pauVar38 + 8) - iVar41 * *(int *)(*pauVar43 + 0xc)) + 0x4000
                    >> 0xf;
            iVar41 = (*(int *)(local_228[0x10] + 8) * *(int *)((int)local_248 + -8) -
                     *(int *)(local_228[0x10] + 0xc) * *(int *)((int)local_248 + -4)) + 0x4000 >>
                     0xf;
            iVar5 = iVar5 - iVar8;
            iVar8 = *(int *)(local_228[0x10] + 0xc) * *(int *)((int)local_248 + -8) +
                    *(int *)((int)local_248 + -4) * *(int *)(local_228[0x10] + 8) + 0x4000 >> 0xf;
            iVar21 = iVar12 - iVar6;
            iVar17 = (*(int *)(local_224[0x10] + 8) * *(int *)(iVar20 + -8) -
                     *(int *)(local_224[0x10] + 0xc) * *(int *)(iVar20 + -4)) + 0x4000 >> 0xf;
            iVar12 = iVar12 + iVar6;
            iVar27 = iVar41 - iVar17;
            iVar41 = iVar41 + iVar17;
            iVar6 = *(int *)(local_224[0x10] + 0xc) * *(int *)(iVar20 + -8) +
                    *(int *)(iVar20 + -4) * *(int *)(local_224[0x10] + 8) + 0x4000 >> 0xf;
            iVar17 = iVar8 - iVar6;
            iVar8 = iVar8 + iVar6;
            iVar18 = -(iVar27 * iVar24 + 0x4000 >> 0xf) - (iVar21 * iVar7 + 0x4000 >> 0xf);
            iVar32 = (iVar21 * iVar24 + 0x4000 >> 0xf) - (iVar27 * iVar7 + 0x4000 >> 0xf);
            iVar42 = (int)local_240 + (iVar31 * iVar23 + 0x4000 >> 0xf) +
                     (iVar8 * iVar26 + 0x4000 >> 0xf);
            iVar36 = (int)local_240 + (iVar31 * iVar26 + 0x4000 >> 0xf) +
                     (iVar8 * iVar23 + 0x4000 >> 0xf);
            iVar21 = (iVar17 * iVar7 + 0x4000 >> 0xf) - (iVar5 * iVar24 + 0x4000 >> 0xf);
            iVar27 = (int)local_244 + (iVar12 * iVar23 + 0x4000 >> 0xf) +
                     (iVar41 * iVar26 + 0x4000 >> 0xf);
            iVar6 = (iVar17 * iVar24 + 0x4000 >> 0xf) + (iVar5 * iVar7 + 0x4000 >> 0xf);
            local_228 = local_228 + param_3;
            iVar5 = (int)local_244 + (iVar12 * iVar26 + 0x4000 >> 0xf) +
                    (iVar41 * iVar23 + 0x4000 >> 0xf);
            local_224 = (undefined1 (*) [16])((int)local_224 + param_3 * 0x18);
            *(int *)(local_230 + -8) = iVar12 + iVar41 + (int)local_244;
            *(int *)(local_230 + -4) = iVar31 + iVar8 + (int)local_240;
            *(int *)(iVar25 + -8) = iVar27 - iVar6;
            pauVar4 = (undefined1 (*) [16])(iVar27 + iVar6);
            *(int *)(iVar25 + -4) = iVar42 - iVar18;
            local_230 = local_230 + 8;
            *(int *)((int)local_22c + -4) = iVar42 + iVar18;
            *(undefined1 (**) [16])((int)local_22c + -8) = pauVar4;
            *(int *)((int)local_248 + -8) = iVar5 + iVar21;
            *(int *)((int)local_248 + -4) = iVar36 + iVar32;
            *(int *)(iVar20 + -8) = iVar5 - iVar21;
            local_248 = (undefined1 (*) [16])((int)local_248 + 8);
            *(int *)(iVar20 + -4) = iVar36 - iVar32;
            iVar20 = iVar20 + 8;
            iVar25 = iVar25 + 8;
            local_22c = (undefined1 (*) [16])((int)local_22c + 8);
          } while ((undefined1 *)local_23c != local_210);
          local_208 = local_208 + param_8 * 8;
          local_1e4 = local_1e4 + 1;
        } while (param_7 != local_1e4);
        return pauVar4;
      }
    }
    break;
  default:
    if (0 < param_7) {
      local_230 = *(uint *)*param_6;
      if (0x11 < iVar20) {
        local_258 = (int *)(DAT_0001869c + 0x19138);
        fprintf((FILE *)**(undefined4 **)(iVar25 + DAT_00018698),(char *)(DAT_000186a4 + 0x19148),
                DAT_000186a0 + 0x19140,0x179);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_218 = local_f8 + 3;
      local_220 = (undefined1 (*) [16])(local_218 + iVar20 * 2);
      local_228 = (undefined1 (*) [16])(local_f8 + iVar20 * 2);
      local_238 = local_f8 + 2;
      local_224 = (undefined1 (*) [16])(local_23c << 3);
      local_22c = (undefined1 (*) [16])(local_23c * param_3);
      local_21c = param_8 << 3;
      local_240 = (int *)0x0;
      local_234 = param_1;
      local_214 = (undefined1 *)param_3;
      while( true ) {
        if (0 < local_23c) {
          puVar30 = (undefined1 *)0x0;
          iVar25 = 0;
          local_244 = local_234;
          do {
            if (0 < iVar20) {
              iVar26 = *(int *)(*param_6 + 4);
              piVar14 = local_218;
              iVar23 = iVar25;
              do {
                iVar7 = *(int *)(*local_234 + iVar23 * 8);
                *piVar14 = *(int *)((int)(*local_234 + iVar23 * 8) + 4);
                piVar14[-1] = iVar7;
                if (iVar26 == 0) {
                  iVar7 = __aeabi_idiv(0x7fff,iVar20);
                  piVar14[-1] = piVar14[-1] * iVar7 + 0x4000 >> 0xf;
                  *piVar14 = *piVar14 * iVar7 + 0x4000 >> 0xf;
                }
                piVar14 = piVar14 + 2;
                iVar23 = iVar23 + local_23c;
              } while ((undefined1 (*) [16])piVar14 != local_220);
              iVar23 = 0;
              piVar14 = (int *)(*local_244 + 4);
              pauVar37 = local_244;
              local_248 = (undefined1 (*) [16])puVar30;
              do {
                iVar26 = *local_238;
                *piVar14 = local_238[1];
                piVar14[-1] = iVar26;
                if (iVar20 != 1) {
                  iVar24 = piVar14[-1];
                  iVar26 = 0;
                  iVar7 = *(int *)(*pauVar37 + 4);
                  piVar29 = local_238;
                  do {
                    piVar33 = piVar29 + 2;
                    iVar26 = iVar26 + (int)local_248;
                    if ((int)local_230 <= iVar26) {
                      iVar26 = iVar26 - local_230;
                    }
                    iVar7 = iVar7 + (*(int *)(param_6[0x10] + iVar26 * 8 + 8) * piVar29[3] +
                                     *(int *)(param_6[0x10] + iVar26 * 8 + 0xc) * *piVar33 + 0x4000
                                    >> 0xf);
                    iVar24 = iVar24 + ((*(int *)(param_6[0x10] + iVar26 * 8 + 8) * *piVar33 -
                                       piVar29[3] * *(int *)(param_6[0x10] + iVar26 * 8 + 0xc)) +
                                       0x4000 >> 0xf);
                    piVar14[-1] = iVar24;
                    *(int *)(*pauVar37 + 4) = iVar7;
                    piVar29 = piVar33;
                    local_20c = (undefined1 (*) [16])iVar23;
                  } while ((undefined1 (*) [16])piVar33 != local_228);
                }
                iVar23 = iVar23 + 1;
                pauVar37 = (undefined1 (*) [16])(*pauVar37 + (int)local_224);
                piVar14 = (int *)((int)piVar14 + (int)local_224);
                local_248 = (undefined1 (*) [16])(*local_22c + (int)local_248);
                pauVar4 = local_22c;
                local_210 = puVar30;
              } while (iVar20 != iVar23);
            }
            iVar25 = iVar25 + 1;
            local_244 = (undefined1 (*) [16])(*local_244 + 8);
            puVar30 = puVar30 + (int)local_214;
          } while (local_23c != iVar25);
        }
        local_240 = (int *)((int)local_240 + 1);
        if ((int *)param_7 == local_240) break;
        local_234 = (undefined1 (*) [16])(*local_234 + local_21c);
      }
    }
  }
  return pauVar4;
}



/* ===== fix_kiss_fft_alloc @ 00019154 size=1592 ===== */

uint * fix_kiss_fft_alloc(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *local_3c;
  uint local_38;
  
  uVar5 = (param_1 + 0x21) * 8;
  if (param_4 == (uint *)0x0) {
    param_3 = calloc(uVar5,1);
    local_3c = param_3;
    if (param_3 != (uint *)0x0) {
LAB_000191a8:
      *param_3 = param_1;
      param_3[1] = param_2;
      if (0 < (int)param_1) {
        local_38 = 0xffff8001;
        uVar5 = 0;
LAB_000192dc:
        do {
          uVar1 = uVar5;
          if (param_2 == 0) {
            uVar1 = -uVar5;
          }
          uVar1 = __aeabi_idiv(uVar1 << 0x11,param_1);
          uVar4 = uVar1 & 0x1ffff;
          if (uVar4 < 0x10001) {
            if ((uVar1 & 0x7fff) == 0) {
              uVar3 = 0;
              if (((uVar1 & 0xffff) == 0) && (uVar3 = local_38, uVar4 == 0)) {
                uVar3 = 0x7fff;
              }
            }
            else {
LAB_00019200:
              if ((int)uVar4 < 0x8000) {
                iVar2 = (int)(uVar4 * uVar4 + 0x4000) >> 0xf;
                iVar2 = (0x7fff - iVar2) +
                        (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >>
                                  0xf) + -0x1de3) + 0x4000 >> 0xf);
                if (0x7ffd < iVar2) {
                  iVar2 = 0x7ffe;
                }
                uVar3 = iVar2 + 1;
              }
              else {
                iVar2 = (int)((0x10000 - uVar4) * (0x10000 - uVar4) + 0x4000) >> 0xf;
                uVar4 = (0x7fff - iVar2) +
                        (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >>
                                  0xf) + -0x1de3) + 0x4000 >> 0xf);
                if (0x7ffd < (int)uVar4) {
                  uVar4 = 0x7ffe;
                }
                uVar3 = ~uVar4;
              }
            }
          }
          else {
            uVar4 = 0x20000 - uVar4;
            uVar3 = 0;
            if ((uVar4 & 0x7fff) != 0) goto LAB_00019200;
          }
          uVar1 = uVar1 - 0x8000;
          param_3[uVar5 * 2 + 0x42] = uVar3;
          uVar4 = uVar1 & 0x1ffff;
          if (uVar4 < 0x10001) {
            if ((uVar1 & 0x7fff) == 0) {
              uVar3 = 0;
              if ((uVar1 & 0xffff) == 0) {
                uVar1 = local_38;
                if (uVar4 == 0) {
                  uVar1 = 0x7fff;
                }
                param_3[uVar5 * 2 + 0x43] = uVar1;
                uVar5 = uVar5 + 1;
                if (param_1 == uVar5) break;
                goto LAB_000192dc;
              }
            }
            else {
LAB_00019278:
              if ((int)uVar4 < 0x8000) {
                iVar2 = (int)(uVar4 * uVar4 + 0x4000) >> 0xf;
                iVar2 = (0x7fff - iVar2) +
                        (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >>
                                  0xf) + -0x1de3) + 0x4000 >> 0xf);
                if (0x7ffd < iVar2) {
                  iVar2 = 0x7ffe;
                }
                uVar3 = iVar2 + 1;
              }
              else {
                iVar2 = (int)((0x10000 - uVar4) * (0x10000 - uVar4) + 0x4000) >> 0xf;
                uVar3 = (0x7fff - iVar2) +
                        (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >>
                                  0xf) + -0x1de3) + 0x4000 >> 0xf);
                if (0x7ffd < (int)uVar3) {
                  uVar3 = 0x7ffe;
                }
                uVar3 = ~uVar3;
              }
            }
          }
          else {
            uVar4 = 0x20000 - uVar4;
            uVar3 = 0;
            if ((uVar4 & 0x7fff) != 0) goto LAB_00019278;
          }
          param_3[uVar5 * 2 + 0x43] = uVar3;
          uVar5 = uVar5 + 1;
        } while (param_1 != uVar5);
      }
      puVar8 = param_3 + 4;
      uVar5 = 4;
      puVar11 = param_3 + 2;
      do {
        while( true ) {
          __aeabi_idivmod(param_1,uVar5);
          puVar7 = puVar8;
          puVar10 = puVar11;
          if (extraout_r1 == 0) goto LAB_00019530;
          uVar1 = param_1;
          puVar6 = puVar8;
          puVar9 = puVar11;
          if (uVar5 == 2) break;
          if (uVar5 == 4) {
            if (3 < (int)param_1) {
              if ((param_1 & 1) == 0) {
                uVar1 = (int)param_1 >> 1;
                *puVar11 = 2;
                puVar11[1] = uVar1;
                puVar6 = puVar11 + 4;
                puVar9 = puVar8;
                if ((uVar1 & 1) == 0) {
                  uVar1 = (int)param_1 >> 2;
                  *puVar8 = 2;
                  puVar8[1] = uVar1;
                  if (uVar1 == 1) {
                    return param_3;
                  }
                  puVar10 = puVar8 + 4;
                  puVar6 = puVar10;
                  puVar9 = puVar11 + 4;
                  if ((uVar1 & 1) == 0) {
                    param_1 = (int)param_1 >> 3;
                    puVar11[4] = 2;
                    puVar11[5] = param_1;
                    if (param_1 == 1) {
                      return param_3;
                    }
                    puVar7 = puVar11 + 8;
                    uVar1 = param_1;
                    puVar6 = puVar7;
                    puVar9 = puVar10;
                    if ((param_1 & 1) == 0) {
                      uVar5 = 2;
                      goto LAB_00019530;
                    }
                  }
                }
              }
              break;
            }
            goto LAB_00019614;
          }
          uVar5 = uVar5 + 2;
          if (32000 < (int)uVar5) goto LAB_00019614;
LAB_00019704:
          if ((int)param_1 < (int)(uVar5 * uVar5)) {
LAB_00019614:
            uVar5 = param_1;
          }
        }
        param_1 = uVar1;
        puVar8 = puVar6;
        puVar11 = puVar9;
        if ((int)uVar1 < 9) goto LAB_00019614;
        param_1 = (int)uVar1 / 3;
        if (uVar1 == param_1 * 3) {
          uVar5 = 3;
          puVar9[1] = param_1;
          *puVar9 = 3;
          puVar8 = puVar9 + 4;
          if (param_1 % 3 == 0) {
            *puVar6 = 3;
            param_1 = (int)uVar1 / 9;
            puVar6[1] = param_1;
            if (param_1 == 1) {
              return param_3;
            }
            puVar10 = puVar6 + 4;
            puVar6 = puVar8;
            if (param_1 % 3 != 0) {
LAB_000196fc:
              uVar5 = uVar5 + 2;
              puVar8 = puVar10;
              puVar11 = puVar6;
              goto LAB_00019704;
            }
            puVar9[4] = 3;
            param_1 = (int)uVar1 / 0x1b;
            puVar9[5] = param_1;
            if ((int)uVar1 < 0x36) {
              return param_3;
            }
            puVar7 = puVar9 + 8;
            uVar1 = param_1;
            puVar9 = puVar10;
            puVar6 = puVar7;
            if (param_1 % 3 != 0) {
LAB_000196b8:
              uVar5 = uVar5 + 2;
              param_1 = uVar1;
              puVar8 = puVar6;
              puVar11 = puVar9;
              goto LAB_00019704;
            }
          }
          else {
            puVar11 = puVar6;
            if ((int)uVar1 < 0x4b) goto LAB_00019614;
            puVar9 = puVar6;
            puVar7 = puVar8;
            if (param_1 % 5 != 0) {
LAB_000196b4:
              puVar6 = puVar7;
              uVar5 = 5;
              uVar1 = param_1;
              goto LAB_000196b8;
            }
            uVar5 = 5;
            puVar10 = puVar6;
          }
        }
        else {
          param_1 = uVar1;
          if ((int)uVar1 < 0x19) goto LAB_00019614;
          param_1 = (int)uVar1 / 5;
          if (uVar1 == param_1 * 5) {
            *puVar9 = 5;
            puVar9[1] = param_1;
            puVar9 = puVar9 + 4;
            puVar10 = puVar9;
            if (param_1 % 5 != 0) {
              uVar5 = 5;
              goto LAB_000196fc;
            }
            *puVar6 = 5;
            param_1 = (int)uVar1 / 0x19;
            puVar6[1] = param_1;
            if (param_1 == 1) {
              return param_3;
            }
            puVar7 = puVar6 + 4;
            if (param_1 % 5 != 0) goto LAB_000196b4;
            uVar5 = 5;
          }
          else {
            param_1 = uVar1;
            if ((int)uVar1 < 0x31) goto LAB_00019614;
            if (uVar1 != ((int)uVar1 / 7) * 7) {
              uVar5 = 7;
              goto LAB_000196b8;
            }
            uVar5 = 7;
            puVar7 = puVar6;
            puVar10 = puVar9;
          }
        }
LAB_00019530:
        param_1 = __aeabi_idiv(param_1,uVar5);
        *puVar10 = uVar5;
        puVar10[1] = param_1;
        if ((int)param_1 < 2) {
          return param_3;
        }
        puVar8 = puVar10 + 4;
        puVar11 = puVar7;
      } while( true );
    }
  }
  else if (param_3 == (uint *)0x0) {
    *param_4 = uVar5;
    local_3c = (uint *)0x0;
  }
  else {
    if (uVar5 <= *param_4) {
      *param_4 = uVar5;
      goto LAB_000191a8;
    }
    *param_4 = uVar5;
    local_3c = (uint *)0x0;
  }
  return local_3c;
}



/* ===== fix_kiss_fft_stride @ 0001978c size=348 ===== */

void fix_kiss_fft_stride(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 == param_3) {
    fprintf((FILE *)**(undefined4 **)(DAT_000198e8 + 0x197a8 + DAT_000198ec),
            (char *)(DAT_000198f8 + 0x198dc),DAT_000198f4 + 0x198d4,0x247,DAT_000198f0 + 0x198cc);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar5 == 1) {
    if (0 < iVar4) {
      iVar5 = 0;
      puVar3 = param_2;
      do {
        iVar6 = iVar5 * 2;
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + param_4 * 2;
        param_3[iVar6] = uVar1;
        (param_3 + iVar6)[1] = uVar2;
      } while (iVar4 != iVar5);
    }
  }
  else if (0 < iVar4) {
    iVar6 = 0;
    puVar3 = param_3;
    puVar7 = param_2;
    do {
      iVar6 = iVar6 + 1;
      FUN_000171f8(puVar3,puVar7,iVar4,param_4,param_1 + 0x10,param_1);
      puVar3 = puVar3 + iVar5 * 2;
      puVar7 = puVar7 + param_4 * 2;
    } while (iVar4 != iVar6);
  }
  FUN_000172b8(param_3,param_2,1,param_4,param_1 + 8,param_1,1,1);
  return;
}



/* ===== fix_kiss_fft @ 000198fc size=20 ===== */

void fix_kiss_fft(void)

{
                    /* WARNING: Could not recover jumptable at 0x00012c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fix_kiss_fft_stride_0003c094)();
  return;
}



/* ===== FUN_00019904 @ 00019904 size=72 ===== */

void FUN_00019904(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_0001994c + 0x19918 + DAT_00019950),
          (char *)(DAT_0001995c + 0x19940),DAT_00019958 + 0x1993c,param_1,DAT_00019954 + 0x1992c);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== kiss_fftr_alloc @ 00019960 size=428 ===== */

int * kiss_fftr_alloc(uint param_1,int param_2,int *param_3,size_t *param_4)

{
  int iVar1;
  double dVar2;
  size_t __nmemb;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  double dVar10;
  int local_44;
  
  if ((param_1 & 1) != 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00019b18 + 0x1997c + DAT_00019b1c),
            (char *)(DAT_00019b24 + 0x19ae8),DAT_00019b20 + 0x19ae4);
    return (int *)0x0;
  }
  iVar1 = (int)param_1 >> 1;
  kiss_fft_alloc(iVar1,param_2,0,&local_44);
  __nmemb = local_44 + 0xc + iVar1 * 0x10;
  if (param_4 == (size_t *)0x0) {
    param_3 = calloc(__nmemb,1);
  }
  else {
    uVar4 = *param_4;
    *param_4 = __nmemb;
    if (uVar4 < __nmemb) {
      return (int *)0x0;
    }
  }
  if (param_3 != (int *)0x0) {
    piVar3 = param_3 + 3;
    *param_3 = (int)piVar3;
    param_3[1] = (int)piVar3 + local_44;
    param_3[2] = (int)piVar3 + local_44 + iVar1 * 8;
    kiss_fft_alloc(iVar1,param_2,piVar3,&local_44);
    dVar2 = DAT_00019b10;
    if (0 < iVar1) {
      dVar9 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      if (param_2 == 0) {
        pfVar5 = (float *)param_3[2];
        iVar6 = 0;
        do {
          iVar7 = iVar6 + 1;
          dVar10 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          dVar8 = (dVar10 / dVar9 + 0.5) * dVar2;
          dVar10 = cos(dVar8);
          *pfVar5 = (float)dVar10;
          dVar10 = sin(-dVar8);
          pfVar5[1] = (float)dVar10;
          pfVar5 = pfVar5 + 2;
          iVar6 = iVar7;
        } while (iVar1 != iVar7);
        return param_3;
      }
      pfVar5 = (float *)param_3[2];
      iVar6 = 0;
      do {
        iVar7 = iVar6 + 1;
        dVar10 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
        dVar8 = (dVar10 / dVar9 + 0.5) * dVar2;
        dVar10 = cos(dVar8);
        *pfVar5 = (float)dVar10;
        dVar10 = sin(dVar8);
        pfVar5[1] = (float)dVar10;
        pfVar5 = pfVar5 + 2;
        iVar6 = iVar7;
      } while (iVar7 != iVar1);
    }
  }
  return param_3;
}



/* ===== kiss_fftr @ 00019b28 size=276 ===== */

void kiss_fftr(int *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  piVar4 = (int *)*param_1;
  if (piVar4[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00019904(0x57);
  }
  iVar6 = *piVar4;
  kiss_fft(piVar4,param_2,param_1[1]);
  pfVar5 = (float *)param_1[1];
  fVar12 = *pfVar5;
  pfVar3 = param_3 + iVar6 * 2;
  fVar11 = pfVar5[1];
  *param_3 = fVar12 + fVar11;
  *pfVar3 = fVar12 - fVar11;
  param_3[1] = 0.0;
  pfVar3[1] = 0.0;
  if (iVar6 < 2) {
    return;
  }
  pfVar2 = pfVar5 + iVar6 * 2;
  iVar8 = 1;
  pfVar7 = (float *)param_1[2];
  do {
    pfVar1 = pfVar2 + -1;
    iVar8 = iVar8 + 1;
    pfVar2 = pfVar2 + -2;
    fVar13 = *pfVar1 + pfVar5[3];
    fVar9 = pfVar5[2];
    fVar12 = pfVar7[2];
    fVar11 = fVar9 - *pfVar2;
    fVar10 = -(pfVar7[3] * fVar13) + fVar11 * fVar12;
    fVar12 = fVar13 * fVar12 + fVar11 * pfVar7[3];
    fVar9 = *pfVar2 + fVar9;
    fVar11 = pfVar5[3] - *pfVar1;
    param_3[2] = (fVar9 + fVar10) * 0.5;
    param_3[3] = (fVar12 + fVar11) * 0.5;
    pfVar3[-2] = (fVar9 - fVar10) * 0.5;
    pfVar3[-1] = (fVar12 - fVar11) * 0.5;
    pfVar3 = pfVar3 + -2;
    param_3 = param_3 + 2;
    pfVar5 = pfVar5 + 2;
    pfVar7 = pfVar7 + 2;
  } while (iVar8 <= iVar6 / 2);
  return;
}



/* ===== kiss_fftri @ 00019c3c size=248 ===== */

void kiss_fftri(int *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (((int *)*param_1)[1] != 0) {
    iVar5 = *(int *)*param_1;
    pfVar2 = (float *)param_1[1];
    pfVar6 = param_2 + iVar5 * 2;
    *pfVar2 = *param_2 + *pfVar6;
    pfVar2[1] = *param_2 - *pfVar6;
    if (1 < iVar5) {
      iVar4 = 1;
      pfVar3 = (float *)param_1[2];
      pfVar7 = pfVar2 + iVar5 * 2;
      do {
        pfVar1 = param_2 + 3;
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 2;
        fVar9 = pfVar3[2];
        fVar11 = pfVar6[-1] + *pfVar1;
        fVar12 = pfVar6[-2];
        fVar8 = *param_2 - fVar12;
        fVar10 = fVar11 * fVar9 + fVar8 * pfVar3[3];
        fVar9 = -(pfVar3[3] * fVar11) + fVar8 * fVar9;
        fVar8 = *pfVar1 - pfVar6[-1];
        fVar12 = fVar12 + *param_2;
        pfVar2[3] = fVar10 + fVar8;
        pfVar2[2] = fVar12 + fVar9;
        pfVar7[-2] = fVar12 - fVar9;
        pfVar7[-1] = -(fVar8 - fVar10);
        pfVar2 = pfVar2 + 2;
        pfVar3 = pfVar3 + 2;
        pfVar6 = pfVar6 + -2;
        pfVar7 = pfVar7 + -2;
      } while (iVar4 <= iVar5 / 2);
    }
    kiss_fft();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019904(0x8d);
}



/* ===== kiss_fftr2 @ 00019d34 size=328 ===== */

void kiss_fftr2(int *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  
  piVar2 = (int *)*param_1;
  if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00019904(0xb4);
  }
  iVar6 = *piVar2;
  kiss_fft(piVar2,param_2,param_1[1]);
  pfVar7 = (float *)param_1[1];
  fVar14 = *pfVar7;
  pfVar4 = param_3 + iVar6 * 2;
  fVar11 = pfVar7[1];
  *param_3 = fVar14 + fVar11;
  pfVar4[-1] = fVar14 - fVar11;
  if (iVar6 < 2) {
    return;
  }
  iVar5 = 1;
  pfVar3 = (float *)param_1[2];
  pfVar8 = pfVar7 + iVar6 * 2;
  do {
    pfVar1 = pfVar7 + 3;
    iVar5 = iVar5 + 1;
    pfVar7 = pfVar7 + 2;
    fVar14 = *pfVar1 + pfVar8[-1];
    fVar10 = pfVar8[-2];
    fVar9 = pfVar3[2];
    fVar11 = *pfVar7 - fVar10;
    iVar12 = (int)(-(pfVar3[3] * fVar14) + fVar11 * fVar9);
    iVar13 = (int)(*pfVar7 + fVar10);
    iVar15 = (int)(fVar11 * pfVar3[3] + fVar14 * fVar9);
    iVar16 = (int)(*pfVar1 - pfVar8[-1]);
    fVar11 = (float)VectorSignedToFloat(iVar13 + iVar12,(byte)(in_fpscr >> 0x16) & 3);
    param_3[1] = fVar11 * 0.5;
    fVar11 = (float)VectorSignedToFloat(iVar16 + iVar15,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)VectorSignedToFloat(iVar15 - iVar16,(byte)(in_fpscr >> 0x16) & 3);
    param_3 = param_3 + 2;
    *param_3 = fVar11 * 0.5;
    fVar11 = (float)VectorSignedToFloat(iVar13 - iVar12,(byte)(in_fpscr >> 0x16) & 3);
    pfVar4[-3] = fVar11 * 0.5;
    pfVar4 = pfVar4 + -2;
    *pfVar4 = fVar14 * 0.5;
    pfVar3 = pfVar3 + 2;
    pfVar8 = pfVar8 + -2;
  } while (iVar5 <= iVar6 / 2);
  return;
}



/* ===== kiss_fftri2 @ 00019e7c size=256 ===== */

void kiss_fftri2(int *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (((int *)*param_1)[1] != 0) {
    iVar5 = *(int *)*param_1;
    pfVar2 = (float *)param_1[1];
    *pfVar2 = *param_2 + param_2[iVar5 * 2 + -1];
    pfVar2[1] = *param_2 - param_2[iVar5 * 2 + -1];
    if (1 < iVar5) {
      pfVar3 = param_2 + iVar5 * 2;
      iVar4 = 1;
      pfVar6 = pfVar2 + iVar5 * 2;
      pfVar7 = (float *)param_1[2];
      do {
        pfVar1 = pfVar3 + -3;
        pfVar3 = pfVar3 + -2;
        iVar4 = iVar4 + 1;
        fVar10 = param_2[2];
        fVar9 = pfVar7[2];
        fVar12 = fVar10 + *pfVar3;
        fVar8 = param_2[1] - *pfVar1;
        fVar11 = fVar12 * fVar9 + fVar8 * pfVar7[3];
        fVar8 = -(pfVar7[3] * fVar12) + fVar8 * fVar9;
        fVar10 = fVar10 - *pfVar3;
        fVar9 = param_2[1] + *pfVar1;
        pfVar2[3] = fVar11 + fVar10;
        pfVar2[2] = fVar9 + fVar8;
        pfVar6[-2] = fVar9 - fVar8;
        pfVar6[-1] = -(fVar10 - fVar11);
        pfVar2 = pfVar2 + 2;
        param_2 = param_2 + 2;
        pfVar6 = pfVar6 + -2;
        pfVar7 = pfVar7 + 2;
      } while (iVar4 <= iVar5 / 2);
    }
    kiss_fft();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019904(0x111);
}



/* ===== FUN_00019f7c @ 00019f7c size=72 ===== */

void FUN_00019f7c(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_00019fc4 + 0x19f90 + DAT_00019fc8),
          (char *)(DAT_00019fd4 + 0x19fb8),DAT_00019fd0 + 0x19fb4,param_1,DAT_00019fcc + 0x19fa4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== fix_kiss_fftr_alloc @ 00019fd8 size=840 ===== */

int * fix_kiss_fftr_alloc(uint param_1,int param_2,int *param_3,size_t *param_4)

{
  int iVar1;
  size_t __nmemb;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_38;
  int local_2c [2];
  
  if ((param_1 & 1) != 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_0001a320 + 0x19ff4 + DAT_0001a324),
            (char *)(DAT_0001a32c + 0x1a300),DAT_0001a328 + 0x1a2fc);
    return (int *)0x0;
  }
  iVar1 = (int)param_1 >> 1;
  fix_kiss_fft_alloc(iVar1,param_2,0,local_2c);
  __nmemb = local_2c[0] + 0xc + iVar1 * 0x10;
  if (param_4 == (size_t *)0x0) {
    param_3 = calloc(__nmemb,1);
  }
  else {
    uVar6 = *param_4;
    *param_4 = __nmemb;
    if (uVar6 < __nmemb) {
      return (int *)0x0;
    }
  }
  if (param_3 != (int *)0x0) {
    piVar4 = param_3 + 3;
    *param_3 = (int)piVar4;
    param_3[1] = (int)piVar4 + local_2c[0];
    param_3[2] = (int)piVar4 + local_2c[0] + iVar1 * 8;
    fix_kiss_fft_alloc(iVar1,param_2,piVar4,local_2c);
    if (0 < iVar1) {
      iVar8 = (int)param_1 >> 2;
      iVar5 = iVar1 + iVar8;
      iVar9 = param_3[2] + iVar8 * -8;
      local_38 = 0xffff8001;
      do {
        iVar2 = iVar8;
        if (param_2 == 0) {
          iVar2 = -iVar8;
        }
        uVar6 = __aeabi_idiv(iVar2 << 0x10,iVar1);
        uVar7 = uVar6 & 0x1ffff;
        if (uVar7 < 0x10001) {
          if ((uVar6 & 0x7fff) == 0) {
            uVar3 = 0;
            if (((uVar6 & 0xffff) == 0) && (uVar3 = local_38, uVar7 == 0)) {
              uVar3 = 0x7fff;
            }
          }
          else {
LAB_0001a0d4:
            if ((int)uVar7 < 0x8000) {
              iVar2 = (int)(uVar7 * uVar7 + 0x4000) >> 0xf;
              iVar2 = (0x7fff - iVar2) +
                      (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >> 0xf
                                ) + -0x1de3) + 0x4000 >> 0xf);
              if (0x7ffd < iVar2) {
                iVar2 = 0x7ffe;
              }
              uVar3 = iVar2 + 1;
            }
            else {
              iVar2 = (int)((0x10000 - uVar7) * (0x10000 - uVar7) + 0x4000) >> 0xf;
              uVar7 = (0x7fff - iVar2) +
                      (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >> 0xf
                                ) + -0x1de3) + 0x4000 >> 0xf);
              if (0x7ffd < (int)uVar7) {
                uVar7 = 0x7ffe;
              }
              uVar3 = ~uVar7;
            }
          }
        }
        else {
          uVar7 = 0x20000 - uVar7;
          uVar3 = 0;
          if ((uVar7 & 0x7fff) != 0) goto LAB_0001a0d4;
        }
        uVar6 = uVar6 - 0x8000;
        *(uint *)(iVar9 + iVar8 * 8) = uVar3;
        uVar7 = uVar6 & 0x1ffff;
        if (uVar7 < 0x10001) {
          if ((uVar6 & 0x7fff) != 0) goto LAB_0001a14c;
          uVar3 = 0;
          if (((uVar6 & 0xffff) == 0) && (uVar3 = local_38, uVar7 == 0)) {
            uVar3 = 0x7fff;
          }
        }
        else {
          uVar7 = 0x20000 - uVar7;
          uVar3 = 0;
          if ((uVar7 & 0x7fff) != 0) {
LAB_0001a14c:
            if ((int)uVar7 < 0x8000) {
              iVar2 = (int)(uVar7 * uVar7 + 0x4000) >> 0xf;
              iVar2 = (0x7fff - iVar2) +
                      (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >> 0xf
                                ) + -0x1de3) + 0x4000 >> 0xf);
              if (0x7ffd < iVar2) {
                iVar2 = 0x7ffe;
              }
              uVar3 = iVar2 + 1;
            }
            else {
              iVar2 = (int)((0x10000 - uVar7) * (0x10000 - uVar7) + 0x4000) >> 0xf;
              uVar6 = (0x7fff - iVar2) +
                      (iVar2 * ((iVar2 * ((iVar2 * -0x272 + 0x4000 >> 0xf) + 0x2055) + 0x4000 >> 0xf
                                ) + -0x1de3) + 0x4000 >> 0xf);
              if (0x7ffd < (int)uVar6) {
                uVar6 = 0x7ffe;
              }
              uVar3 = ~uVar6;
            }
          }
        }
        *(uint *)(iVar9 + 4 + iVar8 * 8) = uVar3;
        iVar8 = iVar8 + 1;
      } while (iVar5 != iVar8);
    }
  }
  return param_3;
}



/* ===== fix_kiss_fftr @ 0001a330 size=388 ===== */

void fix_kiss_fftr(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  piVar5 = (int *)*param_1;
  if (piVar5[1] == 0) {
    iVar7 = *piVar5;
    fix_kiss_fft(piVar5,param_2,param_1[1]);
    piVar5 = (int *)param_1[1];
    iVar11 = *piVar5 * 0x3fff + 0x4000 >> 0xf;
    iVar12 = piVar5[1] * 0x3fff + 0x4000 >> 0xf;
    *param_3 = iVar11 + iVar12;
    param_3[iVar7 * 2] = iVar11 - iVar12;
    param_3[1] = 0;
    (param_3 + iVar7 * 2)[1] = 0;
    if (1 < iVar7) {
      iVar11 = param_1[2];
      iVar12 = 1;
      piVar9 = param_3 + iVar7 * 2;
      piVar10 = piVar5 + iVar7 * 2;
      do {
        iVar3 = piVar5[iVar12 * 2] * 0x3fff + 0x4000 >> 0xf;
        iVar2 = piVar10[-2] * 0x3fff + 0x4000 >> 0xf;
        iVar4 = iVar3 - iVar2;
        iVar3 = iVar3 + iVar2;
        iVar2 = piVar5[iVar12 * 2 + 1] * 0x3fff + 0x4000 >> 0xf;
        iVar8 = *(int *)(iVar11 + 4 + iVar12 * 8);
        iVar1 = piVar10[-1] * -0x3fff + 0x4000 >> 0xf;
        iVar6 = iVar2 - iVar1;
        iVar2 = iVar2 + iVar1;
        iVar1 = (*(int *)(iVar11 + iVar12 * 8) * iVar4 - iVar8 * iVar6) + 0x4000 >> 0xf;
        iVar4 = iVar8 * iVar4 + *(int *)(iVar11 + iVar12 * 8) * iVar6 + 0x4000 >> 0xf;
        param_3[iVar12 * 2] = iVar3 + iVar1 >> 1;
        param_3[iVar12 * 2 + 1] = iVar2 + iVar4 >> 1;
        iVar12 = iVar12 + 1;
        piVar9[-1] = iVar4 - iVar2 >> 1;
        piVar9[-2] = iVar3 - iVar1 >> 1;
        piVar9 = piVar9 + -2;
        piVar10 = piVar10 + -2;
      } while (iVar12 <= iVar7 / 2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019f7c(0x4c);
}



/* ===== fix_kiss_fftri @ 0001a4b4 size=308 ===== */

void fix_kiss_fftri(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  piVar5 = (int *)*param_1;
  if (piVar5[1] != 0) {
    piVar11 = (int *)param_1[1];
    iVar7 = *piVar5;
    *piVar11 = *param_2 + param_2[iVar7 * 2];
    piVar11[1] = *param_2 - param_2[iVar7 * 2];
    if (1 < iVar7) {
      iVar12 = param_1[2];
      piVar8 = piVar11 + iVar7 * 2;
      iVar2 = 1;
      piVar10 = param_2 + iVar7 * 2;
      do {
        iVar13 = piVar10[-2];
        iVar9 = *(int *)(iVar12 + iVar2 * 8);
        iVar6 = param_2[iVar2 * 2] - iVar13;
        iVar13 = iVar13 + param_2[iVar2 * 2];
        iVar4 = piVar10[-1] + param_2[iVar2 * 2 + 1];
        iVar14 = param_2[iVar2 * 2 + 1] - piVar10[-1];
        iVar3 = *(int *)(iVar12 + 4 + iVar2 * 8);
        iVar1 = iVar3 * iVar6 + iVar9 * iVar4 + 0x4000 >> 0xf;
        iVar3 = (iVar9 * iVar6 - iVar3 * iVar4) + 0x4000 >> 0xf;
        piVar11[iVar2 * 2] = iVar13 + iVar3;
        piVar11[iVar2 * 2 + 1] = iVar1 + iVar14;
        iVar2 = iVar2 + 1;
        piVar8[-1] = iVar1 - iVar14;
        piVar8[-2] = iVar13 - iVar3;
        piVar8 = piVar8 + -2;
        piVar10 = piVar10 + -2;
      } while (iVar2 <= iVar7 / 2);
    }
    fix_kiss_fft(piVar5,piVar11,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019f7c(0x82);
}



/* ===== fix_kiss_fftr2 @ 0001a5e8 size=352 ===== */

void fix_kiss_fftr2(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  piVar7 = (int *)*param_1;
  if (piVar7[1] == 0) {
    iVar9 = *piVar7;
    fix_kiss_fft(piVar7,param_2,param_1[1]);
    piVar11 = (int *)param_1[1];
    piVar7 = param_3 + iVar9 * 2;
    iVar5 = *piVar11 * 0x3fff + 0x4000 >> 0xf;
    iVar12 = piVar11[1] * 0x3fff + 0x4000 >> 0xf;
    *param_3 = iVar5 + iVar12;
    piVar7[-1] = iVar5 - iVar12;
    if (1 < iVar9) {
      iVar12 = param_1[2];
      iVar5 = 1;
      piVar8 = piVar11 + iVar9 * 2;
      do {
        iVar6 = *(int *)(iVar12 + iVar5 * 8);
        iVar2 = piVar11[iVar5 * 2] - piVar8[-2] >> 1;
        iVar13 = piVar11[iVar5 * 2 + 1] - piVar8[-1];
        iVar10 = *(int *)(iVar12 + 4 + iVar5 * 8);
        iVar1 = (piVar11[iVar5 * 2] + piVar8[-2]) * 0x2000;
        iVar3 = piVar11[iVar5 * 2 + 1] + piVar8[-1] + 1 >> 1;
        iVar4 = iVar6 * iVar3 + iVar10 * iVar2 >> 1;
        iVar2 = iVar6 * iVar2 - iVar10 * iVar3 >> 1;
        param_3[iVar5 * 2 + -1] = iVar1 + iVar2 + 0x4000 >> 0xf;
        param_3[iVar5 * 2] = iVar13 * 0x2000 + iVar4 + 0x4000 >> 0xf;
        iVar5 = iVar5 + 1;
        piVar7[-3] = (iVar1 - iVar2) + 0x4000 >> 0xf;
        piVar7 = piVar7 + -2;
        *piVar7 = iVar4 + iVar13 * -0x2000 + 0x4000 >> 0xf;
        piVar8 = piVar8 + -2;
      } while (iVar5 <= iVar9 / 2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019f7c(0xa9);
}



/* ===== fix_kiss_fftri2 @ 0001a748 size=304 ===== */

void fix_kiss_fftri2(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  piVar5 = (int *)*param_1;
  if (piVar5[1] != 0) {
    piVar10 = (int *)param_1[1];
    iVar6 = *piVar5;
    *piVar10 = *param_2 + param_2[iVar6 * 2 + -1];
    piVar10[1] = *param_2 - param_2[iVar6 * 2 + -1];
    if (1 < iVar6) {
      iVar12 = param_1[2];
      piVar11 = param_2 + iVar6 * 2;
      piVar9 = piVar10 + iVar6 * 2;
      iVar3 = 1;
      do {
        piVar2 = piVar11 + -3;
        iVar8 = *(int *)(iVar12 + iVar3 * 8);
        iVar7 = param_2[iVar3 * 2 + -1] - *piVar2;
        piVar11 = piVar11 + -2;
        iVar14 = param_2[iVar3 * 2 + -1] + *piVar2;
        iVar4 = param_2[iVar3 * 2] + *piVar11;
        iVar15 = param_2[iVar3 * 2] - *piVar11;
        iVar13 = *(int *)(iVar12 + 4 + iVar3 * 8);
        iVar1 = iVar13 * iVar7 + iVar8 * iVar4 + 0x4000 >> 0xf;
        iVar4 = (iVar8 * iVar7 - iVar13 * iVar4) + 0x4000 >> 0xf;
        piVar10[iVar3 * 2] = iVar14 + iVar4;
        piVar10[iVar3 * 2 + 1] = iVar1 + iVar15;
        iVar3 = iVar3 + 1;
        piVar9[-1] = iVar1 - iVar15;
        piVar9[-2] = iVar14 - iVar4;
        piVar9 = piVar9 + -2;
      } while (iVar3 <= iVar6 / 2);
    }
    fix_kiss_fft(piVar5,piVar10,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00019f7c(0xf7);
}



/* ===== skv_logtab_init @ 0001a878 size=4 ===== */

void skv_logtab_init(void)

{
  return;
}



/* ===== skv_fast_log2 @ 0001a87c size=48 ===== */

float skv_fast_log2(uint param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(((param_1 & 0x7fffffff) >> 0x17) - 0x7f,
                                     (byte)(in_fpscr >> 0x16) & 3);
  return fVar1 + *(float *)(DAT_0001a8ac + 0x1a88c + ((param_1 & 0x7fffff) >> 0xd) * 4);
}



/* ===== skv_fast_sin @ 0001a8b0 size=168 ===== */

float skv_fast_sin(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = fmodf((float)((double)param_1 + DAT_0001a958),DAT_0001a968);
  dVar4 = (double)fVar1;
  if (DAT_0001a960 < dVar4) {
    fVar3 = (float)(dVar4 - DAT_0001a960);
    fVar1 = (float)(DAT_0001a960 - (double)fVar3);
    if (fVar3 <= fVar1) {
      fVar2 = -1.0;
      fVar1 = fVar3;
    }
    else {
      fVar2 = -1.0;
    }
  }
  else if ((float)(DAT_0001a960 - dVar4) < fVar1) {
    fVar2 = 1.0;
    fVar1 = (float)(DAT_0001a960 - dVar4);
  }
  else {
    fVar2 = 1.0;
  }
  return fVar1 * (fVar1 * fVar1 * (DAT_0001a970 + fVar1 * fVar1 * DAT_0001a96c) + 1.0) * fVar2;
}



/* ===== skv_fast_cos @ 0001a978 size=192 ===== */

float skv_fast_cos(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = fmodf((float)((double)param_1 + DAT_0001aa38),DAT_0001aa50);
  dVar4 = (double)fVar1;
  if (DAT_0001aa40 < dVar4) {
    fVar1 = (float)(dVar4 - DAT_0001aa40);
    fVar3 = (float)(DAT_0001aa40 - (double)fVar1);
    fVar2 = 1.0;
    if ((double)fVar1 - DAT_0001aa48 < 0.0) {
      fVar2 = -1.0;
    }
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar2 = 1.0;
    if (DAT_0001aa48 - dVar4 < 0.0) {
      fVar2 = -1.0;
    }
    fVar3 = (float)(DAT_0001aa40 - dVar4);
    if (fVar1 <= (float)(DAT_0001aa40 - dVar4)) {
      fVar3 = fVar1;
    }
  }
  return (fVar3 * fVar3 * (DAT_0001aa58 + fVar3 * fVar3 * DAT_0001aa54) + 1.0) * fVar2;
}



/* ===== skv_fast_atan2 @ 0001aa60 size=220 ===== */

float skv_fast_atan2(void)

{
  undefined8 in_d0;
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)in_d0;
  fVar2 = (float)((ulonglong)in_d0 >> 0x20);
  fVar3 = fVar4;
  if (fVar4 < 0.0) {
    fVar3 = -fVar4;
  }
  fVar5 = fVar2;
  if (fVar2 < 0.0) {
    fVar5 = -fVar2;
  }
  if (fVar5 <= fVar3) {
    fVar2 = fVar2 / fVar4;
    fVar3 = fVar2 * fVar2;
    dVar1 = DAT_0001ab40 -
            (double)((DAT_0001ab60 +
                     fVar3 * (DAT_0001ab5c +
                             fVar3 * (DAT_0001ab58 + fVar3 * (DAT_0001ab54 + fVar3 * DAT_0001ab50)))
                     ) * fVar2);
    if (0.0 < fVar4) {
      return (float)dVar1;
    }
    return (float)(dVar1 - DAT_0001ab48);
  }
  fVar4 = fVar4 / fVar2;
  fVar3 = fVar4 * fVar4;
  fVar4 = (DAT_0001ab60 +
          fVar3 * (DAT_0001ab5c +
                  fVar3 * (DAT_0001ab58 + fVar3 * (DAT_0001ab54 + fVar3 * DAT_0001ab50)))) * fVar4;
  if (0.0 < fVar2) {
    return fVar4;
  }
  return (float)((double)fVar4 - DAT_0001ab48);
}



/* ===== skv_fast_invsqrtf @ 0001ab64 size=48 ===== */

float skv_fast_invsqrtf(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(0x5f3759df - ((int)param_1 >> 1));
  return (-fVar1 * param_1 * 0.5 * fVar1 + 1.5) * fVar1;
}



/* ===== skv_fast_sqrtf @ 0001ab94 size=68 ===== */

float skv_fast_sqrtf(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(0x5f3759df - ((int)param_1 >> 1));
  fVar1 = (-fVar1 * fVar1 * param_1 * 0.5 + 1.5) * fVar1;
  return (-fVar1 * fVar1 * param_1 * 0.5 + 1.5) * fVar1 * param_1;
}



/* ===== skv_fft_small_init @ 0001abd8 size=40 ===== */

void * skv_fft_small_init(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(0xc,1);
  spx_drft_init(pvVar1,param_1);
  return pvVar1;
}



/* ===== skv_fft_small_destroy @ 0001ac00 size=24 ===== */

void skv_fft_small_destroy(void *param_1)

{
  spx_drft_clear();
  free(param_1);
  return;
}



/* ===== skv_fft_small @ 0001ac18 size=204 ===== */

void skv_fft_small(int *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  double dVar5;
  
  iVar2 = *param_1;
  dVar5 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (param_2 == param_3) {
    fprintf((FILE *)**(undefined4 **)(DAT_0001acd8 + 0x1ac44 + DAT_0001acdc),
            (char *)(DAT_0001ace4 + 0x1aca4),DAT_0001ace0 + 0x1aca0);
    iVar2 = *param_1;
    if (0 < iVar2) {
      pfVar1 = param_3;
      pfVar3 = param_3;
      do {
        fVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        *pfVar1 = fVar4 * (float)(1.0 / dVar5);
        pfVar1 = pfVar1 + 1;
      } while (param_3 + iVar2 != pfVar3);
    }
  }
  else if (0 < iVar2) {
    pfVar3 = param_2 + iVar2;
    pfVar1 = param_3;
    do {
      fVar4 = *param_2;
      param_2 = param_2 + 1;
      *pfVar1 = fVar4 * (float)(1.0 / dVar5);
      pfVar1 = pfVar1 + 1;
    } while (pfVar3 != param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00012c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_spx_drft_forward_0003c084)(param_1,param_3);
  return;
}



/* ===== skv_ifft_small @ 0001ace8 size=332 ===== */

void skv_ifft_small(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar4;
  
  if (param_2 == param_3) {
    fprintf((FILE *)**(undefined4 **)(DAT_0001ae28 + 0x1acfc + DAT_0001ae2c),
            (char *)(DAT_0001ae34 + 0x1adec),DAT_0001ae30 + 0x1ade8);
  }
  else {
    uVar2 = *param_1;
    if (0 < (int)uVar2) {
      if (uVar2 - 1 < 8 || param_2 < param_3 + 2 && param_3 < param_2 + 2) {
        puVar4 = param_2;
        puVar6 = param_3;
        do {
          puVar3 = (undefined8 *)((int)puVar4 + 4);
          *(undefined4 *)puVar6 = *(undefined4 *)puVar4;
          puVar4 = puVar3;
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        } while (puVar3 != (undefined8 *)((int)param_2 + uVar2 * 4));
      }
      else {
        puVar4 = param_3;
        puVar6 = param_2;
        do {
          uVar7 = *puVar6;
          uVar8 = puVar6[1];
          puVar6 = puVar6 + 2;
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4 = puVar4 + 2;
        } while (puVar6 != param_2 + (uVar2 >> 2) * 2);
        uVar5 = uVar2 & 0xfffffffc;
        if (uVar2 != uVar5) {
          iVar1 = uVar5 * 4;
          *(undefined4 *)((int)param_3 + iVar1) = *(undefined4 *)((int)param_2 + iVar1);
          if (((int)(uVar5 + 1) < (int)uVar2) &&
             (*(undefined4 *)((int)param_3 + iVar1 + 4) = *(undefined4 *)((int)param_2 + iVar1 + 4),
             (int)(uVar5 + 2) < (int)uVar2)) {
            *(undefined4 *)((int)param_3 + iVar1 + 8) = *(undefined4 *)((int)param_2 + iVar1 + 8);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00012aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_spx_drft_backward_0003c024)(param_1,param_3);
  return;
}



/* ===== skv_fft_ne10_init @ 0001ae38 size=4 ===== */

void skv_fft_ne10_init(void)

{
  (*(code *)PTR_skv_fft_alloc_r2c_float32_0003c020)();
  return;
}



/* ===== skv_fft_ne10_destroy @ 0001ae3c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void skv_fft_ne10_destroy(void *__ptr)

{
  (*(code *)PTR_skv_fft_destroy_r2c_float32_0003c088)(__ptr);
  return;
}



/* ===== skv_fft_ne10 @ 0001ae40 size=272 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

void skv_fft_ne10(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 in_q13 [16];
  
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = DAT_0001af44 + 0x1ae64;
  if (param_2 == param_3) {
    dVar14 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001af4c),(char *)(DAT_0001af54 + 0x1aef4),
            DAT_0001af50 + 0x1aef0);
    if (0 < iVar6) {
      pfVar2 = *(float **)(iVar7 + DAT_0001af48);
      pfVar3 = pfVar2;
      pfVar5 = param_3;
      do {
        fVar11 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        *pfVar3 = fVar11 * (float)(1.0 / dVar14);
        pfVar3 = pfVar3 + 1;
      } while (param_3 + iVar6 != pfVar5);
      goto LAB_00012e5c;
    }
  }
  else {
    uVar10 = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    auVar13._8_8_ = CONCAT44(uVar10,uVar10);
    auVar13._0_8_ = CONCAT44(uVar10,uVar10);
    auVar15 = VectorReciprocalEstimate(auVar13,1);
    auVar12 = VectorReciprocalStep(auVar13,auVar15);
    auVar12 = FloatVectorMult(auVar12,auVar15,2,0x20);
    auVar13 = VectorReciprocalStep(auVar13,auVar12);
    auVar13 = FloatVectorMult(auVar13,auVar12,2,0x20);
    if (0 < iVar6) {
      iVar4 = 0;
      pfVar2 = *(float **)(iVar7 + DAT_0001af48);
      pfVar3 = pfVar2;
      do {
        pfVar5 = (float *)0x3c0;
        pfVar1 = (float *)0x3d0;
        lVar9 = 2;
        pfVar8 = param_2;
        while( true ) {
          *pfVar5 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *pfVar1 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) break;
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
        }
        pfVar5 = (float *)0x3c8;
        pfVar1 = (float *)0x3d8;
        lVar9 = 2;
        while( true ) {
          *pfVar5 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *pfVar1 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) break;
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
        }
        param_2 = param_2 + 8;
        iVar4 = iVar4 + 8;
        FloatVectorMult(auVar12,auVar13,2,0x20);
        FloatVectorMult(in_q13,auVar13,2,0x20);
        pfVar5 = (float *)0x3a0;
        pfVar1 = (float *)0x3b0;
        lVar9 = 2;
        pfVar8 = pfVar3;
        while( true ) {
          *pfVar8 = *pfVar5;
          pfVar8[1] = *pfVar1;
          pfVar8 = pfVar8 + 2;
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) break;
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
        }
        pfVar5 = (float *)0x3a8;
        pfVar1 = (float *)0x3b8;
        lVar9 = 2;
        while( true ) {
          *pfVar8 = *pfVar5;
          pfVar8[1] = *pfVar1;
          pfVar8 = pfVar8 + 2;
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) break;
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
        }
        pfVar3 = pfVar3 + 8;
      } while (iVar4 < iVar6);
      goto LAB_00012e5c;
    }
  }
  pfVar2 = *(float **)(iVar7 + DAT_0001af48);
LAB_00012e5c:
                    /* WARNING: Could not recover jumptable at 0x00012e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_fft_r2c_1d_float32_neon_0003c14c)(param_3 + -1,pfVar2,param_1);
  return;
}



/* ===== skv_ifft_ne10 @ 0001af58 size=32 ===== */

void skv_ifft_ne10(undefined4 param_1,int param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00012ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_fft_c2r_1d_float32_neon_0003c178)(param_3,param_2 + -4,param_1);
  return;
}



/* ===== skv_fft_init @ 0001af6c size=140 ===== */

uint * skv_fft_init(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = calloc(8,1);
  *puVar1 = param_1;
  if ((int)param_1 % 10 != 0) {
    if ((param_1 != ((int)param_1 / 3) * 3) && ((param_1 & 0xff) == 0)) {
      uVar2 = skv_fft_ne10_init(param_1,param_1 * 0x55555556);
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  uVar2 = skv_fft_small_init(param_1);
  puVar1[1] = uVar2;
  return puVar1;
}



/* ===== skv_fft_destroy @ 0001aff8 size=120 ===== */

void skv_fft_destroy(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((int)uVar1 % 10 != 0) && (uVar1 != ((int)uVar1 / 3) * 3)) && ((uVar1 & 0xff) == 0)) {
    skv_fft_ne10_destroy((void *)param_1[1]);
    free(param_1);
    return;
  }
  skv_fft_small_destroy();
  free(param_1);
  return;
}



/* ===== skv_fft @ 0001b070 size=140 ===== */

void skv_fft(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((int)uVar1 % 10 != 0) && (uVar1 != ((int)uVar1 / 3) * 3)) && ((uVar1 & 0xff) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00012dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_skv_fft_ne10_0003c114)(param_1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_fft_small_0003c0f4)(param_1[1],param_2,param_3);
  return;
}



/* ===== skv_ifft @ 0001b0e4 size=140 ===== */

void skv_ifft(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((int)uVar1 % 10 != 0) && (uVar1 != ((int)uVar1 / 3) * 3)) && ((uVar1 & 0xff) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00012b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_skv_ifft_ne10_0003c040)(param_1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_ifft_small_0003c184)(param_1[1],param_2,param_3);
  return;
}



/* ===== fft_move @ 0001b158 size=44 ===== */

void fft_move(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  skv_fft(param_1,param_2,param_3 + 1);
  *param_3 = param_3[1];
  param_3[1] = param_3[param_4];
  return;
}



/* ===== ifft_move @ 0001b184 size=52 ===== */

void ifft_move(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  param_2[param_4] = param_2[1];
  param_2[1] = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00012d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_ifft_0003c100)(param_1,param_2 + 1);
  return;
}



/* ===== skv_fft_fix_init @ 0001b1ac size=80 ===== */

undefined4 * skv_fft_fix_init(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = calloc(0xc,1);
  uVar2 = fix_kiss_fftr_alloc(param_1,0,0);
  *puVar1 = uVar2;
  uVar2 = fix_kiss_fftr_alloc(param_1,1,0);
  puVar1[1] = uVar2;
  puVar1[2] = param_1;
  return puVar1;
}



/* ===== skv_fft_fix_destroy @ 0001b1fc size=36 ===== */

void skv_fft_fix_destroy(undefined4 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  free(param_1);
  return;
}



/* ===== skv_fft_fix @ 0001b220 size=836 ===== */

void skv_fft_fix(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  uVar6 = param_1[2];
  if ((int)uVar6 < 1) {
    uVar11 = 0;
  }
  else {
    uVar9 = uVar6;
    if (uVar6 - 1 < 3) {
      uVar8 = 0;
      uVar11 = uVar8;
LAB_0001b284:
      uVar4 = *(uint *)(*param_2 + uVar11 * 4);
      if ((int)uVar4 < 0) {
        uVar4 = -uVar4;
      }
      if ((int)uVar8 < (int)uVar4) {
        uVar8 = uVar4;
      }
      if ((int)(uVar11 + 1) < (int)uVar6) {
        uVar4 = *(uint *)(*param_2 + uVar11 * 4 + 4);
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if ((int)uVar8 < (int)uVar4) {
          uVar8 = uVar4;
        }
        if ((int)(uVar11 + 2) < (int)uVar6) {
          uVar11 = *(uint *)(*param_2 + uVar11 * 4 + 8);
          if ((int)uVar11 < 0) {
            uVar11 = -uVar11;
          }
          if ((int)uVar8 < (int)uVar11) {
            uVar8 = uVar11;
          }
        }
      }
      if (uVar8 == 0 || 16000 < (int)uVar8) {
        uVar11 = 0;
      }
      else {
LAB_0001b304:
        uVar11 = 0;
        do {
          uVar8 = uVar8 * 2;
          uVar11 = uVar11 + 1;
        } while ((int)uVar8 < 0x3e81);
      }
      if ((int)uVar6 < 1) {
        uVar9 = 1;
      }
      if (3 < (int)uVar6) goto LAB_0001b32c;
      uVar8 = 0;
    }
    else {
      auVar15 = (undefined1  [16])0x0;
      pauVar10 = param_2;
      do {
        auVar13 = *pauVar10;
        pauVar10 = pauVar10 + 1;
        auVar13 = VectorAbsolute(auVar13,4);
        auVar15 = VectorMax(auVar15,auVar13,4,0);
      } while (pauVar10 != param_2 + (uVar6 >> 2));
      uVar14 = VectorMax(auVar15._0_8_,auVar15._8_8_,4,0);
      uVar14 = VectorPairwiseMax(uVar14,uVar14,4,0);
      uVar8 = (uint)uVar14;
      uVar11 = uVar6 & 0xfffffffc;
      if (uVar6 != (uVar6 & 0xfffffffc)) goto LAB_0001b284;
      if (uVar8 != 0 && (int)uVar8 < 0x3e81) goto LAB_0001b304;
      if ((int)uVar6 < 1) {
        uVar9 = 1;
      }
      uVar11 = 0;
LAB_0001b32c:
      auVar15._8_8_ = CONCAT44(uVar11,uVar11);
      auVar15._0_8_ = CONCAT44(uVar11,uVar11);
      pauVar10 = param_2;
      do {
        auVar13 = VectorShiftLeft(*pauVar10,auVar15,4,0);
        *(longlong *)*pauVar10 = auVar13._0_8_;
        *(longlong *)(*pauVar10 + 8) = auVar13._8_8_;
        pauVar10 = pauVar10 + 1;
      } while (pauVar10 != param_2 + (uVar9 >> 2));
      uVar8 = uVar9 & 0xfffffffc;
      if (uVar8 == uVar9) goto LAB_0001b3a0;
    }
    *(int *)(*param_2 + uVar8 * 4) = *(int *)(*param_2 + uVar8 * 4) << (uVar11 & 0xff);
    if (((int)(uVar8 + 1) < (int)uVar6) &&
       (iVar5 = uVar8 * 4 + 4,
       *(int *)(*param_2 + iVar5) = *(int *)(*param_2 + iVar5) << (uVar11 & 0xff),
       (int)(uVar8 + 2) < (int)uVar6)) {
      iVar5 = uVar8 * 4 + 8;
      *(int *)(*param_2 + iVar5) = *(int *)(*param_2 + iVar5) << (uVar11 & 0xff);
    }
  }
LAB_0001b3a0:
  fix_kiss_fftr2(*param_1,param_2,param_3);
  uVar6 = param_1[2];
  if ((int)uVar6 < 1) {
    return;
  }
  iVar5 = (1 << (uVar11 & 0xff)) >> 1;
  if (uVar6 - 1 < 3) {
    uVar9 = 0;
  }
  else {
    auVar13._8_8_ = CONCAT44(uVar11,uVar11);
    auVar13._0_8_ = CONCAT44(uVar11,uVar11);
    auVar15 = FloatVectorNeg(auVar13,1,4);
    auVar1._8_8_ = CONCAT44(iVar5,iVar5);
    auVar1._0_8_ = CONCAT44(iVar5,iVar5);
    pauVar10 = param_2;
    do {
      auVar13 = VectorAdd(*pauVar10,auVar1,4);
      auVar13 = VectorShiftLeft(auVar13,auVar15,4,0);
      *(longlong *)*pauVar10 = auVar13._0_8_;
      *(longlong *)(*pauVar10 + 8) = auVar13._8_8_;
      pauVar10 = pauVar10 + 1;
    } while (pauVar10 != param_2 + (uVar6 >> 2));
    uVar9 = uVar6 & 0xfffffffc;
    if (uVar9 == uVar6) goto LAB_0001b460;
  }
  iVar12 = uVar9 * 4;
  *(int *)(*param_2 + uVar9 * 4) = iVar5 + *(int *)(*param_2 + uVar9 * 4) >> (uVar11 & 0xff);
  if ((int)(uVar9 + 1) < (int)uVar6) {
    iVar7 = iVar12 + 4;
    if ((int)(uVar9 + 2) < (int)uVar6) {
      iVar12 = iVar12 + 8;
    }
    *(int *)(*param_2 + iVar7) = iVar5 + *(int *)(*param_2 + iVar7) >> (uVar11 & 0xff);
    if ((int)(uVar9 + 2) < (int)uVar6) {
      *(int *)(*param_2 + iVar12) = iVar5 + *(int *)(*param_2 + iVar12) >> (uVar11 & 0xff);
    }
  }
LAB_0001b460:
  uVar6 = param_1[2];
  if ((int)uVar6 < 1) {
    return;
  }
  if (uVar6 - 1 < 3) {
    uVar9 = 0;
  }
  else {
    auVar2._8_8_ = CONCAT44(uVar11,uVar11);
    auVar2._0_8_ = CONCAT44(uVar11,uVar11);
    auVar15 = FloatVectorNeg(auVar2,1,4);
    auVar3._8_8_ = CONCAT44(iVar5,iVar5);
    auVar3._0_8_ = CONCAT44(iVar5,iVar5);
    pauVar10 = param_3;
    do {
      auVar13 = VectorAdd(*pauVar10,auVar3,4);
      auVar13 = VectorShiftLeft(auVar13,auVar15,4,0);
      *(longlong *)*pauVar10 = auVar13._0_8_;
      *(longlong *)(*pauVar10 + 8) = auVar13._8_8_;
      pauVar10 = pauVar10 + 1;
    } while (param_3 + (uVar6 >> 2) != pauVar10);
    uVar9 = uVar6 & 0xfffffffc;
    if (uVar9 == uVar6) {
      return;
    }
  }
  iVar12 = uVar9 * 4;
  *(int *)(*param_3 + uVar9 * 4) = iVar5 + *(int *)(*param_3 + uVar9 * 4) >> (uVar11 & 0xff);
  if ((int)(uVar9 + 1) < (int)uVar6) {
    iVar7 = iVar12 + 4;
    if ((int)(uVar9 + 2) < (int)uVar6) {
      iVar12 = iVar12 + 8;
    }
    *(int *)(*param_3 + iVar7) = iVar5 + *(int *)(*param_3 + iVar7) >> (uVar11 & 0xff);
    if ((int)(uVar9 + 2) < (int)uVar6) {
      *(int *)(*param_3 + iVar12) = iVar5 + *(int *)(*param_3 + iVar12) >> (uVar11 & 0xff);
    }
    return;
  }
  return;
}



/* ===== skv_ifft_fix @ 0001b564 size=20 ===== */

void skv_ifft_fix(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00012c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fix_kiss_fftri2_0003c0a4)(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== vrecp @ 0001b56c size=24 ===== */

undefined4 vrecp(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = VectorReciprocalEstimate(in_q0,1);
  auVar1 = VectorReciprocalStep(in_q0,auVar2);
  auVar2 = FloatVectorMult(auVar1,auVar2,2,0x20);
  auVar1 = VectorReciprocalStep(in_q0,auVar2);
  auVar1 = FloatVectorMult(auVar1,auVar2,2,0x20);
  return auVar1._0_4_;
}



/* ===== vsqrt @ 0001b584 size=36 ===== */

undefined4 vsqrt(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = VectorReciprocalSquareRootEstimate(in_q0,1);
  auVar1 = FloatVectorMult(in_q0,auVar2,2,0x20);
  auVar1 = VectorReciprocalSquareRootStep(auVar1,auVar2);
  auVar1 = FloatVectorMult(auVar1,auVar2,2,0x20);
  auVar2 = FloatVectorMult(in_q0,auVar1,2,0x20);
  auVar2 = VectorReciprocalSquareRootStep(auVar2,auVar1);
  auVar1 = FloatVectorMult(auVar2,auVar1,2,0x20);
  auVar1 = FloatVectorMult(in_q0,auVar1,2,0x20);
  return auVar1._0_4_;
}



/* ===== vrsqrt @ 0001b5a8 size=32 ===== */

undefined4 vrsqrt(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = VectorReciprocalSquareRootEstimate(in_q0,1);
  auVar1 = FloatVectorMult(in_q0,auVar2,2,0x20);
  auVar1 = VectorReciprocalSquareRootStep(auVar1,auVar2);
  auVar2 = FloatVectorMult(auVar1,auVar2,2,0x20);
  auVar1 = FloatVectorMult(in_q0,auVar2,2,0x20);
  auVar1 = VectorReciprocalSquareRootStep(auVar1,auVar2);
  auVar1 = FloatVectorMult(auVar1,auVar2,2,0x20);
  return auVar1._0_4_;
}



/* ===== MultiC1 @ 0001b5c8 size=44 ===== */

void MultiC1(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_2;
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = *param_1;
  param_3[1] = fVar4 * fVar1 + fVar3 * fVar2;
  *param_3 = -(fVar2 * fVar1) + fVar3 * fVar4;
  return;
}



/* ===== MultiC2 @ 0001b5f4 size=28 ===== */

void MultiC2(float param_1,float *param_2,float *param_3)

{
  *param_3 = *param_2 * param_1;
  param_3[1] = param_2[1] * param_1;
  return;
}



/* ===== ConjMultiC @ 0001b610 size=44 ===== */

void ConjMultiC(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar2 = *param_2;
  *param_3 = fVar3 * fVar4 + fVar1 * fVar2;
  param_3[1] = -(fVar4 * fVar1) + fVar2 * fVar3;
  return;
}



/* ===== ConjMultiC1 @ 0001b63c size=44 ===== */

void ConjMultiC1(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2;
  fVar4 = param_1[1];
  fVar1 = param_2[1];
  fVar2 = *param_1;
  param_3[1] = -(fVar4 * fVar3) + fVar2 * fVar1;
  *param_3 = fVar4 * fVar1 + fVar2 * fVar3;
  return;
}



/* ===== MultiAddC1 @ 0001b668 size=64 ===== */

float MultiAddC1(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = -(param_2[1] * param_1[1]) + *param_1 * *param_2;
  param_3[1] = param_3[1] + *param_2 * param_1[1] + *param_1 * param_2[1];
  *param_3 = *param_3 + fVar1;
  return fVar1;
}



/* ===== MinusC1 @ 0001b6a8 size=36 ===== */

void MinusC1(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  return;
}



/* ===== AddC1 @ 0001b6cc size=36 ===== */

void AddC1(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  return;
}



/* ===== PowC1 @ 0001b6f0 size=20 ===== */

float PowC1(float *param_1)

{
  return param_1[1] * param_1[1] + *param_1 * *param_1;
}



/* ===== ABSC1 @ 0001b704 size=20 ===== */

void ABSC1(float *param_1)

{
  skv_fast_sqrtf(param_1[1] * param_1[1] + *param_1 * *param_1);
  return;
}



/* ===== DivC1 @ 0001b718 size=136 ===== */

float DivC1(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PowC1(param_2);
  if ((double)fVar1 < DAT_0001b7a0) {
    fVar1 = DAT_0001b7a8;
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    return fVar1;
  }
  fVar2 = (param_1[1] * param_2[1]) / fVar1 + *param_1 * *param_2;
  *param_3 = fVar2;
  param_3[1] = -((*param_1 * param_2[1]) / fVar1) + param_1[1] * *param_2;
  return fVar2;
}



/* ===== RK_COMPLEX_MATRIX_MULTI_F @ 0001b7ac size=436 ===== */

void RK_COMPLEX_MATRIX_MULTI_F
               (float *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  int *piVar17;
  float *pfVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  longlong lVar21;
  float fVar22;
  ulonglong in_d4;
  ulonglong in_d5;
  ulonglong in_d6;
  ulonglong in_d7;
  undefined1 in_q12 [16];
  undefined1 in_q13 [16];
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar17 = &local_40;
  local_30 = param_4;
  local_3c = param_2;
  local_38 = param_3;
  if (0 < param_4) {
    iVar15 = 0;
    local_34 = param_5 * 8;
    local_2c = (param_6 - 4U & 0xfffffffc) + 4;
    iVar11 = param_6 * 8;
    pfVar16 = (float *)(iVar11 + param_2);
    pfVar18 = param_1 + param_5 * 2;
    param_6 = param_6 + -3;
    local_40 = 0;
    do {
      if (param_6 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        puVar12 = *(undefined4 **)((int)piVar17 + 4);
        puVar14 = (undefined4 *)(*(int *)((int)piVar17 + 8) + iVar15 * 8);
        pfVar3 = param_1;
        do {
          puVar13 = puVar12;
          param_1 = pfVar3;
          if (0 < param_5) {
            iVar7 = 0;
            do {
              fVar5 = *pfVar3;
              iVar7 = iVar7 + 1;
              puVar1 = (undefined4 *)0x3c0;
              puVar20 = (undefined4 *)0x3d0;
              lVar21 = 2;
              pfVar6 = pfVar3;
              puVar19 = puVar12;
              while( true ) {
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar20 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar21 = lVar21 + -1;
                if (lVar21 == 0) break;
                puVar1 = puVar1 + 1;
                puVar20 = puVar20 + 1;
              }
              puVar1 = (undefined4 *)0x3c8;
              puVar20 = (undefined4 *)0x3d8;
              lVar21 = 2;
              while( true ) {
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar20 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar21 = lVar21 + -1;
                if (lVar21 == 0) break;
                puVar1 = puVar1 + 1;
                puVar20 = puVar20 + 1;
              }
              puVar12 = (undefined4 *)((int)puVar12 + iVar11);
              pfVar3 = pfVar6 + 2;
              in_d7 = in_d7 & 0xffffffffffff0000 | (ulonglong)(uint)fVar5 & 0xffff;
              in_d5 = in_d5 & 0xffffffffffff0000 | (ulonglong)(uint)fVar5 & 0xffff;
              uVar2 = VectorGetElement(in_d7,0,4,0);
              FloatVectorMultiplyAccumulate(in_q12,uVar2,2,0x20);
              uVar2 = VectorGetElement(in_d5,0,4,0);
              FloatVectorMultiplyAccumulate(in_q13,uVar2,2,0x20);
              in_d6 = in_d6 & 0xffffffffffff0000 | (ulonglong)(uint)pfVar6[1] & 0xffff;
              in_d4 = in_d4 & 0xffffffffffff0000 | (ulonglong)(uint)pfVar6[1] & 0xffff;
              uVar2 = VectorGetElement(in_d6,0,4,0);
              FloatVectorMultiplySubtract(in_q13,uVar2,2,0x20);
              uVar2 = VectorGetElement(in_d4,0,4,0);
              FloatVectorMultiplyAccumulate(in_q12,uVar2,2,0x20);
            } while (param_5 != iVar7);
          }
          iVar4 = iVar4 + 4;
          puVar12 = puVar13 + 8;
          puVar13 = (undefined4 *)0x3e0;
          puVar1 = (undefined4 *)0x3f0;
          lVar21 = 2;
          puVar20 = puVar14;
          while( true ) {
            *puVar20 = *puVar13;
            puVar20[1] = *puVar1;
            puVar20 = puVar20 + 2;
            lVar21 = lVar21 + -1;
            if (lVar21 == 0) break;
            puVar13 = puVar13 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar13 = (undefined4 *)0x3e8;
          puVar1 = (undefined4 *)0x3f8;
          lVar21 = 2;
          while( true ) {
            *puVar20 = *puVar13;
            puVar20[1] = *puVar1;
            puVar20 = puVar20 + 2;
            lVar21 = lVar21 + -1;
            if (lVar21 == 0) break;
            puVar13 = puVar13 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar14 = puVar14 + 8;
          pfVar3 = param_1;
        } while (iVar4 < param_6);
        iVar4 = *(int *)((int)piVar17 + 0x14);
      }
      if (iVar4 < piVar17[0x11]) {
        pfVar6 = (float *)(piVar17[1] + iVar4 * 8);
        pfVar3 = (float *)(piVar17[2] + (iVar15 + iVar4) * 8);
        do {
          pfVar8 = pfVar6;
          pfVar9 = param_1;
          fVar5 = DAT_0001b960;
          fVar22 = DAT_0001b960;
          if (0 < param_5) {
            do {
              pfVar10 = pfVar9 + 2;
              fVar22 = fVar22 + *pfVar8 * pfVar9[1] + *pfVar9 * pfVar8[1];
              fVar5 = fVar5 + -(pfVar8[1] * pfVar9[1]) + *pfVar9 * *pfVar8;
              pfVar8 = (float *)((int)pfVar8 + iVar11);
              pfVar9 = pfVar10;
            } while (pfVar18 != pfVar10);
          }
          pfVar6 = pfVar6 + 2;
          *pfVar3 = fVar5;
          pfVar3[1] = fVar22;
          pfVar3 = pfVar3 + 2;
        } while (pfVar16 != pfVar6);
      }
      iVar4 = *piVar17;
      *piVar17 = iVar4 + 1;
      param_1 = (float *)((int)param_1 + piVar17[3]);
      pfVar18 = (float *)((int)pfVar18 + piVar17[3]);
      iVar15 = iVar15 + piVar17[0x11];
    } while (piVar17[4] != iVar4 + 1);
  }
  return;
}



/* ===== RK_MATRIX_MULTI_F @ 0001b964 size=308 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void RK_MATRIX_MULTI_F(float *param_1,undefined1 (*param_2) [16],int param_3,int param_4,int param_5
                      ,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  float fVar15;
  undefined8 in_d7;
  undefined1 auVar16 [16];
  float *pfVar9;
  
  if (0 < param_4) {
    iVar11 = 0;
    iVar12 = 0;
    pfVar5 = param_1;
    do {
      pfVar5 = pfVar5 + param_5;
      if (param_6 + -3 < 1) {
        iVar3 = 0;
      }
      else {
        iVar2 = 0;
        puVar10 = (undefined8 *)(param_3 + iVar11 * 4);
        pauVar13 = param_2;
        do {
          auVar16 = (undefined1  [16])0x0;
          pauVar6 = pauVar13;
          pfVar4 = param_1;
          if (0 < param_5) {
            do {
                    /* WARNING: Ignoring partial resolution of indirect */
              fVar15 = *pfVar4;
              pfVar4 = pfVar4 + 1;
              uVar1 = VectorGetElement(in_d7,0,4,0);
              auVar16 = FloatVectorMultiplyAccumulate(*pauVar6,uVar1,2,0x20);
              pauVar6 = (undefined1 (*) [16])(*pauVar6 + param_6 * 4);
            } while (pfVar4 != pfVar5);
          }
          iVar2 = iVar2 + 4;
          *puVar10 = auVar16._0_8_;
          puVar10[1] = auVar16._8_8_;
          puVar10 = puVar10 + 2;
          pauVar13 = pauVar13 + 1;
          iVar3 = (param_6 - 4U & 0xfffffffc) + 4;
        } while (iVar2 < param_6 + -3);
      }
      if (iVar3 < param_6) {
        pfVar4 = (float *)(*param_2 + iVar3 * 4);
        pfVar14 = (float *)(param_3 + (iVar11 + iVar3) * 4);
        do {
          pfVar7 = pfVar4;
          pfVar8 = param_1;
          fVar15 = DAT_0001ba98;
          if (0 < param_5) {
            do {
              pfVar9 = pfVar8 + 1;
              fVar15 = fVar15 + *pfVar8 * *pfVar7;
              pfVar7 = pfVar7 + param_6;
              pfVar8 = pfVar9;
            } while (pfVar9 != pfVar5);
          }
          pfVar4 = pfVar4 + 1;
          *pfVar14 = fVar15;
          pfVar14 = pfVar14 + 1;
        } while ((float *)(*param_2 + param_6 * 4) != pfVar4);
      }
      iVar12 = iVar12 + 1;
      param_1 = param_1 + param_5;
      iVar11 = iVar11 + param_6;
    } while (param_4 != iVar12);
  }
  return;
}



/* ===== RandComplex @ 0001baa0 size=68 ===== */

float RandComplex(void)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  
  iVar1 = rand();
  iVar2 = rand();
  dVar3 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  return (float)(dVar3 / DAT_0001bae8);
}



/* ===== Sub1 @ 0001baf0 size=20 ===== */

undefined8 Sub1(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(param_2 - param_4,param_1 - param_3);
}



/* ===== Sub2 @ 0001bb04 size=16 ===== */

float Sub2(float param_1,undefined4 param_2,float param_3)

{
  return param_1 - param_3;
}



/* ===== Sub3 @ 0001bb14 size=20 ===== */

undefined8 Sub3(float param_1,float param_2,float param_3)

{
  return CONCAT44(-param_3,param_1 - param_2);
}



/* ===== Add1 @ 0001bb28 size=20 ===== */

undefined8 Add1(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(param_2 + param_4,param_1 + param_3);
}



/* ===== Add2 @ 0001bb3c size=20 ===== */

undefined8 Add2(float param_1,float param_2,undefined4 param_3)

{
  return CONCAT44(param_3,param_2 + param_1);
}



/* ===== Add3 @ 0001bb50 size=16 ===== */

float Add3(float param_1,undefined4 param_2,float param_3)

{
  return param_1 + param_3;
}



/* ===== Minus1 @ 0001bb60 size=20 ===== */

undefined8 Minus1(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(param_2 - param_4,param_1 - param_3);
}



/* ===== Minus2 @ 0001bb74 size=20 ===== */

undefined8 Minus2(float param_1,float param_2,float param_3)

{
  return CONCAT44(-param_3,param_1 - param_2);
}



/* ===== Minus3 @ 0001bb88 size=16 ===== */

float Minus3(float param_1,undefined4 param_2,float param_3)

{
  return param_1 - param_3;
}



/* ===== Multi1 @ 0001bb98 size=36 ===== */

undefined8 Multi1(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(param_2 * param_3 + param_1 * param_4,-(param_4 * param_2) + param_1 * param_3);
}



/* ===== Multi2 @ 0001bbbc size=24 ===== */

undefined8 Multi2(float param_1,float param_2,float param_3)

{
  return CONCAT44(param_1 * param_3,param_2 * param_1);
}



/* ===== Multi3 @ 0001bbd4 size=20 ===== */

undefined8 Multi3(float param_1,float param_2,float param_3)

{
  return CONCAT44(param_3 * param_2,param_1 * param_3);
}



/* ===== ConjMulti @ 0001bbe8 size=36 ===== */

undefined8 ConjMulti(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(-(param_4 * param_1) + param_2 * param_3,param_2 * param_4 + param_1 * param_3);
}



/* ===== Div1 @ 0001bc0c size=244 ===== */

undefined8 Div1(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_4 * param_4 + param_3 * param_3;
  if (fVar2 == 0.0) {
    fVar3 = DAT_0001bd00;
    if ((param_1 != 0.0) && (fVar3 = DAT_0001bd04, param_1 <= 0.0)) {
      fVar3 = DAT_0001bd08;
    }
    fVar4 = DAT_0001bd00;
    if ((param_2 != 0.0) && (fVar4 = DAT_0001bd04, param_2 <= 0.0)) {
      fVar4 = DAT_0001bd08;
    }
  }
  else {
    fVar4 = (param_2 * param_4 + param_1 * param_3) / fVar2;
    fVar2 = (-(param_4 * param_1) + param_2 * param_3) / fVar2;
    iVar1 = __isnanf(fVar4);
    fVar3 = DAT_0001bd00;
    if ((iVar1 == 0) && (iVar1 = __isinff(fVar4), fVar3 = fVar4, iVar1 != 0)) {
      fVar3 = DAT_0001bd00;
    }
    iVar1 = __isnanf(fVar2);
    fVar4 = DAT_0001bd00;
    if ((iVar1 == 0) && (iVar1 = __isinff(fVar2), fVar4 = fVar2, iVar1 != 0)) {
      fVar4 = DAT_0001bd00;
    }
  }
  return CONCAT44(fVar4,fVar3);
}



/* ===== Div2 @ 0001bd0c size=36 ===== */

void Div2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00012b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Div1_0003c054)(param_1,DAT_0001bd24,param_2,param_3);
  return;
}



/* ===== Div3 @ 0001bd28 size=44 ===== */

undefined8 Div3(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_0001bd54;
  fVar1 = DAT_0001bd54;
  if (param_3 != 0.0) {
    fVar2 = param_1 / param_3;
    fVar1 = param_2 / param_3;
  }
  return CONCAT44(fVar1,fVar2);
}



/* ===== Neg @ 0001bd58 size=44 ===== */

undefined8 Neg(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FloatVectorNeg(CONCAT44(param_2,param_1),2,2);
  return uVar1;
}



/* ===== Conj @ 0001bd84 size=16 ===== */

void Conj(void)

{
  return;
}



/* ===== SKV_ABSC @ 0001bd94 size=24 ===== */

void SKV_ABSC(float param_1,float param_2)

{
  skv_fast_sqrtf(param_2 * param_2 + param_1 * param_1);
  return;
}



/* ===== SKV_SQRTC @ 0001bdac size=80 ===== */

undefined8 SKV_SQRTC(float param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0.0 && param_1 >= 0.0) {
    uVar1 = skv_fast_sqrtf();
    return CONCAT44(DAT_0001bdfc,uVar1);
  }
  if (param_1 < 0.0) {
    uVar1 = skv_fast_sqrtf(-param_1);
    return CONCAT44(uVar1,DAT_0001bdfc);
  }
  return CONCAT44(DAT_0001bdfc,DAT_0001bdfc);
}



/* ===== SKV_POWC @ 0001be00 size=24 ===== */

float SKV_POWC(float param_1,float param_2)

{
  return param_2 * param_2 + param_1 * param_1;
}



/* ===== SKV_ABSR @ 0001be18 size=16 ===== */

float SKV_ABSR(float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* ===== SKV_EXPC @ 0001be28 size=120 ===== */

void SKV_EXPC(float param_1,undefined4 param_2)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = skv_fast_cos(param_2);
  uVar3 = skv_fast_sin(param_2);
  pdVar1 = (double *)(DAT_0001bea8 + 0x1be64);
  *(int *)(DAT_0001bea8 + 0x1be68) = (int)(longlong)(DAT_0001bea0 + (double)param_1 * DAT_0001be98);
                    /* WARNING: Could not recover jumptable at 0x00012b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Multi2_0003c044)((float)*pdVar1,uVar2,uVar3);
  return;
}



/* ===== SKV_ROOT @ 0001beb0 size=160 ===== */

undefined4 SKV_ROOT(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  
  fVar1 = (float)SKV_ABSC();
  dVar3 = (double)param_1 + (double)fVar1;
  uVar2 = DAT_0001bf58;
  if (DAT_0001bf50 <= dVar3) {
    uVar2 = skv_fast_sqrtf((float)(dVar3 * 0.5));
  }
  dVar3 = (double)fVar1 - (double)param_1;
  if (DAT_0001bf50 <= dVar3) {
    skv_fast_sqrtf((float)(dVar3 * 0.5));
  }
  return uVar2;
}



/* ===== ComplexMatMultiOp @ 0001bf5c size=564 ===== */

int * ComplexMatMultiOp(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
                       int param_6,undefined4 *param_7,int param_8,int param_9,undefined8 *param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *local_64;
  int local_60;
  undefined8 *local_50;
  
  local_50 = param_10;
  if (((param_3 == param_5 && (param_7 != (undefined4 *)0x0 && param_4 != (undefined4 *)0x0)) &&
      (param_2 * param_3 != 0)) && (param_6 * param_5 != 0)) {
    uVar1 = param_6 * param_2;
    if (param_10 == (undefined8 *)0x0) {
      local_50 = calloc(uVar1 * 8,1);
    }
    else if ((uint)(param_9 * param_8) <= uVar1 && uVar1 - param_9 * param_8 != 0) {
      local_50 = realloc(param_10,uVar1 * 8);
    }
    if ((param_2 != 0) && (param_6 != 0)) {
      local_64 = local_50;
      local_60 = 0;
      puVar2 = param_4;
      do {
        puVar2 = puVar2 + param_3 * 2;
        puVar3 = param_7;
        puVar6 = local_64;
        do {
          *puVar6 = 0;
          puVar4 = param_4;
          puVar7 = puVar3;
          if (param_3 != 0) {
            do {
              puVar5 = puVar4 + 2;
              uVar8 = Multi1(*puVar4,puVar4[1],*puVar7,puVar7[1]);
              uVar8 = Add1(*(undefined4 *)puVar6,*(undefined4 *)((int)puVar6 + 4),(int)uVar8,
                           (int)((ulonglong)uVar8 >> 0x20));
              *puVar6 = uVar8;
              puVar4 = puVar5;
              puVar7 = puVar7 + param_6 * 2;
            } while (puVar5 != puVar2);
          }
          puVar3 = puVar3 + 2;
          puVar6 = puVar6 + 1;
        } while (param_7 + param_6 * 2 != puVar3);
        local_64 = local_64 + param_6;
        local_60 = local_60 + 1;
        param_4 = param_4 + param_3 * 2;
      } while (local_60 != param_2);
    }
    *param_1 = param_2;
    param_1[1] = param_6;
    param_1[2] = (int)local_50;
    return param_1;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0001c190 + 0x1bfb8 + DAT_0001c194),
          (char *)(DAT_0001c198 + 0x1c184),param_2 + -1,param_3 + -1,param_5 + -1,param_6 + -1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== IsEmpltyOfComplexMatrix @ 0001c19c size=68 ===== */

bool IsEmpltyOfComplexMatrix(int param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    return param_3 == 0;
  }
  return true;
}



/* ===== ComplexMatTraceOp @ 0001c1e0 size=216 ===== */

undefined8 ComplexMatTraceOp(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_0001c2bc + 0x1c1fc;
  iVar2 = IsEmpltyOfComplexMatrix(param_1,param_2,param_3);
  uVar5 = CONCAT44(DAT_0001c2b8,DAT_0001c2b8);
  if (iVar2 != 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001c2c0),(char *)(DAT_0001c2c8 + 0x1c2ac),
            DAT_0001c2c4 + 0x1c2a8,0x2ba);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  if (0 < (int)param_1) {
    uVar4 = 0;
    do {
      uVar6 = *param_3;
      uVar4 = uVar4 + 1;
      puVar1 = param_3 + 1;
      param_3 = param_3 + (param_2 + 1) * 2;
      uVar5 = Add1((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,*puVar1);
    } while (param_1 != uVar4);
    return uVar5;
  }
  return CONCAT44(DAT_0001c2b8,DAT_0001c2b8);
}



/* ===== init_Float2Dbuffer @ 0001c2cc size=112 ===== */

undefined4 * init_Float2Dbuffer(undefined4 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = calloc(param_3 << 2,1);
  pvVar2 = calloc(param_3 << 2,1);
  pvVar3 = calloc(param_3 * param_2 * 4,1);
  param_1[2] = param_3 * param_2;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[6] = pvVar1;
  param_1[7] = pvVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = pvVar3;
  return param_1;
}



/* ===== destroy_Float2Dbuffer @ 0001c33c size=96 ===== */

undefined4 * destroy_Float2Dbuffer(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = 0;
  param_2[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[4] = 0;
  free((void *)param_2[6]);
  param_2[6] = 0;
  free((void *)param_2[7]);
  param_2[7] = 0;
  free((void *)param_2[5]);
  param_2[5] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return param_1;
}



/* ===== clear_Float2Dbuffer @ 0001c39c size=276 ===== */

void clear_Float2Dbuffer(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 2);
  *param_1 = 0;
  if (0 < (int)uVar6) {
    puVar3 = *(undefined4 **)(param_1 + 3);
    puVar5 = *(undefined4 **)((int)param_1 + 0x1c);
    if (uVar6 - 1 < 9 || puVar3 < puVar5 + 4 && puVar5 < puVar3 + 4) {
      puVar1 = puVar3;
      do {
        puVar4 = puVar1 + 1;
        *puVar1 = 0;
        *puVar5 = 0;
        puVar1 = puVar4;
        puVar5 = puVar5 + 1;
      } while (puVar4 != puVar3 + uVar6);
    }
    else {
      puVar1 = puVar5;
      puVar4 = puVar3;
      do {
        *puVar4 = 0;
        puVar4[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        puVar4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        puVar4 = puVar4 + 4;
        *puVar1 = 0;
        puVar1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        puVar1 = puVar1 + 4;
      } while (puVar4 != puVar3 + (uVar6 & 0xfffffffc));
      uVar2 = uVar6 & 0xfffffffc;
      if (uVar6 != uVar2) {
        puVar3[uVar2] = 0;
        puVar5[uVar2] = 0;
        if ((int)(uVar2 + 1) < (int)uVar6) {
          puVar3[uVar2 + 1] = 0;
          puVar5[uVar2 + 1] = 0;
          if ((int)(uVar2 + 2) < (int)uVar6) {
            puVar3[uVar2 + 2] = 0;
            puVar5[uVar2 + 2] = 0;
          }
        }
      }
    }
  }
  if (0 < *(int *)(param_1 + 1)) {
    memset(*(void **)((int)param_1 + 0x14),0,*(int *)(param_1 + 1) << 2);
    return;
  }
  return;
}



/* ===== push_Float2Dbuffer @ 0001c4b0 size=128 ===== */

void push_Float2Dbuffer(int *param_1,float *param_2)

{
  int iVar1;
  int extraout_r1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[1] < param_1[3]) {
    param_1[1] = param_1[1] + 1;
  }
  if (0 < param_1[4]) {
    pfVar3 = (float *)param_1[6];
    iVar6 = param_1[5];
    iVar1 = *param_1;
    pfVar4 = pfVar3 + param_1[4];
    iVar5 = param_1[2];
    do {
      pfVar2 = (float *)(iVar6 + iVar1 * 4);
      *pfVar3 = (*pfVar3 + *param_2) - *pfVar2;
      pfVar3 = pfVar3 + 1;
      *pfVar2 = *param_2;
      __aeabi_idivmod(iVar1 + 1,iVar5);
      iVar1 = extraout_r1;
      param_2 = param_2 + 1;
    } while (pfVar4 != pfVar3);
    *param_1 = extraout_r1;
    return;
  }
  return;
}



/* ===== mean_Float2Dbuffer @ 0001c530 size=64 ===== */

void mean_Float2Dbuffer(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  pfVar1 = *(float **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  pfVar3 = *(float **)(param_1 + 0x18);
  pfVar2 = pfVar3 + *(int *)(param_1 + 0x10);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  do {
    fVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *pfVar1 = fVar5 / fVar4;
    pfVar1 = pfVar1 + 1;
  } while (pfVar2 != pfVar3);
  return;
}



/* ===== FUN_0001c570 @ 0001c570 size=508 ===== */

void FUN_0001c570(uint param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar2 = param_1 * param_2;
  if (0 < param_2) {
    iVar12 = 0;
    pfVar1 = param_3 + param_1 * param_2;
    pfVar3 = param_3;
    pfVar9 = param_4;
    do {
      pfVar9 = pfVar9 + param_1 * 2;
      iVar12 = iVar12 + 1;
      pfVar9[param_1 * -2] = *pfVar3 + *pfVar1;
      fVar17 = *pfVar3;
      pfVar3 = pfVar3 + param_1;
      fVar15 = *pfVar1;
      pfVar1 = pfVar1 + param_1;
      pfVar9[-1] = fVar17 - fVar15;
    } while (param_2 != iVar12);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 == 2) {
    if (param_2 < 1) {
      return;
    }
    iVar12 = 0x10;
    iVar10 = 1;
    iVar8 = 8;
    iVar2 = iVar2 + 1;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    iVar12 = param_1 * 8;
    iVar8 = param_1 * 4;
    iVar10 = 0;
    pfVar3 = param_3 + iVar2;
    pfVar9 = param_4;
    do {
      iVar6 = 2;
      pfVar1 = pfVar9;
      pfVar4 = pfVar3 + -iVar2;
      pfVar7 = pfVar3;
      pfVar11 = param_5;
      pfVar13 = pfVar9 + param_1 * 2;
      do {
        fVar14 = pfVar7[1];
        pfVar7 = pfVar7 + 2;
        iVar6 = iVar6 + 2;
        fVar18 = pfVar11[1];
        pfVar5 = pfVar4 + 2;
        fVar17 = *pfVar11;
        fVar15 = *pfVar7;
        fVar16 = -(fVar18 * fVar14) + fVar17 * fVar15;
        pfVar1[2] = *pfVar5 + fVar16;
        fVar15 = fVar18 * fVar15 + fVar17 * fVar14;
        pfVar13[-2] = fVar16 - *pfVar5;
        pfVar1[1] = pfVar4[1] + fVar15;
        pfVar13[-3] = pfVar4[1] - fVar15;
        pfVar1 = pfVar1 + 2;
        pfVar4 = pfVar5;
        pfVar11 = pfVar11 + 2;
        pfVar13 = pfVar13 + -2;
      } while (iVar6 < (int)param_1);
      iVar10 = iVar10 + 1;
      pfVar3 = pfVar3 + param_1;
      pfVar9 = pfVar9 + param_1 * 2;
    } while (param_2 != iVar10);
    if ((param_1 & 1) != 0) {
      return;
    }
    iVar10 = param_1 - 1;
    iVar2 = iVar10 + iVar2;
  }
  iVar6 = 0;
  param_4 = (float *)((int)param_4 + iVar8);
  param_3 = param_3 + iVar2;
  do {
    fVar15 = *param_3;
    pfVar9 = param_3 + (iVar10 - iVar2);
    iVar6 = iVar6 + 1;
    param_3 = (float *)((int)param_3 + iVar8);
    *param_4 = -fVar15;
    param_4[-1] = *pfVar9;
    param_4 = (float *)((int)param_4 + iVar12);
  } while (iVar6 < param_2);
  return;
}



/* ===== FUN_0001c76c @ 0001c76c size=1068 ===== */

void FUN_0001c76c(uint param_1,int param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float *local_74;
  float *local_70;
  int local_68;
  int local_5c;
  int local_38;
  
  iVar3 = param_1 * param_2;
  if (0 < param_2) {
    pfVar10 = param_3 + iVar3;
    pfVar4 = param_3 + iVar3 * 3;
    pfVar11 = param_3 + iVar3 * 2;
    iVar9 = 0;
    pfVar7 = pfVar10;
    pfVar5 = param_4;
    pfVar6 = param_3;
    do {
      fVar28 = *pfVar7;
      iVar8 = (int)pfVar7 + (param_1 * 2 - (int)pfVar10) + 0x3fffffff;
      iVar9 = iVar9 + 1;
      fVar26 = *pfVar6;
      fVar24 = *pfVar4;
      fVar22 = *pfVar11;
      *pfVar5 = fVar28 + fVar24 + fVar26 + fVar22;
      pfVar5 = pfVar5 + param_1 * 4;
      param_4[(int)pfVar7 + (param_1 * 4 - (int)pfVar10) + -1] =
           (fVar26 + fVar22) - (fVar28 + fVar24);
      fVar22 = *pfVar11;
      pfVar11 = pfVar11 + param_1;
      fVar24 = *pfVar6;
      pfVar6 = pfVar6 + param_1;
      param_4[iVar8] = fVar24 - fVar22;
      fVar24 = *pfVar4;
      pfVar4 = pfVar4 + param_1;
      fVar22 = *pfVar7;
      pfVar7 = pfVar7 + param_1;
      (param_4 + iVar8)[1] = fVar24 - fVar22;
    } while (param_2 != iVar9);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 == 2) {
    if (param_2 < 1) {
      return;
    }
    iVar9 = 8;
    iVar8 = iVar3 + 1;
    local_5c = 4;
    local_38 = 0x10;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    local_5c = param_1 * 2;
    local_38 = param_1 * 8;
    iVar9 = param_1 * 4;
    pfVar7 = param_4 + param_1 * 2;
    local_70 = param_3 + iVar3;
    local_68 = 0;
    local_74 = param_3;
    do {
      iVar8 = 2;
      pfVar13 = pfVar7 + param_1 * -2;
      pfVar18 = param_4 + (param_1 * 4 - (int)param_3) + (int)local_74;
      pfVar5 = param_6;
      pfVar6 = param_7;
      pfVar4 = local_74;
      pfVar10 = local_70;
      pfVar11 = pfVar7;
      pfVar12 = pfVar7;
      pfVar14 = local_70 + iVar3 * 2;
      pfVar15 = local_74 + iVar3 * 2;
      pfVar16 = param_5;
      do {
        pfVar1 = pfVar10 + 1;
        pfVar10 = pfVar10 + 2;
        iVar8 = iVar8 + 2;
        fVar24 = pfVar15[2];
        fVar22 = pfVar14[2];
        fVar20 = pfVar4[2];
        fVar28 = pfVar5[1] * fVar24 + *pfVar5 * pfVar15[1];
        fVar26 = pfVar16[1] * *pfVar10 + *pfVar16 * *pfVar1;
        fVar25 = pfVar6[1] * fVar22 + *pfVar6 * pfVar14[1];
        fVar23 = -(pfVar5[1] * pfVar15[1]) + *pfVar5 * fVar24;
        fVar27 = -(pfVar16[1] * *pfVar1) + *pfVar16 * *pfVar10;
        fVar21 = -(pfVar6[1] * pfVar14[1]) + *pfVar6 * fVar22;
        fVar22 = fVar26 + fVar25;
        fVar24 = pfVar4[1] + fVar28;
        fVar25 = fVar25 - fVar26;
        fVar28 = pfVar4[1] - fVar28;
        fVar26 = fVar27 + fVar21;
        fVar27 = fVar27 - fVar21;
        fVar21 = fVar20 + fVar23;
        pfVar13[1] = fVar22 + fVar24;
        fVar20 = fVar20 - fVar23;
        pfVar13 = pfVar13 + 2;
        *pfVar13 = fVar26 + fVar21;
        pfVar11[-3] = fVar28 - fVar27;
        pfVar11 = pfVar11 + -2;
        *pfVar11 = fVar25 - fVar20;
        pfVar12[1] = fVar27 + fVar28;
        pfVar12 = pfVar12 + 2;
        *pfVar12 = fVar25 + fVar20;
        pfVar18[-3] = fVar24 - fVar22;
        pfVar18 = pfVar18 + -2;
        *pfVar18 = fVar26 - fVar21;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
        pfVar4 = pfVar4 + 2;
        pfVar14 = pfVar14 + 2;
        pfVar15 = pfVar15 + 2;
        pfVar16 = pfVar16 + 2;
      } while (iVar8 < (int)param_1);
      local_70 = local_70 + param_1;
      local_68 = local_68 + 1;
      local_74 = local_74 + param_1;
      pfVar7 = pfVar7 + param_1 * 4;
    } while (param_2 != local_68);
    if ((param_1 & 1) != 0) {
      return;
    }
    iVar8 = param_1 + iVar3 + -1;
  }
  fVar24 = DAT_0001cb9c;
  fVar22 = DAT_0001cb98;
  iVar17 = (int)param_3 + iVar9;
  pfVar7 = param_4 + local_5c + param_1;
  param_3 = param_3 + iVar3 + iVar8;
  param_4 = (float *)((int)param_4 + iVar9);
  iVar19 = 0;
  do {
    iVar2 = iVar17 - iVar9;
    iVar19 = iVar19 + 1;
    fVar20 = *(float *)(iVar2 + iVar8 * 4);
    fVar26 = *(float *)(iVar2 + (iVar8 + iVar3 * 2) * 4);
    fVar28 = fVar20 - fVar26;
    fVar20 = fVar20 + fVar26;
    param_4[-1] = *(float *)(iVar17 + -4) + fVar28 * fVar22;
    pfVar5 = (float *)(iVar17 + -4);
    iVar17 = iVar2 + local_38;
    pfVar7[-1] = *pfVar5 + -fVar28 * fVar22;
    *param_4 = -*param_3 + fVar20 * fVar24;
    param_4 = param_4 + iVar9;
    fVar26 = *param_3;
    param_3 = (float *)((int)param_3 + iVar9);
    *pfVar7 = fVar26 + fVar20 * fVar24;
    pfVar7 = pfVar7 + iVar9;
  } while (iVar19 < param_2);
  return;
}



/* ===== FUN_0001cba0 @ 0001cba0 size=552 ===== */

void FUN_0001cba0(uint param_1,int param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar5 = param_1 * 2;
  if (0 < param_2) {
    iVar7 = 0;
    iVar3 = iVar5;
    pfVar1 = param_4;
    iVar11 = 0;
    do {
      iVar6 = iVar3;
      pfVar8 = (float *)(param_3 + iVar11 * 4);
      iVar7 = iVar7 + 1;
      pfVar10 = pfVar1 + param_1 * param_2;
      pfVar2 = (float *)(param_3 + (iVar5 + -1 + iVar11) * 4);
      *pfVar1 = *pfVar8 + *pfVar2;
      pfVar1 = pfVar1 + param_1;
      *pfVar10 = *pfVar8 - *pfVar2;
      iVar3 = iVar6 + iVar5;
      iVar11 = iVar6;
    } while (param_2 != iVar7);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 == 2) {
    if (param_2 < 1) {
      return;
    }
    iVar5 = 1;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    iVar3 = 0;
    iVar11 = 0;
    iVar7 = 0;
    do {
      pfVar10 = param_4 + iVar11;
      pfVar8 = param_4 + param_1 * param_2 + iVar11;
      iVar9 = 2;
      pfVar1 = (float *)(param_3 + iVar3 * 4);
      iVar6 = param_5;
      pfVar2 = (float *)(param_3 + (iVar5 + iVar3) * 4);
      iVar3 = param_5 + 4;
      do {
        pfVar4 = pfVar1 + 2;
        pfVar12 = pfVar2 + -2;
        iVar9 = iVar9 + 2;
        pfVar10[1] = pfVar1[1] + pfVar2[-3];
        fVar16 = pfVar1[1];
        fVar14 = pfVar2[-3];
        pfVar10 = pfVar10 + 2;
        *pfVar10 = *pfVar4 - *pfVar12;
        fVar15 = *pfVar4;
        fVar13 = *pfVar12;
        pfVar8[1] = -(*(float *)(iVar6 + 4) * (fVar15 + fVar13)) +
                    *(float *)(iVar3 + -4) * (fVar16 - fVar14);
        pfVar8 = pfVar8 + 2;
        *pfVar8 = (fVar16 - fVar14) * *(float *)(iVar6 + 4) +
                  *(float *)(iVar3 + -4) * (fVar15 + fVar13);
        pfVar1 = pfVar4;
        iVar6 = iVar6 + 8;
        pfVar2 = pfVar12;
        iVar3 = iVar3 + 8;
      } while (iVar9 < (int)param_1);
      iVar7 = iVar7 + 1;
      iVar11 = iVar11 + param_1;
      iVar3 = iVar11 * 2;
    } while (param_2 != iVar7);
    if ((param_1 & 1) != 0) {
      return;
    }
    iVar5 = param_1 - 1;
  }
  pfVar1 = (float *)(param_3 + iVar5 * 4);
  param_4 = param_4 + iVar5;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    pfVar8 = param_4 + param_1 * param_2;
    *param_4 = *pfVar1 + *pfVar1;
    param_4 = param_4 + param_1;
    pfVar2 = pfVar1 + 1;
    pfVar1 = pfVar1 + param_1 * 2;
    *pfVar8 = -(*pfVar2 + *pfVar2);
  } while (iVar5 < param_2);
  return;
}



/* ===== FUN_0001cdc8 @ 0001cdc8 size=576 ===== */

void FUN_0001cdc8(int param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar17 = DAT_0001d008;
  iVar7 = param_1 * param_2;
  if (0 < param_2) {
    pfVar11 = (float *)(param_3 + param_1 * 8);
    pfVar1 = param_4;
    iVar14 = 0;
    do {
      iVar9 = iVar14;
      iVar14 = iVar9 + 1;
      pfVar12 = pfVar1 + iVar7;
      pfVar5 = pfVar1 + iVar7 * 2;
      fVar20 = pfVar11[-1] + pfVar11[-1];
      fVar22 = pfVar11[param_1 * -2] + fVar20 * -0.5;
      *pfVar1 = pfVar11[param_1 * -2] + fVar20;
      pfVar1 = pfVar1 + param_1;
      fVar20 = *pfVar11;
      pfVar11 = pfVar11 + param_1 * 3;
      fVar20 = fVar20 + fVar20;
      *pfVar12 = fVar22 + -fVar20 * fVar17;
      *pfVar5 = fVar22 + fVar20 * fVar17;
      fVar20 = DAT_0001d008;
    } while (param_2 != iVar14);
    if (2 < param_1) {
      iVar14 = 0;
      iVar10 = 0;
      do {
        iVar2 = iVar14 * 3 + param_1 * 2;
        pfVar8 = param_4 + iVar14;
        pfVar11 = (float *)(param_3 + iVar2 * 4);
        pfVar6 = param_4 + iVar7 + iVar14;
        pfVar4 = param_4 + iVar7 * 2 + iVar14;
        pfVar1 = param_6;
        pfVar5 = (float *)(iVar14 * 0xc + param_3);
        pfVar12 = pfVar11;
        pfVar15 = param_5;
        do {
          fVar22 = pfVar11[1];
          pfVar3 = pfVar11 + 2;
          pfVar13 = pfVar12 + -2;
          fVar17 = pfVar12[-3];
          fVar23 = pfVar5[1];
          pfVar8[1] = fVar23 + fVar22 + fVar17;
          fVar23 = fVar23 + (fVar22 + fVar17) * -0.5;
          fVar17 = pfVar5[2];
          fVar21 = fVar17 + (*pfVar3 - *pfVar13) * -0.5;
          pfVar8 = pfVar8 + 2;
          *pfVar8 = fVar17 + (*pfVar3 - *pfVar13);
          fVar22 = *pfVar3;
          fVar18 = *pfVar13;
          fVar17 = fVar21 + (pfVar11[1] - pfVar12[-3]) * fVar20;
          fVar19 = fVar23 + -(fVar22 + fVar18) * fVar20;
          fVar21 = fVar21 + -(pfVar11[1] - pfVar12[-3]) * fVar20;
          pfVar6[1] = -(pfVar15[1] * fVar17) + *pfVar15 * fVar19;
          fVar23 = fVar23 + (fVar22 + fVar18) * fVar20;
          pfVar6 = pfVar6 + 2;
          *pfVar6 = fVar19 * pfVar15[1] + *pfVar15 * fVar17;
          pfVar4[1] = -(pfVar1[1] * fVar21) + *pfVar1 * fVar23;
          pfVar4 = pfVar4 + 2;
          *pfVar4 = fVar23 * pfVar1[1] + *pfVar1 * fVar21;
          pfVar1 = pfVar1 + 2;
          pfVar11 = pfVar3;
          pfVar5 = pfVar5 + 2;
          pfVar12 = pfVar13;
          pfVar15 = pfVar15 + 2;
        } while ((float *)(param_3 + 8 + ((param_1 - 3U & 0xfffffffe) + iVar2) * 4) != pfVar3);
        bVar16 = iVar9 != iVar10;
        iVar14 = iVar14 + param_1;
        iVar10 = iVar10 + 1;
      } while (bVar16);
    }
  }
  return;
}



/* ===== FUN_0001d00c @ 0001d00c size=956 ===== */

void FUN_0001d00c(uint param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6,
                 float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_60;
  
  iVar3 = param_1 * param_2;
  if (0 < param_2) {
    pfVar4 = (float *)(param_3 + param_1 * 8);
    pfVar12 = pfVar4 + param_1 * 2;
    pfVar2 = param_4 + iVar3 * 2;
    iVar14 = 0;
    pfVar1 = param_4;
    do {
      pfVar13 = pfVar4 + param_1 * -2;
      pfVar5 = pfVar12 + -1;
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar1 + iVar3;
      pfVar12 = pfVar12 + param_1 * 4;
      pfVar6 = pfVar2 + iVar3;
      fVar17 = pfVar4[-1];
      fVar22 = *pfVar13 + *pfVar5;
      fVar19 = *pfVar4;
      pfVar4 = pfVar4 + param_1 * 4;
      fVar24 = *pfVar13 - *pfVar5;
      *pfVar1 = fVar22 + fVar17 * 2.0;
      pfVar1 = pfVar1 + param_1;
      *pfVar8 = fVar24 + -fVar19 * 2.0;
      *pfVar2 = fVar22 + -fVar17 * 2.0;
      pfVar2 = pfVar2 + param_1;
      *pfVar6 = fVar24 + fVar19 * 2.0;
    } while (param_2 != iVar14);
  }
  if ((int)param_1 < 2) {
    return;
  }
  if (param_1 == 2) {
    if (param_2 < 1) {
      return;
    }
    iVar14 = 6;
    iVar11 = 1;
  }
  else {
    if (param_2 < 1) {
      return;
    }
    iVar14 = 0;
    local_60 = 0;
    do {
      iVar7 = 2;
      iVar11 = iVar14 * 4 + param_1 * 2;
      pfVar10 = param_4 + iVar14;
      pfVar12 = (float *)(param_3 + iVar11 * 4);
      pfVar9 = param_4 + iVar3 + iVar14;
      pfVar8 = param_4 + iVar3 * 2 + iVar14;
      pfVar6 = param_4 + iVar3 * 3 + iVar14;
      pfVar1 = param_5;
      pfVar2 = param_6;
      pfVar4 = param_7;
      pfVar5 = (float *)(param_3 + iVar14 * 0x10);
      pfVar13 = pfVar12;
      iVar11 = param_3 + (param_1 * 2 + iVar11) * 4;
      do {
        iVar7 = iVar7 + 2;
        fVar20 = pfVar12[-2];
        fVar21 = pfVar5[2];
        fVar25 = pfVar13[2];
        fVar18 = fVar21 - *(float *)(iVar11 + -8);
        fVar16 = pfVar5[1];
        fVar17 = *(float *)(iVar11 + -0xc);
        fVar19 = fVar25 - fVar20;
        fVar21 = fVar21 + *(float *)(iVar11 + -8);
        fVar23 = fVar16 + fVar17;
        fVar22 = pfVar13[1] + pfVar12[-3];
        fVar15 = pfVar13[1] - pfVar12[-3];
        pfVar10[1] = fVar23 + fVar22;
        pfVar10 = pfVar10 + 2;
        *pfVar10 = fVar18 + fVar19;
        fVar24 = fVar21 + fVar15;
        fVar16 = fVar16 - fVar17;
        fVar25 = fVar25 + fVar20;
        fVar17 = fVar16 - fVar25;
        fVar18 = fVar18 - fVar19;
        pfVar9[1] = -(pfVar1[1] * fVar24) + *pfVar1 * fVar17;
        fVar23 = fVar23 - fVar22;
        fVar21 = fVar21 - fVar15;
        fVar25 = fVar25 + fVar16;
        pfVar9 = pfVar9 + 2;
        *pfVar9 = fVar17 * pfVar1[1] + *pfVar1 * fVar24;
        pfVar8[1] = -(pfVar2[1] * fVar18) + *pfVar2 * fVar23;
        pfVar8 = pfVar8 + 2;
        *pfVar8 = fVar23 * pfVar2[1] + *pfVar2 * fVar18;
        pfVar6[1] = -(pfVar4[1] * fVar21) + *pfVar4 * fVar25;
        pfVar6 = pfVar6 + 2;
        *pfVar6 = fVar25 * pfVar4[1] + *pfVar4 * fVar21;
        pfVar1 = pfVar1 + 2;
        pfVar2 = pfVar2 + 2;
        pfVar4 = pfVar4 + 2;
        pfVar12 = pfVar12 + -2;
        pfVar5 = pfVar5 + 2;
        pfVar13 = pfVar13 + 2;
        iVar11 = iVar11 + -8;
      } while (iVar7 < (int)param_1);
      local_60 = local_60 + 1;
      iVar14 = iVar14 + param_1;
    } while (param_2 != local_60);
    if ((param_1 & 1) != 0) {
      return;
    }
    iVar14 = param_1 * 3;
    iVar11 = param_1 - 1;
  }
  fVar19 = DAT_0001d3cc;
  fVar17 = DAT_0001d3c8;
  pfVar2 = (float *)(param_3 + iVar14 * 4);
  pfVar1 = (float *)(param_3 + param_1 * 4);
  param_4 = param_4 + iVar11;
  iVar14 = 0;
  do {
    fVar24 = *pfVar1;
    iVar14 = iVar14 + 1;
    pfVar6 = param_4 + iVar3;
    pfVar13 = param_4 + iVar3 * 2;
    pfVar5 = param_4 + iVar3 * 3;
    fVar16 = *pfVar2;
    pfVar4 = pfVar1 + -1;
    pfVar1 = pfVar1 + param_1 * 4;
    pfVar12 = pfVar2 + -1;
    pfVar2 = pfVar2 + param_1 * 4;
    fVar15 = fVar24 + fVar16;
    fVar22 = *pfVar4 - *pfVar12;
    fVar16 = fVar16 - fVar24;
    fVar24 = *pfVar4 + *pfVar12;
    *param_4 = fVar24 + fVar24;
    param_4 = param_4 + param_1;
    *pfVar6 = (fVar22 - fVar15) * fVar17;
    *pfVar13 = fVar16 + fVar16;
    *pfVar5 = (fVar15 + fVar22) * fVar19;
  } while (iVar14 < param_2);
  return;
}



/* ===== FUN_0001d3d0 @ 0001d3d0 size=4268 ===== */

void FUN_0001d3d0(uint param_1,int param_2,int param_3,uint param_4,undefined8 *param_5,
                 undefined4 *param_6,float *param_7,undefined8 *param_8,float *param_9,
                 float *param_10)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined4 uVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  int iVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  uint in_fpscr;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float *local_78;
  int local_74;
  float *local_70;
  int local_64;
  int local_60;
  float *local_5c;
  int local_58;
  int local_54;
  int local_50;
  
  fVar40 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar40 = DAT_0001d6d8 / fVar40;
  dVar35 = cos((double)fVar40);
  dVar36 = sin((double)fVar40);
  iVar3 = param_3 * param_1;
  iVar28 = param_1 * param_2;
  iVar1 = param_2 + 1 >> 1;
  iVar32 = (int)(param_1 - 1) >> 1;
  iVar15 = iVar3 * param_2;
  if (param_1 == 1) {
    if (0 < (int)param_4) {
LAB_0001d870:
      if ((int)param_4 < 9 || param_9 < param_7 + 4 && param_7 < param_9 + 4) {
        iVar27 = 0;
        pfVar26 = param_9;
        pfVar25 = param_7;
        do {
          iVar27 = iVar27 + 1;
          *pfVar25 = *pfVar26;
          pfVar26 = pfVar26 + 1;
          pfVar25 = pfVar25 + 1;
        } while (iVar27 < (int)param_4);
      }
      else {
        uVar10 = param_4;
        if ((int)param_4 < 1) {
          uVar10 = 1;
        }
        pfVar26 = param_9;
        pfVar25 = param_7;
        do {
          uVar42 = *(undefined8 *)pfVar26;
          uVar43 = *(undefined8 *)(pfVar26 + 2);
          pfVar26 = pfVar26 + 4;
          *(undefined8 *)pfVar25 = uVar42;
          *(undefined8 *)(pfVar25 + 2) = uVar43;
          pfVar25 = pfVar25 + 4;
        } while (param_7 + (uVar10 & 0xfffffffc) != pfVar25);
        uVar11 = uVar10 & 0xfffffffc;
        if (((uVar11 != uVar10) &&
            (param_7[uVar11] = param_9[uVar11], (int)(uVar11 + 1) < (int)param_4)) &&
           (param_7[uVar11 + 1] = param_9[uVar11 + 1], (int)(uVar11 + 2) < (int)param_4)) {
          param_7[uVar11 + 2] = param_9[uVar11 + 2];
        }
      }
    }
    if (1 < iVar1) {
LAB_0001d964:
      local_5c = (float *)(param_4 * param_2);
      if (0 < param_3) {
        iVar29 = 1;
        iVar17 = (int)local_5c - iVar3;
        pfVar25 = (float *)(param_6 + iVar17);
        iVar27 = (param_1 - iVar17) * 4;
        pfVar26 = (float *)((int)param_8 + iVar17 * 4);
        iVar17 = (iVar3 - param_1) * 4;
        do {
          iVar16 = 0;
          pfVar5 = (float *)((int)param_8 + iVar17 + param_1 * 4);
          pfVar9 = pfVar25;
          pfVar2 = pfVar26;
          do {
            iVar16 = iVar16 + 1;
            *(float *)((int)pfVar9 + iVar17 + iVar27) = *pfVar5 + *pfVar2;
            fVar41 = *pfVar2;
            pfVar2 = pfVar2 + param_1;
            fVar40 = *pfVar5;
            pfVar5 = pfVar5 + param_1;
            *pfVar9 = fVar41 - fVar40;
            pfVar9 = pfVar9 + param_1;
          } while (param_3 != iVar16);
          iVar29 = iVar29 + 1;
          pfVar26 = pfVar26 + -iVar3;
          pfVar25 = pfVar25 + -iVar3;
          iVar27 = iVar27 + iVar3 * 4;
          iVar17 = iVar17 + iVar3 * 4;
        } while (iVar29 < iVar1);
      }
      fVar41 = 1.0;
      iVar27 = param_4 * (param_2 + -1);
      pfVar9 = param_9 + ((int)local_5c - param_4);
      pfVar25 = param_7 + param_4;
      local_74 = 1;
      pfVar26 = param_9 + param_4;
      fVar40 = DAT_0001d6dc;
      do {
        fVar38 = (float)dVar36 * fVar41 + (float)dVar35 * fVar40;
        fVar41 = -(fVar40 * (float)dVar36) + (float)dVar35 * fVar41;
        pfVar2 = param_7 + iVar27;
        pfVar5 = pfVar26;
        pfVar23 = pfVar25;
        pfVar6 = param_7;
        pfVar12 = pfVar9;
        if ((int)param_4 < 1) {
          if (iVar1 < 3) break;
        }
        else {
          do {
            pfVar18 = pfVar6 + 1;
            *pfVar5 = *pfVar6 + *pfVar23 * fVar41;
            *pfVar12 = *pfVar2 * fVar38;
            pfVar2 = pfVar2 + 1;
            pfVar5 = pfVar5 + 1;
            pfVar23 = pfVar23 + 1;
            pfVar6 = pfVar18;
            pfVar12 = pfVar12 + 1;
          } while (pfVar25 != pfVar18);
          if (iVar1 < 3) break;
          iVar17 = 2;
          pfVar2 = param_7 + (iVar27 - param_4);
          pfVar5 = param_7 + param_4 * 3;
          fVar40 = fVar38;
          fVar37 = fVar41;
          do {
            fVar39 = fVar40 * fVar38;
            fVar40 = fVar38 * fVar37 + fVar41 * fVar40;
            fVar37 = -fVar39 + fVar41 * fVar37;
            pfVar23 = pfVar2;
            pfVar6 = pfVar9;
            pfVar12 = pfVar5 + -param_4;
            pfVar18 = pfVar26;
            do {
              fVar39 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              *pfVar18 = *pfVar18 + fVar39 * fVar37;
              pfVar18 = pfVar18 + 1;
              fVar39 = *pfVar23;
              pfVar23 = pfVar23 + 1;
              *pfVar6 = *pfVar6 + fVar39 * fVar40;
              pfVar6 = pfVar6 + 1;
            } while (pfVar5 != pfVar12);
            iVar17 = iVar17 + 1;
            pfVar2 = pfVar2 + -param_4;
            pfVar5 = pfVar5 + -param_4 + param_4 * 2;
          } while (iVar1 != iVar17);
        }
        pfVar9 = pfVar9 + -param_4;
        local_74 = local_74 + 1;
        pfVar26 = pfVar26 + param_4;
        fVar40 = fVar38;
      } while (local_74 < iVar1);
      if (0 < (int)param_4) {
        iVar27 = 1;
        pfVar26 = param_9;
        pfVar9 = pfVar25;
        do {
          do {
            fVar40 = *pfVar25;
            pfVar25 = pfVar25 + 1;
            *pfVar26 = *pfVar26 + fVar40;
            pfVar26 = pfVar26 + 1;
          } while (param_9 + param_4 != pfVar26);
          iVar27 = iVar27 + 1;
          pfVar25 = pfVar9 + param_4;
          pfVar26 = param_9;
          pfVar9 = pfVar25;
        } while (iVar27 < iVar1);
      }
    }
  }
  else {
    if (0 < (int)param_4) {
      if (param_4 - 1 < 8 || param_9 < param_7 + 4 && param_7 < param_9 + 4) {
        pfVar26 = param_9;
        pfVar25 = param_7;
        do {
          pfVar9 = pfVar25 + 1;
          *pfVar26 = *pfVar25;
          pfVar26 = pfVar26 + 1;
          pfVar25 = pfVar9;
        } while (pfVar9 != param_7 + param_4);
      }
      else {
        pfVar26 = param_7;
        pfVar25 = param_9;
        do {
          uVar42 = *(undefined8 *)pfVar26;
          uVar43 = *(undefined8 *)(pfVar26 + 2);
          pfVar26 = pfVar26 + 4;
          *(undefined8 *)pfVar25 = uVar42;
          *(undefined8 *)(pfVar25 + 2) = uVar43;
          pfVar25 = pfVar25 + 4;
        } while (pfVar25 != param_9 + (param_4 & 0xfffffffc));
        uVar10 = param_4 & 0xfffffffc;
        if (((uVar10 != param_4) &&
            (param_9[uVar10] = param_7[uVar10], (int)(uVar10 + 1) < (int)param_4)) &&
           (param_9[uVar10 + 1] = param_7[uVar10 + 1], (int)(uVar10 + 2) < (int)param_4)) {
          param_9[uVar10 + 2] = param_7[uVar10 + 2];
        }
      }
    }
    iVar27 = -param_1;
    if ((1 < param_2) && (0 < param_3)) {
      iVar29 = 1;
      iVar17 = iVar3 * 4;
      puVar8 = param_6;
      puVar30 = param_8;
      do {
        puVar30 = (undefined8 *)((int)puVar30 + iVar17);
        puVar8 = puVar8 + iVar3;
        iVar16 = 0;
        puVar4 = puVar30;
        puVar20 = puVar8;
        do {
          uVar24 = *puVar20;
          iVar16 = iVar16 + 1;
          puVar20 = puVar20 + param_1;
          *(undefined4 *)puVar4 = uVar24;
          puVar4 = (undefined8 *)((int)puVar4 + param_1 * 4);
        } while (param_3 != iVar16);
        iVar29 = iVar29 + 1;
      } while (param_2 != iVar29);
      if (iVar32 <= param_3) {
        if (2 < (int)param_1) {
          iVar27 = 0;
          iVar17 = 1;
          do {
            pfVar25 = param_10 + 1;
            iVar27 = iVar27 + iVar3;
            puVar8 = param_6 + iVar27;
            puVar20 = (undefined4 *)((int)param_8 + iVar27 * 4);
            pfVar26 = param_10;
            do {
              iVar29 = 0;
              puVar14 = puVar20;
              puVar19 = puVar8;
              do {
                iVar29 = iVar29 + 1;
                puVar14[1] = pfVar26[1] * (float)puVar19[2] + pfVar25[-1] * (float)puVar19[1];
                pfVar9 = (float *)(puVar19 + 1);
                pfVar2 = (float *)(puVar19 + 2);
                puVar19 = puVar19 + param_1;
                puVar14[2] = -(*pfVar9 * pfVar26[1]) + pfVar25[-1] * *pfVar2;
                puVar14 = puVar14 + param_1;
              } while (param_3 != iVar29);
              puVar8 = puVar8 + 2;
              puVar20 = puVar20 + 2;
              pfVar26 = pfVar26 + 2;
              pfVar25 = pfVar25 + 2;
            } while (puVar8 != param_6 + (param_1 - 3 & 0xfffffffe) + iVar27 + 2);
            iVar17 = iVar17 + 1;
            param_10 = param_10 + param_1;
          } while (param_2 != iVar17);
        }
        goto LAB_0001dfb0;
      }
      if (2 < (int)param_1) {
        iVar29 = 0;
        iVar16 = 1;
        pfVar26 = param_10;
        do {
          iVar31 = 0;
          iVar27 = iVar27 + param_1;
          pfVar25 = (float *)((int)param_6 + iVar29 + iVar17);
          pfVar23 = (float *)((int)param_8 + iVar29 + iVar17);
          pfVar9 = pfVar26;
          pfVar2 = pfVar25;
          pfVar5 = pfVar23;
          do {
            do {
              pfVar6 = pfVar9 + 2;
              pfVar23[1] = pfVar9[1] * pfVar25[2] + *pfVar9 * pfVar25[1];
              pfVar23 = pfVar23 + 2;
              *pfVar23 = -(pfVar25[1] * pfVar9[1]) + *pfVar9 * pfVar25[2];
              pfVar25 = pfVar25 + 2;
              pfVar9 = pfVar6;
            } while (pfVar6 != param_10 + (param_1 - 3 & 0xfffffffe) + iVar27 + 2);
            iVar31 = iVar31 + 1;
            pfVar25 = pfVar2 + param_1;
            pfVar23 = pfVar5 + param_1;
            pfVar9 = pfVar26;
            pfVar2 = pfVar25;
            pfVar5 = pfVar23;
          } while (param_3 != iVar31);
          iVar16 = iVar16 + 1;
          pfVar26 = pfVar26 + param_1;
          iVar29 = iVar29 + iVar17;
        } while (param_2 != iVar16);
      }
LAB_0001d6e0:
      if (iVar1 < 2) goto LAB_0001e468;
      if ((0 < param_3) && (2 < (int)param_1)) {
        iVar17 = iVar15 - iVar3;
        local_5c = (float *)((int)param_8 + iVar17 * 4);
        iVar27 = (iVar3 - iVar17) * 4;
        local_70 = (float *)(param_6 + iVar17);
        local_54 = 0;
        local_50 = 1;
        do {
          iVar29 = 0;
          local_54 = local_54 + iVar3;
          pfVar26 = local_70;
          iVar17 = local_54;
          pfVar25 = local_5c;
          do {
            pfVar23 = (float *)((int)pfVar26 + iVar27);
            pfVar9 = pfVar26;
            pfVar2 = pfVar25;
            pfVar5 = (float *)((int)pfVar25 + iVar27);
            do {
              pfVar12 = pfVar5 + 2;
              pfVar6 = pfVar2 + 2;
              pfVar23[1] = pfVar5[1] + pfVar2[1];
              pfVar9[1] = *pfVar12 - *pfVar6;
              pfVar23 = pfVar23 + 2;
              *pfVar23 = *pfVar12 + *pfVar6;
              pfVar9 = pfVar9 + 2;
              *pfVar9 = pfVar2[1] - pfVar5[1];
              pfVar2 = pfVar6;
              pfVar5 = pfVar12;
            } while (pfVar12 !=
                     (float *)((int)param_8 + ((param_1 - 3 & 0xfffffffe) + iVar17) * 4 + 8));
            iVar29 = iVar29 + 1;
            pfVar25 = pfVar25 + param_1;
            pfVar26 = pfVar26 + param_1;
            iVar17 = iVar17 + param_1;
          } while (param_3 != iVar29);
          local_5c = local_5c + -iVar3;
          local_50 = local_50 + 1;
          local_70 = local_70 + -iVar3;
          iVar27 = iVar27 + iVar3 * 8;
        } while (iVar1 != local_50);
      }
LAB_0001d858:
      if (0 < (int)param_4) goto LAB_0001d870;
      goto LAB_0001d964;
    }
    if (param_3 < iVar32) goto LAB_0001d6e0;
LAB_0001dfb0:
    if (param_3 <= iVar32) goto LAB_0001d6e0;
    if (1 < iVar1) {
      if ((2 < (int)param_1) && (0 < param_3)) {
        iVar17 = 0;
        iVar29 = 1;
        iVar27 = (iVar15 + iVar3 * -2) * 4;
        do {
          iVar17 = iVar17 + iVar3;
          pfVar26 = (float *)((int)param_8 + iVar17 * 4 + 8);
          pfVar25 = (float *)(param_6 + iVar17 + 2);
          do {
            pfVar23 = (float *)((int)pfVar26 + iVar27);
            pfVar5 = (float *)((int)pfVar25 + iVar27);
            iVar16 = 0;
            pfVar9 = pfVar25;
            pfVar2 = pfVar26;
            do {
              iVar16 = iVar16 + 1;
              pfVar9[-1] = pfVar2[-1] + pfVar23[-1];
              pfVar5[-1] = *pfVar2 - *pfVar23;
              *pfVar9 = *pfVar2 + *pfVar23;
              pfVar9 = pfVar9 + param_1;
              pfVar6 = pfVar23 + -1;
              pfVar23 = pfVar23 + param_1;
              pfVar12 = pfVar2 + -1;
              pfVar2 = pfVar2 + param_1;
              *pfVar5 = *pfVar6 - *pfVar12;
              pfVar5 = pfVar5 + param_1;
            } while (param_3 != iVar16);
            pfVar26 = pfVar26 + 2;
            pfVar25 = pfVar25 + 2;
          } while (pfVar26 !=
                   (float *)((int)param_8 + ((param_1 - 3 & 0xfffffffe) + iVar17) * 4 + 0x10));
          iVar29 = iVar29 + 1;
          iVar27 = iVar27 + iVar3 * -8;
        } while (iVar1 != iVar29);
      }
      goto LAB_0001d858;
    }
LAB_0001e468:
    if (0 < (int)param_4) goto LAB_0001d870;
  }
  if ((int)param_1 < param_3) {
    if ((0 < (int)param_1) && (0 < param_3)) {
      puVar30 = param_5;
      puVar4 = param_8;
      do {
        iVar27 = 0;
        puVar7 = puVar30;
        puVar13 = puVar4;
        do {
          uVar24 = *(undefined4 *)puVar13;
          iVar27 = iVar27 + 1;
          puVar13 = (undefined8 *)((int)puVar13 + param_1 * 4);
          *(undefined4 *)puVar7 = uVar24;
          puVar7 = (undefined8 *)((int)puVar7 + iVar28 * 4);
        } while (param_3 != iVar27);
        puVar4 = (undefined8 *)((int)puVar4 + 4);
        puVar30 = (undefined8 *)((int)puVar30 + 4);
      } while ((undefined8 *)(param_1 * 4 + (int)param_8) != puVar4);
    }
    local_64 = param_1 << 1;
    if ((iVar1 < 2) || (param_3 < 1)) goto LAB_0001dd3c;
  }
  else {
    if (param_3 < 1) {
      local_64 = param_1 << 1;
      goto LAB_0001dd3c;
    }
    if (0 < (int)param_1) {
      uVar10 = param_1 & 0xfffffffc;
      iVar27 = 0;
      iVar17 = 0;
      iVar29 = 0;
      puVar4 = param_8;
      puVar7 = param_5;
      puVar30 = param_8;
      do {
        puVar30 = (undefined8 *)((int)puVar30 + param_1 * 4);
        bVar34 = puVar4 <= puVar7 + 2;
        bVar33 = puVar7 + 2 == puVar4;
        if (bVar34 && !bVar33) {
          bVar34 = puVar7 <= puVar4 + 2;
          bVar33 = puVar4 + 2 == puVar7;
        }
        puVar13 = puVar7;
        puVar21 = puVar4;
        if (param_1 - 1 < 8 || bVar34 && !bVar33) {
          do {
            *(undefined4 *)puVar13 = *(undefined4 *)puVar21;
            if (puVar30 == (undefined8 *)((int)puVar21 + 4U)) break;
            puVar22 = puVar21 + 1;
            *(undefined4 *)((int)puVar13 + 4) = *(undefined4 *)((int)puVar21 + 4U);
            puVar13 = puVar13 + 1;
            puVar21 = puVar22;
          } while (puVar30 != puVar22);
        }
        else {
          puVar13 = puVar4;
          puVar21 = puVar7;
          do {
            uVar42 = *puVar13;
            uVar43 = puVar13[1];
            puVar13 = puVar13 + 2;
            *puVar21 = uVar42;
            puVar21[1] = uVar43;
            puVar21 = puVar21 + 2;
          } while (puVar7 + (param_1 >> 2) * 2 != puVar21);
          if (param_1 != uVar10) {
            puVar8 = (undefined4 *)((int)param_8 + (iVar17 + uVar10) * 4);
            puVar20 = (undefined4 *)((int)param_5 + (iVar27 + uVar10) * 4);
            *puVar20 = *puVar8;
            if (((int)(uVar10 + 1) < (int)param_1) &&
               (puVar20[1] = puVar8[1], (int)(uVar10 + 2) < (int)param_1)) {
              puVar20[2] = puVar8[2];
            }
          }
        }
        iVar29 = iVar29 + 1;
        iVar17 = iVar17 + param_1;
        iVar27 = iVar27 + iVar28;
        puVar7 = (undefined8 *)((int)puVar7 + iVar28 * 4);
        puVar4 = (undefined8 *)((int)puVar4 + param_1 * 4);
      } while (param_3 != iVar29);
    }
    local_64 = param_1 << 1;
    if (iVar1 < 2) goto LAB_0001dd3c;
  }
  local_64 = param_1 * 2;
  iVar16 = 1;
  iVar17 = iVar3 * -4;
  iVar27 = (iVar15 - iVar3) * 4;
  iVar29 = iVar17;
  puVar30 = param_8;
  puVar4 = param_5;
  do {
    puVar4 = puVar4 + param_1;
    puVar30 = (undefined8 *)((int)puVar30 + iVar3 * 4);
    iVar31 = 0;
    puVar7 = puVar4;
    puVar13 = puVar30;
    do {
      uVar24 = *(undefined4 *)puVar13;
      puVar8 = (undefined4 *)((int)puVar13 + iVar27 + iVar29);
      iVar31 = iVar31 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + param_1 * 4);
      *(undefined4 *)((int)puVar7 + -4) = uVar24;
      *(undefined4 *)puVar7 = *puVar8;
      puVar7 = (undefined8 *)((int)puVar7 + iVar28 * 4);
    } while (param_3 != iVar31);
    iVar16 = iVar16 + 1;
    iVar29 = iVar29 + iVar17;
    iVar27 = iVar27 + iVar17;
  } while (iVar1 != iVar16);
LAB_0001dd3c:
  iVar27 = local_64;
  if (param_1 != 1) {
    if (iVar32 < param_3) {
      if (((1 < iVar1) && (2 < (int)param_1)) && (0 < param_3)) {
        iVar29 = 0;
        local_78 = (float *)((int)param_5 + (local_64 + -2) * 4);
        iVar32 = local_64 * 8;
        iVar15 = (iVar15 + iVar3 * -2) * 4;
        iVar17 = (int)((int)param_5 + local_64 * 4) * 2;
        local_64 = 1;
        do {
          iVar29 = iVar29 + iVar3;
          pfVar25 = (float *)((int)param_8 + iVar29 * 4 + 8);
          pfVar26 = local_78;
          do {
            pfVar23 = (float *)(iVar15 + (int)pfVar25);
            pfVar5 = (float *)(iVar17 - (int)pfVar26);
            iVar16 = 0;
            pfVar9 = pfVar26;
            pfVar2 = pfVar25;
            do {
              iVar16 = iVar16 + 1;
              pfVar5[-1] = pfVar2[-1] + pfVar23[-1];
              pfVar9[-1] = pfVar2[-1] - pfVar23[-1];
              *pfVar5 = *pfVar2 + *pfVar23;
              pfVar5 = pfVar5 + iVar28;
              fVar41 = *pfVar23;
              pfVar23 = pfVar23 + param_1;
              fVar40 = *pfVar2;
              pfVar2 = pfVar2 + param_1;
              *pfVar9 = fVar41 - fVar40;
              pfVar9 = pfVar9 + iVar28;
            } while (param_3 != iVar16);
            pfVar25 = pfVar25 + 2;
            pfVar26 = pfVar26 + -2;
          } while ((float *)((int)param_8 + ((param_1 - 3 & 0xfffffffe) + iVar29) * 4 + 0x10) !=
                   pfVar25);
          local_78 = local_78 + iVar27;
          local_64 = local_64 + 1;
          iVar15 = iVar15 + iVar3 * -8;
          iVar17 = iVar17 + iVar32;
        } while (iVar1 != local_64);
        return;
      }
    }
    else if (((1 < iVar1) && (0 < param_3)) && (2 < (int)param_1)) {
      local_58 = 0;
      local_60 = local_64;
      local_5c = (float *)0x0;
      local_54 = 1;
      do {
        iVar27 = 0;
        local_5c = (float *)((int)local_5c + local_64);
        local_58 = local_58 + iVar3;
        pfVar25 = (float *)((int)param_8 + local_58 * -4 + iVar15 * 4);
        pfVar26 = (float *)((int)param_5 + (int)local_5c * 4);
        iVar32 = local_58;
        do {
          pfVar23 = pfVar26 + (local_60 - (int)local_5c);
          pfVar9 = pfVar26;
          pfVar2 = pfVar25;
          pfVar5 = (float *)((int)param_8 + iVar32 * 4);
          do {
            pfVar6 = pfVar2 + 2;
            pfVar12 = pfVar5 + 2;
            pfVar9[1] = pfVar5[1] + pfVar2[1];
            pfVar23[-3] = pfVar5[1] - pfVar2[1];
            pfVar9 = pfVar9 + 2;
            *pfVar9 = *pfVar12 + *pfVar6;
            pfVar23 = pfVar23 + -2;
            *pfVar23 = *pfVar6 - *pfVar12;
            pfVar2 = pfVar6;
            pfVar5 = pfVar12;
          } while ((float *)((int)param_8 + ((param_1 - 3 & 0xfffffffe) + iVar32) * 4 + 8) !=
                   pfVar12);
          iVar27 = iVar27 + 1;
          pfVar25 = pfVar25 + param_1;
          pfVar26 = pfVar26 + iVar28;
          iVar32 = iVar32 + param_1;
        } while (param_3 != iVar27);
        local_60 = local_60 + local_64;
        local_54 = local_54 + 1;
      } while (iVar1 != local_54);
    }
  }
  return;
}



/* ===== FUN_0001e484 @ 0001e484 size=3772 ===== */

void FUN_0001e484(uint param_1,int param_2,int param_3,uint param_4,float *param_5,float *param_6,
                 float *param_7,float *param_8,float *param_9,int param_10)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint in_fpscr;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int local_70;
  float *local_58;
  float *local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  fVar27 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  iVar20 = param_1 * param_2;
  fVar27 = DAT_0001e880 / fVar27;
  iVar8 = param_3 * param_1;
  dVar22 = cos((double)fVar27);
  dVar23 = sin((double)fVar27);
  iVar16 = (int)(param_1 - 1) >> 1;
  iVar19 = param_2 + 1 >> 1;
  if ((int)param_1 < param_3) {
    if (0 < (int)param_1) {
      if (param_3 < 1) goto LAB_0001f2bc;
      pfVar17 = param_8;
      pfVar13 = param_5;
      do {
        iVar11 = 0;
        pfVar4 = pfVar17;
        pfVar2 = pfVar13;
        do {
          fVar27 = *pfVar2;
          iVar11 = iVar11 + 1;
          pfVar2 = pfVar2 + iVar20;
          *pfVar4 = fVar27;
          pfVar4 = pfVar4 + param_1;
        } while (param_3 != iVar11);
        pfVar13 = pfVar13 + 1;
        pfVar17 = pfVar17 + 1;
      } while (pfVar13 != param_5 + param_1);
      goto LAB_0001e638;
    }
    local_4c = param_1 << 1;
    if (iVar19 < 2) goto LAB_0001f2e4;
    if (param_3 < 1) goto LAB_0001e718;
LAB_0001e660:
    local_48 = iVar8 * param_2;
    local_4c = param_1 * 2;
    iVar15 = 1;
    iVar12 = iVar8 * -4;
    iVar11 = (local_48 - iVar8) * 4;
    iVar14 = iVar12;
    pfVar17 = param_8;
    pfVar13 = param_5;
    do {
      pfVar13 = pfVar13 + param_1 * 2;
      pfVar17 = pfVar17 + iVar8;
      iVar1 = 0;
      pfVar4 = pfVar17;
      pfVar2 = pfVar13;
      do {
        iVar1 = iVar1 + 1;
        pfVar5 = (float *)((int)pfVar4 + iVar11 + iVar14);
        *pfVar4 = pfVar2[-1] + pfVar2[-1];
        pfVar4 = pfVar4 + param_1;
        fVar27 = *pfVar2;
        pfVar2 = pfVar2 + iVar20;
        *pfVar5 = fVar27 + fVar27;
      } while (param_3 != iVar1);
      iVar15 = iVar15 + 1;
      iVar14 = iVar14 + iVar12;
      iVar11 = iVar11 + iVar12;
    } while (iVar19 != iVar15);
LAB_0001e718:
    local_48 = iVar8 * param_2;
    if (param_1 != 1) {
      if (iVar16 < param_3) {
        if ((2 < (int)param_1) && (0 < param_3)) {
          iVar11 = 1;
          pfVar13 = param_8 + (local_48 - iVar8);
          pfVar17 = param_8;
          do {
            pfVar17 = pfVar17 + iVar8;
            param_5 = param_5 + local_4c;
            iVar12 = 0;
            do {
              iVar9 = iVar12 + (int)param_5;
              iVar14 = iVar12 + (int)pfVar17;
              iVar1 = iVar9 + iVar12 * -2;
              iVar15 = iVar12 + (int)pfVar13;
              iVar21 = 0;
              do {
                iVar21 = iVar21 + 1;
                *(float *)(iVar14 + 4) = *(float *)(iVar9 + 4) + *(float *)(iVar1 + -0xc);
                *(float *)(iVar15 + 4) = *(float *)(iVar9 + 4) - *(float *)(iVar1 + -0xc);
                *(float *)(iVar14 + 8) = *(float *)(iVar9 + 8) - *(float *)(iVar1 + -8);
                iVar14 = iVar14 + param_1 * 4;
                pfVar2 = (float *)(iVar9 + 8);
                iVar9 = iVar9 + iVar20 * 4;
                pfVar4 = (float *)(iVar1 + -8);
                iVar1 = iVar1 + iVar20 * 4;
                *(float *)(iVar15 + 8) = *pfVar2 + *pfVar4;
                iVar15 = iVar15 + param_1 * 4;
              } while (param_3 != iVar21);
              iVar12 = iVar12 + 8;
            } while (iVar12 != ((param_1 - 3 >> 1) + 1) * 8);
            iVar11 = iVar11 + 1;
            pfVar13 = pfVar13 + -iVar8;
          } while (iVar19 != iVar11);
        }
      }
      else {
        if (iVar19 < 2) goto LAB_0001ec64;
        if ((0 < param_3) && (2 < (int)param_1)) {
          iVar11 = (local_48 + iVar8 * -2) * 4;
          local_54 = (float *)0x0;
          local_50 = 1;
          local_58 = param_8;
          do {
            local_58 = local_58 + iVar8;
            iVar14 = 0;
            local_54 = (float *)((int)local_54 + local_4c);
            pfVar17 = local_58;
            iVar12 = (int)local_54;
            do {
              pfVar5 = (float *)((int)pfVar17 + iVar11);
              pfVar13 = pfVar17;
              pfVar4 = param_5 + iVar12;
              pfVar2 = param_5 + iVar12;
              do {
                pfVar3 = pfVar4 + -2;
                pfVar6 = pfVar2 + 2;
                pfVar13[1] = pfVar2[1] + pfVar4[-3];
                pfVar5[1] = pfVar2[1] - pfVar4[-3];
                pfVar13 = pfVar13 + 2;
                *pfVar13 = *pfVar6 - *pfVar3;
                pfVar5 = pfVar5 + 2;
                *pfVar5 = *pfVar6 + *pfVar3;
                pfVar4 = pfVar3;
                pfVar2 = pfVar6;
              } while (pfVar6 != param_5 + (param_1 - 3 & 0xfffffffe) + iVar12 + 2);
              iVar14 = iVar14 + 1;
              pfVar17 = pfVar17 + param_1;
              iVar12 = iVar12 + iVar20;
            } while (param_3 != iVar14);
            local_50 = local_50 + 1;
            iVar11 = iVar11 + iVar8 * -8;
          } while (iVar19 != local_50);
        }
      }
    }
    fVar28 = 1.0;
    iVar20 = param_4 * param_2 - param_4;
    pfVar13 = param_9 + param_4;
    pfVar4 = param_7 + iVar20;
    local_70 = 1;
    fVar27 = DAT_0001e884;
    pfVar17 = param_7;
    do {
      pfVar17 = pfVar17 + param_4;
      fVar25 = (float)dVar23 * fVar28 + (float)dVar22 * fVar27;
      fVar28 = -(fVar27 * (float)dVar23) + (float)dVar22 * fVar28;
      pfVar2 = param_9 + iVar20;
      pfVar5 = pfVar17;
      pfVar3 = pfVar13;
      pfVar6 = param_9;
      pfVar7 = pfVar4;
      if ((int)param_4 < 1) {
        if (iVar19 < 3) break;
      }
      else {
        do {
          pfVar10 = pfVar6 + 1;
          *pfVar5 = *pfVar6 + *pfVar3 * fVar28;
          *pfVar7 = *pfVar2 * fVar25;
          pfVar2 = pfVar2 + 1;
          pfVar5 = pfVar5 + 1;
          pfVar3 = pfVar3 + 1;
          pfVar6 = pfVar10;
          pfVar7 = pfVar7 + 1;
        } while (pfVar10 != pfVar13);
        if (iVar19 < 3) break;
        iVar11 = 2;
        pfVar2 = param_9 + (iVar20 - param_4);
        pfVar5 = param_9 + param_4 * 3;
        fVar27 = fVar25;
        fVar24 = fVar28;
        do {
          fVar26 = fVar27 * fVar25;
          fVar27 = fVar25 * fVar24 + fVar28 * fVar27;
          fVar24 = -fVar26 + fVar28 * fVar24;
          pfVar3 = pfVar2;
          pfVar6 = pfVar4;
          pfVar7 = pfVar5 + -param_4;
          pfVar10 = pfVar17;
          do {
            fVar26 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            *pfVar10 = *pfVar10 + fVar26 * fVar24;
            pfVar10 = pfVar10 + 1;
            fVar26 = *pfVar3;
            pfVar3 = pfVar3 + 1;
            *pfVar6 = *pfVar6 + fVar26 * fVar27;
            pfVar6 = pfVar6 + 1;
          } while (pfVar5 != pfVar7);
          iVar11 = iVar11 + 1;
          pfVar2 = pfVar2 + -param_4;
          pfVar5 = pfVar5 + -param_4 + param_4 * 2;
        } while (iVar19 != iVar11);
      }
      pfVar4 = pfVar4 + -param_4;
      local_70 = local_70 + 1;
      fVar27 = fVar25;
    } while (local_70 < iVar19);
    if (0 < (int)param_4) {
      iVar20 = 0;
      iVar11 = 1;
      do {
        iVar20 = iVar20 + param_4;
        pfVar4 = param_9 + iVar20;
        pfVar17 = param_9;
        do {
          fVar27 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          *pfVar17 = *pfVar17 + fVar27;
          pfVar17 = pfVar17 + 1;
        } while (pfVar17 != pfVar13);
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar19);
    }
    if (0 < param_3) {
      iVar14 = 1;
      iVar20 = iVar8 * 4;
      iVar11 = local_48 - iVar8;
      pfVar13 = param_6 + iVar11;
      pfVar17 = param_8 + iVar11;
      iVar11 = iVar11 * -4;
      iVar12 = iVar20;
      do {
        iVar15 = 0;
        pfVar5 = (float *)((int)param_6 + iVar11 + local_48 * 4);
        pfVar4 = pfVar17;
        pfVar2 = pfVar13;
        do {
          iVar15 = iVar15 + 1;
          *(float *)((int)pfVar4 + iVar12 + iVar11) = *pfVar5 - *pfVar2;
          fVar28 = *pfVar5;
          pfVar5 = pfVar5 + param_1;
          fVar27 = *pfVar2;
          pfVar2 = pfVar2 + param_1;
          *pfVar4 = fVar28 + fVar27;
          pfVar4 = pfVar4 + param_1;
        } while (param_3 != iVar15);
        iVar14 = iVar14 + 1;
        pfVar13 = pfVar13 + -iVar8;
        pfVar17 = pfVar17 + -iVar8;
        iVar11 = iVar11 + iVar20;
        iVar12 = iVar12 + iVar20;
      } while (iVar14 < iVar19);
    }
    if (param_1 == 1) {
      return;
    }
    if (iVar16 < param_3) {
      if (((1 < iVar19) && (2 < (int)param_1)) && (0 < param_3)) {
        iVar11 = 0;
        iVar12 = 1;
        iVar20 = (local_48 + iVar8 * -2) * 4;
        do {
          iVar11 = iVar11 + iVar8;
          pfVar17 = param_6 + iVar11;
          pfVar13 = param_8 + iVar11;
          do {
            iVar15 = iVar20 + (int)pfVar17;
            iVar14 = iVar20 + (int)pfVar13;
            iVar1 = 0;
            pfVar4 = pfVar13;
            pfVar2 = pfVar17;
            do {
              iVar1 = iVar1 + 1;
              pfVar4[1] = pfVar2[1] - *(float *)(iVar15 + 8);
              *(float *)(iVar14 + 4) = pfVar2[1] + *(float *)(iVar15 + 8);
              pfVar4[2] = pfVar2[2] + *(float *)(iVar15 + 4);
              pfVar4 = pfVar4 + param_1;
              pfVar5 = pfVar2 + 2;
              pfVar2 = pfVar2 + param_1;
              pfVar3 = (float *)(iVar15 + 4);
              iVar15 = iVar15 + param_1 * 4;
              *(float *)(iVar14 + 8) = *pfVar5 - *pfVar3;
              iVar14 = iVar14 + param_1 * 4;
            } while (param_3 != iVar1);
            pfVar17 = pfVar17 + 2;
            pfVar13 = pfVar13 + 2;
          } while (param_6 + (param_1 - 3 & 0xfffffffe) + iVar11 + 2 != pfVar17);
          iVar12 = iVar12 + 1;
          iVar20 = iVar20 + iVar8 * -8;
        } while (iVar19 != iVar12);
      }
    }
    else if (((1 < iVar19) && (0 < param_3)) && (2 < (int)param_1)) {
      local_48 = local_48 - iVar8;
      local_54 = param_6 + local_48;
      iVar20 = (iVar8 - local_48) * 4;
      local_58 = param_8 + local_48;
      local_50 = 0;
      local_4c = 1;
      do {
        iVar12 = 0;
        local_50 = local_50 + iVar8;
        pfVar17 = local_58;
        iVar11 = local_50;
        pfVar13 = local_54;
        do {
          pfVar3 = (float *)(iVar20 + (int)pfVar17);
          pfVar4 = pfVar17;
          pfVar2 = (float *)(iVar20 + (int)pfVar13);
          pfVar5 = pfVar13;
          do {
            pfVar6 = pfVar2 + 2;
            pfVar7 = pfVar5 + 2;
            pfVar3[1] = pfVar2[1] - *pfVar7;
            pfVar4[1] = pfVar2[1] + *pfVar7;
            pfVar3 = pfVar3 + 2;
            *pfVar3 = *pfVar6 + pfVar5[1];
            pfVar4 = pfVar4 + 2;
            *pfVar4 = *pfVar6 - pfVar5[1];
            pfVar2 = pfVar6;
            pfVar5 = pfVar7;
          } while (param_6 + (param_1 - 3 & 0xfffffffe) + iVar11 + 2 != pfVar6);
          iVar12 = iVar12 + 1;
          pfVar13 = pfVar13 + param_1;
          pfVar17 = pfVar17 + param_1;
          iVar11 = iVar11 + param_1;
        } while (param_3 != iVar12);
        local_54 = local_54 + -iVar8;
        local_4c = local_4c + 1;
        local_58 = local_58 + -iVar8;
        iVar20 = iVar20 + iVar8 * 8;
      } while (iVar19 != local_4c);
    }
  }
  else {
    if (param_3 < 1) {
LAB_0001f2bc:
      local_4c = param_1 << 1;
      if (1 < iVar19) goto LAB_0001e718;
    }
    else {
      if (0 < (int)param_1) {
        uVar18 = param_1 & 0xfffffffc;
        iVar12 = 0;
        pfVar2 = param_8 + 4;
        pfVar4 = param_5 + param_1;
        iVar14 = 0;
        iVar11 = 0;
        pfVar17 = param_8;
        pfVar13 = param_5;
        do {
          if (param_1 - 1 < 8 || pfVar13 < pfVar2 && pfVar17 < pfVar13 + 4) {
            pfVar5 = pfVar2 + -4;
            pfVar3 = pfVar13;
            do {
              pfVar6 = pfVar3 + 1;
              *pfVar5 = *pfVar3;
              pfVar5 = pfVar5 + 1;
              pfVar3 = pfVar6;
            } while (pfVar6 != pfVar4);
          }
          else {
            pfVar5 = pfVar13;
            pfVar3 = pfVar17;
            do {
              uVar29 = *(undefined8 *)pfVar5;
              uVar30 = *(undefined8 *)(pfVar5 + 2);
              pfVar5 = pfVar5 + 4;
              *(undefined8 *)pfVar3 = uVar29;
              *(undefined8 *)(pfVar3 + 2) = uVar30;
              pfVar3 = pfVar3 + 4;
            } while (pfVar3 != pfVar17 + (param_1 & 0xfffffffc));
            if (uVar18 != param_1) {
              pfVar5 = param_5 + iVar12 + uVar18;
              pfVar3 = param_8 + iVar14 + uVar18;
              *pfVar3 = *pfVar5;
              if (((int)(uVar18 + 1) < (int)param_1) &&
                 (pfVar3[1] = pfVar5[1], (int)(uVar18 + 2) < (int)param_1)) {
                pfVar3[2] = pfVar5[2];
              }
            }
          }
          iVar11 = iVar11 + 1;
          iVar14 = iVar14 + param_1;
          pfVar13 = pfVar13 + iVar20;
          pfVar2 = pfVar2 + param_1;
          pfVar17 = pfVar17 + param_1;
          iVar12 = iVar12 + iVar20;
          pfVar4 = pfVar4 + iVar20;
        } while (param_3 != iVar11);
      }
LAB_0001e638:
      if (1 < iVar19) goto LAB_0001e660;
    }
LAB_0001f2e4:
    if (param_1 == 1) {
      return;
    }
  }
LAB_0001ec64:
  if (0 < (int)param_4) {
    if (param_4 - 1 < 8 || param_7 < param_9 + 4 && param_9 < param_7 + 4) {
      pfVar17 = param_9;
      do {
        pfVar13 = pfVar17 + 1;
        *param_7 = *pfVar17;
        param_7 = param_7 + 1;
        pfVar17 = pfVar13;
      } while (param_9 + param_4 != pfVar13);
    }
    else {
      pfVar17 = param_9;
      pfVar13 = param_7;
      do {
        uVar29 = *(undefined8 *)pfVar17;
        uVar30 = *(undefined8 *)(pfVar17 + 2);
        pfVar17 = pfVar17 + 4;
        *(undefined8 *)pfVar13 = uVar29;
        *(undefined8 *)(pfVar13 + 2) = uVar30;
        pfVar13 = pfVar13 + 4;
      } while (param_7 + (param_4 & 0xfffffffc) != pfVar13);
      uVar18 = param_4 & 0xfffffffc;
      if (((param_4 != uVar18) &&
          (param_7[uVar18] = param_9[uVar18], (int)(uVar18 + 1) < (int)param_4)) &&
         (param_7[uVar18 + 1] = param_9[uVar18 + 1], (int)(uVar18 + 2) < (int)param_4)) {
        param_7[uVar18 + 2] = param_9[uVar18 + 2];
      }
    }
  }
  if ((1 < param_2) && (0 < param_3)) {
    iVar20 = 1;
    iVar19 = iVar8 * 4;
    pfVar17 = param_8;
    pfVar13 = param_6;
    do {
      pfVar13 = pfVar13 + iVar8;
      pfVar17 = pfVar17 + iVar8;
      iVar11 = 0;
      pfVar4 = pfVar13;
      pfVar2 = pfVar17;
      do {
        fVar27 = *pfVar2;
        iVar11 = iVar11 + 1;
        pfVar2 = pfVar2 + param_1;
        *pfVar4 = fVar27;
        pfVar4 = pfVar4 + param_1;
      } while (param_3 != iVar11);
      iVar20 = iVar20 + 1;
    } while (param_2 != iVar20);
    uVar18 = ~param_1;
    if (param_3 < iVar16) {
      if (2 < (int)param_1) {
        iVar16 = 0;
        iVar8 = 1;
        pfVar17 = (float *)(param_10 + -4);
        do {
          iVar20 = 0;
          uVar18 = uVar18 + param_1;
          pfVar13 = (float *)((int)param_8 + iVar16 + iVar19);
          pfVar3 = (float *)((int)param_6 + iVar16 + iVar19);
          pfVar4 = pfVar17;
          pfVar2 = pfVar13;
          pfVar5 = pfVar3;
          do {
            do {
              pfVar6 = pfVar13 + 2;
              pfVar7 = pfVar4 + 2;
              pfVar3[1] = -(*pfVar6 * pfVar4[2]) + pfVar4[1] * pfVar13[1];
              pfVar3 = pfVar3 + 2;
              *pfVar3 = *pfVar7 * pfVar13[1] + pfVar4[1] * *pfVar6;
              pfVar13 = pfVar6;
              pfVar4 = pfVar7;
            } while ((float *)(param_10 + 8 + ((param_1 - 3 & 0xfffffffe) + uVar18) * 4) != pfVar7);
            iVar20 = iVar20 + 1;
            pfVar13 = pfVar2 + param_1;
            pfVar3 = pfVar5 + param_1;
            pfVar4 = pfVar17;
            pfVar2 = pfVar13;
            pfVar5 = pfVar3;
          } while (param_3 != iVar20);
          iVar8 = iVar8 + 1;
          pfVar17 = pfVar17 + param_1;
          iVar16 = iVar16 + iVar19;
        } while (param_2 != iVar8);
        return;
      }
    }
    else if (2 < (int)param_1) {
      iVar16 = 0;
      param_10 = param_10 + -4;
      iVar19 = 1;
      do {
        iVar16 = iVar16 + iVar8;
        pfVar13 = param_8 + iVar16;
        pfVar17 = param_6 + iVar16;
        iVar20 = param_10;
        do {
          iVar11 = 0;
          pfVar4 = pfVar17;
          pfVar2 = pfVar13;
          do {
            iVar11 = iVar11 + 1;
            pfVar4[1] = -(pfVar2[2] * *(float *)(iVar20 + 8)) + *(float *)(iVar20 + 4) * pfVar2[1];
            pfVar5 = pfVar2 + 1;
            pfVar3 = pfVar2 + 2;
            pfVar2 = pfVar2 + param_1;
            pfVar4[2] = *(float *)(iVar20 + 8) * *pfVar5 + *(float *)(iVar20 + 4) * *pfVar3;
            pfVar4 = pfVar4 + param_1;
          } while (param_3 != iVar11);
          pfVar13 = pfVar13 + 2;
          pfVar17 = pfVar17 + 2;
          iVar20 = iVar20 + 8;
        } while (param_8 + (param_1 - 3 & 0xfffffffe) + iVar16 + 2 != pfVar13);
        iVar19 = iVar19 + 1;
        param_10 = param_10 + param_1 * 4;
      } while (param_2 != iVar19);
    }
  }
  return;
}



/* ===== spx_drft_forward @ 0001f348 size=656 ===== */

void spx_drft_forward(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = *param_1;
  if (uVar11 != 1) {
    puVar8 = (undefined8 *)param_1[1];
    uVar15 = param_1[2];
    puVar14 = (undefined8 *)((int)puVar8 + uVar11 * 4);
    if (0 < *(int *)(uVar15 + 4)) {
      piVar3 = (int *)(uVar15 + (*(int *)(uVar15 + 4) + 2) * 4);
      iVar5 = 1;
      uVar7 = uVar11;
      uVar13 = uVar11;
      do {
        piVar3 = piVar3 + -1;
        iVar12 = *piVar3;
        iVar10 = 1 - iVar5;
        uVar1 = __aeabi_idiv(uVar7,iVar12);
        iVar2 = __aeabi_idiv(uVar11,uVar7);
        uVar13 = uVar13 - iVar2 * (iVar12 + -1);
        puVar4 = (undefined4 *)((int)puVar14 + (uVar13 + 0x3fffffff) * 4);
        if (iVar12 == 4) {
          puVar6 = puVar8;
          puVar9 = param_2;
          if (iVar10 == 0) {
            puVar6 = param_2;
            puVar9 = puVar8;
          }
          FUN_0001c76c(iVar2,uVar1,puVar6,puVar9,puVar4);
          iVar5 = iVar10;
        }
        else if (iVar12 == 2) {
          puVar6 = puVar8;
          puVar9 = param_2;
          if (iVar10 == 0) {
            puVar6 = param_2;
            puVar9 = puVar8;
          }
          FUN_0001c570(iVar2,uVar1,puVar6,puVar9,puVar4);
          iVar5 = iVar10;
        }
        else {
          if (iVar2 == 1) {
            iVar10 = iVar5;
          }
          if (iVar10 == 0) {
            FUN_0001d3d0(iVar2,iVar12,uVar1,iVar2 * uVar1,param_2,param_2,param_2,puVar8,puVar8,
                         puVar4);
            iVar5 = 1;
          }
          else {
            FUN_0001d3d0(iVar2,iVar12,uVar1,iVar2 * uVar1,puVar8,puVar8,puVar8,param_2,param_2,
                         puVar4);
            iVar5 = 0;
          }
        }
        uVar7 = uVar1;
      } while (piVar3 != (int *)(uVar15 + 8));
      if ((iVar5 != 1) && (0 < (int)uVar11)) {
        if (uVar11 - 1 < 8 || param_2 < puVar8 + 2 && puVar8 < param_2 + 2) {
          do {
            puVar9 = (undefined8 *)((int)puVar8 + 4);
            puVar4 = (undefined4 *)((int)param_2 + 4);
            *(undefined4 *)param_2 = *(undefined4 *)puVar8;
            if (puVar14 == puVar9) {
              return;
            }
            puVar8 = puVar8 + 1;
            param_2 = param_2 + 1;
            *puVar4 = *(undefined4 *)puVar9;
          } while (puVar14 != puVar8);
        }
        else {
          puVar14 = puVar8;
          puVar9 = param_2;
          do {
            uVar16 = *puVar14;
            uVar17 = puVar14[1];
            puVar14 = puVar14 + 2;
            *puVar9 = uVar16;
            puVar9[1] = uVar17;
            puVar9 = puVar9 + 2;
          } while (param_2 + (uVar11 >> 2) * 2 != puVar9);
          uVar15 = uVar11 & 0xfffffffc;
          if (uVar11 != uVar15) {
            iVar5 = uVar15 * 4;
            *(undefined4 *)((int)param_2 + iVar5) = *(undefined4 *)((int)puVar8 + iVar5);
            if (((int)(uVar15 + 1) < (int)uVar11) &&
               (*(undefined4 *)((int)param_2 + iVar5 + 4) = *(undefined4 *)((int)puVar8 + iVar5 + 4)
               , (int)(uVar15 + 2) < (int)uVar11)) {
              *(undefined4 *)((int)param_2 + iVar5 + 8) = *(undefined4 *)((int)puVar8 + iVar5 + 8);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== spx_drft_backward @ 0001f5d8 size=676 ===== */

void spx_drft_backward(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *local_38;
  
  uVar12 = *param_1;
  if (uVar12 != 1) {
    puVar8 = (undefined8 *)param_1[1];
    iVar5 = *(int *)(param_1[2] + 4);
    puVar13 = (undefined8 *)((int)puVar8 + uVar12 * 4);
    if (0 < iVar5) {
      local_38 = (int *)(param_1[2] + 4);
      iVar11 = 1;
      piVar6 = local_38 + iVar5;
      iVar5 = 0;
      puVar9 = (undefined8 *)0x1;
      do {
        local_38 = local_38 + 1;
        iVar10 = *local_38;
        iVar1 = __aeabi_idiv(uVar12,(undefined8 *)((int)puVar9 * iVar10));
        puVar14 = (undefined4 *)((int)puVar13 + (iVar11 + 0x3fffffff) * 4);
        if (iVar10 == 4) {
          puVar2 = puVar8;
          puVar4 = param_2;
          if (iVar5 == 0) {
            puVar2 = param_2;
            puVar4 = puVar8;
          }
          FUN_0001d00c(iVar1,puVar9,puVar2,puVar4);
LAB_0001f708:
          iVar5 = 1 - iVar5;
        }
        else {
          if (iVar10 == 2) {
            puVar2 = puVar8;
            puVar4 = param_2;
            if (iVar5 == 0) {
              puVar2 = param_2;
              puVar4 = puVar8;
            }
            FUN_0001cba0(iVar1,puVar9,puVar2,puVar4,puVar14);
            goto LAB_0001f708;
          }
          if (iVar10 == 3) {
            puVar4 = puVar9;
            if (iVar5 != 0) {
              puVar4 = puVar8;
            }
            puVar7 = puVar8;
            puVar2 = param_2;
            if (iVar5 != 0) {
              puVar7 = param_2;
              puVar2 = puVar4;
            }
            FUN_0001cdc8(iVar1,puVar9,puVar2,puVar7,puVar14,
                         (undefined4 *)((int)puVar13 + (iVar1 + iVar11 + 0x3fffffff) * 4));
            goto LAB_0001f708;
          }
          if (iVar5 == 0) {
            FUN_0001e484(iVar1,iVar10,puVar9,(int)puVar9 * iVar1,param_2,param_2,param_2,puVar8,
                         puVar8,puVar14);
          }
          else {
            FUN_0001e484(iVar1,iVar10,puVar9,(int)puVar9 * iVar1,puVar8,puVar8,puVar8,param_2,
                         param_2,puVar14);
          }
          if (iVar1 == 1) goto LAB_0001f708;
        }
        iVar11 = iVar1 * (iVar10 + -1) + iVar11;
        puVar9 = (undefined8 *)((int)puVar9 * iVar10);
      } while (local_38 != piVar6);
      if ((iVar5 != 0) && (0 < (int)uVar12)) {
        if (uVar12 - 1 < 8 || param_2 < puVar8 + 2 && puVar8 < param_2 + 2) {
          do {
            puVar9 = (undefined8 *)((int)puVar8 + 4);
            puVar14 = (undefined4 *)((int)param_2 + 4);
            *(undefined4 *)param_2 = *(undefined4 *)puVar8;
            if (puVar9 == puVar13) {
              return;
            }
            puVar8 = puVar8 + 1;
            param_2 = param_2 + 1;
            *puVar14 = *(undefined4 *)puVar9;
          } while (puVar8 != puVar13);
        }
        else {
          puVar13 = param_2;
          puVar9 = puVar8;
          do {
            uVar15 = *puVar9;
            uVar16 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar13 = uVar15;
            puVar13[1] = uVar16;
            puVar13 = puVar13 + 2;
          } while (puVar9 != puVar8 + (uVar12 >> 2) * 2);
          uVar3 = uVar12 & 0xfffffffc;
          if (uVar12 != uVar3) {
            iVar5 = uVar3 * 4;
            *(undefined4 *)((int)param_2 + iVar5) = *(undefined4 *)((int)puVar8 + iVar5);
            if (((int)(uVar3 + 1) < (int)uVar12) &&
               (*(undefined4 *)((int)param_2 + iVar5 + 4) = *(undefined4 *)((int)puVar8 + iVar5 + 4)
               , (int)(uVar3 + 2) < (int)uVar12)) {
              *(undefined4 *)((int)param_2 + iVar5 + 8) = *(undefined4 *)((int)puVar8 + iVar5 + 8);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== spx_drft_init @ 0001f87c size=932 ===== */

void spx_drft_init(int *param_1,int param_2)

{
  float fVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  uint in_fpscr;
  double dVar23;
  float fVar24;
  double __x;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  *param_1 = param_2;
  pvVar2 = calloc(param_2 * 0xc,1);
  param_1[1] = (int)pvVar2;
  piVar3 = calloc(0x80,1);
  param_1[2] = (int)piVar3;
  if (param_2 == 1) {
    return;
  }
  uVar12 = 0;
  iVar15 = 0;
  iVar4 = DAT_0001fc28 + 0x1f8e0;
  iVar17 = -1;
  uVar9 = 1;
  iVar18 = param_2;
  do {
    iVar17 = iVar17 + 1;
    if (iVar17 < 4) {
      iVar15 = *(int *)(iVar4 + iVar17 * 4);
    }
    else {
      iVar15 = iVar15 + 2;
    }
    iVar21 = uVar9 * 4 + -0xc;
    uVar20 = uVar9;
    piVar10 = piVar3 + uVar9;
    uVar16 = uVar12;
    while( true ) {
      uVar9 = uVar20;
      uVar29 = __aeabi_idivmod(iVar18,iVar15);
      if ((int)((ulonglong)uVar29 >> 0x20) != 0) break;
      piVar10[1] = iVar15;
      iVar18 = iVar21 + 4;
      if (iVar15 == 2 && uVar9 != 1) {
        iVar19 = iVar21 + 0x14;
        bVar22 = SBORROW4(iVar21,iVar19);
        iVar7 = iVar21 - iVar19;
        if (iVar21 < iVar19) {
          bVar22 = SBORROW4(iVar18,iVar21 + 0x10);
          iVar7 = iVar18 - (iVar21 + 0x10);
        }
        if ((int)uVar16 < 9 || iVar7 < 0 != bVar22) {
          iVar21 = 0;
          piVar11 = piVar10 + 1;
          do {
            iVar21 = iVar21 + 1;
            *piVar11 = piVar11[-1];
            piVar11 = piVar11 + -1;
          } while (iVar21 < (int)uVar16);
        }
        else {
          piVar11 = piVar10 + -2;
          puVar8 = (undefined8 *)((int)piVar3 + iVar21);
          uVar20 = uVar16;
          if ((int)uVar12 < 1) {
            uVar20 = 1;
          }
          piVar5 = piVar11 + (uVar20 >> 2) * -4;
          do {
            uVar27 = *puVar8;
            uVar28 = puVar8[1];
            puVar8 = puVar8 + -2;
            *(undefined8 *)piVar11 = uVar27;
            *(undefined8 *)(piVar11 + 2) = uVar28;
            piVar11 = piVar11 + -4;
          } while (piVar11 != piVar5);
          uVar6 = uVar20 & 0xfffffffc;
          if (uVar6 != uVar20) {
            piVar3[(uVar12 - uVar6) + 2] = piVar3[(uVar12 - uVar6) + 1];
            if ((int)(uVar6 + 1) < (int)uVar16) {
              iVar21 = uVar9 - (uVar6 + 2);
              piVar3[iVar21 + 2] = piVar3[iVar21 + 1];
              if ((int)(uVar6 + 2) < (int)uVar16) {
                iVar21 = uVar9 - (uVar6 + 3);
                piVar3[iVar21 + 2] = piVar3[iVar21 + 1];
              }
            }
          }
        }
        piVar3[2] = 2;
      }
      uVar16 = uVar16 + 1;
      if ((int)uVar29 == 1) {
        *piVar3 = param_2;
        piVar3[1] = uVar9;
        fVar1 = DAT_0001fc20;
        if (uVar12 == 0) {
          return;
        }
        piVar3 = piVar3 + 1;
        iVar4 = 0;
        piVar10 = piVar3 + uVar12;
        iVar18 = 1;
        do {
          piVar3 = piVar3 + 1;
          iVar17 = *piVar3;
          iVar15 = __aeabi_idiv(param_2,iVar18 * iVar17);
          if (1 < iVar17) {
            fVar24 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
            iVar19 = 0;
            iVar7 = 0;
            iVar21 = iVar4;
            do {
              iVar7 = iVar7 + iVar18;
              fVar26 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (2 < iVar15) {
                pfVar13 = (float *)((int)pvVar2 + iVar21 * 4 + param_2 * 4);
                fVar25 = DAT_0001fc24;
                do {
                  pfVar14 = pfVar13 + 2;
                  fVar25 = fVar25 + 1.0;
                  __x = (double)(fVar26 * (fVar1 / fVar24) * fVar25);
                  dVar23 = cos(__x);
                  *pfVar13 = (float)dVar23;
                  dVar23 = sin(__x);
                  pfVar13[1] = (float)dVar23;
                  pfVar13 = pfVar14;
                } while ((float *)((int)pvVar2 +
                                  ((iVar15 - 3U & 0xfffffffe) + iVar21) * 4 + param_2 * 4 + 8) !=
                         pfVar14);
              }
              iVar19 = iVar19 + 1;
              iVar21 = iVar21 + iVar15;
            } while (iVar19 != iVar17 + -1);
            iVar4 = iVar15 * (iVar17 + -2) + iVar15 + iVar4;
          }
          iVar18 = iVar18 * iVar17;
        } while (piVar3 != piVar10);
        return;
      }
      iVar21 = iVar18;
      uVar20 = uVar9 + 1;
      piVar10 = piVar10 + 1;
      uVar12 = uVar9;
      iVar18 = (int)uVar29;
    }
  } while( true );
}



/* ===== spx_drft_clear @ 0001fc2c size=48 ===== */

void spx_drft_clear(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* ===== skv_mixed_radix_fft_forward_int32_unscaled_neon @ 0001fc5c size=2888 ===== */

void skv_mixed_radix_fft_forward_int32_unscaled_neon
               (undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  int *piVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  char cVar25;
  undefined1 uVar26;
  char cVar27;
  longlong lVar28;
  undefined1 in_q0 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 auVar29 [16];
  undefined1 in_q4 [16];
  undefined1 in_q5 [16];
  undefined1 in_q6 [16];
  undefined1 in_q7 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_q10 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_q11 [16];
  undefined1 auVar36 [16];
  undefined1 in_q12 [16];
  undefined1 auVar37 [16];
  undefined1 in_q13 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_q14 [16];
  undefined1 auVar42 [16];
  undefined1 in_q15 [16];
  undefined1 auVar43 [16];
  undefined1 local_338 [100];
  int local_2d4;
  int local_230;
  undefined4 local_22c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *local_1c8;
  int local_1a8;
  undefined4 *local_1a4;
  int local_b0;
  int local_ac;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  uStack_44 = in_q6._0_8_;
  uStack_3c = in_q6._8_8_;
  uStack_34 = in_q7._0_8_;
  uStack_2c = in_q7._8_8_;
  piVar22 = (int *)local_338;
  puVar23 = local_338;
  local_1a4 = param_1;
  local_22c = param_4;
  iVar9 = param_3[1];
  local_1a8 = *param_3;
  local_230 = iVar9;
  iVar12 = *param_3 * 2;
  local_2d4 = param_3[iVar12 + 0x3fffffff];
  local_b0 = param_3[iVar12 + 0x40000000];
  if (local_b0 == 8) {
    local_b0 = iVar9 * 2;
    if (0 < iVar9) {
      iVar12 = iVar9 * 8;
      iVar3 = 0x20;
      iVar15 = iVar9 * 0x30;
      iVar14 = 0x20;
      puVar17 = param_2 + iVar9 * 2;
      iVar7 = iVar9 << 4;
      iVar6 = 0;
      local_ac = iVar9 * 0x18;
      local_88 = uStack_44;
      uStack_80 = uStack_3c;
      uStack_78 = uStack_34;
      uStack_70 = uStack_2c;
      piVar22 = (int *)local_338;
      do {
        iVar9 = *(int *)((int)piVar22 + 0x108);
        iVar6 = iVar6 + 4;
        iVar20 = *(int *)((int)piVar22 + 0x28c);
        cVar27 = SBORROW4(iVar9,iVar6);
        cVar25 = iVar9 - iVar6 < 0;
        uVar26 = iVar9 == iVar6;
        puVar16 = (undefined4 *)0x3a0;
        puVar11 = (undefined4 *)0x3b0;
        lVar28 = 2;
        puVar8 = param_2;
        puVar5 = puVar17;
        puVar4 = puVar17;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x3a8;
        puVar11 = (undefined4 *)0x3b8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar17 + iVar12);
        uVar10 = 0xa57d8667;
        uVar18 = 0x7999;
        puVar17 = (undefined4 *)0x3c0;
        puVar16 = (undefined4 *)0x3d0;
        lVar28 = 2;
        puVar11 = param_2;
        while( true ) {
          *puVar17 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3c8;
        puVar16 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar20);
        puVar21 = (undefined8 *)((int)piVar22 + 0x110);
        uVar18 = uVar18 & 0xffff | 0x5a820000;
        puVar17 = (undefined4 *)((int)puVar5 + iVar3);
        puVar16 = (undefined4 *)0x3e0;
        puVar11 = (undefined4 *)0x3f0;
        lVar28 = 2;
        puVar5 = puVar4;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x3e8;
        puVar11 = (undefined4 *)0x3f8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar7);
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          *puVar11 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          *puVar11 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar5 = (undefined4 *)(iVar15 + (int)puVar8);
        param_2 = (undefined4 *)((int)puVar8 + iVar14);
        puVar16 = (undefined4 *)0x320;
        puVar11 = (undefined4 *)0x330;
        lVar28 = 2;
        puVar8 = puVar4;
        while( true ) {
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x328;
        puVar11 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar12);
        puVar16 = (undefined4 *)0x300;
        puVar11 = (undefined4 *)0x310;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x308;
        puVar11 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        *(longlong *)((int)piVar22 + 0x68) = in_q12._0_8_;
        *(longlong *)((int)piVar22 + 0x70) = in_q12._8_8_;
        *(longlong *)((int)piVar22 + 0x78) = in_q13._0_8_;
        *(longlong *)((int)piVar22 + 0x80) = in_q13._8_8_;
        auVar38 = VectorSub(in_q12,in_q2,4);
        puVar5 = param_1 + 0x10;
        *puVar21 = in_q14._0_8_;
        puVar21[1] = in_q14._8_8_;
        puVar21[2] = in_q15._0_8_;
        puVar21[3] = in_q15._8_8_;
        auVar33 = VectorSub(in_q15,in_q1,4);
        puVar21 = (undefined8 *)((int)piVar22 + 0xe8);
        *(longlong *)((int)piVar22 + 600) = auVar38._0_8_;
        *(longlong *)((int)piVar22 + 0x260) = auVar38._8_8_;
        puVar16 = (undefined4 *)0x3c0;
        puVar11 = (undefined4 *)0x3d0;
        lVar28 = 2;
        puVar8 = puVar4;
        while( true ) {
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x3c8;
        puVar11 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar7);
        puVar16 = (undefined4 *)0x340;
        puVar11 = (undefined4 *)0x350;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x348;
        puVar11 = (undefined4 *)0x358;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        auVar31 = VectorSub(in_q8,in_q4,4);
        *(longlong *)((int)piVar22 + 0x130) = in_q10._0_8_;
        *(longlong *)((int)piVar22 + 0x138) = in_q10._8_8_;
        *(longlong *)((int)piVar22 + 0x140) = in_q11._0_8_;
        *(longlong *)((int)piVar22 + 0x148) = in_q11._8_8_;
        puVar4 = param_1 + 0x18;
        *(longlong *)((int)piVar22 + 0x278) = auVar33._0_8_;
        *(longlong *)((int)piVar22 + 0x280) = auVar33._8_8_;
        auVar34 = VectorSub(in_q10,in_q12,4);
        auVar30 = VectorSub(in_q11,auVar38,4);
        auVar39 = VectorSub(in_q9,in_q5,4);
        *puVar21 = in_q0._0_8_;
        puVar21[1] = in_q0._8_8_;
        puVar21[2] = in_q1._0_8_;
        puVar21[3] = in_q1._8_8_;
        auVar37 = VectorAdd(in_q5,in_q9,4);
        auVar29 = VectorAdd(auVar31,auVar39,4);
        auVar33._8_8_ = CONCAT44(uVar10,uVar10);
        auVar33._0_8_ = CONCAT44(uVar10,uVar10);
        auVar39 = VectorSub(auVar31,auVar39,4);
        auVar31 = VectorAdd(auVar34,auVar30,4);
        auVar30 = VectorSub(auVar30,auVar34,4);
        auVar33 = VectorDoubleMultiplyHighHalf(auVar29,auVar33,4,0);
        auVar33 = SatQ(auVar33,4,0);
        auVar29._8_8_ = CONCAT44(uVar18,uVar18);
        auVar29._0_8_ = CONCAT44(uVar18,uVar18);
        auVar32 = VectorAdd(in_q4,in_q8,4);
        auVar29 = VectorDoubleMultiplyHighHalf(auVar30,auVar29,4,0);
        auVar35 = SatQ(auVar29,4,0);
        auVar30._8_8_ = CONCAT44(uVar10,uVar10);
        auVar30._0_8_ = CONCAT44(uVar10,uVar10);
        auVar29 = VectorDoubleMultiplyHighHalf(auVar39,auVar30,4,0);
        auVar36 = SatQ(auVar29,4,0);
        auVar39._8_8_ = CONCAT44(uVar18,uVar18);
        auVar39._0_8_ = CONCAT44(uVar18,uVar18);
        auVar29 = VectorDoubleMultiplyHighHalf(auVar31,auVar39,4,0);
        auVar42 = SatQ(auVar29,4,0);
        auVar31 = VectorAdd(in_q2,*(undefined1 (*) [16])((int)piVar22 + 0x68),4);
        auVar39 = VectorAdd(auVar38,*(undefined1 (*) [16])((int)piVar22 + 0x140),4);
        auVar38 = VectorAdd(in_q12,*(undefined1 (*) [16])((int)piVar22 + 0x130),4);
        auVar30 = VectorAdd(auVar42,auVar36,4);
        auVar41 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0xe8),
                            *(undefined1 (*) [16])((int)piVar22 + 0x110),4);
        *(longlong *)((int)piVar22 + 0x130) = auVar38._0_8_;
        *(longlong *)((int)piVar22 + 0x138) = auVar38._8_8_;
        auVar38 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0x78),in_q3,4);
        auVar29 = VectorAdd(in_q3,*(undefined1 (*) [16])((int)piVar22 + 0x78),4);
        *(longlong *)((int)piVar22 + 0x268) = auVar38._0_8_;
        *(longlong *)((int)piVar22 + 0x270) = auVar38._8_8_;
        auVar38 = *(undefined1 (*) [16])((int)piVar22 + 0x110);
        *(longlong *)((int)piVar22 + 0x110) = auVar30._0_8_;
        *(longlong *)((int)piVar22 + 0x118) = auVar30._8_8_;
        *(longlong *)((int)piVar22 + 0x68) = auVar29._0_8_;
        *(longlong *)((int)piVar22 + 0x70) = auVar29._8_8_;
        auVar30 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0xf8),
                            *(undefined1 (*) [16])((int)piVar22 + 0x120),4);
        auVar40 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 600),
                            *(undefined1 (*) [16])((int)piVar22 + 0x278),4);
        auVar34 = VectorSub(auVar35,auVar33,4);
        auVar43 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 600),
                            *(undefined1 (*) [16])((int)piVar22 + 0x278),4);
        auVar29 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0xe8),auVar38,4);
        auVar36 = VectorSub(auVar42,auVar36,4);
        *(longlong *)((int)piVar22 + 0xe8) = auVar43._0_8_;
        *(longlong *)((int)piVar22 + 0xf0) = auVar43._8_8_;
        auVar43 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0x130),auVar32,4);
        auVar42 = VectorAdd(auVar31,auVar41,4);
        *(longlong *)((int)piVar22 + 600) = auVar34._0_8_;
        *(longlong *)((int)piVar22 + 0x260) = auVar34._8_8_;
        auVar41 = VectorSub(auVar31,auVar41,4);
        auVar31 = VectorSub(auVar39,auVar37,4);
        auVar38 = VectorAdd(auVar39,auVar37,4);
        auVar34 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0x130),auVar32,4);
        auVar32 = VectorAdd(auVar35,auVar33,4);
        auVar35 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0x268),auVar29,4);
        auVar29 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0x268),auVar29,4);
        auVar39 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0x68),auVar30,4);
        VectorAdd(auVar42,auVar43,4);
        auVar30 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0x68),auVar30,4);
        in_q13 = VectorAdd(auVar40,*(undefined1 (*) [16])((int)piVar22 + 0x110),4);
        VectorSub(auVar42,auVar43,4);
        auVar37 = VectorSub(auVar40,*(undefined1 (*) [16])((int)piVar22 + 0x110),4);
        VectorAdd(auVar41,auVar31,4);
        auVar33 = VectorTranspose(in_q13,4);
        VectorSub(auVar41,auVar31,4);
        auVar31 = VectorTranspose(auVar37,4);
        *(longlong *)((int)piVar22 + 0x68) = auVar33._0_8_;
        *(longlong *)((int)piVar22 + 0x70) = auVar33._8_8_;
        auVar33 = VectorAdd(*(undefined1 (*) [16])((int)piVar22 + 0xe8),
                            *(undefined1 (*) [16])((int)piVar22 + 600),4);
        auVar40 = VectorSub(*(undefined1 (*) [16])((int)piVar22 + 0xe8),
                            *(undefined1 (*) [16])((int)piVar22 + 600),4);
        *(longlong *)((int)piVar22 + 0x110) = auVar37._0_8_;
        *(longlong *)((int)piVar22 + 0x118) = auVar37._8_8_;
        in_q5 = VectorAdd(auVar35,auVar32,4);
        in_q11 = VectorTranspose(auVar33,4);
        in_q6 = VectorSub(auVar35,auVar32,4);
        in_q1 = VectorTranspose(auVar40,4);
        VectorAdd(auVar39,auVar38,4);
        VectorSub(auVar39,auVar38,4);
        *(longlong *)((int)piVar22 + 0xe8) = auVar33._0_8_;
        *(longlong *)((int)piVar22 + 0xf0) = auVar33._8_8_;
        in_q4 = VectorTranspose(in_q5,4);
        in_q0 = VectorSub(auVar29,auVar36,4);
        in_q2 = VectorAdd(auVar29,auVar36,4);
        in_q14 = VectorTranspose(in_q6,4);
        *(longlong *)((int)piVar22 + 0x130) = auVar40._0_8_;
        *(longlong *)((int)piVar22 + 0x138) = auVar40._8_8_;
        VectorSub(auVar30,auVar34,4);
        in_q7 = *(undefined1 (*) [16])((int)piVar22 + 0x130);
        in_q12 = VectorTranspose(in_q0,4);
        in_q3 = VectorAdd(auVar30,auVar34,4);
        *(longlong *)((int)piVar22 + 0x1f8) = auVar31._8_8_;
        *(longlong *)((int)piVar22 + 0x200) = in_q1._8_8_;
        *(longlong *)((int)piVar22 + 0x218) = in_q13._8_8_;
        *(undefined8 *)((int)piVar22 + 0x220) = *(undefined8 *)((int)piVar22 + 0xf0);
        *(longlong *)((int)piVar22 + 0x170) = auVar31._0_8_;
        *(longlong *)((int)piVar22 + 0x178) = in_q1._0_8_;
        *(longlong *)((int)piVar22 + 0x198) = in_q13._0_8_;
        *(undefined8 *)((int)piVar22 + 0x1a0) = *(undefined8 *)((int)piVar22 + 0xe8);
        *(undefined8 *)((int)piVar22 + 0x238) = *(undefined8 *)((int)piVar22 + 0x118);
        *(longlong *)((int)piVar22 + 0x240) = in_q7._8_8_;
        *(undefined8 *)((int)piVar22 + 0x1b8) = *(undefined8 *)((int)piVar22 + 0x110);
        *(longlong *)((int)piVar22 + 0x1c0) = in_q7._0_8_;
        *(longlong *)((int)piVar22 + 0x160) = in_q4._0_8_;
        *(longlong *)((int)piVar22 + 0x168) = in_q12._0_8_;
        *(longlong *)((int)piVar22 + 0x1a8) = in_q5._0_8_;
        *(longlong *)((int)piVar22 + 0x1b0) = in_q0._0_8_;
        *(undefined8 *)((int)piVar22 + 0x150) = *(undefined8 *)((int)piVar22 + 0x68);
        *(longlong *)((int)piVar22 + 0x158) = in_q11._0_8_;
        *(undefined8 *)((int)piVar22 + 0x1d8) = *(undefined8 *)((int)piVar22 + 0x70);
        *(longlong *)((int)piVar22 + 0x1e0) = in_q11._8_8_;
        *(longlong *)((int)piVar22 + 0x1e8) = in_q4._8_8_;
        *(longlong *)((int)piVar22 + 0x1f0) = in_q12._8_8_;
        auVar38 = VectorTranspose(in_q2,4);
        *(longlong *)((int)piVar22 + 0x228) = in_q5._8_8_;
        *(longlong *)((int)piVar22 + 0x230) = in_q0._8_8_;
        *(longlong *)((int)piVar22 + 0x180) = in_q14._0_8_;
        *(longlong *)((int)piVar22 + 0x188) = auVar38._0_8_;
        *(longlong *)((int)piVar22 + 0x1c8) = in_q6._0_8_;
        *(longlong *)((int)piVar22 + 0x1d0) = in_q2._0_8_;
        *(longlong *)((int)piVar22 + 0x208) = in_q14._8_8_;
        *(longlong *)((int)piVar22 + 0x210) = auVar38._8_8_;
        *(longlong *)((int)piVar22 + 0x248) = in_q6._8_8_;
        *(longlong *)((int)piVar22 + 0x250) = in_q2._8_8_;
        puVar1 = param_1 + 0x20;
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar8 = param_1;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar8 = param_1 + 8;
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar8 = param_1 + 0x28;
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar11;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar11;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar5 = param_1 + 0x30;
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar11;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar11;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar4 = param_1 + 0x38;
        param_1 = param_1 + 0x40;
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar16;
          puVar1[1] = *puVar11;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar16;
          puVar1[1] = *puVar11;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar16;
          puVar8[1] = *puVar11;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar11;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar11;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        in_q8 = *(undefined1 (*) [16])((int)piVar22 + 0x238);
        in_q9 = *(undefined1 (*) [16])((int)piVar22 + 0x248);
        puVar16 = (undefined4 *)0x380;
        puVar11 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar11;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar11 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar11;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
        }
        in_q10 = in_q2;
        in_q15 = in_q0;
      } while (!(bool)uVar26 && cVar25 == cVar27);
    }
    *(undefined4 *)((int)piVar22 + 0x170) = *(undefined4 *)((int)piVar22 + 0x338);
    *(int *)((int)piVar22 + 0x108) = *(int *)((int)piVar22 + 0x108) >> 2;
    *(int *)((int)piVar22 + 400) = *(int *)((int)piVar22 + 400) + -1;
    *(undefined4 *)((int)piVar22 + 0x338) = *(undefined4 *)((int)piVar22 + 0x194);
  }
  else if (local_b0 == 4) {
    if (0 < iVar9) {
      iVar6 = iVar9 * 0x18;
      iVar12 = iVar9 << 3;
      iVar7 = iVar9 << 4;
      iVar15 = 0;
      local_208 = uStack_44;
      local_200 = uStack_3c;
      uStack_1f8 = uStack_34;
      uStack_1f0 = uStack_2c;
      puVar23 = local_338;
      do {
        puVar5 = (undefined4 *)((int)param_2 + iVar6);
        puVar17 = (undefined4 *)0x320;
        puVar16 = (undefined4 *)0x330;
        lVar28 = 2;
        puVar11 = param_2;
        puVar8 = param_2;
        while( true ) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x328;
        puVar16 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar12);
        puVar8 = (undefined4 *)((int)puVar11 + iVar7);
        iVar15 = iVar15 + 4;
        puVar17 = (undefined4 *)0x300;
        puVar16 = (undefined4 *)0x310;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *param_2;
          param_2 = param_2 + 1;
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x308;
        puVar16 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *param_2;
          param_2 = param_2 + 1;
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar4 = param_1 + 0x10;
        cVar27 = SBORROW4(iVar9,iVar15);
        cVar25 = iVar9 - iVar15 < 0;
        uVar26 = iVar9 == iVar15;
        param_2 = puVar11 + 8;
        puVar17 = (undefined4 *)0x3a0;
        puVar16 = (undefined4 *)0x3b0;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3a8;
        puVar16 = (undefined4 *)0x3b8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        auVar38 = VectorAdd(in_q10,in_q0,4);
        puVar17 = (undefined4 *)0x3e0;
        puVar16 = (undefined4 *)0x3f0;
        lVar28 = 2;
        puVar11 = param_1;
        while( true ) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3e8;
        puVar16 = (undefined4 *)0x3f8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar16 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        auVar33 = VectorSub(in_q1,in_q11,4);
        auVar30 = VectorAdd(in_q14,in_q2,4);
        puVar5 = param_1 + 0x18;
        auVar29 = VectorSub(in_q2,in_q14,4);
        param_1 = param_1 + 0x20;
        VectorAdd(auVar30,auVar38,4);
        VectorSub(auVar30,auVar38,4);
        in_q7 = VectorAdd(auVar29,auVar33,4);
        auVar33 = VectorSub(auVar29,auVar33,4);
        auVar38 = VectorAdd(in_q11,in_q1,4);
        auVar39 = VectorAdd(in_q15,in_q3,4);
        in_q1 = VectorTranspose(in_q7,4);
        auVar30 = VectorSub(in_q0,in_q10,4);
        auVar29 = VectorTranspose(auVar33,4);
        in_q14 = VectorAdd(auVar39,auVar38,4);
        in_q0 = VectorSub(in_q3,in_q15,4);
        in_q4 = VectorSub(auVar39,auVar38,4);
        auVar39 = VectorSub(in_q0,auVar30,4);
        auVar38 = VectorTranspose(auVar39,4);
        in_q10 = VectorAdd(in_q0,auVar30,4);
        in_q5._8_8_ = auVar29._0_8_;
        in_q5._0_8_ = in_q1._0_8_;
        *(longlong *)(puVar23 + 0x68) = in_q7._0_8_;
        *(longlong *)(puVar23 + 0x70) = auVar33._0_8_;
        *(longlong *)(puVar23 + 0xe8) = in_q1._8_8_;
        *(longlong *)(puVar23 + 0xf0) = auVar29._8_8_;
        in_q11 = VectorTranspose(in_q10,4);
        *(longlong *)(puVar23 + 0x110) = in_q7._8_8_;
        *(longlong *)(puVar23 + 0x118) = auVar33._8_8_;
        in_q6._8_8_ = in_q11._0_8_;
        in_q6._0_8_ = auVar38._0_8_;
        *(longlong *)(puVar23 + 0x78) = auVar39._0_8_;
        *(longlong *)(puVar23 + 0x80) = in_q10._0_8_;
        puVar17 = (undefined4 *)0x350;
        puVar16 = (undefined4 *)0x360;
        lVar28 = 2;
        puVar8 = puVar11;
        while( true ) {
          *puVar8 = *puVar17;
          puVar8[1] = *puVar16;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x358;
        puVar16 = (undefined4 *)0x368;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar17;
          puVar8[1] = *puVar16;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar11 = puVar11 + 8;
        *(longlong *)(puVar23 + 0xf8) = auVar38._8_8_;
        *(longlong *)(puVar23 + 0x100) = in_q11._8_8_;
        *(longlong *)(puVar23 + 0x120) = auVar39._8_8_;
        *(longlong *)(puVar23 + 0x128) = in_q10._8_8_;
        puVar17 = (undefined4 *)0x380;
        puVar16 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar17;
          puVar11[1] = *puVar16;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x388;
        puVar16 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar17;
          puVar11[1] = *puVar16;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x380;
        puVar16 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar17;
          puVar4[1] = *puVar16;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x388;
        puVar16 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar17;
          puVar4[1] = *puVar16;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        in_q8 = *(undefined1 (*) [16])(puVar23 + 0x110);
        in_q9 = *(undefined1 (*) [16])(puVar23 + 0x120);
        puVar17 = (undefined4 *)0x380;
        puVar16 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar17;
          puVar5[1] = *puVar16;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x388;
        puVar16 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar17;
          puVar5[1] = *puVar16;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
      } while (!(bool)uVar26 && cVar25 == cVar27);
    }
    *(undefined4 *)(puVar23 + 0x170) = *(undefined4 *)(puVar23 + 0x338);
    *(undefined4 *)(puVar23 + 0x338) = *(undefined4 *)(puVar23 + 0x194);
    *(int *)(puVar23 + 400) = *(int *)(puVar23 + 400) + -1;
    *(int *)(puVar23 + 0x288) = *(int *)(puVar23 + 0x108);
    *(int *)(puVar23 + 0x108) = *(int *)(puVar23 + 0x108) >> 2;
    piVar22 = (int *)puVar23;
  }
  else {
    local_1c8 = param_1;
    local_22c = 0;
    piVar22 = (int *)local_338;
  }
  if (*(int *)((int)piVar22 + 400) < 2) {
    if (*(int *)((int)piVar22 + 400) == 0) {
      return;
    }
    *(undefined4 *)((int)piVar22 + 0x170) = *(undefined4 *)((int)piVar22 + 0x338);
  }
  else {
    iVar9 = *(int *)((int)piVar22 + 0x288);
    iVar12 = iVar9 << 3;
    *(int *)((int)piVar22 + 0x110) = iVar9 * 0x18;
    *(int *)((int)piVar22 + 0x130) = iVar9 << 4;
    while( true ) {
      if (0 < *(int *)((int)piVar22 + 0x108)) {
        iVar7 = *(int *)((int)piVar22 + 100);
        iVar9 = iVar7 << 3;
        if (0 < iVar7) {
          puVar17 = *(undefined4 **)((int)piVar22 + 0x170);
          puVar16 = *(undefined4 **)((int)piVar22 + 0x338);
          iVar6 = iVar7 << 4;
          iVar15 = 0;
          *(int *)((int)piVar22 + 0xe8) = iVar7 * 0x18;
          *(int *)((int)piVar22 + 0x150) = iVar7 << 5;
          do {
            puVar5 = *(undefined4 **)((int)piVar22 + 0x10c);
            *(int *)((int)piVar22 + 0x68) = iVar15;
            iVar7 = 0;
            puVar11 = puVar16;
            puVar8 = puVar17;
            do {
              puVar4 = (undefined4 *)0x3e0;
              puVar1 = (undefined4 *)0x3f0;
              lVar28 = 2;
              puVar2 = puVar17;
              puVar17 = puVar16;
              puVar19 = puVar5;
              puVar13 = puVar16;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x3e8;
              puVar1 = (undefined4 *)0x3f8;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar17 = (undefined4 *)((int)puVar17 + iVar12);
              puVar24 = (undefined4 *)(iVar6 + (int)puVar5);
              iVar15 = *(int *)((int)piVar22 + 0x110);
              iVar7 = iVar7 + 4;
              puVar4 = (undefined4 *)0x3a0;
              puVar1 = (undefined4 *)0x3b0;
              lVar28 = 2;
              puVar13 = puVar19;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x3a8;
              puVar1 = (undefined4 *)0x3b8;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar19 = (undefined4 *)((int)puVar19 + iVar9);
              puVar5 = puVar5 + 8;
              puVar13 = (undefined4 *)(iVar15 + (int)puVar16);
              iVar15 = *(int *)((int)piVar22 + 100);
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar1 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar1 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              cVar27 = SBORROW4(iVar7,iVar15);
              cVar25 = iVar7 - iVar15 < 0;
              puVar17 = (undefined4 *)0x340;
              puVar4 = (undefined4 *)0x350;
              lVar28 = 2;
              auVar38 = in_q8;
              while( true ) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x348;
              puVar4 = (undefined4 *)0x358;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar15 = *(int *)((int)piVar22 + 0x130);
              puVar17 = (undefined4 *)0x380;
              puVar4 = (undefined4 *)0x390;
              lVar28 = 2;
              auVar33 = in_q9;
              while( true ) {
                *puVar17 = *puVar24;
                puVar24 = puVar24 + 1;
                *puVar4 = *puVar24;
                puVar24 = puVar24 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x388;
              puVar4 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar24;
                puVar24 = puVar24 + 1;
                *puVar4 = *puVar24;
                puVar24 = puVar24 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              auVar29 = VectorDoubleMultiplyHighHalf(auVar38,in_q10,4,0);
              auVar30 = SatQ(auVar29,4,0);
              puVar1 = (undefined4 *)(iVar15 + (int)puVar16);
              puVar13 = (undefined4 *)((int)puVar2 + iVar6);
              puVar16 = puVar16 + 8;
              auVar29 = VectorDoubleMultiplyHighHalf(auVar33,in_q10,4,0);
              auVar29 = SatQ(auVar29,4,0);
              auVar33 = VectorDoubleMultiplyHighHalf(auVar33,in_q11,4,0);
              auVar33 = SatQ(auVar33,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar38,in_q11,4,0);
              auVar39 = SatQ(auVar38,4,0);
              puVar17 = (undefined4 *)0x300;
              puVar4 = (undefined4 *)0x310;
              lVar28 = 2;
              auVar38 = in_q4;
              while( true ) {
                *puVar17 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar4 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x308;
              puVar4 = (undefined4 *)0x318;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar4 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar4 = (undefined4 *)0x340;
              puVar1 = (undefined4 *)0x350;
              lVar28 = 2;
              puVar17 = puVar2;
              auVar37 = in_q5;
              while( true ) {
                *puVar4 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x348;
              puVar1 = (undefined4 *)0x358;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              auVar34 = VectorSub(auVar30,auVar33,4);
              auVar31 = VectorAdd(auVar29,auVar39,4);
              puVar24 = (undefined4 *)(*(int *)((int)piVar22 + 0xe8) + (int)puVar17);
              puVar17 = puVar17 + 8;
              auVar33 = VectorDoubleMultiplyHighHalf(auVar38,in_q8,4,0);
              auVar29 = SatQ(auVar33,4,0);
              auVar33 = VectorDoubleMultiplyHighHalf(auVar37,in_q8,4,0);
              auVar30 = SatQ(auVar33,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar38,in_q9,4,0);
              auVar36 = SatQ(auVar38,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar37,in_q9,4,0);
              auVar37 = SatQ(auVar38,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(in_q0,in_q4,4,0);
              auVar38 = SatQ(auVar38,4,0);
              auVar33 = VectorDoubleMultiplyHighHalf(in_q11,in_q4,4,0);
              auVar40 = SatQ(auVar33,4,0);
              auVar33 = VectorDoubleMultiplyHighHalf(in_q11,in_q5,4,0);
              auVar33 = SatQ(auVar33,4,0);
              auVar39 = VectorDoubleMultiplyHighHalf(in_q0,in_q5,4,0);
              in_q4 = SatQ(auVar39,4,0);
              auVar39 = VectorSub(auVar29,auVar37,4);
              auVar38 = VectorSub(auVar38,auVar33,4);
              auVar33 = VectorAdd(auVar34,auVar39,4);
              in_q5 = VectorAdd(auVar38,in_q14,4);
              auVar30 = VectorAdd(auVar30,auVar36,4);
              auVar38 = VectorSub(in_q14,auVar38,4);
              auVar29 = VectorSub(in_q5,auVar33,4);
              in_q0 = VectorSub(auVar31,auVar30,4);
              auVar37 = VectorAdd(auVar40,in_q4,4);
              *(longlong *)((int)piVar22 + 0x20) = auVar29._0_8_;
              *(longlong *)((int)piVar22 + 0x28) = auVar29._8_8_;
              auVar29 = VectorAdd(auVar38,in_q0,4);
              auVar39 = VectorSub(auVar34,auVar39,4);
              in_q10 = VectorAdd(auVar37,in_q15,4);
              *(longlong *)piVar22 = auVar29._0_8_;
              *(longlong *)((int)piVar22 + 8) = auVar29._8_8_;
              auVar29 = VectorSub(in_q15,auVar37,4);
              auVar38 = VectorSub(auVar38,in_q0,4);
              in_q11 = VectorAdd(auVar31,auVar30,4);
              in_q6 = VectorAdd(in_q5,auVar33,4);
              *(longlong *)((int)piVar22 + 0x40) = auVar38._0_8_;
              *(longlong *)((int)piVar22 + 0x48) = auVar38._8_8_;
              auVar38 = VectorSub(auVar29,auVar39,4);
              in_q7 = VectorAdd(in_q10,in_q11,4);
              *(longlong *)((int)piVar22 + 0x10) = auVar38._0_8_;
              *(longlong *)((int)piVar22 + 0x18) = auVar38._8_8_;
              auVar38 = VectorSub(in_q10,in_q11,4);
              puVar4 = (undefined4 *)0x360;
              puVar1 = (undefined4 *)0x370;
              lVar28 = 2;
              puVar19 = puVar2;
              while( true ) {
                *puVar19 = *puVar4;
                puVar19[1] = *puVar1;
                puVar19 = puVar19 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x368;
              puVar1 = (undefined4 *)0x378;
              lVar28 = 2;
              while( true ) {
                *puVar19 = *puVar4;
                puVar19[1] = *puVar1;
                puVar19 = puVar19 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar2 = (undefined4 *)((int)puVar2 + iVar9);
              *(longlong *)((int)piVar22 + 0x30) = auVar38._0_8_;
              *(longlong *)((int)piVar22 + 0x38) = auVar38._8_8_;
              auVar38 = VectorAdd(auVar29,auVar39,4);
              *(longlong *)((int)piVar22 + 0x50) = auVar38._0_8_;
              *(longlong *)((int)piVar22 + 0x58) = auVar38._8_8_;
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar2 = *puVar4;
                puVar2[1] = *puVar1;
                puVar2 = puVar2 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar2 = *puVar4;
                puVar2[1] = *puVar1;
                puVar2 = puVar2 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar4;
                puVar13[1] = *puVar1;
                puVar13 = puVar13 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar4;
                puVar13[1] = *puVar1;
                puVar13 = puVar13 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              in_q8 = *(undefined1 (*) [16])((int)piVar22 + 0x40);
              in_q9 = *(undefined1 (*) [16])((int)piVar22 + 0x50);
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar24 = *puVar4;
                puVar24[1] = *puVar1;
                puVar24 = puVar24 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar24 = *puVar4;
                puVar24[1] = *puVar1;
                puVar24 = puVar24 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
            } while (cVar25 != cVar27);
            puVar16 = (undefined4 *)((int)puVar11 + iVar9);
            iVar15 = *(int *)((int)piVar22 + 0x68) + 1;
            puVar17 = (undefined4 *)((int)puVar8 + *(int *)((int)piVar22 + 0x150));
          } while (iVar15 != *(int *)((int)piVar22 + 0x108));
        }
      }
      iVar7 = *(int *)((int)piVar22 + 400);
      *(int *)((int)piVar22 + 400) = iVar7 + -1;
      uVar10 = *(undefined4 *)((int)piVar22 + 0x338);
      *(int *)((int)piVar22 + 0x108) = *(int *)((int)piVar22 + 0x108) >> 2;
      iVar9 = *(int *)((int)piVar22 + 100);
      *(int *)((int)piVar22 + 100) = iVar9 << 2;
      *(int *)((int)piVar22 + 0x10c) = iVar9 * 0x18 + *(int *)((int)piVar22 + 0x10c);
      *(undefined4 *)((int)piVar22 + 0x338) = *(undefined4 *)((int)piVar22 + 0x170);
      if (iVar7 + -1 == 1) break;
      *(undefined4 *)((int)piVar22 + 0x170) = uVar10;
    }
  }
  if (0 < piVar22[0x42]) {
    iVar7 = piVar22[0x19];
    iVar6 = piVar22[0xa2];
    iVar12 = iVar7 << 3;
    iVar9 = iVar6 << 3;
    if (0 < iVar7) {
      iVar15 = iVar6 << 4;
      iVar7 = iVar7 << 4;
      iVar6 = iVar6 * 0x18;
      *piVar22 = 0;
      do {
        puVar17 = *(undefined4 **)((int)piVar22 + 0x194);
        iVar14 = 0;
        puVar16 = *(undefined4 **)((int)piVar22 + 0x10c);
        puVar11 = *(undefined4 **)((int)piVar22 + 0x170);
        do {
          puVar8 = (undefined4 *)0x3e0;
          puVar5 = (undefined4 *)0x3f0;
          lVar28 = 2;
          puVar4 = puVar17;
          puVar17 = puVar11;
          puVar1 = puVar16;
          puVar2 = puVar11;
          while( true ) {
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar8 = (undefined4 *)0x3e8;
          puVar5 = (undefined4 *)0x3f8;
          lVar28 = 2;
          while( true ) {
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar17 = (undefined4 *)((int)puVar17 + iVar9);
          puVar13 = (undefined4 *)(iVar7 + (int)puVar16);
          puVar19 = (undefined4 *)((int)puVar11 + iVar6);
          iVar3 = *(int *)((int)piVar22 + 100);
          puVar8 = (undefined4 *)0x3a0;
          puVar5 = (undefined4 *)0x3b0;
          lVar28 = 2;
          puVar2 = puVar1;
          while( true ) {
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar8 = (undefined4 *)0x3a8;
          puVar5 = (undefined4 *)0x3b8;
          lVar28 = 2;
          while( true ) {
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar1 = (undefined4 *)((int)puVar1 + iVar12);
          iVar14 = iVar14 + 4;
          cVar27 = SBORROW4(iVar3,iVar14);
          cVar25 = iVar3 - iVar14 < 0;
          uVar26 = iVar3 == iVar14;
          puVar2 = (undefined4 *)(iVar15 + (int)puVar11);
          puVar8 = (undefined4 *)0x380;
          puVar5 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar8 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar5 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar5 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar8 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar5 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar17 = (undefined4 *)0x360;
          puVar8 = (undefined4 *)0x370;
          lVar28 = 2;
          auVar38 = in_q8;
          while( true ) {
            *puVar17 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar8 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar17 = (undefined4 *)0x368;
          puVar8 = (undefined4 *)0x378;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar8 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar16 = puVar16 + 8;
          puVar17 = (undefined4 *)0x380;
          puVar8 = (undefined4 *)0x390;
          lVar28 = 2;
          auVar33 = in_q9;
          while( true ) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            *puVar8 = *puVar13;
            puVar13 = puVar13 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar17 = (undefined4 *)0x388;
          puVar8 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            *puVar8 = *puVar13;
            puVar13 = puVar13 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          auVar29 = VectorDoubleMultiplyHighHalf(auVar38,in_q10,4,0);
          auVar30 = SatQ(auVar29,4,0);
          puVar5 = (undefined4 *)(iVar15 + (int)puVar4);
          puVar11 = puVar11 + 8;
          auVar29 = VectorDoubleMultiplyHighHalf(auVar33,in_q10,4,0);
          auVar29 = SatQ(auVar29,4,0);
          auVar33 = VectorDoubleMultiplyHighHalf(auVar33,in_q11,4,0);
          auVar33 = SatQ(auVar33,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(auVar38,in_q11,4,0);
          auVar39 = SatQ(auVar38,4,0);
          puVar17 = (undefined4 *)0x340;
          puVar8 = (undefined4 *)0x350;
          lVar28 = 2;
          auVar38 = in_q6;
          while( true ) {
            *puVar17 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar17 = (undefined4 *)0x348;
          puVar8 = (undefined4 *)0x358;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar8 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          }
          auVar30 = VectorSub(auVar30,auVar33,4);
          puVar8 = (undefined4 *)0x360;
          puVar2 = (undefined4 *)0x370;
          lVar28 = 2;
          puVar17 = puVar4;
          auVar33 = in_q7;
          while( true ) {
            *puVar8 = *puVar1;
            puVar1 = puVar1 + 1;
            *puVar2 = *puVar1;
            puVar1 = puVar1 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar8 = (undefined4 *)0x368;
          puVar2 = (undefined4 *)0x378;
          lVar28 = 2;
          while( true ) {
            *puVar8 = *puVar1;
            puVar1 = puVar1 + 1;
            *puVar2 = *puVar1;
            puVar1 = puVar1 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar19 = (undefined4 *)((int)puVar17 + iVar6);
          puVar17 = puVar17 + 8;
          auVar37 = VectorAdd(auVar29,auVar39,4);
          auVar29 = VectorDoubleMultiplyHighHalf(auVar38,in_q8,4,0);
          auVar29 = SatQ(auVar29,4,0);
          auVar39 = VectorDoubleMultiplyHighHalf(auVar33,in_q8,4,0);
          auVar39 = SatQ(auVar39,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(auVar38,in_q9,4,0);
          auVar38 = SatQ(auVar38,4,0);
          auVar33 = VectorDoubleMultiplyHighHalf(auVar33,in_q9,4,0);
          auVar31 = SatQ(auVar33,4,0);
          auVar39 = VectorAdd(auVar39,auVar38,4);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q11,in_q6,4,0);
          auVar33 = SatQ(auVar38,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q5,in_q6,4,0);
          auVar34 = SatQ(auVar38,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q5,in_q7,4,0);
          auVar38 = SatQ(auVar38,4,0);
          auVar31 = VectorSub(auVar29,auVar31,4);
          auVar29 = VectorDoubleMultiplyHighHalf(in_q11,in_q7,4,0);
          in_q6 = SatQ(auVar29,4,0);
          auVar33 = VectorSub(auVar33,auVar38,4);
          auVar38 = VectorAdd(auVar30,auVar31,4);
          in_q7 = VectorAdd(auVar33,in_q14,4);
          in_q5 = VectorSub(auVar37,auVar39,4);
          auVar33 = VectorSub(in_q14,auVar33,4);
          auVar29 = VectorSub(in_q7,auVar38,4);
          auVar34 = VectorAdd(auVar34,in_q6,4);
          auVar30 = VectorSub(auVar30,auVar31,4);
          *(longlong *)(piVar22 + 0x32) = auVar29._0_8_;
          *(longlong *)(piVar22 + 0x34) = auVar29._8_8_;
          auVar29 = VectorAdd(auVar33,in_q5,4);
          in_q10 = VectorAdd(auVar34,in_q15,4);
          in_q11 = VectorAdd(auVar37,auVar39,4);
          *(longlong *)(piVar22 + 0x2a) = auVar29._0_8_;
          *(longlong *)(piVar22 + 0x2c) = auVar29._8_8_;
          auVar38 = VectorAdd(in_q7,auVar38,4);
          auVar29 = VectorSub(in_q15,auVar34,4);
          VectorSub(auVar33,in_q5,4);
          *(longlong *)(piVar22 + 0x22) = auVar38._0_8_;
          *(longlong *)(piVar22 + 0x24) = auVar38._8_8_;
          auVar38 = VectorAdd(in_q10,in_q11,4);
          VectorAdd(auVar29,auVar30,4);
          *(longlong *)(piVar22 + 0x26) = auVar38._0_8_;
          *(longlong *)(piVar22 + 0x28) = auVar38._8_8_;
          auVar38 = VectorSub(auVar29,auVar30,4);
          *(longlong *)(piVar22 + 0x2e) = auVar38._0_8_;
          *(longlong *)(piVar22 + 0x30) = auVar38._8_8_;
          auVar38 = VectorSub(in_q10,in_q11,4);
          *(longlong *)(piVar22 + 0x36) = auVar38._0_8_;
          *(longlong *)(piVar22 + 0x38) = auVar38._8_8_;
          puVar8 = (undefined4 *)0x380;
          puVar1 = (undefined4 *)0x390;
          lVar28 = 2;
          puVar2 = puVar4;
          while( true ) {
            *puVar2 = *puVar8;
            puVar2[1] = *puVar1;
            puVar2 = puVar2 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar1 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar2 = *puVar8;
            puVar2[1] = *puVar1;
            puVar2 = puVar2 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar4 = (undefined4 *)((int)puVar4 + iVar9);
          puVar8 = (undefined4 *)0x380;
          puVar1 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar8;
            puVar4[1] = *puVar1;
            puVar4 = puVar4 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar1 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar8;
            puVar4[1] = *puVar1;
            puVar4 = puVar4 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar1 = puVar1 + 1;
          }
          in_q8 = *(undefined1 (*) [16])(piVar22 + 0x32);
          in_q9 = *(undefined1 (*) [16])(piVar22 + 0x36);
          puVar8 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar5 = *puVar8;
            puVar5[1] = *puVar4;
            puVar5 = puVar5 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar5 = *puVar8;
            puVar5[1] = *puVar4;
            puVar5 = puVar5 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar8 = (undefined4 *)0x300;
          puVar5 = (undefined4 *)0x310;
          lVar28 = 2;
          while( true ) {
            *puVar19 = *puVar8;
            puVar19[1] = *puVar5;
            puVar19 = puVar19 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar8 = (undefined4 *)0x308;
          puVar5 = (undefined4 *)0x318;
          lVar28 = 2;
          while( true ) {
            *puVar19 = *puVar8;
            puVar19[1] = *puVar5;
            puVar19 = puVar19 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
        } while (!(bool)uVar26 && cVar25 == cVar27);
        iVar14 = *piVar22;
        piVar22[0x5c] = piVar22[0x5c] + iVar12;
        *piVar22 = iVar14 + 1;
        piVar22[0x65] = piVar22[0x65] + iVar12;
      } while (iVar14 + 1 != piVar22[0x42]);
    }
  }
  return;
}



/* ===== skv_mixed_radix_fft_forward_int32_scaled_neon @ 000207a4 size=2808 ===== */

void skv_mixed_radix_fft_forward_int32_scaled_neon
               (undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 (*pauVar18) [16];
  undefined4 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  char cVar25;
  undefined1 uVar26;
  char cVar27;
  longlong lVar28;
  undefined1 in_q0 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 in_q5 [16];
  undefined1 in_q6 [16];
  undefined1 in_q7 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar29 [16];
  undefined1 in_q10 [16];
  undefined1 in_q11 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_q12 [16];
  undefined1 auVar33 [16];
  undefined1 in_q13 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_q14 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_q15 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_2f8 [4];
  int local_2f4;
  int local_210;
  int local_20c;
  undefined4 *local_188;
  undefined4 local_168;
  int local_164;
  undefined4 *local_e0;
  int local_dc;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  uStack_44 = in_q6._0_8_;
  uStack_3c = in_q6._8_8_;
  uStack_34 = in_q7._0_8_;
  uStack_2c = in_q7._8_8_;
  puVar21 = auStack_2f8;
  puVar22 = auStack_2f8;
  local_e0 = param_1;
  local_168 = param_4;
  iVar8 = param_3[1];
  local_164 = *param_3;
  local_20c = iVar8;
  iVar12 = *param_3 * 2;
  local_210 = param_3[iVar12 + 0x3fffffff];
  local_dc = param_3[iVar12 + 0x40000000];
  if (local_dc == 8) {
    local_dc = iVar8 * 2;
    if (0 < iVar8) {
      iVar6 = 0;
      iVar15 = iVar8 * 0x30;
      iVar3 = 0x20;
      iVar12 = iVar8 * 8;
      iVar14 = 0x20;
      puVar17 = param_2 + iVar8 * 2;
      iVar7 = iVar8 << 4;
      local_2f4 = iVar8 * 0x18;
      puVar21 = auStack_2f8;
      in_q7 = in_q11;
      do {
        iVar8 = *(int *)(puVar21 + 0xec);
        iVar20 = *(int *)(puVar21 + 4);
        iVar6 = iVar6 + 4;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar11 = puVar17;
        puVar5 = puVar17;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar17 = (undefined4 *)((int)puVar17 + iVar12);
        cVar27 = SBORROW4(iVar8,iVar6);
        cVar25 = iVar8 - iVar6 < 0;
        uVar26 = iVar8 == iVar6;
        uVar24 = 0x7999;
        puVar16 = (undefined4 *)0x300;
        puVar10 = (undefined4 *)0x310;
        lVar28 = 2;
        puVar5 = param_2;
        puVar4 = param_2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x308;
        puVar10 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar1 = (undefined4 *)((int)param_2 + iVar20);
        uVar24 = uVar24 & 0xffff | 0x5a820000;
        puVar2 = (undefined4 *)(iVar15 + (int)puVar5);
        puVar16 = (undefined4 *)0x3a0;
        puVar10 = (undefined4 *)0x3b0;
        lVar28 = 2;
        puVar4 = puVar17;
        auVar31 = in_q9;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x3a8;
        puVar10 = (undefined4 *)0x3b8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar17 + iVar7);
        puVar17 = (undefined4 *)((int)puVar11 + iVar3);
        param_2 = (undefined4 *)((int)puVar5 + iVar14);
        puVar16 = (undefined4 *)0x3c0;
        puVar10 = (undefined4 *)0x3d0;
        lVar28 = 2;
        puVar11 = puVar4;
        while( true ) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x3c8;
        puVar10 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar12);
        *(longlong *)(puVar21 + 0x68) = in_q8._0_8_;
        *(longlong *)(puVar21 + 0x70) = in_q8._8_8_;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        auVar40 = in_q10;
        while( true ) {
          *puVar16 = *puVar1;
          puVar1 = puVar1 + 1;
          *puVar10 = *puVar1;
          puVar1 = puVar1 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar1;
          puVar1 = puVar1 + 1;
          *puVar10 = *puVar1;
          puVar1 = puVar1 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar5 = param_1 + 0x10;
        puVar16 = (undefined4 *)0x390;
        puVar10 = (undefined4 *)0x3a0;
        lVar28 = 2;
        puVar11 = puVar4;
        auVar30 = auVar31;
        while( true ) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x398;
        puVar10 = (undefined4 *)0x3a8;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + iVar7);
        puVar16 = (undefined4 *)0x320;
        puVar10 = (undefined4 *)0x330;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x328;
        puVar10 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar9 = 0xa57d8667;
        *(longlong *)(puVar21 + 0x208) = in_q1._0_8_;
        *(longlong *)(puVar21 + 0x210) = in_q1._8_8_;
        auVar42 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x68),auVar30,4,0);
        *(longlong *)(puVar21 + 0x1f8) = in_q0._0_8_;
        *(longlong *)(puVar21 + 0x200) = in_q0._8_8_;
        auVar38 = VectorHalvingSubtract(in_q9,in_q10,4,0);
        auVar41 = VectorHalvingSubtract(in_q8,in_q2,4,0);
        auVar34 = VectorHalvingAdd(in_q9,in_q10,4,0);
        puVar16 = (undefined4 *)0x320;
        puVar10 = (undefined4 *)0x330;
        lVar28 = 2;
        auVar36 = in_q3;
        auVar37 = in_q2;
        while( true ) {
          *puVar16 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar10 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x328;
        puVar10 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar16 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar10 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        auVar43 = VectorHalvingSubtract(auVar31,auVar36,4,0);
        auVar29 = VectorHalvingAdd(auVar31,auVar36,4,0);
        auVar33 = VectorHalvingAdd(in_q8,auVar37,4,0);
        auVar36 = VectorAdd(auVar41,auVar43,4);
        auVar41 = VectorSub(auVar41,auVar43,4);
        auVar31._8_8_ = CONCAT44(uVar9,uVar9);
        auVar31._0_8_ = CONCAT44(uVar9,uVar9);
        auVar37 = VectorSub(auVar38,auVar42,4);
        auVar31 = VectorDoubleMultiplyHighHalf(auVar36,auVar31,4,0);
        auVar43 = SatQ(auVar31,4,0);
        auVar36._8_8_ = CONCAT44(uVar24,uVar24);
        auVar36._0_8_ = CONCAT44(uVar24,uVar24);
        auVar42 = VectorAdd(auVar42,auVar38,4);
        auVar31 = VectorDoubleMultiplyHighHalf(auVar37,auVar36,4,0);
        auVar36 = SatQ(auVar31,4,0);
        auVar37._8_8_ = CONCAT44(uVar9,uVar9);
        auVar37._0_8_ = CONCAT44(uVar9,uVar9);
        puVar4 = param_1 + 0x18;
        auVar31 = VectorDoubleMultiplyHighHalf(auVar41,auVar37,4,0);
        auVar31 = SatQ(auVar31,4,0);
        auVar41._8_8_ = CONCAT44(uVar24,uVar24);
        auVar41._0_8_ = CONCAT44(uVar24,uVar24);
        *(longlong *)(puVar21 + 0x230) = auVar36._0_8_;
        *(longlong *)(puVar21 + 0x238) = auVar36._8_8_;
        auVar36 = VectorDoubleMultiplyHighHalf(auVar42,auVar41,4,0);
        auVar42 = SatQ(auVar36,4,0);
        auVar32 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x68),auVar30,4,0);
        auVar30 = VectorHalvingSubtract(auVar40,in_q2,4,0);
        auVar44 = VectorHalvingAdd(auVar40,in_q2,4,0);
        auVar37 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x1f8),in_q12,4,0);
        auVar41 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x1f8),in_q12,4,0);
        auVar40 = FloatVectorNeg(auVar30,1,4);
        auVar30 = VectorHalvingSubtract(in_q7,in_q3,4,0);
        auVar38 = VectorHalvingAdd(in_q7,in_q3,4,0);
        auVar36 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x208),in_q13,4,0);
        auVar35 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x208),in_q13,4,0);
        *(longlong *)(puVar21 + 0x220) = auVar38._0_8_;
        *(longlong *)(puVar21 + 0x228) = auVar38._8_8_;
        auVar39 = VectorHalvingAdd(auVar42,auVar31,4,0);
        auVar38 = VectorHalvingSubtract(auVar42,auVar31,4,0);
        auVar31 = VectorHalvingAdd(auVar32,auVar33,4,0);
        *(longlong *)(puVar21 + 0x208) = auVar36._0_8_;
        *(longlong *)(puVar21 + 0x210) = auVar36._8_8_;
        auVar36 = VectorHalvingSubtract(auVar32,auVar33,4,0);
        auVar32 = VectorHalvingAdd(auVar37,auVar30,4,0);
        *(longlong *)(puVar21 + 0x240) = auVar36._0_8_;
        *(longlong *)(puVar21 + 0x248) = auVar36._8_8_;
        auVar33 = VectorHalvingAdd(auVar41,auVar44,4,0);
        auVar44 = VectorHalvingSubtract(auVar41,auVar44,4,0);
        auVar42 = VectorHalvingSubtract(auVar34,auVar29,4,0);
        auVar41 = VectorHalvingAdd(auVar34,auVar29,4,0);
        auVar30 = VectorHalvingSubtract(auVar37,auVar30,4,0);
        auVar29 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x230),auVar43,4,0);
        VectorHalvingAdd(auVar33,auVar31,4,0);
        auVar36 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x230),auVar43,4,0);
        auVar34 = VectorHalvingAdd(auVar32,auVar39,4,0);
        VectorHalvingSubtract(auVar33,auVar31,4,0);
        auVar32 = VectorHalvingSubtract(auVar32,auVar39,4,0);
        VectorHalvingAdd(auVar44,auVar42,4,0);
        auVar37 = VectorTranspose(auVar34,4);
        auVar43 = VectorHalvingAdd(auVar30,auVar29,4,0);
        auVar30 = VectorHalvingSubtract(auVar30,auVar29,4,0);
        VectorHalvingSubtract(auVar44,auVar42,4,0);
        auVar42 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x208),auVar40,4,0);
        *(longlong *)(puVar21 + 0x1f8) = auVar34._0_8_;
        *(longlong *)(puVar21 + 0x200) = auVar34._8_8_;
        auVar31 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x208),auVar40,4,0);
        *(longlong *)(puVar21 + 0x68) = auVar37._0_8_;
        *(longlong *)(puVar21 + 0x70) = auVar37._8_8_;
        in_q0 = VectorHalvingAdd(auVar42,auVar36,4,0);
        in_q3 = VectorHalvingSubtract(auVar42,auVar36,4,0);
        auVar40 = VectorTranspose(auVar32,4);
        auVar36 = VectorHalvingAdd(auVar35,*(undefined1 (*) [16])(puVar21 + 0x220),4,0);
        auVar37 = VectorHalvingSubtract(auVar35,*(undefined1 (*) [16])(puVar21 + 0x220),4,0);
        auVar42 = VectorTranspose(auVar43,4);
        *(longlong *)(puVar21 + 0x208) = auVar43._0_8_;
        *(longlong *)(puVar21 + 0x210) = auVar43._8_8_;
        auVar34 = VectorTranspose(auVar30,4);
        *(undefined8 *)(puVar21 + 0x130) = *(undefined8 *)(puVar21 + 0x1f8);
        *(undefined8 *)(puVar21 + 0x138) = *(undefined8 *)(puVar21 + 0x208);
        *(undefined8 *)(puVar21 + 0xf0) = *(undefined8 *)(puVar21 + 0x68);
        *(longlong *)(puVar21 + 0xf8) = auVar42._0_8_;
        VectorHalvingAdd(auVar36,auVar41,4,0);
        VectorHalvingSubtract(auVar36,auVar41,4,0);
        *(longlong *)(puVar21 + 0x110) = auVar40._0_8_;
        *(longlong *)(puVar21 + 0x118) = auVar34._0_8_;
        auVar36 = VectorHalvingSubtract(auVar31,auVar38,4,0);
        in_q1 = VectorHalvingAdd(auVar31,auVar38,4,0);
        *(longlong *)(puVar21 + 0x150) = auVar32._0_8_;
        *(longlong *)(puVar21 + 0x158) = auVar30._0_8_;
        in_q12 = VectorTranspose(in_q0,4);
        in_q6 = VectorHalvingSubtract(auVar37,*(undefined1 (*) [16])(puVar21 + 0x240),4,0);
        in_q13 = VectorHalvingAdd(auVar37,*(undefined1 (*) [16])(puVar21 + 0x240),4,0);
        *(undefined8 *)(puVar21 + 0x170) = *(undefined8 *)(puVar21 + 0x70);
        *(longlong *)(puVar21 + 0x178) = auVar42._8_8_;
        in_q7 = VectorTranspose(in_q3,4);
        *(longlong *)(puVar21 + 0x198) = auVar40._8_8_;
        *(longlong *)(puVar21 + 0x1a0) = auVar34._8_8_;
        auVar31 = VectorTranspose(auVar36,4);
        *(undefined8 *)(puVar21 + 0x1b8) = *(undefined8 *)(puVar21 + 0x200);
        *(undefined8 *)(puVar21 + 0x1c0) = *(undefined8 *)(puVar21 + 0x210);
        *(longlong *)(puVar21 + 0x1d8) = auVar32._8_8_;
        *(longlong *)(puVar21 + 0x1e0) = auVar30._8_8_;
        *(longlong *)(puVar21 + 0x100) = in_q12._0_8_;
        *(longlong *)(puVar21 + 0x108) = auVar31._0_8_;
        in_q10 = VectorTranspose(in_q1,4);
        *(longlong *)(puVar21 + 0x140) = in_q0._0_8_;
        *(longlong *)(puVar21 + 0x148) = auVar36._0_8_;
        *(longlong *)(puVar21 + 0x180) = in_q12._8_8_;
        *(longlong *)(puVar21 + 0x188) = auVar31._8_8_;
        *(longlong *)(puVar21 + 0x1c8) = in_q0._8_8_;
        *(longlong *)(puVar21 + 0x1d0) = auVar36._8_8_;
        *(longlong *)(puVar21 + 0x120) = in_q7._0_8_;
        *(longlong *)(puVar21 + 0x128) = in_q10._0_8_;
        *(longlong *)(puVar21 + 0x160) = in_q3._0_8_;
        *(longlong *)(puVar21 + 0x168) = in_q1._0_8_;
        *(longlong *)(puVar21 + 0x1a8) = in_q7._8_8_;
        *(longlong *)(puVar21 + 0x1b0) = in_q10._8_8_;
        *(longlong *)(puVar21 + 0x1e8) = in_q3._8_8_;
        *(longlong *)(puVar21 + 0x1f0) = in_q1._8_8_;
        puVar1 = param_1 + 0x20;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar11 = param_1;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar11 = param_1 + 8;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar11 = param_1 + 0x28;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar10;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar10;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar5 = param_1 + 0x30;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar10;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar10;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4 = param_1 + 0x38;
        param_1 = param_1 + 0x40;
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar16;
          puVar1[1] = *puVar10;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar16;
          puVar1[1] = *puVar10;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar16;
          puVar11[1] = *puVar10;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar10;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar16;
          puVar5[1] = *puVar10;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        in_q8 = *(undefined1 (*) [16])(puVar21 + 0x1d8);
        in_q9 = *(undefined1 (*) [16])(puVar21 + 0x1e8);
        puVar16 = (undefined4 *)0x380;
        puVar10 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar10;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar16 = (undefined4 *)0x388;
        puVar10 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar16;
          puVar4[1] = *puVar10;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        }
        in_q2 = in_q1;
        in_q5 = in_q3;
        in_q11 = in_q7;
      } while (!(bool)uVar26 && cVar25 == cVar27);
    }
    *(undefined4 *)(puVar21 + 0x170) = *(undefined4 *)(puVar21 + 0x2f8);
    *(int *)(puVar21 + 0xec) = *(int *)(puVar21 + 0xec) >> 2;
    *(int *)(puVar21 + 0x194) = *(int *)(puVar21 + 0x194) + -1;
    *(undefined4 *)(puVar21 + 0x2f8) = *(undefined4 *)(puVar21 + 0x218);
  }
  else if (local_dc == 4) {
    if (0 < iVar8) {
      iVar6 = iVar8 * 0x18;
      iVar12 = iVar8 << 3;
      iVar7 = iVar8 << 4;
      iVar15 = 0;
      puVar22 = auStack_2f8;
      do {
        puVar4 = (undefined4 *)((int)param_2 + iVar6);
        puVar17 = (undefined4 *)0x380;
        puVar16 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar10 = param_2;
        puVar11 = param_1;
        puVar5 = param_2;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x388;
        puVar16 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar12);
        puVar5 = (undefined4 *)((int)puVar10 + iVar7);
        pauVar18 = (undefined1 (*) [16])(puVar22 + 0x68);
        iVar15 = iVar15 + 4;
        puVar17 = (undefined4 *)0x3c0;
        puVar16 = (undefined4 *)0x3d0;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *param_2;
          param_2 = param_2 + 1;
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3c8;
        puVar16 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *param_2;
          param_2 = param_2 + 1;
          *puVar16 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar1 = puVar11 + 0x10;
        puVar17 = (undefined4 *)0x3e0;
        puVar16 = (undefined4 *)0x3f0;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3e8;
        puVar16 = (undefined4 *)0x3f8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar16 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        cVar27 = SBORROW4(iVar8,iVar15);
        cVar25 = iVar8 - iVar15 < 0;
        uVar26 = iVar8 == iVar15;
        puVar17 = (undefined4 *)0x3c0;
        puVar16 = (undefined4 *)0x3d0;
        lVar28 = 2;
        auVar31 = in_q12;
        auVar40 = in_q13;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x3c8;
        puVar16 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar16 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        *(longlong *)*(undefined1 (*) [16])(puVar22 + 0xf0) = auVar31._0_8_;
        *(longlong *)(puVar22 + 0xf8) = auVar31._8_8_;
        *(longlong *)(puVar22 + 0x100) = auVar40._0_8_;
        *(longlong *)(puVar22 + 0x108) = auVar40._8_8_;
        param_2 = puVar10 + 8;
        auVar31 = *(undefined1 (*) [16])(puVar22 + 0xf0);
        auVar40 = VectorHalvingSubtract(in_q13,in_q15,4,0);
        auVar36 = VectorHalvingAdd(in_q13,in_q15,4,0);
        puVar5 = puVar11 + 0x18;
        param_1 = puVar11 + 0x20;
        auVar34 = VectorHalvingAdd(in_q12,in_q14,4,0);
        auVar30 = VectorHalvingSubtract(in_q12,in_q14,4,0);
        auVar42 = VectorHalvingAdd(in_q8,auVar31,4,0);
        auVar37 = VectorHalvingSubtract(in_q8,auVar31,4,0);
        auVar41 = VectorHalvingAdd(in_q9,*(undefined1 (*) [16])(puVar22 + 0x100),4,0);
        auVar31 = VectorHalvingSubtract(in_q9,*(undefined1 (*) [16])(puVar22 + 0x100),4,0);
        in_q15 = VectorHalvingSubtract(auVar42,auVar34,4,0);
        VectorHalvingAdd(auVar42,auVar34,4,0);
        auVar42 = VectorHalvingAdd(auVar37,auVar40,4,0);
        in_q14 = VectorHalvingSubtract(auVar37,auVar40,4,0);
        VectorHalvingAdd(auVar41,auVar36,4,0);
        in_q11 = VectorHalvingSubtract(auVar41,auVar36,4,0);
        auVar40 = VectorTranspose(auVar42,4);
        *(longlong *)(puVar22 + 0xf0) = auVar42._0_8_;
        *(longlong *)(puVar22 + 0xf8) = auVar42._8_8_;
        auVar36 = VectorTranspose(in_q14,4);
        in_q12 = VectorHalvingSubtract(auVar31,auVar30,4,0);
        *(longlong *)(puVar22 + 0x68) = auVar40._0_8_;
        *(longlong *)(puVar22 + 0x70) = auVar36._0_8_;
        in_q13 = VectorHalvingAdd(auVar31,auVar30,4,0);
        in_q6._8_8_ = auVar36._8_8_;
        in_q6._0_8_ = auVar40._8_8_;
        in_q0._8_8_ = in_q14._0_8_;
        in_q0._0_8_ = SUB168(*(undefined1 (*) [16])(puVar22 + 0xf0),0);
        in_q10 = VectorTranspose(in_q12,4);
        auVar31 = VectorTranspose(in_q13,4);
        in_q7._8_8_ = auVar31._8_8_;
        in_q7._0_8_ = in_q10._8_8_;
        in_q1._8_8_ = in_q13._0_8_;
        in_q1._0_8_ = in_q12._0_8_;
        in_q5._8_8_ = in_q13._8_8_;
        in_q5._0_8_ = in_q12._8_8_;
        *(longlong *)(puVar22 + 0x78) = in_q10._0_8_;
        *(longlong *)(puVar22 + 0x80) = auVar31._0_8_;
        in_q8 = *pauVar18;
        in_q9 = pauVar18[1];
        puVar17 = (undefined4 *)0x380;
        puVar16 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar10 = puVar11;
        while( true ) {
          *puVar10 = *puVar17;
          puVar10[1] = *puVar16;
          puVar10 = puVar10 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x388;
        puVar16 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar10 = *puVar17;
          puVar10[1] = *puVar16;
          puVar10 = puVar10 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar11 = puVar11 + 8;
        puVar17 = (undefined4 *)0x300;
        puVar16 = (undefined4 *)0x310;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar17;
          puVar11[1] = *puVar16;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x308;
        puVar16 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar11 = *puVar17;
          puVar11[1] = *puVar16;
          puVar11 = puVar11 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x360;
        puVar16 = (undefined4 *)0x370;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar17;
          puVar1[1] = *puVar16;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x368;
        puVar16 = (undefined4 *)0x378;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar17;
          puVar1[1] = *puVar16;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x340;
        puVar16 = (undefined4 *)0x350;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar17;
          puVar5[1] = *puVar16;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar17 = (undefined4 *)0x348;
        puVar16 = (undefined4 *)0x358;
        lVar28 = 2;
        while( true ) {
          *puVar5 = *puVar17;
          puVar5[1] = *puVar16;
          puVar5 = puVar5 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        }
      } while (!(bool)uVar26 && cVar25 == cVar27);
    }
    *(undefined4 *)(puVar22 + 0x170) = *(undefined4 *)(puVar22 + 0x2f8);
    *(undefined4 *)(puVar22 + 0x2f8) = *(undefined4 *)(puVar22 + 0x218);
    *(int *)(puVar22 + 0x194) = *(int *)(puVar22 + 0x194) + -1;
    *(int *)(puVar22 + 0x21c) = *(int *)(puVar22 + 0xec);
    *(int *)(puVar22 + 0xec) = *(int *)(puVar22 + 0xec) >> 2;
    puVar21 = puVar22;
  }
  else {
    local_188 = param_1;
    local_168 = 0;
    puVar21 = auStack_2f8;
  }
  if (*(int *)(puVar21 + 0x194) < 2) {
    if (*(int *)(puVar21 + 0x194) == 0) {
      return;
    }
    *(undefined4 *)(puVar21 + 0x170) = *(undefined4 *)(puVar21 + 0x2f8);
  }
  else {
    iVar8 = *(int *)(puVar21 + 0x21c);
    iVar12 = iVar8 << 3;
    *(int *)(puVar21 + 0x110) = iVar8 * 0x18;
    *(int *)(puVar21 + 0x130) = iVar8 << 4;
    while( true ) {
      if (0 < *(int *)(puVar21 + 0xec)) {
        iVar7 = *(int *)(puVar21 + 0xe8);
        iVar8 = iVar7 << 3;
        if (0 < iVar7) {
          puVar17 = *(undefined4 **)(puVar21 + 0x170);
          puVar16 = *(undefined4 **)(puVar21 + 0x2f8);
          iVar6 = iVar7 << 4;
          iVar15 = 0;
          *(int *)(puVar21 + 0xf0) = iVar7 * 0x18;
          *(int *)(puVar21 + 0x150) = iVar7 << 5;
          do {
            puVar5 = *(undefined4 **)(puVar21 + 400);
            *(int *)(puVar21 + 0x68) = iVar15;
            iVar7 = 0;
            puVar10 = puVar16;
            puVar11 = puVar17;
            auVar31 = in_q6;
            do {
              puVar4 = (undefined4 *)0x300;
              puVar1 = (undefined4 *)0x310;
              lVar28 = 2;
              puVar2 = puVar17;
              puVar17 = puVar16;
              puVar19 = puVar5;
              puVar13 = puVar16;
              in_q6 = in_q1;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x308;
              puVar1 = (undefined4 *)0x318;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar17 = (undefined4 *)((int)puVar17 + iVar12);
              puVar23 = (undefined4 *)(iVar6 + (int)puVar5);
              iVar15 = *(int *)(puVar21 + 0x110);
              iVar7 = iVar7 + 4;
              puVar4 = (undefined4 *)0x3a0;
              puVar1 = (undefined4 *)0x3b0;
              lVar28 = 2;
              puVar13 = puVar19;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x3a8;
              puVar1 = (undefined4 *)0x3b8;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar19 = (undefined4 *)((int)puVar19 + iVar8);
              puVar5 = puVar5 + 8;
              puVar13 = (undefined4 *)(iVar15 + (int)puVar16);
              iVar15 = *(int *)(puVar21 + 0xe8);
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar1 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar1 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              cVar27 = SBORROW4(iVar7,iVar15);
              cVar25 = iVar7 - iVar15 < 0;
              puVar17 = (undefined4 *)0x360;
              puVar4 = (undefined4 *)0x370;
              lVar28 = 2;
              auVar40 = in_q10;
              while( true ) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x368;
              puVar4 = (undefined4 *)0x378;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              iVar15 = *(int *)(puVar21 + 0x130);
              puVar17 = (undefined4 *)0x390;
              puVar4 = (undefined4 *)0x3a0;
              lVar28 = 2;
              auVar30 = in_q9;
              while( true ) {
                *puVar17 = *puVar23;
                puVar23 = puVar23 + 1;
                *puVar4 = *puVar23;
                puVar23 = puVar23 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x398;
              puVar4 = (undefined4 *)0x3a8;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar23;
                puVar23 = puVar23 + 1;
                *puVar4 = *puVar23;
                puVar23 = puVar23 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              auVar36 = VectorDoubleMultiplyHighHalf(in_q8,auVar40,4,0);
              auVar37 = SatQ(auVar36,4,0);
              puVar1 = (undefined4 *)(iVar15 + (int)puVar16);
              puVar13 = (undefined4 *)((int)puVar2 + iVar6);
              puVar16 = puVar16 + 8;
              auVar40 = VectorDoubleMultiplyHighHalf(auVar30,auVar40,4,0);
              auVar41 = SatQ(auVar40,4,0);
              auVar40 = VectorDoubleMultiplyHighHalf(auVar30,in_q11,4,0);
              auVar36 = SatQ(auVar40,4,0);
              auVar40 = VectorDoubleMultiplyHighHalf(in_q8,in_q11,4,0);
              auVar30 = SatQ(auVar40,4,0);
              puVar17 = (undefined4 *)0x340;
              puVar4 = (undefined4 *)0x350;
              lVar28 = 2;
              auVar40 = auVar31;
              while( true ) {
                *puVar17 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar4 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar17 = (undefined4 *)0x348;
              puVar4 = (undefined4 *)0x358;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar4 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar17 = puVar17 + 1;
                puVar4 = puVar4 + 1;
              }
              auVar37 = VectorSub(auVar37,auVar36,4);
              puVar4 = (undefined4 *)0x360;
              puVar1 = (undefined4 *)0x370;
              lVar28 = 2;
              puVar17 = puVar2;
              auVar36 = in_q7;
              while( true ) {
                *puVar4 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x368;
              puVar1 = (undefined4 *)0x378;
              lVar28 = 2;
              while( true ) {
                *puVar4 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar1 = *puVar19;
                puVar19 = puVar19 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              auVar41 = VectorAdd(auVar41,auVar30,4);
              puVar23 = (undefined4 *)(*(int *)(puVar21 + 0xf0) + (int)puVar17);
              auVar30 = VectorDoubleMultiplyHighHalf(auVar40,in_q9,4,0);
              auVar42 = SatQ(auVar30,4,0);
              puVar17 = puVar17 + 8;
              auVar30 = VectorDoubleMultiplyHighHalf(auVar36,in_q9,4,0);
              auVar38 = SatQ(auVar30,4,0);
              auVar30 = VectorDoubleMultiplyHighHalf(auVar36,in_q10,4,0);
              auVar30 = SatQ(auVar30,4,0);
              auVar40 = VectorDoubleMultiplyHighHalf(auVar40,in_q10,4,0);
              auVar36 = SatQ(auVar40,4,0);
              auVar30 = VectorSub(auVar42,auVar30,4);
              auVar40 = VectorDoubleMultiplyHighHalf(in_q5,in_q7,4,0);
              auVar40 = SatQ(auVar40,4,0);
              auVar42 = VectorDoubleMultiplyHighHalf(in_q11,auVar31,4,0);
              auVar43 = SatQ(auVar42,4,0);
              auVar42 = VectorDoubleMultiplyHighHalf(in_q11,in_q7,4,0);
              auVar34 = SatQ(auVar42,4,0);
              auVar31 = VectorDoubleMultiplyHighHalf(in_q5,auVar31,4,0);
              auVar42 = SatQ(auVar31,4,0);
              auVar36 = VectorAdd(auVar38,auVar36,4);
              auVar31 = VectorSub(auVar43,auVar40,4);
              in_q7 = VectorHalvingAdd(auVar37,auVar30,4,0);
              auVar42 = VectorAdd(auVar42,auVar34,4);
              auVar34 = VectorHalvingAdd(in_q0,auVar31,4,0);
              in_q1 = VectorHalvingSubtract(auVar41,auVar36,4,0);
              auVar31 = VectorHalvingSubtract(in_q0,auVar31,4,0);
              auVar40 = VectorHalvingSubtract(auVar37,auVar30,4,0);
              in_q10 = VectorHalvingAdd(auVar41,auVar36,4,0);
              auVar36 = VectorHalvingSubtract(auVar34,in_q7,4,0);
              auVar30 = VectorHalvingAdd(auVar31,in_q1,4,0);
              VectorHalvingSubtract(auVar31,in_q1,4,0);
              *(longlong *)(puVar21 + 0x48) = auVar36._0_8_;
              *(longlong *)(puVar21 + 0x50) = auVar36._8_8_;
              auVar36 = VectorHalvingAdd(in_q6,auVar42,4,0);
              in_q11 = VectorHalvingSubtract(in_q6,auVar42,4,0);
              *(longlong *)(puVar21 + 0x28) = auVar30._0_8_;
              *(longlong *)(puVar21 + 0x30) = auVar30._8_8_;
              auVar31 = VectorHalvingAdd(auVar34,in_q7,4,0);
              VectorHalvingAdd(in_q11,auVar40,4,0);
              *(longlong *)(puVar21 + 8) = auVar31._0_8_;
              *(longlong *)(puVar21 + 0x10) = auVar31._8_8_;
              auVar31 = VectorHalvingSubtract(auVar36,in_q10,4,0);
              *(longlong *)(puVar21 + 0x58) = auVar31._0_8_;
              *(longlong *)(puVar21 + 0x60) = auVar31._8_8_;
              auVar31 = VectorHalvingAdd(auVar36,in_q10,4,0);
              *(longlong *)(puVar21 + 0x18) = auVar31._0_8_;
              *(longlong *)(puVar21 + 0x20) = auVar31._8_8_;
              auVar31 = VectorHalvingSubtract(in_q11,auVar40,4,0);
              *(longlong *)(puVar21 + 0x38) = auVar31._0_8_;
              *(longlong *)(puVar21 + 0x40) = auVar31._8_8_;
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              puVar19 = puVar2;
              while( true ) {
                *puVar19 = *puVar4;
                puVar19[1] = *puVar1;
                puVar19 = puVar19 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar19 = *puVar4;
                puVar19[1] = *puVar1;
                puVar19 = puVar19 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar2 = (undefined4 *)((int)puVar2 + iVar8);
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar2 = *puVar4;
                puVar2[1] = *puVar1;
                puVar2 = puVar2 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar2 = *puVar4;
                puVar2[1] = *puVar1;
                puVar2 = puVar2 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              in_q8 = *(undefined1 (*) [16])(puVar21 + 0x48);
              in_q9 = *(undefined1 (*) [16])(puVar21 + 0x58);
              puVar4 = (undefined4 *)0x380;
              puVar1 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar4;
                puVar13[1] = *puVar1;
                puVar13 = puVar13 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x388;
              puVar1 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar4;
                puVar13[1] = *puVar1;
                puVar13 = puVar13 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x320;
              puVar1 = (undefined4 *)0x330;
              lVar28 = 2;
              while( true ) {
                *puVar23 = *puVar4;
                puVar23[1] = *puVar1;
                puVar23 = puVar23 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar4 = (undefined4 *)0x328;
              puVar1 = (undefined4 *)0x338;
              lVar28 = 2;
              while( true ) {
                *puVar23 = *puVar4;
                puVar23[1] = *puVar1;
                puVar23 = puVar23 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar4 = puVar4 + 1;
                puVar1 = puVar1 + 1;
              }
              auVar31 = in_q6;
            } while (cVar25 != cVar27);
            puVar16 = (undefined4 *)((int)puVar10 + iVar8);
            iVar15 = *(int *)(puVar21 + 0x68) + 1;
            puVar17 = (undefined4 *)((int)puVar11 + *(int *)(puVar21 + 0x150));
          } while (iVar15 != *(int *)(puVar21 + 0xec));
        }
      }
      iVar7 = *(int *)(puVar21 + 0x194);
      *(int *)(puVar21 + 0x194) = iVar7 + -1;
      uVar9 = *(undefined4 *)(puVar21 + 0x2f8);
      *(int *)(puVar21 + 0xec) = *(int *)(puVar21 + 0xec) >> 2;
      iVar8 = *(int *)(puVar21 + 0xe8);
      *(int *)(puVar21 + 0xe8) = iVar8 << 2;
      *(int *)(puVar21 + 400) = iVar8 * 0x18 + *(int *)(puVar21 + 400);
      *(undefined4 *)(puVar21 + 0x2f8) = *(undefined4 *)(puVar21 + 0x170);
      if (iVar7 + -1 == 1) break;
      *(undefined4 *)(puVar21 + 0x170) = uVar9;
    }
  }
  if (0 < *(int *)(puVar21 + 0xec)) {
    iVar7 = *(int *)(puVar21 + 0xe8);
    iVar6 = *(int *)(puVar21 + 0x21c);
    iVar12 = iVar7 << 3;
    iVar8 = iVar6 << 3;
    if (0 < iVar7) {
      iVar15 = iVar6 << 4;
      iVar7 = iVar7 << 4;
      iVar6 = iVar6 * 0x18;
      *(undefined4 *)(puVar21 + 8) = 0;
      do {
        puVar17 = *(undefined4 **)(puVar21 + 0x218);
        iVar14 = 0;
        puVar16 = *(undefined4 **)(puVar21 + 400);
        puVar10 = *(undefined4 **)(puVar21 + 0x170);
        auVar31 = in_q6;
        do {
          puVar11 = (undefined4 *)0x300;
          puVar5 = (undefined4 *)0x310;
          lVar28 = 2;
          puVar4 = puVar17;
          puVar17 = puVar10;
          puVar1 = puVar16;
          puVar2 = puVar10;
          in_q6 = in_q1;
          while( true ) {
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar11 = (undefined4 *)0x308;
          puVar5 = (undefined4 *)0x318;
          lVar28 = 2;
          while( true ) {
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar17 = (undefined4 *)((int)puVar17 + iVar8);
          puVar13 = (undefined4 *)(iVar7 + (int)puVar16);
          puVar19 = (undefined4 *)((int)puVar10 + iVar6);
          iVar3 = *(int *)(puVar21 + 0xe8);
          puVar11 = (undefined4 *)0x3a0;
          puVar5 = (undefined4 *)0x3b0;
          lVar28 = 2;
          puVar2 = puVar1;
          while( true ) {
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar11 = (undefined4 *)0x3a8;
          puVar5 = (undefined4 *)0x3b8;
          lVar28 = 2;
          while( true ) {
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar1 = (undefined4 *)((int)puVar1 + iVar12);
          iVar14 = iVar14 + 4;
          cVar27 = SBORROW4(iVar3,iVar14);
          cVar25 = iVar3 - iVar14 < 0;
          uVar26 = iVar3 == iVar14;
          puVar2 = (undefined4 *)(iVar15 + (int)puVar10);
          puVar11 = (undefined4 *)0x380;
          puVar5 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar11 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar5 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar11 = (undefined4 *)0x388;
          puVar5 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar11 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar5 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar17 = (undefined4 *)0x360;
          puVar11 = (undefined4 *)0x370;
          lVar28 = 2;
          auVar40 = in_q10;
          while( true ) {
            *puVar17 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar11 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar17 = (undefined4 *)0x368;
          puVar11 = (undefined4 *)0x378;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar11 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar16 = puVar16 + 8;
          puVar17 = (undefined4 *)0x390;
          puVar11 = (undefined4 *)0x3a0;
          lVar28 = 2;
          auVar30 = in_q9;
          while( true ) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar17 = (undefined4 *)0x398;
          puVar11 = (undefined4 *)0x3a8;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          auVar36 = VectorDoubleMultiplyHighHalf(in_q8,auVar40,4,0);
          auVar37 = SatQ(auVar36,4,0);
          puVar5 = (undefined4 *)(iVar15 + (int)puVar4);
          puVar10 = puVar10 + 8;
          auVar40 = VectorDoubleMultiplyHighHalf(auVar30,auVar40,4,0);
          auVar41 = SatQ(auVar40,4,0);
          auVar40 = VectorDoubleMultiplyHighHalf(auVar30,in_q11,4,0);
          auVar36 = SatQ(auVar40,4,0);
          auVar40 = VectorDoubleMultiplyHighHalf(in_q8,in_q11,4,0);
          auVar30 = SatQ(auVar40,4,0);
          puVar17 = (undefined4 *)0x340;
          puVar11 = (undefined4 *)0x350;
          lVar28 = 2;
          auVar40 = auVar31;
          while( true ) {
            *puVar17 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar17 = (undefined4 *)0x348;
          puVar11 = (undefined4 *)0x358;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar2;
            puVar2 = puVar2 + 1;
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar17 = puVar17 + 1;
            puVar11 = puVar11 + 1;
          }
          auVar37 = VectorSub(auVar37,auVar36,4);
          puVar11 = (undefined4 *)0x360;
          puVar2 = (undefined4 *)0x370;
          lVar28 = 2;
          puVar17 = puVar4;
          auVar36 = in_q7;
          while( true ) {
            *puVar11 = *puVar1;
            puVar1 = puVar1 + 1;
            *puVar2 = *puVar1;
            puVar1 = puVar1 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar11 = (undefined4 *)0x368;
          puVar2 = (undefined4 *)0x378;
          lVar28 = 2;
          while( true ) {
            *puVar11 = *puVar1;
            puVar1 = puVar1 + 1;
            *puVar2 = *puVar1;
            puVar1 = puVar1 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar19 = (undefined4 *)((int)puVar17 + iVar6);
          puVar17 = puVar17 + 8;
          auVar41 = VectorAdd(auVar41,auVar30,4);
          auVar30 = VectorDoubleMultiplyHighHalf(auVar40,in_q9,4,0);
          auVar42 = SatQ(auVar30,4,0);
          auVar30 = VectorDoubleMultiplyHighHalf(auVar36,in_q9,4,0);
          auVar38 = SatQ(auVar30,4,0);
          auVar30 = VectorDoubleMultiplyHighHalf(auVar36,in_q10,4,0);
          auVar30 = SatQ(auVar30,4,0);
          auVar40 = VectorDoubleMultiplyHighHalf(auVar40,in_q10,4,0);
          auVar36 = SatQ(auVar40,4,0);
          auVar30 = VectorSub(auVar42,auVar30,4);
          auVar40 = VectorDoubleMultiplyHighHalf(in_q5,in_q7,4,0);
          auVar40 = SatQ(auVar40,4,0);
          auVar42 = VectorDoubleMultiplyHighHalf(in_q11,auVar31,4,0);
          auVar43 = SatQ(auVar42,4,0);
          auVar42 = VectorDoubleMultiplyHighHalf(in_q11,in_q7,4,0);
          auVar34 = SatQ(auVar42,4,0);
          auVar31 = VectorDoubleMultiplyHighHalf(in_q5,auVar31,4,0);
          auVar42 = SatQ(auVar31,4,0);
          auVar36 = VectorAdd(auVar38,auVar36,4);
          auVar31 = VectorSub(auVar43,auVar40,4);
          in_q7 = VectorHalvingAdd(auVar37,auVar30,4,0);
          auVar42 = VectorAdd(auVar42,auVar34,4);
          auVar34 = VectorHalvingAdd(in_q0,auVar31,4,0);
          in_q1 = VectorHalvingSubtract(auVar41,auVar36,4,0);
          auVar31 = VectorHalvingSubtract(in_q0,auVar31,4,0);
          auVar40 = VectorHalvingSubtract(auVar37,auVar30,4,0);
          in_q10 = VectorHalvingAdd(auVar41,auVar36,4,0);
          auVar36 = VectorHalvingSubtract(auVar34,in_q7,4,0);
          auVar30 = VectorHalvingAdd(auVar31,in_q1,4,0);
          VectorHalvingSubtract(auVar31,in_q1,4,0);
          *(longlong *)(puVar21 + 200) = auVar36._0_8_;
          *(longlong *)(puVar21 + 0xd0) = auVar36._8_8_;
          auVar36 = VectorHalvingAdd(in_q6,auVar42,4,0);
          in_q11 = VectorHalvingSubtract(in_q6,auVar42,4,0);
          *(longlong *)(puVar21 + 0xa8) = auVar30._0_8_;
          *(longlong *)(puVar21 + 0xb0) = auVar30._8_8_;
          auVar31 = VectorHalvingAdd(auVar34,in_q7,4,0);
          VectorHalvingAdd(in_q11,auVar40,4,0);
          *(longlong *)(puVar21 + 0x88) = auVar31._0_8_;
          *(longlong *)(puVar21 + 0x90) = auVar31._8_8_;
          auVar31 = VectorHalvingSubtract(auVar36,in_q10,4,0);
          *(longlong *)(puVar21 + 0xd8) = auVar31._0_8_;
          *(longlong *)(puVar21 + 0xe0) = auVar31._8_8_;
          auVar31 = VectorHalvingAdd(auVar36,in_q10,4,0);
          *(longlong *)(puVar21 + 0x98) = auVar31._0_8_;
          *(longlong *)(puVar21 + 0xa0) = auVar31._8_8_;
          auVar31 = VectorHalvingSubtract(in_q11,auVar40,4,0);
          *(longlong *)(puVar21 + 0xb8) = auVar31._0_8_;
          *(longlong *)(puVar21 + 0xc0) = auVar31._8_8_;
          puVar11 = (undefined4 *)0x380;
          puVar1 = (undefined4 *)0x390;
          lVar28 = 2;
          puVar2 = puVar4;
          while( true ) {
            *puVar2 = *puVar11;
            puVar2[1] = *puVar1;
            puVar2 = puVar2 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar11 = (undefined4 *)0x388;
          puVar1 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar2 = *puVar11;
            puVar2[1] = *puVar1;
            puVar2 = puVar2 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar4 = (undefined4 *)((int)puVar4 + iVar8);
          puVar11 = (undefined4 *)0x380;
          puVar1 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar11;
            puVar4[1] = *puVar1;
            puVar4 = puVar4 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar1 = puVar1 + 1;
          }
          puVar11 = (undefined4 *)0x388;
          puVar1 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar11;
            puVar4[1] = *puVar1;
            puVar4 = puVar4 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar1 = puVar1 + 1;
          }
          in_q8 = *(undefined1 (*) [16])(puVar21 + 200);
          in_q9 = *(undefined1 (*) [16])(puVar21 + 0xd8);
          puVar11 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar5 = *puVar11;
            puVar5[1] = *puVar4;
            puVar5 = puVar5 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar11 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar5 = *puVar11;
            puVar5[1] = *puVar4;
            puVar5 = puVar5 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar11 = (undefined4 *)0x320;
          puVar5 = (undefined4 *)0x330;
          lVar28 = 2;
          while( true ) {
            *puVar19 = *puVar11;
            puVar19[1] = *puVar5;
            puVar19 = puVar19 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar11 = (undefined4 *)0x328;
          puVar5 = (undefined4 *)0x338;
          lVar28 = 2;
          while( true ) {
            *puVar19 = *puVar11;
            puVar19[1] = *puVar5;
            puVar19 = puVar19 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          auVar31 = in_q6;
        } while (!(bool)uVar26 && cVar25 == cVar27);
        iVar14 = *(int *)(puVar21 + 8);
        *(int *)(puVar21 + 0x170) = *(int *)(puVar21 + 0x170) + iVar12;
        *(int *)(puVar21 + 8) = iVar14 + 1;
        *(int *)(puVar21 + 0x218) = *(int *)(puVar21 + 0x218) + iVar12;
      } while (iVar14 + 1 != *(int *)(puVar21 + 0xec));
    }
  }
  return;
}



/* ===== skv_mixed_radix_fft_backward_int32_unscaled_neon @ 0002129c size=2900 ===== */

void skv_mixed_radix_fft_backward_int32_unscaled_neon
               (undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int *piVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  char cVar25;
  undefined1 uVar26;
  char cVar27;
  longlong lVar28;
  undefined1 in_q0 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 in_q4 [16];
  undefined1 auVar29 [16];
  undefined1 in_q5 [16];
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined1 auVar30 [16];
  undefined1 in_q7 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar31 [16];
  undefined1 in_q10 [16];
  undefined1 auVar32 [16];
  undefined1 in_q11 [16];
  undefined1 auVar34 [16];
  undefined1 in_q12 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_q13 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_q14 [16];
  undefined1 auVar41 [16];
  undefined1 in_q15 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 local_338 [324];
  int local_1f4;
  undefined4 *local_190;
  undefined4 local_170;
  int local_16c;
  undefined4 *local_a8;
  int local_a4;
  int local_70;
  int local_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined1 auVar33 [16];
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  uStack_34 = in_q7._0_8_;
  uStack_2c = in_q7._8_8_;
  piVar20 = (int *)local_338;
  puVar21 = local_338;
  local_a8 = param_1;
  local_170 = param_4;
  iVar5 = param_3[1];
  local_16c = *param_3;
  local_1f4 = iVar5;
  iVar10 = *param_3 * 2;
  iVar14 = param_3[iVar10 + 0x3fffffff];
  local_a4 = param_3[iVar10 + 0x40000000];
  if (local_a4 == 8) {
    local_a4 = iVar5 * 2;
    if (0 < iVar5) {
      iVar10 = iVar5 * 8;
      iVar24 = iVar5 * 0x30;
      iVar9 = 0x20;
      iVar11 = 0x20;
      puVar13 = param_2 + iVar5 * 2;
      iVar6 = iVar5 << 4;
      local_6c = iVar14;
      iVar14 = 0;
      local_70 = iVar5 * 0x18;
      piVar20 = (int *)local_338;
      do {
        iVar5 = *(int *)((int)piVar20 + 0x144);
        puVar12 = (undefined4 *)0x3e0;
        puVar8 = (undefined4 *)0x3f0;
        lVar28 = 2;
        puVar4 = puVar13;
        puVar3 = puVar13;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x3e8;
        puVar8 = (undefined4 *)0x3f8;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar13 = (undefined4 *)((int)puVar13 + iVar10);
        iVar14 = iVar14 + 4;
        iVar19 = *(int *)((int)piVar20 + 0x2c8);
        cVar27 = SBORROW4(iVar5,iVar14);
        cVar25 = iVar5 - iVar14 < 0;
        uVar26 = iVar5 == iVar14;
        puVar12 = (undefined4 *)0x300;
        puVar8 = (undefined4 *)0x310;
        lVar28 = 2;
        puVar3 = puVar13;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x308;
        puVar8 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar13 = (undefined4 *)((int)puVar13 + iVar6);
        uVar23 = 0x7999;
        puVar12 = (undefined4 *)0x340;
        puVar8 = (undefined4 *)0x350;
        lVar28 = 2;
        puVar3 = param_2;
        puVar18 = puVar13;
        while( true ) {
          *puVar12 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar8 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x348;
        puVar8 = (undefined4 *)0x358;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar8 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar18 = (undefined4 *)((int)puVar13 + iVar10);
        uVar23 = uVar23 & 0xffff | 0x5a820000;
        uVar7 = 0xa57d8667;
        puVar13 = (undefined4 *)0x320;
        puVar12 = (undefined4 *)0x330;
        lVar28 = 2;
        puVar8 = param_2;
        while( true ) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x328;
        puVar12 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar19);
        puVar1 = (undefined4 *)((int)piVar20 + 0x80);
        puVar13 = (undefined4 *)((int)puVar4 + iVar9);
        puVar12 = (undefined4 *)0x3c0;
        puVar8 = (undefined4 *)0x3d0;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          *puVar8 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x3c8;
        puVar8 = (undefined4 *)0x3d8;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          *puVar8 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar17 = (undefined4 *)(iVar24 + (int)puVar3);
        param_2 = (undefined4 *)((int)puVar3 + iVar11);
        puVar12 = (undefined4 *)0x360;
        puVar8 = (undefined4 *)0x370;
        lVar28 = 2;
        puVar4 = puVar18;
        while( true ) {
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x368;
        puVar8 = (undefined4 *)0x378;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar18 = (undefined4 *)((int)puVar18 + iVar6);
        puVar12 = (undefined4 *)0x390;
        puVar8 = (undefined4 *)0x3a0;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar17;
          puVar17 = puVar17 + 1;
          *puVar8 = *puVar17;
          puVar17 = puVar17 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x398;
        puVar8 = (undefined4 *)0x3a8;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar17;
          puVar17 = puVar17 + 1;
          *puVar8 = *puVar17;
          puVar17 = puVar17 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar2 = (undefined8 *)((int)piVar20 + 0xa0);
        *puVar1 = unaff_s24;
        puVar1[1] = unaff_s25;
        puVar1[2] = unaff_s26;
        puVar1[3] = unaff_s27;
        *(longlong *)(puVar1 + 4) = in_q7._0_8_;
        *(longlong *)(puVar1 + 6) = in_q7._8_8_;
        *(longlong *)((int)piVar20 + 0x148) = in_q0._0_8_;
        *(longlong *)((int)piVar20 + 0x150) = in_q0._8_8_;
        *(longlong *)((int)piVar20 + 0x158) = in_q1._0_8_;
        *(longlong *)((int)piVar20 + 0x160) = in_q1._8_8_;
        auVar29 = VectorSub(in_q10,in_q1,4);
        puVar12 = (undefined4 *)0x300;
        puVar8 = (undefined4 *)0x310;
        lVar28 = 2;
        puVar4 = param_1;
        while( true ) {
          *puVar12 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar8 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x308;
        puVar8 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar12 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar8 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        auVar33 = VectorSub(in_q14,*(undefined1 (*) [16])((int)piVar20 + 0x80),4);
        auVar31 = VectorSub(in_q12,in_q0,4);
        *(longlong *)((int)piVar20 + 0x298) = in_q14._0_8_;
        *(longlong *)((int)piVar20 + 0x2a0) = in_q14._8_8_;
        *(longlong *)((int)piVar20 + 0x2a8) = in_q15._0_8_;
        *(longlong *)((int)piVar20 + 0x2b0) = in_q15._8_8_;
        auVar32 = VectorSub(in_q15,*(undefined1 (*) [16])((int)piVar20 + 0x90),4);
        auVar38 = VectorSub(in_q13,in_q1,4);
        puVar1 = param_1 + 0x18;
        *puVar2 = in_q2._0_8_;
        puVar2[1] = in_q2._8_8_;
        puVar2[2] = in_q3._0_8_;
        puVar2[3] = in_q3._8_8_;
        auVar30 = VectorAdd(auVar33,auVar32,4);
        auVar36 = VectorSub(auVar33,auVar32,4);
        puVar18 = param_1 + 0x10;
        auVar32 = VectorSub(auVar38,auVar31,4);
        auVar35 = VectorAdd(auVar31,auVar38,4);
        auVar38._8_8_ = CONCAT44(uVar23,uVar23);
        auVar38._0_8_ = CONCAT44(uVar23,uVar23);
        auVar31 = VectorSub(in_q2,in_q4,4);
        auVar38 = VectorDoubleMultiplyHighHalf(auVar30,auVar38,4,0);
        auVar38 = SatQ(auVar38,4,0);
        auVar30._8_8_ = CONCAT44(uVar7,uVar7);
        auVar30._0_8_ = CONCAT44(uVar7,uVar7);
        auVar37 = VectorAdd(in_q0,in_q12,4);
        auVar32 = VectorDoubleMultiplyHighHalf(auVar32,auVar30,4,0);
        auVar33 = SatQ(auVar32,4,0);
        auVar30 = VectorDoubleMultiplyHighHalf(auVar35,auVar30,4,0);
        auVar41 = SatQ(auVar30,4,0);
        *(longlong *)((int)piVar20 + 0x178) = auVar38._0_8_;
        *(longlong *)((int)piVar20 + 0x180) = auVar38._8_8_;
        auVar38 = VectorAdd(in_q1,in_q13,4);
        auVar32._8_8_ = CONCAT44(uVar23,uVar23);
        auVar32._0_8_ = CONCAT44(uVar23,uVar23);
        *(longlong *)((int)piVar20 + 0x168) = auVar38._0_8_;
        *(longlong *)((int)piVar20 + 0x170) = auVar38._8_8_;
        auVar38 = VectorDoubleMultiplyHighHalf(auVar36,auVar32,4,0);
        auVar42 = SatQ(auVar38,4,0);
        auVar32 = VectorAdd(*(undefined1 (*) [16])((int)piVar20 + 0x90),
                            *(undefined1 (*) [16])((int)piVar20 + 0x2a8),4);
        auVar30 = VectorAdd(in_q4,*(undefined1 (*) [16])((int)piVar20 + 0xa0),4);
        auVar40 = VectorAdd(*(undefined1 (*) [16])((int)piVar20 + 0x80),
                            *(undefined1 (*) [16])((int)piVar20 + 0x298),4);
        *(longlong *)((int)piVar20 + 0x2b8) = auVar33._0_8_;
        *(longlong *)((int)piVar20 + 0x2c0) = auVar33._8_8_;
        auVar34 = VectorAdd(in_q9,*(undefined1 (*) [16])((int)piVar20 + 0x148),4);
        auVar36 = VectorSub(*(undefined1 (*) [16])((int)piVar20 + 0xb0),in_q5,4);
        auVar35 = VectorAdd(in_q5,*(undefined1 (*) [16])((int)piVar20 + 0xb0),4);
        auVar38 = VectorSub(*(undefined1 (*) [16])((int)piVar20 + 0x148),in_q9,4);
        auVar33 = VectorAdd(auVar31,auVar29,4);
        auVar29 = VectorSub(auVar31,auVar29,4);
        *(longlong *)((int)piVar20 + 0x80) = auVar38._0_8_;
        *(longlong *)((int)piVar20 + 0x88) = auVar38._8_8_;
        auVar39 = VectorAdd(in_q10,*(undefined1 (*) [16])((int)piVar20 + 0x158),4);
        auVar31 = VectorAdd(auVar42,auVar41,4);
        *(longlong *)((int)piVar20 + 0xa0) = auVar29._0_8_;
        *(longlong *)((int)piVar20 + 0xa8) = auVar29._8_8_;
        auVar29 = VectorAdd(auVar40,auVar37,4);
        auVar38 = VectorAdd(auVar30,auVar34,4);
        auVar42 = VectorSub(auVar42,auVar41,4);
        auVar43 = VectorAdd(auVar33,auVar31,4);
        auVar41 = VectorSub(auVar33,auVar31,4);
        VectorAdd(auVar38,auVar29,4);
        VectorSub(auVar38,auVar29,4);
        auVar38 = VectorSub(auVar30,auVar34,4);
        auVar34 = VectorSub(auVar32,*(undefined1 (*) [16])((int)piVar20 + 0x168),4);
        auVar31 = VectorSub(auVar40,auVar37,4);
        in_q0 = VectorTranspose(auVar43,4);
        auVar30 = VectorSub(*(undefined1 (*) [16])((int)piVar20 + 0x178),
                            *(undefined1 (*) [16])((int)piVar20 + 0x2b8),4);
        auVar32 = VectorAdd(auVar32,*(undefined1 (*) [16])((int)piVar20 + 0x168),4);
        auVar37 = VectorAdd(*(undefined1 (*) [16])((int)piVar20 + 0x178),
                            *(undefined1 (*) [16])((int)piVar20 + 0x2b8),4);
        auVar29 = *(undefined1 (*) [16])((int)piVar20 + 0x80);
        *(longlong *)((int)piVar20 + 0x80) = auVar43._0_8_;
        *(longlong *)((int)piVar20 + 0x88) = auVar43._8_8_;
        *(longlong *)((int)piVar20 + 0x148) = auVar31._0_8_;
        *(longlong *)((int)piVar20 + 0x150) = auVar31._8_8_;
        auVar31 = VectorSub(*(undefined1 (*) [16])((int)piVar20 + 0xa0),auVar30,4);
        auVar40 = VectorAdd(auVar36,auVar29,4);
        in_q7 = VectorAdd(*(undefined1 (*) [16])((int)piVar20 + 0xa0),auVar30,4);
        auVar30 = VectorTranspose(auVar41,4);
        auVar33 = VectorSub(auVar36,auVar29,4);
        auVar29 = VectorAdd(auVar35,auVar39,4);
        auVar35 = VectorSub(auVar35,auVar39,4);
        *(longlong *)((int)piVar20 + 0x178) = auVar41._0_8_;
        *(longlong *)((int)piVar20 + 0x180) = auVar41._8_8_;
        VectorSub(auVar38,auVar34,4);
        VectorAdd(auVar38,auVar34,4);
        in_q5 = VectorAdd(auVar40,auVar37,4);
        in_q2 = VectorSub(auVar40,auVar37,4);
        VectorAdd(auVar29,auVar32,4);
        VectorSub(auVar29,auVar32,4);
        auVar29 = VectorTranspose(auVar31,4);
        in_q15 = VectorTranspose(in_q5,4);
        in_q1 = VectorAdd(auVar33,auVar42,4);
        in_q3 = VectorSub(auVar33,auVar42,4);
        in_q4 = VectorTranspose(in_q7,4);
        *(longlong *)((int)piVar20 + 0x168) = auVar31._0_8_;
        *(longlong *)((int)piVar20 + 0x170) = auVar31._8_8_;
        *(longlong *)((int)piVar20 + 0xa0) = auVar29._0_8_;
        *(longlong *)((int)piVar20 + 0xa8) = auVar29._8_8_;
        unaff_s24 = *(undefined4 *)((int)piVar20 + 0x178);
        unaff_s25 = *(undefined4 *)((int)piVar20 + 0x17c);
        unaff_s26 = *(undefined4 *)((int)piVar20 + 0x180);
        unaff_s27 = *(undefined4 *)((int)piVar20 + 0x184);
        VectorAdd(auVar35,*(undefined1 (*) [16])((int)piVar20 + 0x148),4);
        *(longlong *)((int)piVar20 + 0x188) = in_q0._0_8_;
        *(longlong *)((int)piVar20 + 400) = auVar29._0_8_;
        VectorSub(auVar35,*(undefined1 (*) [16])((int)piVar20 + 0x148),4);
        *(longlong *)((int)piVar20 + 0x1a8) = auVar30._0_8_;
        *(longlong *)((int)piVar20 + 0x1b0) = in_q4._0_8_;
        in_q13 = VectorTranspose(in_q2,4);
        in_q10 = VectorTranspose(in_q3,4);
        *(undefined8 *)((int)piVar20 + 0x1d0) = *(undefined8 *)((int)piVar20 + 0x80);
        *(undefined4 *)((int)piVar20 + 0x1d8) = *(undefined4 *)((int)piVar20 + 0x168);
        *(undefined4 *)((int)piVar20 + 0x1dc) = *(undefined4 *)((int)piVar20 + 0x16c);
        in_q11 = VectorTranspose(in_q1,4);
        *(undefined4 *)((int)piVar20 + 0x1f0) = unaff_s24;
        *(undefined4 *)((int)piVar20 + 500) = unaff_s25;
        *(longlong *)((int)piVar20 + 0x1f8) = in_q7._0_8_;
        *(longlong *)((int)piVar20 + 0x210) = in_q0._8_8_;
        *(undefined8 *)((int)piVar20 + 0x218) = *(undefined8 *)((int)piVar20 + 0xa8);
        *(longlong *)((int)piVar20 + 0x230) = auVar30._8_8_;
        *(longlong *)((int)piVar20 + 0x238) = in_q4._8_8_;
        *(undefined8 *)((int)piVar20 + 0x250) = *(undefined8 *)((int)piVar20 + 0x88);
        *(undefined4 *)((int)piVar20 + 600) = *(undefined4 *)((int)piVar20 + 0x170);
        *(undefined4 *)((int)piVar20 + 0x25c) = *(undefined4 *)((int)piVar20 + 0x174);
        *(undefined4 *)((int)piVar20 + 0x270) = unaff_s26;
        *(undefined4 *)((int)piVar20 + 0x274) = unaff_s27;
        *(longlong *)((int)piVar20 + 0x278) = in_q7._8_8_;
        *(longlong *)((int)piVar20 + 0x198) = in_q15._0_8_;
        *(longlong *)((int)piVar20 + 0x1a0) = in_q11._0_8_;
        *(longlong *)((int)piVar20 + 0x1e0) = in_q5._0_8_;
        *(longlong *)((int)piVar20 + 0x1e8) = in_q1._0_8_;
        *(longlong *)((int)piVar20 + 0x220) = in_q15._8_8_;
        *(longlong *)((int)piVar20 + 0x228) = in_q11._8_8_;
        *(longlong *)((int)piVar20 + 0x260) = in_q5._8_8_;
        *(longlong *)((int)piVar20 + 0x268) = in_q1._8_8_;
        *(longlong *)((int)piVar20 + 0x1b8) = in_q13._0_8_;
        *(longlong *)((int)piVar20 + 0x1c0) = in_q10._0_8_;
        *(longlong *)((int)piVar20 + 0x200) = in_q2._0_8_;
        *(longlong *)((int)piVar20 + 0x208) = in_q3._0_8_;
        *(longlong *)((int)piVar20 + 0x240) = in_q13._8_8_;
        *(longlong *)((int)piVar20 + 0x248) = in_q10._8_8_;
        *(longlong *)((int)piVar20 + 0x280) = in_q2._8_8_;
        *(longlong *)((int)piVar20 + 0x288) = in_q3._8_8_;
        puVar17 = param_1 + 0x20;
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar3 = puVar4;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar8;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar8;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar4 = puVar4 + 8;
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar12;
          puVar4[1] = *puVar8;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar12;
          puVar4[1] = *puVar8;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar4 = param_1 + 0x28;
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar8;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar8;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar3 = param_1 + 0x30;
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar12;
          puVar1[1] = *puVar8;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar1 = *puVar12;
          puVar1[1] = *puVar8;
          puVar1 = puVar1 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar18 = param_1 + 0x38;
        param_1 = param_1 + 0x40;
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar12;
          puVar17[1] = *puVar8;
          puVar17 = puVar17 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar17 = *puVar12;
          puVar17[1] = *puVar8;
          puVar17 = puVar17 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar12;
          puVar4[1] = *puVar8;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar12;
          puVar4[1] = *puVar8;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar8;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar8;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        in_q8 = *(undefined1 (*) [16])((int)piVar20 + 0x270);
        in_q9 = *(undefined1 (*) [16])((int)piVar20 + 0x280);
        puVar12 = (undefined4 *)0x380;
        puVar8 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar8;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar8 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar8;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
        }
        in_q12 = in_q1;
        in_q14 = in_q3;
      } while (!(bool)uVar26 && cVar25 == cVar27);
      iVar14 = *(int *)((int)piVar20 + 0x2cc);
    }
    *(undefined4 *)((int)piVar20 + 0x1a8) = *(undefined4 *)((int)piVar20 + 0x338);
    *(int *)((int)piVar20 + 0x144) = *(int *)((int)piVar20 + 0x144) >> 2;
    *(int *)((int)piVar20 + 0x1cc) = *(int *)((int)piVar20 + 0x1cc) + -1;
    *(undefined4 *)((int)piVar20 + 0x338) = *(undefined4 *)((int)piVar20 + 0x290);
  }
  else if (local_a4 == 4) {
    if (0 < iVar5) {
      iVar11 = iVar5 * 0x18;
      iVar10 = iVar5 << 3;
      iVar6 = iVar5 << 4;
      iVar24 = 0;
      puVar21 = local_338;
      do {
        puVar3 = (undefined4 *)((int)param_2 + iVar11);
        puVar13 = (undefined4 *)0x320;
        puVar12 = (undefined4 *)0x330;
        lVar28 = 2;
        puVar8 = param_2;
        puVar4 = param_2;
        while( true ) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x328;
        puVar12 = (undefined4 *)0x338;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar10);
        puVar4 = (undefined4 *)((int)puVar8 + iVar6);
        iVar24 = iVar24 + 4;
        puVar13 = (undefined4 *)0x300;
        puVar12 = (undefined4 *)0x310;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x308;
        puVar12 = (undefined4 *)0x318;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        cVar27 = SBORROW4(iVar5,iVar24);
        cVar25 = iVar5 - iVar24 < 0;
        uVar26 = iVar5 == iVar24;
        puVar18 = param_1 + 0x10;
        param_2 = puVar8 + 8;
        puVar13 = (undefined4 *)0x3a0;
        puVar12 = (undefined4 *)0x3b0;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x3a8;
        puVar12 = (undefined4 *)0x3b8;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar29 = VectorAdd(in_q10,in_q0,4);
        puVar13 = (undefined4 *)0x3e0;
        puVar12 = (undefined4 *)0x3f0;
        lVar28 = 2;
        puVar8 = param_1;
        while( true ) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x3e8;
        puVar12 = (undefined4 *)0x3f8;
        lVar28 = 2;
        while( true ) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar38 = VectorSub(in_q1,in_q11,4);
        auVar32 = VectorAdd(in_q14,in_q2,4);
        puVar3 = param_1 + 0x18;
        auVar30 = VectorSub(in_q2,in_q14,4);
        param_1 = param_1 + 0x20;
        VectorAdd(auVar32,auVar29,4);
        VectorSub(auVar32,auVar29,4);
        in_q5 = VectorSub(auVar30,auVar38,4);
        auVar30 = VectorAdd(auVar30,auVar38,4);
        auVar38 = VectorAdd(in_q11,in_q1,4);
        in_q1 = VectorTranspose(in_q5,4);
        auVar33 = VectorAdd(in_q15,in_q3,4);
        auVar31 = VectorSub(in_q0,in_q10,4);
        auVar32 = VectorTranspose(auVar30,4);
        in_q14 = VectorAdd(auVar33,auVar38,4);
        auVar29 = VectorSub(in_q3,in_q15,4);
        in_q4 = VectorSub(auVar33,auVar38,4);
        auVar38 = VectorAdd(auVar29,auVar31,4);
        *(longlong *)(puVar21 + 0x80) = in_q1._0_8_;
        *(longlong *)(puVar21 + 0x88) = auVar32._0_8_;
        in_q0 = VectorSub(auVar29,auVar31,4);
        auVar29 = VectorTranspose(auVar38,4);
        *(longlong *)(puVar21 + 0xa0) = in_q5._0_8_;
        *(longlong *)(puVar21 + 0xa8) = auVar30._0_8_;
        in_q10 = VectorTranspose(in_q0,4);
        *(longlong *)(puVar21 + 0x148) = in_q1._8_8_;
        *(longlong *)(puVar21 + 0x150) = auVar32._8_8_;
        *(longlong *)(puVar21 + 0x90) = auVar29._0_8_;
        *(longlong *)(puVar21 + 0x98) = in_q10._0_8_;
        *(longlong *)(puVar21 + 0xb0) = auVar38._0_8_;
        *(longlong *)(puVar21 + 0xb8) = in_q0._0_8_;
        *(longlong *)(puVar21 + 0x158) = auVar29._8_8_;
        *(longlong *)(puVar21 + 0x160) = in_q10._8_8_;
        puVar13 = (undefined4 *)0x380;
        puVar12 = (undefined4 *)0x390;
        lVar28 = 2;
        puVar4 = puVar8;
        while( true ) {
          *puVar4 = *puVar13;
          puVar4[1] = *puVar12;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x388;
        puVar12 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar4 = *puVar13;
          puVar4[1] = *puVar12;
          puVar4 = puVar4 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar8 = puVar8 + 8;
        puVar13 = (undefined4 *)0x380;
        puVar12 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar13;
          puVar8[1] = *puVar12;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x388;
        puVar12 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar8 = *puVar13;
          puVar8[1] = *puVar12;
          puVar8 = puVar8 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        in_q8 = *(undefined1 (*) [16])(puVar21 + 0x148);
        in_q9 = *(undefined1 (*) [16])(puVar21 + 0x158);
        puVar13 = (undefined4 *)0x380;
        puVar12 = (undefined4 *)0x390;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar13;
          puVar18[1] = *puVar12;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x388;
        puVar12 = (undefined4 *)0x398;
        lVar28 = 2;
        while( true ) {
          *puVar18 = *puVar13;
          puVar18[1] = *puVar12;
          puVar18 = puVar18 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar28 = 2;
        while( true ) {
          *puVar3 = *puVar13;
          puVar3[1] = *puVar12;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar28 = 2;
        while( true ) {
          *puVar3 = *puVar13;
          puVar3[1] = *puVar12;
          puVar3 = puVar3 + 2;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        in_q11 = in_q0;
      } while (!(bool)uVar26 && cVar25 == cVar27);
    }
    *(undefined4 *)(puVar21 + 0x1a8) = *(undefined4 *)(puVar21 + 0x338);
    *(undefined4 *)(puVar21 + 0x338) = *(undefined4 *)(puVar21 + 0x290);
    *(int *)(puVar21 + 0x1cc) = *(int *)(puVar21 + 0x1cc) + -1;
    *(int *)(puVar21 + 0x294) = *(int *)(puVar21 + 0x144);
    *(int *)(puVar21 + 0x144) = *(int *)(puVar21 + 0x144) >> 2;
    piVar20 = (int *)puVar21;
  }
  else {
    local_190 = param_1;
    local_170 = 0;
    piVar20 = (int *)local_338;
  }
  if (*(int *)((int)piVar20 + 0x1cc) < 2) {
    if (*(int *)((int)piVar20 + 0x1cc) == 0) {
      return;
    }
    *(undefined4 *)((int)piVar20 + 0x1a8) = *(undefined4 *)((int)piVar20 + 0x338);
  }
  else {
    iVar5 = *(int *)((int)piVar20 + 0x294);
    *(int *)((int)piVar20 + 0xa0) = iVar14;
    iVar10 = iVar5 << 3;
    *(int *)((int)piVar20 + 0x168) = iVar5 * 0x18;
    *(int *)((int)piVar20 + 0x178) = iVar5 << 4;
    while( true ) {
      if (0 < *(int *)((int)piVar20 + 0x144)) {
        iVar5 = *(int *)((int)piVar20 + 0xa0);
        iVar14 = iVar5 << 3;
        if (0 < iVar5) {
          puVar13 = *(undefined4 **)((int)piVar20 + 0x1a8);
          puVar12 = *(undefined4 **)((int)piVar20 + 0x338);
          iVar6 = iVar5 << 4;
          iVar11 = 0;
          *(int *)((int)piVar20 + 0x148) = iVar5 * 0x18;
          *(int *)((int)piVar20 + 0x188) = iVar5 << 5;
          do {
            puVar3 = *(undefined4 **)((int)piVar20 + 0x1c8);
            iVar5 = 0;
            *(int *)((int)piVar20 + 0x80) = iVar11;
            puVar8 = puVar12;
            puVar4 = puVar13;
            auVar29 = in_q5;
            do {
              puVar18 = (undefined4 *)0x3e0;
              puVar1 = (undefined4 *)0x3f0;
              lVar28 = 2;
              puVar17 = puVar3;
              puVar22 = puVar13;
              puVar13 = puVar12;
              puVar15 = puVar12;
              in_q5 = in_q0;
              while( true ) {
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar18 = (undefined4 *)0x3e8;
              puVar1 = (undefined4 *)0x3f8;
              lVar28 = 2;
              while( true ) {
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar13 = (undefined4 *)((int)puVar13 + iVar10);
              iVar5 = iVar5 + 4;
              iVar11 = *(int *)((int)piVar20 + 0x168);
              puVar18 = (undefined4 *)0x3a0;
              puVar1 = (undefined4 *)0x3b0;
              lVar28 = 2;
              puVar15 = puVar3;
              while( true ) {
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar18 = (undefined4 *)0x3a8;
              puVar1 = (undefined4 *)0x3b8;
              lVar28 = 2;
              while( true ) {
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar1 = puVar1 + 1;
              }
              puVar1 = (undefined4 *)((int)puVar3 + iVar14);
              puVar15 = (undefined4 *)(iVar11 + (int)puVar12);
              puVar16 = (undefined4 *)(iVar6 + (int)puVar17);
              puVar3 = (undefined4 *)0x380;
              puVar18 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar3 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar18 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar3 = puVar3 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar3 = (undefined4 *)0x388;
              puVar18 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar3 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar18 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar3 = puVar3 + 1;
                puVar18 = puVar18 + 1;
              }
              iVar11 = *(int *)((int)piVar20 + 0x178);
              puVar13 = (undefined4 *)0x300;
              puVar3 = (undefined4 *)0x310;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar3 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar3 = puVar3 + 1;
              }
              puVar13 = (undefined4 *)0x308;
              puVar3 = (undefined4 *)0x318;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar3 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar3 = puVar3 + 1;
              }
              auVar38 = VectorDoubleMultiplyHighHalf(in_q9,in_q10,4,0);
              auVar38 = SatQ(auVar38,4,0);
              puVar15 = (undefined4 *)(iVar11 + (int)puVar12);
              iVar11 = *(int *)((int)piVar20 + 0xa0);
              puVar3 = puVar17 + 8;
              puVar12 = puVar12 + 8;
              puVar13 = (undefined4 *)0x320;
              puVar18 = (undefined4 *)0x330;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar18 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar13 = (undefined4 *)0x328;
              puVar18 = (undefined4 *)0x338;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar18 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              cVar27 = SBORROW4(iVar5,iVar11);
              cVar25 = iVar5 - iVar11 < 0;
              auVar30 = VectorDoubleMultiplyHighHalf(in_q8,in_q10,4,0);
              auVar30 = SatQ(auVar30,4,0);
              puVar17 = (undefined4 *)((int)puVar22 + iVar6);
              puVar13 = (undefined4 *)0x340;
              puVar18 = (undefined4 *)0x350;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar18 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar13 = (undefined4 *)0x348;
              puVar18 = (undefined4 *)0x358;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar1;
                puVar1 = puVar1 + 1;
                *puVar18 = *puVar1;
                puVar1 = puVar1 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              auVar32 = VectorDoubleMultiplyHighHalf(in_q8,in_q11,4,0);
              auVar33 = SatQ(auVar32,4,0);
              puVar1 = (undefined4 *)(*(int *)((int)piVar20 + 0x148) + (int)puVar22);
              auVar32 = VectorDoubleMultiplyHighHalf(in_q9,in_q11,4,0);
              auVar35 = SatQ(auVar32,4,0);
              puVar13 = (undefined4 *)0x300;
              puVar18 = (undefined4 *)0x310;
              lVar28 = 2;
              auVar32 = in_q1;
              auVar31 = in_q5;
              while( true ) {
                *puVar13 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar13 = (undefined4 *)0x308;
              puVar18 = (undefined4 *)0x318;
              lVar28 = 2;
              while( true ) {
                *puVar13 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              in_q10 = VectorSub(auVar38,auVar33,4);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar31,in_q2,4,0);
              auVar39 = SatQ(auVar38,4,0);
              puVar13 = puVar22 + 8;
              auVar36 = VectorAdd(auVar30,auVar35,4);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar32,in_q2,4,0);
              auVar33 = SatQ(auVar38,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(auVar32,in_q3,4,0);
              auVar38 = SatQ(auVar38,4,0);
              auVar30 = VectorDoubleMultiplyHighHalf(auVar31,in_q3,4,0);
              auVar35 = SatQ(auVar30,4,0);
              auVar32 = VectorAdd(auVar39,auVar38,4);
              auVar38 = VectorDoubleMultiplyHighHalf(in_q5,in_q4,4,0);
              auVar39 = SatQ(auVar38,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(in_q1,in_q4,4,0);
              auVar31 = SatQ(auVar38,4,0);
              auVar38 = VectorDoubleMultiplyHighHalf(in_q1,auVar29,4,0);
              auVar38 = SatQ(auVar38,4,0);
              auVar29 = VectorDoubleMultiplyHighHalf(in_q5,auVar29,4,0);
              auVar30 = SatQ(auVar29,4,0);
              auVar29 = VectorAdd(auVar39,auVar38,4);
              auVar38 = VectorAdd(auVar36,auVar32,4);
              in_q0 = VectorAdd(auVar29,in_q14,4);
              auVar33 = VectorSub(auVar33,auVar35,4);
              in_q1 = VectorSub(in_q14,auVar29,4);
              auVar29 = VectorSub(auVar31,auVar30,4);
              auVar31 = VectorSub(in_q0,auVar38,4);
              auVar35 = VectorSub(in_q10,auVar33,4);
              auVar30 = VectorSub(auVar36,auVar32,4);
              *(longlong *)((int)piVar20 + 0x40) = auVar31._0_8_;
              *(longlong *)((int)piVar20 + 0x48) = auVar31._8_8_;
              auVar32 = VectorAdd(in_q1,auVar35,4);
              auVar31 = VectorAdd(auVar29,in_q15,4);
              in_q11 = VectorAdd(in_q10,auVar33,4);
              *(longlong *)((int)piVar20 + 0x60) = auVar32._0_8_;
              *(longlong *)((int)piVar20 + 0x68) = auVar32._8_8_;
              auVar38 = VectorAdd(in_q0,auVar38,4);
              in_q4 = VectorSub(in_q15,auVar29,4);
              *(longlong *)piVar20 = auVar38._0_8_;
              *(longlong *)((int)piVar20 + 8) = auVar38._8_8_;
              auVar29 = VectorSub(in_q1,auVar35,4);
              *(longlong *)((int)piVar20 + 0x20) = auVar29._0_8_;
              *(longlong *)((int)piVar20 + 0x28) = auVar29._8_8_;
              auVar29 = VectorAdd(auVar31,in_q11,4);
              *(longlong *)((int)piVar20 + 0x10) = auVar29._0_8_;
              *(longlong *)((int)piVar20 + 0x18) = auVar29._8_8_;
              auVar38 = VectorAdd(in_q4,auVar30,4);
              auVar29 = VectorSub(in_q4,auVar30,4);
              *(longlong *)((int)piVar20 + 0x30) = auVar38._0_8_;
              *(longlong *)((int)piVar20 + 0x38) = auVar38._8_8_;
              auVar38 = VectorSub(auVar31,in_q11,4);
              *(longlong *)((int)piVar20 + 0x70) = auVar29._0_8_;
              *(longlong *)((int)piVar20 + 0x78) = auVar29._8_8_;
              *(longlong *)((int)piVar20 + 0x50) = auVar38._0_8_;
              *(longlong *)((int)piVar20 + 0x58) = auVar38._8_8_;
              puVar18 = (undefined4 *)0x380;
              puVar15 = (undefined4 *)0x390;
              lVar28 = 2;
              puVar16 = puVar22;
              while( true ) {
                *puVar16 = *puVar18;
                puVar16[1] = *puVar15;
                puVar16 = puVar16 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar18 = (undefined4 *)0x388;
              puVar15 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar16 = *puVar18;
                puVar16[1] = *puVar15;
                puVar16 = puVar16 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar22 = (undefined4 *)((int)puVar22 + iVar14);
              puVar18 = (undefined4 *)0x380;
              puVar15 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar22 = *puVar18;
                puVar22[1] = *puVar15;
                puVar22 = puVar22 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar18 = (undefined4 *)0x388;
              puVar15 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar22 = *puVar18;
                puVar22[1] = *puVar15;
                puVar22 = puVar22 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar18 = (undefined4 *)0x380;
              puVar22 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar18;
                puVar17[1] = *puVar22;
                puVar17 = puVar17 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar22 = puVar22 + 1;
              }
              puVar18 = (undefined4 *)0x388;
              puVar22 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar17 = *puVar18;
                puVar17[1] = *puVar22;
                puVar17 = puVar17 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar22 = puVar22 + 1;
              }
              in_q8 = *(undefined1 (*) [16])((int)piVar20 + 0x60);
              in_q9 = *(undefined1 (*) [16])((int)piVar20 + 0x70);
              puVar18 = (undefined4 *)0x380;
              puVar17 = (undefined4 *)0x390;
              lVar28 = 2;
              while( true ) {
                *puVar1 = *puVar18;
                puVar1[1] = *puVar17;
                puVar1 = puVar1 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar18 = (undefined4 *)0x388;
              puVar17 = (undefined4 *)0x398;
              lVar28 = 2;
              while( true ) {
                *puVar1 = *puVar18;
                puVar1[1] = *puVar17;
                puVar1 = puVar1 + 2;
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar18 = puVar18 + 1;
                puVar17 = puVar17 + 1;
              }
              auVar29 = in_q5;
            } while (cVar25 != cVar27);
            puVar12 = (undefined4 *)((int)puVar8 + iVar14);
            iVar11 = *(int *)((int)piVar20 + 0x80) + 1;
            puVar13 = (undefined4 *)((int)puVar4 + *(int *)((int)piVar20 + 0x188));
          } while (iVar11 != *(int *)((int)piVar20 + 0x144));
        }
      }
      iVar6 = *(int *)((int)piVar20 + 0x1cc);
      *(int *)((int)piVar20 + 0x1cc) = iVar6 + -1;
      uVar7 = *(undefined4 *)((int)piVar20 + 0x338);
      *(int *)((int)piVar20 + 0x144) = *(int *)((int)piVar20 + 0x144) >> 2;
      iVar5 = *(int *)((int)piVar20 + 0xa0);
      iVar14 = iVar5 << 2;
      *(int *)((int)piVar20 + 0xa0) = iVar14;
      *(int *)((int)piVar20 + 0x1c8) = iVar5 * 0x18 + *(int *)((int)piVar20 + 0x1c8);
      *(undefined4 *)((int)piVar20 + 0x338) = *(undefined4 *)((int)piVar20 + 0x1a8);
      if (iVar6 + -1 == 1) break;
      *(undefined4 *)((int)piVar20 + 0x1a8) = uVar7;
    }
  }
  if (0 < piVar20[0x51]) {
    iVar6 = piVar20[0xa5];
    iVar10 = iVar14 << 3;
    iVar5 = iVar6 << 3;
    if (0 < iVar14) {
      iVar11 = iVar6 << 4;
      iVar6 = iVar6 * 0x18;
      iVar24 = iVar14 << 4;
      *piVar20 = 0;
      do {
        puVar12 = *(undefined4 **)((int)piVar20 + 0x290);
        iVar9 = 0;
        puVar13 = *(undefined4 **)((int)piVar20 + 0x1c8);
        puVar8 = *(undefined4 **)((int)piVar20 + 0x1a8);
        auVar29 = in_q5;
        do {
          puVar4 = (undefined4 *)0x3e0;
          puVar3 = (undefined4 *)0x3f0;
          lVar28 = 2;
          puVar18 = puVar13;
          puVar1 = puVar12;
          puVar12 = puVar8;
          puVar17 = puVar8;
          in_q5 = in_q0;
          while( true ) {
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar3 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x3e8;
          puVar3 = (undefined4 *)0x3f8;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar3 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar12 = (undefined4 *)((int)puVar12 + iVar5);
          puVar22 = (undefined4 *)((int)puVar8 + iVar6);
          puVar15 = (undefined4 *)(iVar24 + (int)puVar18);
          iVar9 = iVar9 + 4;
          puVar4 = (undefined4 *)0x3a0;
          puVar3 = (undefined4 *)0x3b0;
          lVar28 = 2;
          puVar17 = puVar13;
          while( true ) {
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar3 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x3a8;
          puVar3 = (undefined4 *)0x3b8;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar3 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar17 = (undefined4 *)((int)puVar13 + iVar10);
          cVar27 = SBORROW4(iVar14,iVar9);
          cVar25 = iVar14 - iVar9 < 0;
          uVar26 = iVar14 == iVar9;
          puVar13 = puVar18 + 8;
          puVar4 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar4 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar3 = (undefined4 *)(iVar11 + (int)puVar8);
          puVar12 = (undefined4 *)0x300;
          puVar4 = (undefined4 *)0x310;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar4 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar12 = (undefined4 *)0x308;
          puVar4 = (undefined4 *)0x318;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar4 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          auVar38 = VectorDoubleMultiplyHighHalf(in_q9,in_q10,4,0);
          auVar38 = SatQ(auVar38,4,0);
          puVar8 = puVar8 + 8;
          puVar12 = (undefined4 *)0x320;
          puVar4 = (undefined4 *)0x330;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar15;
            puVar15 = puVar15 + 1;
            *puVar4 = *puVar15;
            puVar15 = puVar15 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar12 = (undefined4 *)0x328;
          puVar4 = (undefined4 *)0x338;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar15;
            puVar15 = puVar15 + 1;
            *puVar4 = *puVar15;
            puVar15 = puVar15 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar18 = (undefined4 *)(iVar11 + (int)puVar1);
          auVar30 = VectorDoubleMultiplyHighHalf(in_q8,in_q10,4,0);
          auVar30 = SatQ(auVar30,4,0);
          puVar12 = (undefined4 *)0x340;
          puVar4 = (undefined4 *)0x350;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar12 = (undefined4 *)0x348;
          puVar4 = (undefined4 *)0x358;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar4 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar17 = (undefined4 *)((int)puVar1 + iVar6);
          auVar32 = VectorDoubleMultiplyHighHalf(in_q8,in_q11,4,0);
          auVar33 = SatQ(auVar32,4,0);
          auVar32 = VectorDoubleMultiplyHighHalf(in_q9,in_q11,4,0);
          auVar35 = SatQ(auVar32,4,0);
          puVar12 = (undefined4 *)0x300;
          puVar4 = (undefined4 *)0x310;
          lVar28 = 2;
          auVar32 = in_q1;
          auVar31 = in_q5;
          while( true ) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar12 = (undefined4 *)0x308;
          puVar4 = (undefined4 *)0x318;
          lVar28 = 2;
          while( true ) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          in_q10 = VectorSub(auVar38,auVar33,4);
          auVar38 = VectorDoubleMultiplyHighHalf(auVar31,in_q2,4,0);
          auVar39 = SatQ(auVar38,4,0);
          puVar12 = puVar1 + 8;
          auVar36 = VectorAdd(auVar30,auVar35,4);
          auVar38 = VectorDoubleMultiplyHighHalf(auVar32,in_q2,4,0);
          auVar33 = SatQ(auVar38,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(auVar32,in_q3,4,0);
          auVar38 = SatQ(auVar38,4,0);
          auVar30 = VectorDoubleMultiplyHighHalf(auVar31,in_q3,4,0);
          auVar35 = SatQ(auVar30,4,0);
          auVar32 = VectorAdd(auVar39,auVar38,4);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q5,in_q4,4,0);
          auVar39 = SatQ(auVar38,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q1,in_q4,4,0);
          auVar31 = SatQ(auVar38,4,0);
          auVar38 = VectorDoubleMultiplyHighHalf(in_q1,auVar29,4,0);
          auVar38 = SatQ(auVar38,4,0);
          auVar29 = VectorDoubleMultiplyHighHalf(in_q5,auVar29,4,0);
          auVar30 = SatQ(auVar29,4,0);
          auVar29 = VectorAdd(auVar39,auVar38,4);
          auVar38 = VectorAdd(auVar36,auVar32,4);
          in_q0 = VectorAdd(auVar29,in_q14,4);
          auVar33 = VectorSub(auVar33,auVar35,4);
          in_q1 = VectorSub(in_q14,auVar29,4);
          auVar29 = VectorSub(auVar31,auVar30,4);
          auVar31 = VectorSub(in_q0,auVar38,4);
          auVar35 = VectorSub(in_q10,auVar33,4);
          auVar30 = VectorSub(auVar36,auVar32,4);
          *(longlong *)(piVar20 + 0x40) = auVar31._0_8_;
          *(longlong *)(piVar20 + 0x42) = auVar31._8_8_;
          auVar32 = VectorAdd(in_q1,auVar35,4);
          auVar31 = VectorAdd(auVar29,in_q15,4);
          in_q11 = VectorAdd(in_q10,auVar33,4);
          *(longlong *)(piVar20 + 0x48) = auVar32._0_8_;
          *(longlong *)(piVar20 + 0x4a) = auVar32._8_8_;
          auVar38 = VectorAdd(in_q0,auVar38,4);
          in_q4 = VectorSub(in_q15,auVar29,4);
          *(longlong *)(piVar20 + 0x30) = auVar38._0_8_;
          *(longlong *)(piVar20 + 0x32) = auVar38._8_8_;
          auVar29 = VectorSub(in_q1,auVar35,4);
          *(longlong *)(piVar20 + 0x38) = auVar29._0_8_;
          *(longlong *)(piVar20 + 0x3a) = auVar29._8_8_;
          auVar29 = VectorAdd(auVar31,in_q11,4);
          *(longlong *)(piVar20 + 0x34) = auVar29._0_8_;
          *(longlong *)(piVar20 + 0x36) = auVar29._8_8_;
          auVar38 = VectorAdd(in_q4,auVar30,4);
          auVar29 = VectorSub(in_q4,auVar30,4);
          *(longlong *)(piVar20 + 0x3c) = auVar38._0_8_;
          *(longlong *)(piVar20 + 0x3e) = auVar38._8_8_;
          auVar38 = VectorSub(auVar31,in_q11,4);
          *(longlong *)(piVar20 + 0x4c) = auVar29._0_8_;
          *(longlong *)(piVar20 + 0x4e) = auVar29._8_8_;
          *(longlong *)(piVar20 + 0x44) = auVar38._0_8_;
          *(longlong *)(piVar20 + 0x46) = auVar38._8_8_;
          puVar4 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar28 = 2;
          puVar22 = puVar1;
          while( true ) {
            *puVar22 = *puVar4;
            puVar22[1] = *puVar3;
            puVar22 = puVar22 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar22 = *puVar4;
            puVar22[1] = *puVar3;
            puVar22 = puVar22 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar1 = (undefined4 *)((int)puVar1 + iVar5);
          puVar4 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar1 = *puVar4;
            puVar1[1] = *puVar3;
            puVar1 = puVar1 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar1 = *puVar4;
            puVar1[1] = *puVar3;
            puVar1 = puVar1 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar18 = *puVar4;
            puVar18[1] = *puVar3;
            puVar18 = puVar18 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar18 = *puVar4;
            puVar18[1] = *puVar3;
            puVar18 = puVar18 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          in_q8 = *(undefined1 (*) [16])(piVar20 + 0x48);
          in_q9 = *(undefined1 (*) [16])(piVar20 + 0x4c);
          puVar4 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar4;
            puVar17[1] = *puVar3;
            puVar17 = puVar17 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar28 = 2;
          while( true ) {
            *puVar17 = *puVar4;
            puVar17[1] = *puVar3;
            puVar17 = puVar17 + 2;
            lVar28 = lVar28 + -1;
            if (lVar28 == 0) break;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          auVar29 = in_q5;
        } while (!(bool)uVar26 && cVar25 == cVar27);
        iVar9 = *piVar20;
        piVar20[0x6a] = piVar20[0x6a] + iVar10;
        *piVar20 = iVar9 + 1;
        piVar20[0xa4] = piVar20[0xa4] + iVar10;
      } while (iVar9 + 1 != piVar20[0x51]);
    }
  }
  return;
}



/* ===== skv_mixed_radix_fft_backward_int32_scaled_neon @ 00021df0 size=2832 ===== */

void skv_mixed_radix_fft_backward_int32_scaled_neon
               (undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  int iVar25;
  char cVar26;
  undefined1 uVar27;
  char cVar28;
  longlong lVar29;
  undefined1 in_q0 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 in_q4 [16];
  undefined1 auVar30 [16];
  undefined1 in_q5 [16];
  undefined1 auVar31 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_q10 [16];
  undefined1 in_q11 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_q12 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_q13 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_q14 [16];
  undefined1 auVar46 [16];
  undefined1 in_q15 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_2d8 [4];
  int local_2d4;
  int local_170;
  undefined4 local_16c;
  undefined4 *local_108;
  int local_e8;
  undefined4 *local_e4;
  int local_70;
  int local_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  puVar21 = auStack_2d8;
  puVar22 = auStack_2d8;
  local_e4 = param_1;
  local_16c = param_4;
  iVar4 = param_3[1];
  local_e8 = *param_3;
  local_170 = iVar4;
  iVar10 = *param_3 * 2;
  iVar15 = param_3[iVar10 + 0x3fffffff];
  local_70 = param_3[iVar10 + 0x40000000];
  if (local_70 == 8) {
    local_70 = iVar4 * 2;
    if (0 < iVar4) {
      iVar10 = iVar4 * 8;
      iVar25 = iVar4 * 0x30;
      iVar9 = 0x20;
      iVar11 = 0x20;
      puVar13 = param_2 + iVar4 * 2;
      iVar5 = iVar4 << 4;
      local_6c = iVar15;
      iVar15 = 0;
      local_2d4 = iVar4 * 0x18;
      puVar21 = auStack_2d8;
      do {
        iVar4 = *(int *)(puVar21 + 0x168);
        iVar20 = *(int *)(puVar21 + 4);
        iVar15 = iVar15 + 4;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        puVar8 = puVar13;
        puVar3 = puVar13;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar13 = (undefined4 *)((int)puVar13 + iVar10);
        cVar28 = SBORROW4(iVar4,iVar15);
        cVar26 = iVar4 - iVar15 < 0;
        uVar27 = iVar4 == iVar15;
        uVar24 = 0x7999;
        puVar12 = (undefined4 *)0x340;
        puVar7 = (undefined4 *)0x350;
        lVar29 = 2;
        puVar3 = param_2;
        puVar19 = param_2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x348;
        puVar7 = (undefined4 *)0x358;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar3 = (undefined4 *)((int)puVar3 + iVar20);
        uVar24 = uVar24 & 0xffff | 0x5a820000;
        puVar12 = (undefined4 *)0x3a0;
        puVar7 = (undefined4 *)0x3b0;
        lVar29 = 2;
        puVar19 = puVar13;
        auVar30 = in_q9;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x3a8;
        puVar7 = (undefined4 *)0x3b8;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)((int)puVar13 + iVar5);
        puVar13 = (undefined4 *)((int)puVar8 + iVar9);
        puVar12 = (undefined4 *)0x3c0;
        puVar7 = (undefined4 *)0x3d0;
        lVar29 = 2;
        puVar8 = param_1;
        puVar19 = puVar2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x3c8;
        puVar7 = (undefined4 *)0x3d8;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)((int)puVar2 + iVar10);
        *(longlong *)(puVar21 + 0x88) = in_q8._0_8_;
        *(longlong *)(puVar21 + 0x90) = in_q8._8_8_;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        auVar35 = in_q11;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar19 = (undefined4 *)(iVar25 + (int)param_2);
        param_2 = (undefined4 *)((int)param_2 + iVar11);
        *(longlong *)(puVar21 + 0x248) = in_q10._0_8_;
        *(longlong *)(puVar21 + 0x250) = in_q10._8_8_;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        puVar3 = puVar2;
        auVar40 = in_q8;
        auVar31 = auVar30;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)((int)puVar2 + iVar5);
        puVar12 = (undefined4 *)0x3a0;
        puVar7 = (undefined4 *)0x3b0;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x3a8;
        puVar7 = (undefined4 *)0x3b8;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar3 = param_1 + 0x10;
        *(longlong *)(puVar21 + 0x238) = in_q4._0_8_;
        *(longlong *)(puVar21 + 0x240) = in_q4._8_8_;
        puVar12 = (undefined4 *)0x3a0;
        puVar7 = (undefined4 *)0x3b0;
        lVar29 = 2;
        auVar32 = in_q10;
        auVar33 = in_q11;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x3a8;
        puVar7 = (undefined4 *)0x3b8;
        lVar29 = 2;
        while( true ) {
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar7 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        auVar43 = VectorHalvingSubtract(auVar31,auVar33,4,0);
        auVar36 = VectorHalvingSubtract(in_q8,in_q10,4,0);
        auVar47 = VectorHalvingAdd(auVar31,auVar33,4,0);
        auVar41 = VectorHalvingAdd(in_q8,in_q10,4,0);
        auVar33 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x88),auVar40,4,0);
        auVar42 = VectorHalvingSubtract(in_q9,auVar30,4,0);
        auVar34 = VectorHalvingAdd(in_q9,auVar30,4,0);
        auVar31 = VectorSub(auVar43,auVar36,4);
        auVar44 = VectorAdd(auVar36,auVar43,4);
        auVar30._8_8_ = 0xa57d8667a57d8667;
        auVar30._0_8_ = 0xa57d8667a57d8667;
        auVar36 = VectorAdd(auVar33,auVar42,4);
        auVar30 = VectorDoubleMultiplyHighHalf(auVar31,auVar30,4,0);
        auVar43 = SatQ(auVar30,4,0);
        auVar31._8_8_ = CONCAT44(uVar24,uVar24);
        auVar31._0_8_ = CONCAT44(uVar24,uVar24);
        auVar38 = VectorSub(auVar33,auVar42,4);
        auVar30 = VectorDoubleMultiplyHighHalf(auVar36,auVar31,4,0);
        auVar42 = SatQ(auVar30,4,0);
        auVar33._8_8_ = 0xa57d8667a57d8667;
        auVar33._0_8_ = 0xa57d8667a57d8667;
        puVar2 = param_1 + 0x18;
        auVar30 = VectorDoubleMultiplyHighHalf(auVar44,auVar33,4,0);
        auVar44 = SatQ(auVar30,4,0);
        auVar36._8_8_ = CONCAT44(uVar24,uVar24);
        auVar36._0_8_ = CONCAT44(uVar24,uVar24);
        auVar30 = VectorDoubleMultiplyHighHalf(auVar38,auVar36,4,0);
        auVar31 = SatQ(auVar30,4,0);
        auVar40 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x88),auVar40,4,0);
        auVar30 = VectorHalvingSubtract(auVar35,in_q11,4,0);
        auVar46 = VectorHalvingAdd(auVar35,in_q11,4,0);
        auVar33 = VectorHalvingAdd(auVar31,auVar44,4,0);
        auVar35 = VectorHalvingSubtract(auVar31,auVar44,4,0);
        auVar30 = FloatVectorNeg(auVar30,1,4);
        *(longlong *)(puVar21 + 600) = auVar35._0_8_;
        *(longlong *)(puVar21 + 0x260) = auVar35._8_8_;
        auVar35 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x238),in_q12,4,0);
        auVar31 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x238),in_q12,4,0);
        auVar45 = VectorHalvingAdd(*(undefined1 (*) [16])(puVar21 + 0x248),auVar32,4,0);
        auVar44 = VectorHalvingSubtract(*(undefined1 (*) [16])(puVar21 + 0x248),auVar32,4,0);
        auVar32 = VectorHalvingAdd(auVar35,auVar30,4,0);
        auVar37 = VectorHalvingSubtract(auVar35,auVar30,4,0);
        auVar39 = VectorHalvingSubtract(in_q5,in_q13,4,0);
        auVar38 = VectorHalvingAdd(in_q5,in_q13,4,0);
        auVar30 = VectorHalvingAdd(auVar40,auVar41,4,0);
        auVar40 = VectorHalvingSubtract(auVar40,auVar41,4,0);
        auVar35 = VectorHalvingSubtract(auVar42,auVar43,4,0);
        auVar36 = VectorHalvingAdd(auVar42,auVar43,4,0);
        *(longlong *)(puVar21 + 0x238) = auVar40._0_8_;
        *(longlong *)(puVar21 + 0x240) = auVar40._8_8_;
        auVar40 = VectorHalvingAdd(auVar31,auVar45,4,0);
        auVar31 = VectorHalvingSubtract(auVar31,auVar45,4,0);
        auVar42 = VectorHalvingSubtract(auVar34,auVar47,4,0);
        auVar41 = VectorHalvingAdd(auVar34,auVar47,4,0);
        auVar43 = VectorHalvingAdd(auVar32,auVar33,4,0);
        auVar33 = VectorHalvingSubtract(auVar32,auVar33,4,0);
        VectorHalvingAdd(auVar40,auVar30,4,0);
        VectorHalvingSubtract(auVar31,auVar42,4,0);
        VectorHalvingSubtract(auVar40,auVar30,4,0);
        auVar40 = VectorHalvingSubtract(auVar37,auVar35,4,0);
        auVar32 = VectorTranspose(auVar43,4);
        VectorHalvingAdd(auVar31,auVar42,4,0);
        auVar30 = VectorHalvingAdd(auVar37,auVar35,4,0);
        auVar31 = VectorHalvingAdd(auVar39,auVar44,4,0);
        *(longlong *)(puVar21 + 0x88) = auVar43._0_8_;
        *(longlong *)(puVar21 + 0x90) = auVar43._8_8_;
        *(longlong *)(puVar21 + 0x248) = auVar32._0_8_;
        *(longlong *)(puVar21 + 0x250) = auVar32._8_8_;
        uVar6 = *(undefined4 *)(puVar21 + 0x248);
        uVar1 = *(undefined4 *)(puVar21 + 0x250);
        auVar35 = VectorHalvingSubtract(auVar39,auVar44,4,0);
        in_q0 = VectorTranspose(auVar40,4);
        auVar32 = VectorHalvingAdd(auVar38,auVar46,4,0);
        auVar42 = VectorHalvingSubtract(auVar38,auVar46,4,0);
        in_q3 = VectorHalvingAdd(auVar31,auVar36,4,0);
        in_q1 = VectorHalvingSubtract(auVar31,auVar36,4,0);
        auVar31 = VectorTranspose(auVar33,4);
        in_q5 = VectorTranspose(auVar30,4);
        *(longlong *)(puVar21 + 0x248) = auVar40._0_8_;
        *(longlong *)(puVar21 + 0x250) = auVar40._8_8_;
        *(undefined4 *)(puVar21 + 0xa8) = uVar6;
        *(undefined4 *)(puVar21 + 0xac) = *(undefined4 *)(puVar21 + 0x24c);
        *(longlong *)(puVar21 + 0xb0) = in_q0._0_8_;
        VectorHalvingAdd(auVar32,auVar41,4,0);
        VectorHalvingSubtract(auVar32,auVar41,4,0);
        *(undefined8 *)(puVar21 + 0x170) = *(undefined8 *)(puVar21 + 0x88);
        *(longlong *)(puVar21 + 0x178) = auVar40._0_8_;
        in_q15 = VectorTranspose(in_q3,4);
        *(longlong *)(puVar21 + 0x148) = auVar31._0_8_;
        *(longlong *)(puVar21 + 0x150) = in_q5._0_8_;
        in_q2 = VectorHalvingAdd(auVar35,*(undefined1 (*) [16])(puVar21 + 600),4,0);
        in_q10 = VectorHalvingSubtract(auVar35,*(undefined1 (*) [16])(puVar21 + 600),4,0);
        *(longlong *)(puVar21 + 600) = auVar33._0_8_;
        *(longlong *)(puVar21 + 0x260) = auVar33._8_8_;
        in_q4 = VectorHalvingAdd(auVar42,*(undefined1 (*) [16])(puVar21 + 0x238),4,0);
        in_q14 = VectorHalvingSubtract(auVar42,*(undefined1 (*) [16])(puVar21 + 0x238),4,0);
        in_q11 = VectorTranspose(in_q1,4);
        *(longlong *)(puVar21 + 400) = auVar33._0_8_;
        *(longlong *)(puVar21 + 0x198) = auVar30._0_8_;
        *(undefined4 *)(puVar21 + 0x1b0) = uVar1;
        *(undefined4 *)(puVar21 + 0x1b4) = *(undefined4 *)(puVar21 + 0x254);
        *(longlong *)(puVar21 + 0x1b8) = in_q0._8_8_;
        *(longlong *)(puVar21 + 0x1d0) = auVar31._8_8_;
        *(longlong *)(puVar21 + 0x1d8) = in_q5._8_8_;
        auVar35 = VectorTranspose(in_q2,4);
        *(undefined8 *)(puVar21 + 0x1f8) = *(undefined8 *)(puVar21 + 0x90);
        *(undefined8 *)(puVar21 + 0x200) = *(undefined8 *)(puVar21 + 0x250);
        *(undefined8 *)(puVar21 + 0x218) = *(undefined8 *)(puVar21 + 0x260);
        *(longlong *)(puVar21 + 0x220) = auVar30._8_8_;
        in_q12 = VectorTranspose(in_q10,4);
        *(longlong *)(puVar21 + 0xb8) = in_q15._0_8_;
        *(longlong *)(puVar21 + 0xc0) = auVar35._0_8_;
        *(longlong *)(puVar21 + 0x180) = in_q3._0_8_;
        *(longlong *)(puVar21 + 0x188) = in_q2._0_8_;
        *(longlong *)(puVar21 + 0x1c0) = in_q15._8_8_;
        *(longlong *)(puVar21 + 0x1c8) = auVar35._8_8_;
        *(longlong *)(puVar21 + 0x208) = in_q3._8_8_;
        *(longlong *)(puVar21 + 0x210) = in_q2._8_8_;
        *(longlong *)(puVar21 + 0x158) = in_q11._0_8_;
        *(longlong *)(puVar21 + 0x160) = in_q12._0_8_;
        *(longlong *)(puVar21 + 0x1a0) = in_q1._0_8_;
        *(longlong *)(puVar21 + 0x1a8) = in_q10._0_8_;
        *(longlong *)(puVar21 + 0x1e0) = in_q11._8_8_;
        *(longlong *)(puVar21 + 0x1e8) = in_q12._8_8_;
        *(longlong *)(puVar21 + 0x228) = in_q1._8_8_;
        *(longlong *)(puVar21 + 0x230) = in_q10._8_8_;
        puVar18 = param_1 + 0x20;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        puVar19 = puVar8;
        while( true ) {
          *puVar19 = *puVar12;
          puVar19[1] = *puVar7;
          puVar19 = puVar19 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar19 = *puVar12;
          puVar19[1] = *puVar7;
          puVar19 = puVar19 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar8 = puVar8 + 8;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar12;
          puVar8[1] = *puVar7;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar12;
          puVar8[1] = *puVar7;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar8 = param_1 + 0x28;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar7;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar7;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar3 = param_1 + 0x30;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar2 = *puVar12;
          puVar2[1] = *puVar7;
          puVar2 = puVar2 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar2 = *puVar12;
          puVar2[1] = *puVar7;
          puVar2 = puVar2 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar19 = param_1 + 0x38;
        param_1 = param_1 + 0x40;
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar7;
          puVar18 = puVar18 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar18 = *puVar12;
          puVar18[1] = *puVar7;
          puVar18 = puVar18 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar12;
          puVar8[1] = *puVar7;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar12;
          puVar8[1] = *puVar7;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar7;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar12;
          puVar3[1] = *puVar7;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        in_q8 = *(undefined1 (*) [16])(puVar21 + 0x218);
        in_q9 = *(undefined1 (*) [16])(puVar21 + 0x228);
        puVar12 = (undefined4 *)0x380;
        puVar7 = (undefined4 *)0x390;
        lVar29 = 2;
        while( true ) {
          *puVar19 = *puVar12;
          puVar19[1] = *puVar7;
          puVar19 = puVar19 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)0x388;
        puVar7 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar19 = *puVar12;
          puVar19[1] = *puVar7;
          puVar19 = puVar19 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
        }
        in_q13 = in_q10;
      } while (!(bool)uVar27 && cVar26 == cVar28);
      iVar15 = *(int *)(puVar21 + 0x26c);
    }
    *(undefined4 *)(puVar21 + 0x1d0) = *(undefined4 *)(puVar21 + 0x2d8);
    *(int *)(puVar21 + 0x168) = *(int *)(puVar21 + 0x168) >> 2;
    *(int *)(puVar21 + 0x1f0) = *(int *)(puVar21 + 0x1f0) + -1;
    *(undefined4 *)(puVar21 + 0x2d8) = *(undefined4 *)(puVar21 + 500);
  }
  else if (local_70 == 4) {
    if (0 < iVar4) {
      iVar11 = iVar4 * 0x18;
      iVar10 = iVar4 << 3;
      iVar5 = iVar4 << 4;
      iVar25 = 0;
      puVar22 = auStack_2d8;
      do {
        puVar19 = (undefined4 *)((int)param_2 + iVar11);
        puVar13 = (undefined4 *)0x380;
        puVar12 = (undefined4 *)0x390;
        lVar29 = 2;
        puVar7 = param_2;
        puVar8 = param_1;
        puVar3 = param_2;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x388;
        puVar12 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        param_2 = (undefined4 *)((int)param_2 + iVar10);
        puVar3 = (undefined4 *)((int)puVar7 + iVar5);
        pauVar14 = (undefined1 (*) [16])(puVar22 + 0x88);
        iVar25 = iVar25 + 4;
        puVar13 = (undefined4 *)0x3c0;
        puVar12 = (undefined4 *)0x3d0;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x3c8;
        puVar12 = (undefined4 *)0x3d8;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar2 = puVar8 + 0x10;
        puVar13 = (undefined4 *)0x3e0;
        puVar12 = (undefined4 *)0x3f0;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x3e8;
        puVar12 = (undefined4 *)0x3f8;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *puVar19;
          puVar19 = puVar19 + 1;
          *puVar12 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        cVar28 = SBORROW4(iVar4,iVar25);
        cVar26 = iVar4 - iVar25 < 0;
        uVar27 = iVar4 == iVar25;
        puVar13 = (undefined4 *)0x3c0;
        puVar12 = (undefined4 *)0x3d0;
        lVar29 = 2;
        auVar30 = in_q12;
        auVar35 = in_q13;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x3c8;
        puVar12 = (undefined4 *)0x3d8;
        lVar29 = 2;
        while( true ) {
          *puVar13 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        *(longlong *)*(undefined1 (*) [16])(puVar22 + 0xa8) = auVar30._0_8_;
        *(longlong *)(puVar22 + 0xb0) = auVar30._8_8_;
        *(longlong *)(puVar22 + 0xb8) = auVar35._0_8_;
        *(longlong *)(puVar22 + 0xc0) = auVar35._8_8_;
        param_2 = puVar7 + 8;
        auVar30 = *(undefined1 (*) [16])(puVar22 + 0xa8);
        auVar35 = VectorHalvingSubtract(in_q13,in_q15,4,0);
        auVar40 = VectorHalvingAdd(in_q13,in_q15,4,0);
        puVar3 = puVar8 + 0x18;
        param_1 = puVar8 + 0x20;
        auVar36 = VectorHalvingAdd(in_q12,in_q14,4,0);
        in_q3 = VectorHalvingSubtract(in_q12,in_q14,4,0);
        auVar33 = VectorHalvingAdd(in_q8,auVar30,4,0);
        auVar31 = VectorHalvingSubtract(in_q8,auVar30,4,0);
        auVar32 = VectorHalvingAdd(in_q9,*(undefined1 (*) [16])(puVar22 + 0xb8),4,0);
        auVar30 = VectorHalvingSubtract(in_q9,*(undefined1 (*) [16])(puVar22 + 0xb8),4,0);
        in_q15 = VectorHalvingSubtract(auVar33,auVar36,4,0);
        VectorHalvingAdd(auVar33,auVar36,4,0);
        auVar33 = VectorHalvingSubtract(auVar31,auVar35,4,0);
        in_q14 = VectorHalvingAdd(auVar31,auVar35,4,0);
        VectorHalvingAdd(auVar32,auVar40,4,0);
        VectorHalvingSubtract(auVar32,auVar40,4,0);
        in_q2 = VectorTranspose(auVar33,4);
        *(longlong *)(puVar22 + 0xa8) = auVar33._0_8_;
        *(longlong *)(puVar22 + 0xb0) = auVar33._8_8_;
        auVar35 = VectorTranspose(in_q14,4);
        in_q12 = VectorHalvingAdd(auVar30,in_q3,4,0);
        *(longlong *)(puVar22 + 0x88) = in_q2._0_8_;
        *(longlong *)(puVar22 + 0x90) = auVar35._0_8_;
        in_q13 = VectorHalvingSubtract(auVar30,in_q3,4,0);
        in_q0._8_8_ = in_q14._0_8_;
        in_q0._0_8_ = SUB168(*(undefined1 (*) [16])(puVar22 + 0xa8),0);
        in_q4._8_8_ = in_q14._8_8_;
        in_q4._0_8_ = SUB168(*(undefined1 (*) [16])(puVar22 + 0xa8),8);
        auVar35 = VectorTranspose(in_q12,4);
        auVar30 = VectorTranspose(in_q13,4);
        in_q1._8_8_ = in_q13._0_8_;
        in_q1._0_8_ = in_q12._0_8_;
        in_q5._8_8_ = in_q13._8_8_;
        in_q5._0_8_ = in_q12._8_8_;
        *(longlong *)(puVar22 + 0x98) = auVar35._0_8_;
        *(longlong *)(puVar22 + 0xa0) = auVar30._0_8_;
        in_q8 = *pauVar14;
        in_q9 = pauVar14[1];
        puVar13 = (undefined4 *)0x380;
        puVar12 = (undefined4 *)0x390;
        lVar29 = 2;
        puVar7 = puVar8;
        while( true ) {
          *puVar7 = *puVar13;
          puVar7[1] = *puVar12;
          puVar7 = puVar7 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x388;
        puVar12 = (undefined4 *)0x398;
        lVar29 = 2;
        while( true ) {
          *puVar7 = *puVar13;
          puVar7[1] = *puVar12;
          puVar7 = puVar7 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar8 = puVar8 + 8;
        puVar13 = (undefined4 *)0x300;
        puVar12 = (undefined4 *)0x310;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar13;
          puVar8[1] = *puVar12;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x308;
        puVar12 = (undefined4 *)0x318;
        lVar29 = 2;
        while( true ) {
          *puVar8 = *puVar13;
          puVar8[1] = *puVar12;
          puVar8 = puVar8 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar29 = 2;
        while( true ) {
          *puVar2 = *puVar13;
          puVar2[1] = *puVar12;
          puVar2 = puVar2 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar29 = 2;
        while( true ) {
          *puVar2 = *puVar13;
          puVar2[1] = *puVar12;
          puVar2 = puVar2 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x340;
        puVar12 = (undefined4 *)0x350;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar13;
          puVar3[1] = *puVar12;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar13 = (undefined4 *)0x348;
        puVar12 = (undefined4 *)0x358;
        lVar29 = 2;
        while( true ) {
          *puVar3 = *puVar13;
          puVar3[1] = *puVar12;
          puVar3 = puVar3 + 2;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) break;
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
        }
      } while (!(bool)uVar27 && cVar26 == cVar28);
    }
    *(undefined4 *)(puVar22 + 0x1d0) = *(undefined4 *)(puVar22 + 0x2d8);
    *(undefined4 *)(puVar22 + 0x2d8) = *(undefined4 *)(puVar22 + 500);
    *(int *)(puVar22 + 0x1f0) = *(int *)(puVar22 + 0x1f0) + -1;
    *(int *)(puVar22 + 0x268) = *(int *)(puVar22 + 0x168);
    *(int *)(puVar22 + 0x168) = *(int *)(puVar22 + 0x168) >> 2;
    puVar21 = puVar22;
  }
  else {
    local_108 = param_1;
    local_16c = 0;
    puVar21 = auStack_2d8;
  }
  if (*(int *)(puVar21 + 0x1f0) < 2) {
    if (*(int *)(puVar21 + 0x1f0) == 0) {
      return;
    }
    *(undefined4 *)(puVar21 + 0x1d0) = *(undefined4 *)(puVar21 + 0x2d8);
  }
  else {
    iVar4 = *(int *)(puVar21 + 0x268);
    *(int *)(puVar21 + 0xa8) = iVar15;
    iVar10 = iVar4 << 3;
    *(int *)(puVar21 + 0x170) = iVar4 * 0x18;
    *(int *)(puVar21 + 400) = iVar4 << 4;
    while( true ) {
      if (0 < *(int *)(puVar21 + 0x168)) {
        iVar4 = *(int *)(puVar21 + 0xa8);
        iVar15 = iVar4 << 3;
        if (0 < iVar4) {
          puVar13 = *(undefined4 **)(puVar21 + 0x1d0);
          puVar12 = *(undefined4 **)(puVar21 + 0x2d8);
          iVar5 = iVar4 << 4;
          iVar11 = 0;
          *(int *)(puVar21 + 0x148) = iVar4 * 0x18;
          *(int *)(puVar21 + 0x1b0) = iVar4 << 5;
          do {
            puVar3 = *(undefined4 **)(puVar21 + 0x16c);
            iVar4 = 0;
            *(int *)(puVar21 + 0x88) = iVar11;
            puVar7 = puVar12;
            puVar8 = puVar13;
            auVar30 = in_q5;
            auVar35 = in_q13;
            do {
              puVar19 = (undefined4 *)0x320;
              puVar2 = (undefined4 *)0x330;
              lVar29 = 2;
              puVar18 = puVar3;
              puVar23 = puVar13;
              puVar13 = puVar12;
              puVar16 = puVar12;
              in_q5 = in_q0;
              in_q13 = in_q2;
              while( true ) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar2 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar19 = (undefined4 *)0x328;
              puVar2 = (undefined4 *)0x338;
              lVar29 = 2;
              while( true ) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar2 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar13 = (undefined4 *)((int)puVar13 + iVar10);
              iVar4 = iVar4 + 4;
              iVar11 = *(int *)(puVar21 + 0x170);
              puVar19 = (undefined4 *)0x380;
              puVar2 = (undefined4 *)0x390;
              lVar29 = 2;
              puVar16 = puVar3;
              while( true ) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar2 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar19 = (undefined4 *)0x388;
              puVar2 = (undefined4 *)0x398;
              lVar29 = 2;
              while( true ) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar2 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar2 = puVar2 + 1;
              }
              puVar2 = (undefined4 *)((int)puVar3 + iVar15);
              puVar16 = (undefined4 *)(iVar11 + (int)puVar12);
              puVar17 = (undefined4 *)(iVar5 + (int)puVar18);
              puVar3 = (undefined4 *)0x3c0;
              puVar19 = (undefined4 *)0x3d0;
              lVar29 = 2;
              while( true ) {
                *puVar3 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar19 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar3 = puVar3 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar3 = (undefined4 *)0x3c8;
              puVar19 = (undefined4 *)0x3d8;
              lVar29 = 2;
              while( true ) {
                *puVar3 = *puVar13;
                puVar13 = puVar13 + 1;
                *puVar19 = *puVar13;
                puVar13 = puVar13 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar3 = puVar3 + 1;
                puVar19 = puVar19 + 1;
              }
              iVar11 = *(int *)(puVar21 + 400);
              puVar13 = (undefined4 *)0x300;
              puVar3 = (undefined4 *)0x310;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar3 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar3 = puVar3 + 1;
              }
              puVar13 = (undefined4 *)0x308;
              puVar3 = (undefined4 *)0x318;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar3 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar3 = puVar3 + 1;
              }
              puVar16 = (undefined4 *)(iVar11 + (int)puVar12);
              auVar40 = VectorDoubleMultiplyHighHalf(auVar35,in_q8,4,0);
              auVar40 = SatQ(auVar40,4,0);
              puVar3 = puVar18 + 8;
              puVar12 = puVar12 + 8;
              cVar28 = SBORROW4(iVar4,*(int *)(puVar21 + 0xa8));
              cVar26 = iVar4 - *(int *)(puVar21 + 0xa8) < 0;
              puVar13 = (undefined4 *)0x3e0;
              puVar19 = (undefined4 *)0x3f0;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar13 = (undefined4 *)0x3e8;
              puVar19 = (undefined4 *)0x3f8;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar17;
                puVar17 = puVar17 + 1;
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar18 = (undefined4 *)((int)puVar23 + iVar5);
              auVar31 = VectorDoubleMultiplyHighHalf(in_q12,in_q8,4,0);
              auVar31 = SatQ(auVar31,4,0);
              puVar13 = (undefined4 *)0x340;
              puVar19 = (undefined4 *)0x350;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar2;
                puVar2 = puVar2 + 1;
                *puVar19 = *puVar2;
                puVar2 = puVar2 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar13 = (undefined4 *)0x348;
              puVar19 = (undefined4 *)0x358;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar2;
                puVar2 = puVar2 + 1;
                *puVar19 = *puVar2;
                puVar2 = puVar2 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              auVar32 = VectorDoubleMultiplyHighHalf(in_q12,in_q9,4,0);
              auVar33 = SatQ(auVar32,4,0);
              puVar2 = (undefined4 *)(*(int *)(puVar21 + 0x148) + (int)puVar23);
              auVar35 = VectorDoubleMultiplyHighHalf(auVar35,in_q9,4,0);
              auVar36 = SatQ(auVar35,4,0);
              puVar13 = (undefined4 *)0x300;
              puVar19 = (undefined4 *)0x310;
              lVar29 = 2;
              auVar35 = in_q1;
              auVar32 = in_q5;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar13 = (undefined4 *)0x308;
              puVar19 = (undefined4 *)0x318;
              lVar29 = 2;
              while( true ) {
                *puVar13 = *puVar16;
                puVar16 = puVar16 + 1;
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              auVar33 = VectorSub(auVar40,auVar33,4);
              auVar40 = VectorDoubleMultiplyHighHalf(auVar32,in_q14,4,0);
              auVar41 = SatQ(auVar40,4,0);
              puVar13 = puVar23 + 8;
              auVar36 = VectorAdd(auVar31,auVar36,4);
              auVar40 = VectorDoubleMultiplyHighHalf(auVar35,in_q14,4,0);
              auVar40 = SatQ(auVar40,4,0);
              auVar35 = VectorDoubleMultiplyHighHalf(auVar35,in_q15,4,0);
              auVar35 = SatQ(auVar35,4,0);
              auVar31 = VectorDoubleMultiplyHighHalf(auVar32,in_q15,4,0);
              auVar32 = SatQ(auVar31,4,0);
              auVar31 = VectorAdd(auVar41,auVar35,4);
              auVar35 = VectorDoubleMultiplyHighHalf(in_q5,in_q4,4,0);
              auVar42 = SatQ(auVar35,4,0);
              auVar35 = VectorDoubleMultiplyHighHalf(in_q1,in_q4,4,0);
              auVar41 = SatQ(auVar35,4,0);
              auVar35 = VectorDoubleMultiplyHighHalf(in_q1,auVar30,4,0);
              auVar35 = SatQ(auVar35,4,0);
              auVar32 = VectorSub(auVar40,auVar32,4);
              in_q0 = VectorHalvingAdd(auVar36,auVar31,4,0);
              auVar40 = VectorHalvingSubtract(auVar33,auVar32,4,0);
              auVar35 = VectorAdd(auVar42,auVar35,4);
              auVar30 = VectorDoubleMultiplyHighHalf(in_q5,auVar30,4,0);
              in_q4 = SatQ(auVar30,4,0);
              in_q2 = VectorHalvingAdd(in_q13,auVar35,4,0);
              in_q1 = VectorHalvingSubtract(in_q13,auVar35,4,0);
              auVar32 = VectorHalvingAdd(auVar33,auVar32,4,0);
              auVar30 = VectorHalvingSubtract(auVar36,auVar31,4,0);
              auVar35 = VectorHalvingAdd(in_q1,auVar40,4,0);
              auVar31 = VectorHalvingSubtract(in_q2,in_q0,4,0);
              auVar33 = VectorSub(auVar41,in_q4,4);
              *(longlong *)(puVar21 + 0x68) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x70) = auVar35._8_8_;
              auVar35 = VectorHalvingAdd(in_q2,in_q0,4,0);
              *(longlong *)(puVar21 + 0x48) = auVar31._0_8_;
              *(longlong *)(puVar21 + 0x50) = auVar31._8_8_;
              auVar31 = VectorHalvingAdd(in_q3,auVar33,4,0);
              in_q12 = VectorHalvingSubtract(in_q3,auVar33,4,0);
              *(longlong *)(puVar21 + 8) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x10) = auVar35._8_8_;
              auVar35 = VectorHalvingSubtract(in_q1,auVar40,4,0);
              *(longlong *)(puVar21 + 0x28) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x30) = auVar35._8_8_;
              auVar35 = VectorHalvingSubtract(auVar31,auVar32,4,0);
              *(longlong *)(puVar21 + 0x58) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x60) = auVar35._8_8_;
              auVar35 = VectorHalvingAdd(auVar31,auVar32,4,0);
              *(longlong *)(puVar21 + 0x18) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x20) = auVar35._8_8_;
              auVar35 = VectorHalvingAdd(in_q12,auVar30,4,0);
              auVar30 = VectorHalvingSubtract(in_q12,auVar30,4,0);
              *(longlong *)(puVar21 + 0x38) = auVar35._0_8_;
              *(longlong *)(puVar21 + 0x40) = auVar35._8_8_;
              *(longlong *)(puVar21 + 0x78) = auVar30._0_8_;
              *(longlong *)(puVar21 + 0x80) = auVar30._8_8_;
              puVar19 = (undefined4 *)0x380;
              puVar16 = (undefined4 *)0x390;
              lVar29 = 2;
              puVar17 = puVar23;
              while( true ) {
                *puVar17 = *puVar19;
                puVar17[1] = *puVar16;
                puVar17 = puVar17 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar16 = puVar16 + 1;
              }
              puVar19 = (undefined4 *)0x388;
              puVar16 = (undefined4 *)0x398;
              lVar29 = 2;
              while( true ) {
                *puVar17 = *puVar19;
                puVar17[1] = *puVar16;
                puVar17 = puVar17 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar16 = puVar16 + 1;
              }
              puVar23 = (undefined4 *)((int)puVar23 + iVar15);
              puVar19 = (undefined4 *)0x380;
              puVar16 = (undefined4 *)0x390;
              lVar29 = 2;
              while( true ) {
                *puVar23 = *puVar19;
                puVar23[1] = *puVar16;
                puVar23 = puVar23 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar16 = puVar16 + 1;
              }
              puVar19 = (undefined4 *)0x388;
              puVar16 = (undefined4 *)0x398;
              lVar29 = 2;
              while( true ) {
                *puVar23 = *puVar19;
                puVar23[1] = *puVar16;
                puVar23 = puVar23 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar16 = puVar16 + 1;
              }
              puVar19 = (undefined4 *)0x380;
              puVar23 = (undefined4 *)0x390;
              lVar29 = 2;
              while( true ) {
                *puVar18 = *puVar19;
                puVar18[1] = *puVar23;
                puVar18 = puVar18 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar23 = puVar23 + 1;
              }
              puVar19 = (undefined4 *)0x388;
              puVar23 = (undefined4 *)0x398;
              lVar29 = 2;
              while( true ) {
                *puVar18 = *puVar19;
                puVar18[1] = *puVar23;
                puVar18 = puVar18 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar23 = puVar23 + 1;
              }
              in_q8 = *(undefined1 (*) [16])(puVar21 + 0x68);
              in_q9 = *(undefined1 (*) [16])(puVar21 + 0x78);
              puVar19 = (undefined4 *)0x380;
              puVar18 = (undefined4 *)0x390;
              lVar29 = 2;
              while( true ) {
                *puVar2 = *puVar19;
                puVar2[1] = *puVar18;
                puVar2 = puVar2 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar19 = (undefined4 *)0x388;
              puVar18 = (undefined4 *)0x398;
              lVar29 = 2;
              while( true ) {
                *puVar2 = *puVar19;
                puVar2[1] = *puVar18;
                puVar2 = puVar2 + 2;
                lVar29 = lVar29 + -1;
                if (lVar29 == 0) break;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              }
              auVar30 = in_q5;
              auVar35 = in_q13;
            } while (cVar26 != cVar28);
            puVar12 = (undefined4 *)((int)puVar7 + iVar15);
            iVar11 = *(int *)(puVar21 + 0x88) + 1;
            puVar13 = (undefined4 *)((int)puVar8 + *(int *)(puVar21 + 0x1b0));
          } while (iVar11 != *(int *)(puVar21 + 0x168));
        }
      }
      iVar5 = *(int *)(puVar21 + 0x1f0);
      *(int *)(puVar21 + 0x1f0) = iVar5 + -1;
      uVar6 = *(undefined4 *)(puVar21 + 0x2d8);
      *(int *)(puVar21 + 0x168) = *(int *)(puVar21 + 0x168) >> 2;
      iVar4 = *(int *)(puVar21 + 0xa8);
      iVar15 = iVar4 << 2;
      *(int *)(puVar21 + 0xa8) = iVar15;
      *(int *)(puVar21 + 0x16c) = iVar4 * 0x18 + *(int *)(puVar21 + 0x16c);
      *(undefined4 *)(puVar21 + 0x2d8) = *(undefined4 *)(puVar21 + 0x1d0);
      if (iVar5 + -1 == 1) break;
      *(undefined4 *)(puVar21 + 0x1d0) = uVar6;
    }
  }
  if (0 < *(int *)(puVar21 + 0x168)) {
    iVar5 = *(int *)(puVar21 + 0x268);
    iVar10 = iVar15 << 3;
    iVar4 = iVar5 << 3;
    if (0 < iVar15) {
      iVar11 = iVar5 << 4;
      iVar5 = iVar5 * 0x18;
      iVar25 = iVar15 << 4;
      *(undefined4 *)(puVar21 + 8) = 0;
      do {
        puVar12 = *(undefined4 **)(puVar21 + 500);
        iVar9 = 0;
        puVar13 = *(undefined4 **)(puVar21 + 0x16c);
        puVar7 = *(undefined4 **)(puVar21 + 0x1d0);
        auVar30 = in_q5;
        auVar35 = in_q13;
        do {
          puVar8 = (undefined4 *)0x320;
          puVar3 = (undefined4 *)0x330;
          lVar29 = 2;
          puVar19 = puVar13;
          puVar2 = puVar12;
          puVar12 = puVar7;
          puVar18 = puVar7;
          in_q5 = in_q0;
          in_q13 = in_q2;
          while( true ) {
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar3 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x328;
          puVar3 = (undefined4 *)0x338;
          lVar29 = 2;
          while( true ) {
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar3 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar12 = (undefined4 *)((int)puVar12 + iVar4);
          puVar23 = (undefined4 *)((int)puVar7 + iVar5);
          puVar16 = (undefined4 *)(iVar25 + (int)puVar19);
          iVar9 = iVar9 + 4;
          puVar8 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar29 = 2;
          puVar18 = puVar13;
          while( true ) {
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar3 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar29 = 2;
          while( true ) {
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar3 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar18 = (undefined4 *)((int)puVar13 + iVar10);
          cVar28 = SBORROW4(iVar15,iVar9);
          cVar26 = iVar15 - iVar9 < 0;
          uVar27 = iVar15 == iVar9;
          puVar13 = puVar19 + 8;
          puVar8 = (undefined4 *)0x3c0;
          puVar3 = (undefined4 *)0x3d0;
          lVar29 = 2;
          while( true ) {
            *puVar8 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x3c8;
          puVar3 = (undefined4 *)0x3d8;
          lVar29 = 2;
          while( true ) {
            *puVar8 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar3 = (undefined4 *)(iVar11 + (int)puVar7);
          puVar12 = (undefined4 *)0x300;
          puVar8 = (undefined4 *)0x310;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar23;
            puVar23 = puVar23 + 1;
            *puVar8 = *puVar23;
            puVar23 = puVar23 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar12 = (undefined4 *)0x308;
          puVar8 = (undefined4 *)0x318;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar23;
            puVar23 = puVar23 + 1;
            *puVar8 = *puVar23;
            puVar23 = puVar23 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          auVar40 = VectorDoubleMultiplyHighHalf(auVar35,in_q8,4,0);
          auVar40 = SatQ(auVar40,4,0);
          puVar7 = puVar7 + 8;
          puVar12 = (undefined4 *)0x3e0;
          puVar8 = (undefined4 *)0x3f0;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar16;
            puVar16 = puVar16 + 1;
            *puVar8 = *puVar16;
            puVar16 = puVar16 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar12 = (undefined4 *)0x3e8;
          puVar8 = (undefined4 *)0x3f8;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar16;
            puVar16 = puVar16 + 1;
            *puVar8 = *puVar16;
            puVar16 = puVar16 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar19 = (undefined4 *)(iVar11 + (int)puVar2);
          auVar31 = VectorDoubleMultiplyHighHalf(in_q12,in_q8,4,0);
          auVar31 = SatQ(auVar31,4,0);
          puVar12 = (undefined4 *)0x340;
          puVar8 = (undefined4 *)0x350;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar12 = (undefined4 *)0x348;
          puVar8 = (undefined4 *)0x358;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar18;
            puVar18 = puVar18 + 1;
            *puVar8 = *puVar18;
            puVar18 = puVar18 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar18 = (undefined4 *)((int)puVar2 + iVar5);
          auVar32 = VectorDoubleMultiplyHighHalf(in_q12,in_q9,4,0);
          auVar33 = SatQ(auVar32,4,0);
          auVar35 = VectorDoubleMultiplyHighHalf(auVar35,in_q9,4,0);
          auVar36 = SatQ(auVar35,4,0);
          puVar12 = (undefined4 *)0x300;
          puVar8 = (undefined4 *)0x310;
          lVar29 = 2;
          auVar35 = in_q1;
          auVar32 = in_q5;
          while( true ) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar12 = (undefined4 *)0x308;
          puVar8 = (undefined4 *)0x318;
          lVar29 = 2;
          while( true ) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          auVar33 = VectorSub(auVar40,auVar33,4);
          auVar40 = VectorDoubleMultiplyHighHalf(auVar32,in_q14,4,0);
          auVar41 = SatQ(auVar40,4,0);
          puVar12 = puVar2 + 8;
          auVar36 = VectorAdd(auVar31,auVar36,4);
          auVar40 = VectorDoubleMultiplyHighHalf(auVar35,in_q14,4,0);
          auVar40 = SatQ(auVar40,4,0);
          auVar35 = VectorDoubleMultiplyHighHalf(auVar35,in_q15,4,0);
          auVar35 = SatQ(auVar35,4,0);
          auVar31 = VectorDoubleMultiplyHighHalf(auVar32,in_q15,4,0);
          auVar32 = SatQ(auVar31,4,0);
          auVar31 = VectorAdd(auVar41,auVar35,4);
          auVar35 = VectorDoubleMultiplyHighHalf(in_q5,in_q4,4,0);
          auVar42 = SatQ(auVar35,4,0);
          auVar35 = VectorDoubleMultiplyHighHalf(in_q1,in_q4,4,0);
          auVar41 = SatQ(auVar35,4,0);
          auVar35 = VectorDoubleMultiplyHighHalf(in_q1,auVar30,4,0);
          auVar35 = SatQ(auVar35,4,0);
          auVar32 = VectorSub(auVar40,auVar32,4);
          in_q0 = VectorHalvingAdd(auVar36,auVar31,4,0);
          auVar40 = VectorHalvingSubtract(auVar33,auVar32,4,0);
          auVar35 = VectorAdd(auVar42,auVar35,4);
          auVar30 = VectorDoubleMultiplyHighHalf(in_q5,auVar30,4,0);
          in_q4 = SatQ(auVar30,4,0);
          in_q2 = VectorHalvingAdd(in_q13,auVar35,4,0);
          in_q1 = VectorHalvingSubtract(in_q13,auVar35,4,0);
          auVar32 = VectorHalvingAdd(auVar33,auVar32,4,0);
          auVar30 = VectorHalvingSubtract(auVar36,auVar31,4,0);
          auVar35 = VectorHalvingAdd(in_q1,auVar40,4,0);
          auVar31 = VectorHalvingSubtract(in_q2,in_q0,4,0);
          auVar33 = VectorSub(auVar41,in_q4,4);
          *(longlong *)(puVar21 + 0x128) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0x130) = auVar35._8_8_;
          auVar35 = VectorHalvingAdd(in_q2,in_q0,4,0);
          *(longlong *)(puVar21 + 0x108) = auVar31._0_8_;
          *(longlong *)(puVar21 + 0x110) = auVar31._8_8_;
          auVar31 = VectorHalvingAdd(in_q3,auVar33,4,0);
          in_q12 = VectorHalvingSubtract(in_q3,auVar33,4,0);
          *(longlong *)(puVar21 + 200) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0xd0) = auVar35._8_8_;
          auVar35 = VectorHalvingSubtract(in_q1,auVar40,4,0);
          *(longlong *)(puVar21 + 0xe8) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0xf0) = auVar35._8_8_;
          auVar35 = VectorHalvingSubtract(auVar31,auVar32,4,0);
          *(longlong *)(puVar21 + 0x118) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0x120) = auVar35._8_8_;
          auVar35 = VectorHalvingAdd(auVar31,auVar32,4,0);
          *(longlong *)(puVar21 + 0xd8) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0xe0) = auVar35._8_8_;
          auVar35 = VectorHalvingAdd(in_q12,auVar30,4,0);
          auVar30 = VectorHalvingSubtract(in_q12,auVar30,4,0);
          *(longlong *)(puVar21 + 0xf8) = auVar35._0_8_;
          *(longlong *)(puVar21 + 0x100) = auVar35._8_8_;
          *(longlong *)(puVar21 + 0x138) = auVar30._0_8_;
          *(longlong *)(puVar21 + 0x140) = auVar30._8_8_;
          puVar8 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar29 = 2;
          puVar23 = puVar2;
          while( true ) {
            *puVar23 = *puVar8;
            puVar23[1] = *puVar3;
            puVar23 = puVar23 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar29 = 2;
          while( true ) {
            *puVar23 = *puVar8;
            puVar23[1] = *puVar3;
            puVar23 = puVar23 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar2 = (undefined4 *)((int)puVar2 + iVar4);
          puVar8 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar29 = 2;
          while( true ) {
            *puVar2 = *puVar8;
            puVar2[1] = *puVar3;
            puVar2 = puVar2 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar29 = 2;
          while( true ) {
            *puVar2 = *puVar8;
            puVar2[1] = *puVar3;
            puVar2 = puVar2 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar29 = 2;
          while( true ) {
            *puVar19 = *puVar8;
            puVar19[1] = *puVar3;
            puVar19 = puVar19 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar29 = 2;
          while( true ) {
            *puVar19 = *puVar8;
            puVar19[1] = *puVar3;
            puVar19 = puVar19 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          in_q8 = *(undefined1 (*) [16])(puVar21 + 0x128);
          in_q9 = *(undefined1 (*) [16])(puVar21 + 0x138);
          puVar8 = (undefined4 *)0x380;
          puVar3 = (undefined4 *)0x390;
          lVar29 = 2;
          while( true ) {
            *puVar18 = *puVar8;
            puVar18[1] = *puVar3;
            puVar18 = puVar18 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar3 = (undefined4 *)0x398;
          lVar29 = 2;
          while( true ) {
            *puVar18 = *puVar8;
            puVar18[1] = *puVar3;
            puVar18 = puVar18 + 2;
            lVar29 = lVar29 + -1;
            if (lVar29 == 0) break;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          auVar30 = in_q5;
          auVar35 = in_q13;
        } while (!(bool)uVar27 && cVar26 == cVar28);
        iVar9 = *(int *)(puVar21 + 8);
        *(int *)(puVar21 + 0x1d0) = *(int *)(puVar21 + 0x1d0) + iVar10;
        *(int *)(puVar21 + 8) = iVar9 + 1;
        *(int *)(puVar21 + 500) = *(int *)(puVar21 + 500) + iVar10;
      } while (iVar9 + 1 != *(int *)(puVar21 + 0x168));
    }
  }
  return;
}



/* ===== skv_fft_c2c_1d_int32_neon @ 00022900 size=2100 ===== */

void skv_fft_c2c_1d_int32_neon
               (undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 in_q0 [16];
  undefined1 auVar14 [16];
  undefined1 in_q1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 auVar17 [16];
  undefined1 in_q4 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_q5 [16];
  undefined1 auVar20 [16];
  undefined1 in_q6 [16];
  undefined1 auVar21 [16];
  undefined1 in_q7 [16];
  undefined1 in_q8 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_q9 [16];
  undefined1 auVar25 [16];
  undefined1 in_q10 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_q11 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_q12 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_q13 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_q14 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_q15 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 local_98 [68];
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  uStack_54 = in_q4._0_8_;
  uStack_4c = in_q4._8_8_;
  uStack_44 = in_q5._0_8_;
  uStack_3c = in_q5._8_8_;
  uStack_34 = in_q6._0_8_;
  uStack_2c = in_q6._8_8_;
  uStack_24 = in_q7._0_8_;
  uStack_1c = in_q7._8_8_;
  iVar10 = *param_3;
  pauVar8 = (undefined1 (*) [16])local_98;
  pauVar7 = (undefined1 (*) [16])local_98;
  pauVar9 = (undefined1 (*) [16])local_98;
  if (0xe < iVar10) {
    piVar5 = (int *)param_3[1];
    if (1 < (uint)piVar5[(*piVar5 + 1) * 2]) {
                    /* WARNING: Subroutine does not return */
      __assert((char *)((int)&DAT_000230f8 + DAT_00023104),(char *)(DAT_00023100 + 0x230f4),0x6d7);
    }
    if (piVar5[(*piVar5 + 1) * 2] == 1) {
      (*(code *)PTR_puts_0003c168)(DAT_000230f8 + 0x22ba4);
      return;
    }
    puVar6 = (undefined4 *)param_3[2];
    if (param_5 == 0) {
      if (param_4 == 0) {
        if (iVar10 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00012e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR_skv_mixed_radix_fft_forward_int32_unscaled_neon_0003c130)
                    (param_1,param_2,piVar5,puVar6);
          return;
        }
        puVar11 = param_2 + 0x18;
        puVar3 = param_2 + 0x10;
        puVar1 = (undefined4 *)0x340;
        puVar12 = (undefined4 *)0x350;
        lVar13 = 2;
        puVar2 = param_2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x348;
        puVar12 = (undefined4 *)0x358;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        param_2 = param_2 + 8;
        puVar2 = puVar6 + 0x10;
        puVar4 = param_1 + 0x10;
        puVar1 = (undefined4 *)0x300;
        puVar12 = (undefined4 *)0x310;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x308;
        puVar12 = (undefined4 *)0x318;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar22 = VectorAdd(in_q0,in_q4,4);
        puVar1 = (undefined4 *)0x3e0;
        puVar12 = (undefined4 *)0x3f0;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x3e8;
        puVar12 = (undefined4 *)0x3f8;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar34 = VectorSub(in_q4,in_q0,4);
        puVar3 = param_1 + 0x18;
        puVar1 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar17 = VectorAdd(in_q6,in_q14,4);
        auVar25 = VectorSub(in_q14,in_q6,4);
        puVar1 = (undefined4 *)0x320;
        puVar12 = (undefined4 *)0x330;
        lVar13 = 2;
        puVar11 = puVar6;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x328;
        puVar12 = (undefined4 *)0x338;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar6 = puVar6 + 8;
        auVar29 = VectorSub(in_q15,in_q7,4);
        VectorSub(auVar22,auVar17,4);
        VectorAdd(auVar22,auVar17,4);
        auVar17 = VectorAdd(auVar34,auVar29,4);
        auVar22 = VectorSub(auVar34,auVar29,4);
        auVar34 = VectorAdd(in_q7,in_q15,4);
        puVar1 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar37 = VectorAdd(in_q1,in_q5,4);
        auVar18 = VectorZip(auVar17,4);
        auVar29 = VectorSub(in_q5,in_q1,4);
        VectorSub(auVar37,auVar34,4);
        VectorAdd(auVar37,auVar34,4);
        puVar1 = (undefined4 *)0x340;
        puVar12 = (undefined4 *)0x350;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x348;
        puVar12 = (undefined4 *)0x358;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        *(longlong *)pauVar8[2] = auVar17._0_8_;
        *(longlong *)(pauVar8[2] + 8) = auVar17._8_8_;
        auVar37 = VectorSub(auVar29,auVar25,4);
        auVar29 = VectorAdd(auVar29,auVar25,4);
        *(longlong *)*pauVar8 = in_q4._0_8_;
        *(longlong *)(*pauVar8 + 8) = in_q4._8_8_;
        *(longlong *)pauVar8[1] = in_q5._0_8_;
        *(longlong *)(pauVar8[1] + 8) = in_q5._8_8_;
        auVar17 = VectorZip(auVar22,4);
        auVar33 = VectorZip(auVar29,4);
        auVar34._8_8_ = auVar17._8_8_;
        auVar34._0_8_ = auVar18._8_8_;
        auVar30 = VectorZip(auVar37,4);
        auVar42._8_8_ = auVar17._0_8_;
        auVar42._0_8_ = auVar18._0_8_;
        *(longlong *)pauVar8[3] = auVar37._0_8_;
        *(longlong *)(pauVar8[3] + 8) = auVar37._8_8_;
        auVar25._8_8_ = auVar22._8_8_;
        auVar25._0_8_ = SUB168(pauVar8[2],8);
        auVar31._0_8_ = SUB168(pauVar8[2],0);
        auVar31._8_8_ = auVar22._0_8_;
        auVar41._8_8_ = auVar29._8_8_;
        auVar41._0_8_ = SUB168(pauVar8[3],8);
        auVar43._8_8_ = auVar33._8_8_;
        auVar43._0_8_ = auVar30._8_8_;
        auVar44._0_8_ = SUB168(pauVar8[3],0);
        auVar44._8_8_ = auVar29._0_8_;
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar34,in_q2,4,0);
        auVar37 = SatQ(auVar22,4,0);
        auVar40._0_8_ = auVar30._0_8_;
        auVar40._8_8_ = auVar33._0_8_;
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar34,in_q3,4,0);
        auVar17 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar43,in_q3,4,0);
        auVar33 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar25,in_q6,4,0);
        auVar18 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar43,in_q2,4,0);
        auVar43 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar25,in_q7,4,0);
        auVar25 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar41,in_q7,4,0);
        auVar29 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar31,*pauVar8,4,0);
        auVar22 = SatQ(auVar22,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar41,in_q6,4,0);
        auVar41 = SatQ(auVar34,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar44,pauVar8[1],4,0);
        auVar34 = SatQ(auVar34,4,0);
        auVar30 = VectorRoundDoubleMultiplyHighHalf(auVar31,pauVar8[1],4,0);
        auVar30 = SatQ(auVar30,4,0);
        auVar44 = VectorRoundDoubleMultiplyHighHalf(auVar44,*pauVar8,4,0);
        auVar44 = SatQ(auVar44,4,0);
        auVar17 = VectorAdd(auVar17,auVar43,4);
        auVar29 = VectorSub(auVar18,auVar29,4);
        auVar25 = VectorAdd(auVar25,auVar41,4);
        auVar18 = VectorSub(auVar37,auVar33,4);
        auVar30 = VectorAdd(auVar30,auVar44,4);
        auVar34 = VectorSub(auVar22,auVar34,4);
        auVar44 = VectorAdd(auVar18,auVar29,4);
        auVar37 = VectorAdd(auVar42,auVar34,4);
        auVar22 = VectorSub(auVar17,auVar25,4);
        auVar42 = VectorSub(auVar42,auVar34,4);
        auVar29 = VectorSub(auVar18,auVar29,4);
        auVar34 = VectorAdd(auVar40,auVar30,4);
        auVar18 = VectorSub(auVar40,auVar30,4);
        auVar17 = VectorAdd(auVar17,auVar25,4);
        VectorSub(auVar37,auVar44,4);
        VectorAdd(auVar42,auVar22,4);
        VectorAdd(auVar37,auVar44,4);
        VectorSub(auVar42,auVar22,4);
        VectorAdd(auVar34,auVar17,4);
        VectorSub(auVar34,auVar17,4);
        VectorSub(auVar18,auVar29,4);
        VectorAdd(auVar18,auVar29,4);
        puVar6 = (undefined4 *)0x3d0;
        puVar1 = (undefined4 *)0x3e0;
        lVar13 = 2;
        puVar12 = param_1;
        while( true ) {
          *puVar12 = *puVar6;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3d8;
        puVar1 = (undefined4 *)0x3e8;
        lVar13 = 2;
        while( true ) {
          *puVar12 = *puVar6;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        param_1 = param_1 + 8;
        puVar6 = (undefined4 *)0x300;
        puVar1 = (undefined4 *)0x310;
        lVar13 = 2;
        while( true ) {
          *param_1 = *puVar6;
          param_1[1] = *puVar1;
          param_1 = param_1 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x308;
        puVar1 = (undefined4 *)0x318;
        lVar13 = 2;
        while( true ) {
          *param_1 = *puVar6;
          param_1[1] = *puVar1;
          param_1 = param_1 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3a0;
        puVar1 = (undefined4 *)0x3b0;
        lVar13 = 2;
        while( true ) {
          *puVar4 = *puVar6;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3a8;
        puVar1 = (undefined4 *)0x3b8;
        lVar13 = 2;
        while( true ) {
          *puVar4 = *puVar6;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x320;
        puVar1 = (undefined4 *)0x330;
        lVar13 = 2;
        while( true ) {
          *puVar3 = *puVar6;
          puVar3[1] = *puVar1;
          puVar3 = puVar3 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x328;
        puVar1 = (undefined4 *)0x338;
        lVar13 = 2;
        while( true ) {
          *puVar3 = *puVar6;
          puVar3[1] = *puVar1;
          puVar3 = puVar3 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      else {
        if (iVar10 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00012da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR_skv_mixed_radix_fft_backward_int32_unscaled_neon_0003c10c)
                    (param_1,param_2,piVar5,puVar6);
          return;
        }
        puVar11 = param_2 + 0x18;
        puVar1 = (undefined4 *)0x340;
        puVar12 = (undefined4 *)0x350;
        lVar13 = 2;
        puVar2 = param_2;
        puVar3 = param_2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x348;
        puVar12 = (undefined4 *)0x358;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar2 = puVar2 + 8;
        param_2 = param_2 + 0x10;
        puVar3 = puVar6 + 0x10;
        puVar4 = param_1 + 0x10;
        puVar1 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar12 = *puVar2;
          puVar2 = puVar2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar2 = param_1 + 0x18;
        puVar1 = (undefined4 *)0x3e0;
        puVar12 = (undefined4 *)0x3f0;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x3e8;
        puVar12 = (undefined4 *)0x3f8;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar22 = VectorAdd(in_q14,in_q6,4);
        puVar1 = (undefined4 *)0x300;
        puVar12 = (undefined4 *)0x310;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x308;
        puVar12 = (undefined4 *)0x318;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar12 = *param_2;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar34 = VectorSub(in_q7,in_q15,4);
        auVar17 = VectorAdd(in_q0,in_q4,4);
        auVar25 = VectorSub(in_q4,in_q0,4);
        puVar1 = (undefined4 *)0x320;
        puVar12 = (undefined4 *)0x330;
        lVar13 = 2;
        puVar11 = puVar6;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x328;
        puVar12 = (undefined4 *)0x338;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar6 = puVar6 + 8;
        auVar29 = VectorSub(in_q6,in_q14,4);
        VectorSub(auVar17,auVar22,4);
        VectorAdd(auVar17,auVar22,4);
        auVar17 = VectorSub(auVar25,auVar34,4);
        auVar22 = VectorAdd(auVar25,auVar34,4);
        auVar34 = VectorAdd(in_q15,in_q7,4);
        puVar1 = (undefined4 *)0x360;
        puVar12 = (undefined4 *)0x370;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x368;
        puVar12 = (undefined4 *)0x378;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        auVar37 = VectorAdd(in_q1,in_q5,4);
        auVar18 = VectorZip(auVar17,4);
        auVar25 = VectorSub(in_q5,in_q1,4);
        VectorSub(auVar37,auVar34,4);
        VectorAdd(auVar37,auVar34,4);
        puVar1 = (undefined4 *)0x340;
        puVar12 = (undefined4 *)0x350;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar1 = (undefined4 *)0x348;
        puVar12 = (undefined4 *)0x358;
        lVar13 = 2;
        while( true ) {
          *puVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar1 = puVar1 + 1;
          puVar12 = puVar12 + 1;
        }
        *(longlong *)pauVar7[2] = auVar17._0_8_;
        *(longlong *)(pauVar7[2] + 8) = auVar17._8_8_;
        auVar42 = VectorAdd(auVar25,auVar29,4);
        auVar37 = VectorSub(auVar25,auVar29,4);
        *(longlong *)*pauVar7 = in_q4._0_8_;
        *(longlong *)(*pauVar7 + 8) = in_q4._8_8_;
        *(longlong *)pauVar7[1] = in_q5._0_8_;
        *(longlong *)(pauVar7[1] + 8) = in_q5._8_8_;
        auVar34 = VectorZip(auVar22,4);
        auVar29 = VectorZip(auVar37,4);
        auVar17._8_8_ = auVar34._8_8_;
        auVar17._0_8_ = auVar18._8_8_;
        auVar25 = VectorZip(auVar42,4);
        auVar30._8_8_ = auVar34._0_8_;
        auVar30._0_8_ = auVar18._0_8_;
        *(longlong *)pauVar7[3] = auVar42._0_8_;
        *(longlong *)(pauVar7[3] + 8) = auVar42._8_8_;
        auVar18._8_8_ = auVar29._8_8_;
        auVar18._0_8_ = auVar25._8_8_;
        auVar32._0_8_ = auVar25._0_8_;
        auVar32._8_8_ = auVar29._0_8_;
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar17,in_q3,4,0);
        auVar42 = SatQ(auVar34,4,0);
        auVar29._8_8_ = auVar22._8_8_;
        auVar29._0_8_ = SUB168(pauVar7[2],8);
        auVar33._0_8_ = SUB168(pauVar7[2],0);
        auVar33._8_8_ = auVar22._0_8_;
        auVar28._8_8_ = auVar37._8_8_;
        auVar28._0_8_ = SUB168(pauVar7[3],8);
        auVar26._0_8_ = SUB168(pauVar7[3],0);
        auVar26._8_8_ = auVar37._0_8_;
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar18,in_q2,4,0);
        auVar44 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar17,in_q2,4,0);
        auVar17 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar18,in_q3,4,0);
        auVar40 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar29,in_q7,4,0);
        auVar37 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar28,in_q6,4,0);
        auVar18 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar29,in_q6,4,0);
        auVar25 = SatQ(auVar22,4,0);
        auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar26,pauVar7[1],4,0);
        auVar22 = SatQ(auVar22,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar26,*pauVar7,4,0);
        auVar29 = SatQ(auVar34,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar33,pauVar7[1],4,0);
        auVar43 = SatQ(auVar34,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar28,in_q7,4,0);
        auVar31 = SatQ(auVar34,4,0);
        auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar33,*pauVar7,4,0);
        auVar34 = SatQ(auVar34,4,0);
        auVar31 = VectorAdd(auVar25,auVar31,4);
        auVar43 = VectorSub(auVar29,auVar43,4);
        auVar17 = VectorAdd(auVar17,auVar40,4);
        auVar25 = VectorSub(auVar18,auVar37,4);
        auVar34 = VectorAdd(auVar34,auVar22,4);
        auVar29 = VectorSub(auVar44,auVar42,4);
        auVar37 = VectorAdd(auVar17,auVar31,4);
        auVar22 = VectorSub(auVar17,auVar31,4);
        auVar44 = VectorAdd(auVar32,auVar43,4);
        auVar31 = VectorSub(auVar32,auVar43,4);
        auVar42 = VectorAdd(auVar30,auVar34,4);
        auVar17 = VectorSub(auVar29,auVar25,4);
        auVar18 = VectorSub(auVar30,auVar34,4);
        *(longlong *)*pauVar7 = auVar31._0_8_;
        *(longlong *)(*pauVar7 + 8) = auVar31._8_8_;
        auVar34 = VectorAdd(auVar29,auVar25,4);
        VectorAdd(auVar18,auVar17,4);
        VectorSub(auVar18,auVar17,4);
        VectorSub(auVar42,auVar37,4);
        VectorAdd(auVar42,auVar37,4);
        VectorAdd(auVar44,auVar34,4);
        VectorSub(auVar44,auVar34,4);
        VectorAdd(*pauVar7,auVar22,4);
        VectorSub(*pauVar7,auVar22,4);
        puVar6 = (undefined4 *)0x330;
        puVar1 = (undefined4 *)0x340;
        lVar13 = 2;
        puVar12 = param_1;
        while( true ) {
          *puVar12 = *puVar6;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x338;
        puVar1 = (undefined4 *)0x348;
        lVar13 = 2;
        while( true ) {
          *puVar12 = *puVar6;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        param_1 = param_1 + 8;
        puVar6 = (undefined4 *)0x3c0;
        puVar1 = (undefined4 *)0x3d0;
        lVar13 = 2;
        while( true ) {
          *param_1 = *puVar6;
          param_1[1] = *puVar1;
          param_1 = param_1 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3c8;
        puVar1 = (undefined4 *)0x3d8;
        lVar13 = 2;
        while( true ) {
          *param_1 = *puVar6;
          param_1[1] = *puVar1;
          param_1 = param_1 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x300;
        puVar1 = (undefined4 *)0x310;
        lVar13 = 2;
        while( true ) {
          *puVar4 = *puVar6;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x308;
        puVar1 = (undefined4 *)0x318;
        lVar13 = 2;
        while( true ) {
          *puVar4 = *puVar6;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3e0;
        puVar1 = (undefined4 *)0x3f0;
        lVar13 = 2;
        while( true ) {
          *puVar2 = *puVar6;
          puVar2[1] = *puVar1;
          puVar2 = puVar2 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar6 = (undefined4 *)0x3e8;
        puVar1 = (undefined4 *)0x3f8;
        lVar13 = 2;
        while( true ) {
          *puVar2 = *puVar6;
          puVar2[1] = *puVar1;
          puVar2 = puVar2 + 2;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
    else if (param_4 == 0) {
      if (iVar10 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00012bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_skv_mixed_radix_fft_forward_int32_scaled_neon_0003c068)
                  (param_1,param_2,piVar5,puVar6);
        return;
      }
      puVar11 = param_2 + 0x18;
      puVar1 = (undefined4 *)0x380;
      puVar12 = (undefined4 *)0x390;
      lVar13 = 2;
      puVar2 = param_2;
      puVar3 = param_2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x388;
      puVar12 = (undefined4 *)0x398;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar2 = puVar2 + 8;
      param_2 = param_2 + 0x10;
      puVar3 = puVar6 + 0x10;
      puVar4 = param_1 + 0x10;
      puVar1 = (undefined4 *)0x3a0;
      puVar12 = (undefined4 *)0x3b0;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar12 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3a8;
      puVar12 = (undefined4 *)0x3b8;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar12 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar2 = param_1 + 0x18;
      puVar1 = (undefined4 *)0x320;
      puVar12 = (undefined4 *)0x330;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x328;
      puVar12 = (undefined4 *)0x338;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3e0;
      puVar12 = (undefined4 *)0x3f0;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3e8;
      puVar12 = (undefined4 *)0x3f8;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x340;
      puVar12 = (undefined4 *)0x350;
      lVar13 = 2;
      puVar11 = puVar6;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x348;
      puVar12 = (undefined4 *)0x358;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar6 = puVar6 + 8;
      auVar22 = VectorHalvingAdd(in_q10,in_q14,4,0);
      auVar42 = VectorHalvingSubtract(in_q10,in_q14,4,0);
      auVar34 = VectorHalvingAdd(in_q8,in_q2,4,0);
      auVar18 = VectorHalvingSubtract(in_q8,in_q2,4,0);
      auVar37 = VectorHalvingSubtract(in_q11,in_q15,4,0);
      auVar25 = VectorHalvingAdd(in_q11,in_q15,4,0);
      auVar44 = VectorHalvingAdd(in_q9,in_q3,4,0);
      auVar17 = VectorHalvingSubtract(in_q9,in_q3,4,0);
      VectorHalvingSubtract(auVar34,auVar22,4,0);
      VectorHalvingAdd(auVar34,auVar22,4,0);
      auVar29 = VectorHalvingAdd(auVar18,auVar37,4,0);
      auVar37 = VectorHalvingSubtract(auVar18,auVar37,4,0);
      VectorHalvingSubtract(auVar44,auVar25,4,0);
      VectorHalvingAdd(auVar44,auVar25,4,0);
      auVar22 = VectorZip(auVar37,4);
      auVar30 = VectorHalvingSubtract(auVar17,auVar42,4,0);
      auVar44 = VectorHalvingAdd(auVar17,auVar42,4,0);
      auVar34 = VectorZip(auVar29,4);
      auVar42 = VectorZip(auVar30,4);
      auVar18 = VectorZip(auVar44,4);
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._0_8_ = auVar34._8_8_;
      *(longlong *)pauVar9 = auVar34._0_8_;
      *(longlong *)((int)pauVar9 + 8) = auVar22._0_8_;
      auVar39._8_8_ = auVar18._8_8_;
      auVar39._0_8_ = auVar42._8_8_;
      puVar1 = (undefined4 *)0x390;
      puVar12 = (undefined4 *)0x3a0;
      lVar13 = 2;
      auVar22 = auVar18;
      auVar34 = auVar44;
      auVar17 = auVar37;
      auVar25 = auVar30;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x398;
      puVar12 = (undefined4 *)0x3a8;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      auVar15._0_8_ = auVar29._0_8_;
      auVar15._8_8_ = auVar34._8_8_;
      auVar35._0_8_ = auVar17._0_8_;
      auVar35._8_8_ = auVar37._0_8_;
      auVar46._0_8_ = auVar25._0_8_;
      auVar46._8_8_ = auVar34._0_8_;
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar21,in_q4,4,0);
      auVar17 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar39,in_q4,4,0);
      auVar34 = SatQ(auVar34,4,0);
      auVar25 = VectorRoundDoubleMultiplyHighHalf(auVar21,in_q5,4,0);
      auVar25 = SatQ(auVar25,4,0);
      auVar37._8_8_ = auVar37._8_8_;
      auVar37._0_8_ = auVar29._8_8_;
      puVar1 = (undefined4 *)0x360;
      puVar12 = (undefined4 *)0x370;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x368;
      puVar12 = (undefined4 *)0x378;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      auVar31 = VectorRoundDoubleMultiplyHighHalf(auVar39,in_q5,4,0);
      auVar31 = SatQ(auVar31,4,0);
      auVar36._8_8_ = auVar35._8_8_;
      auVar36._0_8_ = auVar15._0_8_;
      auVar47._8_8_ = auVar46._8_8_;
      auVar47._0_8_ = auVar30._0_8_;
      auVar16._8_8_ = auVar15._8_8_;
      auVar16._0_8_ = auVar30._8_8_;
      auVar24._0_8_ = auVar42._0_8_;
      auVar24._8_8_ = auVar18._0_8_;
      auVar18 = VectorRoundDoubleMultiplyHighHalf(auVar47,auVar29,4,0);
      auVar42 = SatQ(auVar18,4,0);
      auVar18 = VectorAdd(auVar25,auVar34,4);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar37,auVar44,4,0);
      auVar34 = SatQ(auVar34,4,0);
      auVar25 = VectorRoundDoubleMultiplyHighHalf(auVar36,auVar21,4,0);
      auVar43 = SatQ(auVar25,4,0);
      auVar25 = VectorRoundDoubleMultiplyHighHalf(auVar37,auVar22,4,0);
      auVar25 = SatQ(auVar25,4,0);
      auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar16,auVar22,4,0);
      auVar37 = SatQ(auVar22,4,0);
      auVar22 = VectorSub(auVar17,auVar31,4);
      auVar17 = VectorRoundDoubleMultiplyHighHalf(auVar36,auVar29,4,0);
      auVar30 = SatQ(auVar17,4,0);
      auVar17 = VectorRoundDoubleMultiplyHighHalf(auVar16,auVar44,4,0);
      auVar17 = SatQ(auVar17,4,0);
      auVar29 = VectorRoundDoubleMultiplyHighHalf(auVar47,auVar21,4,0);
      auVar31 = SatQ(auVar29,4,0);
      auVar44 = VectorSub(auVar34,auVar37,4);
      auVar37 = VectorSub(auVar43,auVar42,4);
      auVar29 = VectorHalvingAdd(auVar22,auVar44,4,0);
      auVar42 = VectorHalvingAdd(*pauVar9,auVar37,4,0);
      auVar34 = VectorAdd(auVar25,auVar17,4);
      auVar17 = VectorAdd(auVar30,auVar31,4);
      auVar25 = VectorHalvingSubtract(*pauVar9,auVar37,4,0);
      VectorHalvingSubtract(auVar42,auVar29,4,0);
      auVar37 = VectorHalvingSubtract(auVar22,auVar44,4,0);
      auVar22 = VectorHalvingSubtract(auVar18,auVar34,4,0);
      VectorHalvingAdd(auVar42,auVar29,4,0);
      auVar34 = VectorHalvingAdd(auVar18,auVar34,4,0);
      auVar29 = VectorHalvingAdd(auVar24,auVar17,4,0);
      auVar17 = VectorHalvingSubtract(auVar24,auVar17,4,0);
      VectorHalvingAdd(auVar25,auVar22,4,0);
      VectorHalvingAdd(auVar29,auVar34,4,0);
      VectorHalvingSubtract(auVar29,auVar34,4,0);
      VectorHalvingSubtract(auVar25,auVar22,4,0);
      VectorHalvingSubtract(auVar17,auVar37,4,0);
      VectorHalvingAdd(auVar17,auVar37,4,0);
      puVar6 = (undefined4 *)0x3e0;
      puVar1 = (undefined4 *)0x3f0;
      lVar13 = 2;
      puVar12 = param_1;
      while( true ) {
        *puVar12 = *puVar6;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x3e8;
      puVar1 = (undefined4 *)0x3f8;
      lVar13 = 2;
      while( true ) {
        *puVar12 = *puVar6;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      param_1 = param_1 + 8;
      puVar6 = (undefined4 *)0x340;
      puVar1 = (undefined4 *)0x350;
      lVar13 = 2;
      while( true ) {
        *param_1 = *puVar6;
        param_1[1] = *puVar1;
        param_1 = param_1 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x348;
      puVar1 = (undefined4 *)0x358;
      lVar13 = 2;
      while( true ) {
        *param_1 = *puVar6;
        param_1[1] = *puVar1;
        param_1 = param_1 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x300;
      puVar1 = (undefined4 *)0x310;
      lVar13 = 2;
      while( true ) {
        *puVar4 = *puVar6;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x308;
      puVar1 = (undefined4 *)0x318;
      lVar13 = 2;
      while( true ) {
        *puVar4 = *puVar6;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x3c0;
      puVar1 = (undefined4 *)0x3d0;
      lVar13 = 2;
      while( true ) {
        *puVar2 = *puVar6;
        puVar2[1] = *puVar1;
        puVar2 = puVar2 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x3c8;
      puVar1 = (undefined4 *)0x3d8;
      lVar13 = 2;
      while( true ) {
        *puVar2 = *puVar6;
        puVar2[1] = *puVar1;
        puVar2 = puVar2 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    else {
      if (iVar10 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00012db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_skv_mixed_radix_fft_backward_int32_scaled_neon_0003c110)
                  (param_1,param_2,piVar5,puVar6);
        return;
      }
      puVar11 = param_2 + 0x18;
      puVar1 = (undefined4 *)0x380;
      puVar12 = (undefined4 *)0x390;
      lVar13 = 2;
      puVar2 = param_2;
      puVar3 = param_2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x388;
      puVar12 = (undefined4 *)0x398;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar2 = puVar2 + 8;
      param_2 = param_2 + 0x10;
      puVar3 = puVar6 + 0x10;
      puVar4 = param_1 + 0x10;
      puVar1 = (undefined4 *)0x320;
      puVar12 = (undefined4 *)0x330;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x328;
      puVar12 = (undefined4 *)0x338;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3c0;
      puVar12 = (undefined4 *)0x3d0;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar12 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3c8;
      puVar12 = (undefined4 *)0x3d8;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar12 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar2 = param_1 + 0x18;
      puVar1 = (undefined4 *)0x300;
      puVar12 = (undefined4 *)0x310;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x308;
      puVar12 = (undefined4 *)0x318;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x300;
      puVar12 = (undefined4 *)0x310;
      lVar13 = 2;
      puVar11 = puVar6;
      auVar22 = in_q0;
      auVar34 = in_q1;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x308;
      puVar12 = (undefined4 *)0x318;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar6 = puVar6 + 8;
      auVar17 = VectorHalvingAdd(in_q12,auVar22,4,0);
      auVar42 = VectorHalvingSubtract(in_q12,auVar22,4,0);
      auVar22 = VectorHalvingAdd(in_q8,in_q2,4,0);
      auVar29 = VectorHalvingSubtract(in_q8,in_q2,4,0);
      auVar44 = VectorHalvingSubtract(in_q13,auVar34,4,0);
      auVar34 = VectorHalvingAdd(in_q13,auVar34,4,0);
      auVar37 = VectorHalvingAdd(in_q9,in_q3,4,0);
      auVar25 = VectorHalvingSubtract(in_q9,in_q3,4,0);
      auVar18 = VectorHalvingSubtract(auVar29,auVar44,4,0);
      VectorHalvingSubtract(auVar22,auVar17,4,0);
      VectorHalvingAdd(auVar22,auVar17,4,0);
      auVar30 = VectorHalvingAdd(auVar29,auVar44,4,0);
      VectorHalvingSubtract(auVar37,auVar34,4,0);
      VectorHalvingAdd(auVar37,auVar34,4,0);
      auVar34 = VectorZip(auVar18,4);
      auVar37 = VectorHalvingAdd(auVar25,auVar42,4,0);
      auVar44 = VectorHalvingSubtract(auVar25,auVar42,4,0);
      auVar22 = VectorZip(auVar30,4);
      auVar27._8_8_ = auVar22._0_8_;
      auVar27._0_8_ = auVar34._0_8_;
      auVar22._8_8_ = auVar22._8_8_;
      auVar22._0_8_ = auVar34._8_8_;
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar22,in_q1,4,0);
      auVar29 = SatQ(auVar34,4,0);
      auVar31 = VectorZip(auVar37,4);
      auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar22,in_q0,4,0);
      auVar25 = SatQ(auVar22,4,0);
      auVar42 = VectorZip(auVar44,4);
      auVar45._8_8_ = auVar42._8_8_;
      auVar45._0_8_ = auVar31._8_8_;
      auVar14._8_8_ = auVar30._8_8_;
      auVar14._0_8_ = auVar18._8_8_;
      auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar45,in_q0,4,0);
      auVar43 = SatQ(auVar22,4,0);
      auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar45,in_q1,4,0);
      auVar17 = SatQ(auVar22,4,0);
      auVar20._0_8_ = auVar18._0_8_;
      auVar20._8_8_ = auVar30._0_8_;
      auVar19._8_8_ = auVar44._8_8_;
      auVar19._0_8_ = auVar37._8_8_;
      puVar1 = (undefined4 *)0x360;
      puVar12 = (undefined4 *)0x370;
      lVar13 = 2;
      auVar22 = auVar44;
      auVar34 = auVar37;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x368;
      puVar12 = (undefined4 *)0x378;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar12 = *puVar3;
        puVar3 = puVar3 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      auVar23._8_8_ = auVar42._0_8_;
      auVar23._0_8_ = auVar31._0_8_;
      puVar1 = (undefined4 *)0x3b0;
      puVar12 = (undefined4 *)0x3c0;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar1 = (undefined4 *)0x3b8;
      puVar12 = (undefined4 *)0x3c8;
      lVar13 = 2;
      while( true ) {
        *puVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar1 = puVar1 + 1;
        puVar12 = puVar12 + 1;
      }
      auVar38._0_8_ = auVar34._0_8_;
      auVar38._8_8_ = auVar44._0_8_;
      auVar29 = VectorSub(auVar43,auVar29,4);
      auVar25 = VectorAdd(auVar25,auVar17,4);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar19,auVar37,4,0);
      auVar44 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar14,auVar37,4,0);
      auVar17 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar14,in_q7,4,0);
      auVar18 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar19,in_q7,4,0);
      auVar30 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar20,auVar31,4,0);
      auVar37 = SatQ(auVar34,4,0);
      auVar34 = VectorRoundDoubleMultiplyHighHalf(auVar38,auVar31,4,0);
      auVar34 = SatQ(auVar34,4,0);
      auVar42 = VectorRoundDoubleMultiplyHighHalf(auVar38,auVar22,4,0);
      auVar42 = SatQ(auVar42,4,0);
      auVar22 = VectorRoundDoubleMultiplyHighHalf(auVar20,auVar22,4,0);
      auVar22 = SatQ(auVar22,4,0);
      auVar30 = VectorAdd(auVar17,auVar30,4);
      auVar37 = VectorAdd(auVar37,auVar42,4);
      auVar17 = VectorHalvingAdd(auVar25,auVar30,4,0);
      auVar42 = VectorHalvingAdd(auVar27,auVar37,4,0);
      auVar18 = VectorSub(auVar44,auVar18,4);
      auVar34 = VectorSub(auVar34,auVar22,4);
      auVar37 = VectorHalvingSubtract(auVar27,auVar37,4,0);
      auVar22 = VectorHalvingSubtract(auVar25,auVar30,4,0);
      VectorHalvingSubtract(auVar42,auVar17,4,0);
      auVar25 = VectorHalvingSubtract(auVar29,auVar18,4,0);
      VectorHalvingAdd(auVar42,auVar17,4,0);
      auVar17 = VectorHalvingAdd(auVar29,auVar18,4,0);
      auVar29 = VectorHalvingAdd(auVar23,auVar34,4,0);
      auVar34 = VectorHalvingSubtract(auVar23,auVar34,4,0);
      VectorHalvingAdd(auVar37,auVar25,4,0);
      VectorHalvingAdd(auVar29,auVar17,4,0);
      VectorHalvingSubtract(auVar29,auVar17,4,0);
      VectorHalvingSubtract(auVar37,auVar25,4,0);
      VectorHalvingSubtract(auVar34,auVar22,4,0);
      VectorHalvingAdd(auVar34,auVar22,4,0);
      puVar6 = (undefined4 *)0x3e0;
      puVar1 = (undefined4 *)0x3f0;
      lVar13 = 2;
      puVar12 = param_1;
      while( true ) {
        *puVar12 = *puVar6;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x3e8;
      puVar1 = (undefined4 *)0x3f8;
      lVar13 = 2;
      while( true ) {
        *puVar12 = *puVar6;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      param_1 = param_1 + 8;
      puVar6 = (undefined4 *)0x360;
      puVar1 = (undefined4 *)0x370;
      lVar13 = 2;
      while( true ) {
        *param_1 = *puVar6;
        param_1[1] = *puVar1;
        param_1 = param_1 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x368;
      puVar1 = (undefined4 *)0x378;
      lVar13 = 2;
      while( true ) {
        *param_1 = *puVar6;
        param_1[1] = *puVar1;
        param_1 = param_1 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x300;
      puVar1 = (undefined4 *)0x310;
      lVar13 = 2;
      while( true ) {
        *puVar4 = *puVar6;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x308;
      puVar1 = (undefined4 *)0x318;
      lVar13 = 2;
      while( true ) {
        *puVar4 = *puVar6;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x340;
      puVar1 = (undefined4 *)0x350;
      lVar13 = 2;
      while( true ) {
        *puVar2 = *puVar6;
        puVar2[1] = *puVar1;
        puVar2 = puVar2 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined4 *)0x348;
      puVar1 = (undefined4 *)0x358;
      lVar13 = 2;
      while( true ) {
        *puVar2 = *puVar6;
        puVar2[1] = *puVar1;
        puVar2 = puVar2 + 2;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) break;
        puVar6 = puVar6 + 1;
        puVar1 = puVar1 + 1;
      }
    }
  }
  return;
}



/* ===== skv_fft_r2c_1d_int32_neon @ 00023108 size=864 ===== */

void skv_fft_r2c_1d_int32_neon(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  char cVar20;
  int *piVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar24 [16];
  undefined1 in_q10 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_q11 [16];
  undefined1 in_q12 [16];
  undefined1 in_q13 [16];
  undefined1 in_q14 [16];
  undefined1 auVar27 [16];
  undefined1 in_q15 [16];
  undefined1 auVar29 [16];
  int local_80;
  undefined8 local_7c;
  int *local_74;
  undefined1 auVar28 [16];
  
  piVar12 = *(int **)(param_3 + 0x14);
  local_80 = *(int *)(param_3 + 4);
  auVar27._8_8_ = in_q8._8_8_;
  auVar27._0_8_ = *(undefined8 *)(param_3 + 8);
  local_74 = piVar12 + local_80 * 2;
  local_7c = auVar27._0_8_;
  skv_fft_c2c_1d_int32_neon(piVar12,param_2,&local_80,0,param_4);
  iVar8 = *(int *)(param_3 + 4);
  puVar4 = *(undefined4 **)(param_3 + 0x10);
  iVar6 = *piVar12;
  iVar3 = piVar12[1];
  iVar18 = iVar8 / 2;
  if (param_4 == 0) {
    *(int *)(param_1 + 4) = iVar6 + iVar3;
    *(int *)(param_1 + iVar8 * 8) = iVar6 - iVar3;
    if (7 < iVar8) {
      piVar7 = piVar12 + 2;
      puVar11 = (undefined4 *)(param_1 + 8);
      iVar3 = 1;
      iVar6 = (int)(piVar12 + iVar8) * 2 + -0x18;
      iVar8 = (param_1 + iVar8 * 4) * 2 + -0x18;
      do {
        puVar9 = (undefined4 *)(iVar6 - (int)piVar7);
        piVar12 = (int *)0x3e0;
        piVar2 = (int *)0x3f0;
        lVar23 = 2;
        piVar21 = piVar7;
        while( true ) {
          *piVar12 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar2 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          piVar12 = piVar12 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar12 = (int *)0x3e8;
        piVar2 = (int *)0x3f8;
        lVar23 = 2;
        while( true ) {
          *piVar12 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar2 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          piVar12 = piVar12 + 1;
          piVar2 = piVar2 + 1;
        }
        iVar3 = iVar3 + 4;
        piVar7 = piVar7 + 8;
        puVar1 = (undefined4 *)0x3c0;
        puVar22 = (undefined4 *)0x3d0;
        lVar23 = 2;
        while( true ) {
          *puVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar22 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar1 = puVar1 + 1;
          puVar22 = puVar22 + 1;
        }
        puVar1 = (undefined4 *)0x3c8;
        puVar22 = (undefined4 *)0x3d8;
        lVar23 = 2;
        while( true ) {
          *puVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar22 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar1 = puVar1 + 1;
          puVar22 = puVar22 + 1;
        }
        cVar20 = SBORROW4(iVar18,iVar3);
        cVar19 = iVar18 - iVar3 < 0;
        puVar10 = (undefined4 *)(iVar8 - (int)puVar11);
        auVar27 = vrev(in_q13,4);
        auVar26 = vrev(in_q12,4);
        auVar24._8_8_ = auVar27._0_8_;
        auVar24._0_8_ = auVar27._8_8_;
        auVar25._8_8_ = auVar26._0_8_;
        auVar25._0_8_ = auVar26._8_8_;
        auVar27 = FloatVectorNeg(auVar24,1,4);
        puVar9 = (undefined4 *)0x3a0;
        puVar1 = (undefined4 *)0x3b0;
        lVar23 = 2;
        puVar22 = puVar4;
        while( true ) {
          *puVar9 = *puVar22;
          puVar22 = puVar22 + 1;
          *puVar1 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x3a8;
        puVar1 = (undefined4 *)0x3b8;
        lVar23 = 2;
        while( true ) {
          *puVar9 = *puVar22;
          puVar22 = puVar22 + 1;
          *puVar1 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar4 = puVar4 + 8;
        auVar26 = VectorSub(in_q14,auVar25,4);
        in_q12 = VectorAdd(auVar25,in_q14,4);
        auVar25 = VectorSub(in_q15,auVar27,4);
        auVar24 = VectorDoubleMultiplyHighHalf(auVar25,in_q11,4,0);
        auVar24 = SatQ(auVar24,4,0);
        auVar25 = VectorDoubleMultiplyHighHalf(auVar25,in_q10,4,0);
        in_q13 = SatQ(auVar25,4,0);
        auVar25 = VectorDoubleMultiplyHighHalf(auVar26,in_q10,4,0);
        auVar25 = SatQ(auVar25,4,0);
        auVar26 = VectorDoubleMultiplyHighHalf(auVar26,in_q11,4,0);
        auVar26 = SatQ(auVar26,4,0);
        in_q11 = VectorAdd(auVar27,in_q15,4);
        auVar24 = VectorSub(auVar25,auVar24,4);
        VectorHalvingAdd(in_q12,auVar24,4,0);
        auVar27 = VectorAdd(auVar26,in_q13,4);
        auVar24 = VectorHalvingSubtract(in_q12,auVar24,4,0);
        VectorHalvingAdd(in_q11,auVar27,4,0);
        auVar27 = VectorHalvingSubtract(auVar27,in_q11,4,0);
        in_q10 = vrev(auVar24,4);
        puVar9 = (undefined4 *)0x340;
        puVar1 = (undefined4 *)0x350;
        lVar23 = 2;
        puVar22 = puVar11;
        while( true ) {
          *puVar22 = *puVar9;
          puVar22[1] = *puVar1;
          puVar22 = puVar22 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x348;
        puVar1 = (undefined4 *)0x358;
        lVar23 = 2;
        while( true ) {
          *puVar22 = *puVar9;
          puVar22[1] = *puVar1;
          puVar22 = puVar22 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar11 = puVar11 + 8;
        vrev(auVar27,4);
        puVar9 = (undefined4 *)0x360;
        puVar1 = (undefined4 *)0x370;
        lVar23 = 2;
        while( true ) {
          *puVar10 = *puVar9;
          puVar10[1] = *puVar1;
          puVar10 = puVar10 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x368;
        puVar1 = (undefined4 *)0x378;
        lVar23 = 2;
        while( true ) {
          *puVar10 = *puVar9;
          puVar10[1] = *puVar1;
          puVar10 = puVar10 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (cVar19 == cVar20);
      return;
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar6 / 2 + iVar3 / 2;
    *(int *)(param_1 + iVar8 * 8) = iVar6 / 2 - iVar3 / 2;
    if (7 < iVar8) {
      piVar7 = piVar12 + 2;
      puVar11 = (undefined4 *)(param_1 + 8);
      iVar3 = 1;
      iVar6 = (int)(piVar12 + iVar8) * 2 + -0x18;
      iVar8 = (param_1 + iVar8 * 4) * 2 + -0x18;
      do {
        puVar9 = (undefined4 *)(iVar6 - (int)piVar7);
        piVar12 = (int *)0x380;
        piVar2 = (int *)0x390;
        lVar23 = 2;
        piVar21 = piVar7;
        while( true ) {
          *piVar12 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar2 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          piVar12 = piVar12 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar12 = (int *)0x388;
        piVar2 = (int *)0x398;
        lVar23 = 2;
        while( true ) {
          *piVar12 = *piVar21;
          piVar21 = piVar21 + 1;
          *piVar2 = *piVar21;
          piVar21 = piVar21 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          piVar12 = piVar12 + 1;
          piVar2 = piVar2 + 1;
        }
        iVar3 = iVar3 + 4;
        piVar7 = piVar7 + 8;
        puVar1 = (undefined4 *)0x3a0;
        puVar22 = (undefined4 *)0x3b0;
        lVar23 = 2;
        while( true ) {
          *puVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar22 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar1 = puVar1 + 1;
          puVar22 = puVar22 + 1;
        }
        puVar1 = (undefined4 *)0x3a8;
        puVar22 = (undefined4 *)0x3b8;
        lVar23 = 2;
        while( true ) {
          *puVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar22 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar1 = puVar1 + 1;
          puVar22 = puVar22 + 1;
        }
        puVar10 = (undefined4 *)(iVar8 - (int)puVar11);
        cVar20 = SBORROW4(iVar18,iVar3);
        cVar19 = iVar18 - iVar3 < 0;
        auVar24 = vrev(in_q11,4);
        auVar25 = vrev(in_q10,4);
        auVar26._8_8_ = auVar24._0_8_;
        auVar26._0_8_ = auVar24._8_8_;
        auVar28._8_8_ = auVar25._0_8_;
        auVar28._0_8_ = auVar25._8_8_;
        auVar24 = FloatVectorNeg(auVar26,1,4);
        puVar9 = (undefined4 *)0x3c0;
        puVar1 = (undefined4 *)0x3d0;
        lVar23 = 2;
        puVar22 = puVar4;
        while( true ) {
          *puVar9 = *puVar22;
          puVar22 = puVar22 + 1;
          *puVar1 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x3c8;
        puVar1 = (undefined4 *)0x3d8;
        lVar23 = 2;
        while( true ) {
          *puVar9 = *puVar22;
          puVar22 = puVar22 + 1;
          *puVar1 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar4 = puVar4 + 8;
        in_q11 = VectorHalvingSubtract(auVar27,auVar28,4,0);
        auVar26 = VectorHalvingAdd(auVar27,auVar28,4,0);
        auVar29 = VectorHalvingSubtract(in_q9,auVar24,4,0);
        in_q9 = VectorHalvingAdd(in_q9,auVar24,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(auVar29,in_q13,4,0);
        auVar28 = SatQ(auVar27,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(in_q11,in_q12,4,0);
        auVar25 = SatQ(auVar27,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(in_q11,in_q13,4,0);
        auVar27 = SatQ(auVar27,4,0);
        auVar24 = VectorDoubleMultiplyHighHalf(auVar29,in_q12,4,0);
        in_q12 = SatQ(auVar24,4,0);
        in_q13 = VectorSub(auVar25,auVar28,4);
        VectorHalvingAdd(auVar26,in_q13,4,0);
        auVar24 = VectorHalvingSubtract(auVar26,in_q13,4,0);
        auVar27 = VectorAdd(auVar27,in_q12,4);
        VectorHalvingAdd(in_q9,auVar27,4,0);
        auVar27 = VectorHalvingSubtract(auVar27,in_q9,4,0);
        in_q10 = vrev(auVar24,4);
        puVar9 = (undefined4 *)0x340;
        puVar1 = (undefined4 *)0x350;
        lVar23 = 2;
        puVar22 = puVar11;
        while( true ) {
          *puVar22 = *puVar9;
          puVar22[1] = *puVar1;
          puVar22 = puVar22 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x348;
        puVar1 = (undefined4 *)0x358;
        lVar23 = 2;
        while( true ) {
          *puVar22 = *puVar9;
          puVar22[1] = *puVar1;
          puVar22 = puVar22 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar11 = puVar11 + 8;
        auVar27 = vrev(auVar27,4);
        puVar9 = (undefined4 *)0x360;
        puVar1 = (undefined4 *)0x370;
        lVar23 = 2;
        while( true ) {
          *puVar10 = *puVar9;
          puVar10[1] = *puVar1;
          puVar10 = puVar10 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar9 = (undefined4 *)0x368;
        puVar1 = (undefined4 *)0x378;
        lVar23 = 2;
        while( true ) {
          *puVar10 = *puVar9;
          puVar10[1] = *puVar1;
          puVar10 = puVar10 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar9 = puVar9 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (cVar19 == cVar20);
      return;
    }
  }
  if (iVar8 < 2) {
    return;
  }
  iVar6 = 1;
  iVar3 = (iVar8 + 0x1fffffff) * 8;
  do {
    iVar8 = piVar12[iVar6 * 2];
    iVar14 = *(int *)((int)piVar12 + iVar3);
    iVar13 = piVar12[iVar6 * 2 + 1];
    iVar5 = -*(int *)((int)piVar12 + iVar3 + 4);
    if (param_4 != 0) {
      iVar8 = iVar8 / 2;
      iVar5 = iVar5 / 2;
      iVar13 = iVar13 / 2;
      iVar14 = iVar14 / 2;
    }
    iVar17 = puVar4[iVar6 * 2 + -2];
    iVar16 = puVar4[iVar6 * 2 + -1];
    iVar15 = (int)((ulonglong)((longlong)(int)puVar4[iVar6 * 2 + -2] * (longlong)(iVar8 - iVar14))
                  >> 0x20) -
             (int)((ulonglong)((longlong)iVar16 * (longlong)(iVar13 - iVar5)) >> 0x20);
    *(int *)(param_1 + iVar6 * 8) = iVar15 * 2 + iVar8 + iVar14 >> 1;
    iVar16 = ((int)((ulonglong)((longlong)iVar16 * (longlong)(iVar8 - iVar14)) >> 0x20) +
             (int)((ulonglong)((longlong)(iVar13 - iVar5) * (longlong)iVar17) >> 0x20)) * 2;
    *(int *)(param_1 + 4 + iVar6 * 8) = iVar16 + iVar13 + iVar5 >> 1;
    iVar6 = iVar6 + 1;
    *(int *)(param_1 + iVar3) = iVar8 + iVar14 + iVar15 * -2 >> 1;
    *(int *)(param_1 + 4 + iVar3) = iVar16 - (iVar13 + iVar5) >> 1;
    iVar3 = iVar3 + -8;
  } while (iVar6 <= iVar18);
  return;
}



/* ===== skv_fft_c2r_1d_int32_neon @ 00023468 size=1040 ===== */

void skv_fft_c2r_1d_int32_neon(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  char cVar22;
  char cVar23;
  undefined4 *puVar24;
  int *piVar25;
  longlong lVar26;
  undefined1 in_q0 [16];
  undefined1 auVar27 [16];
  undefined1 in_q1 [16];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar28 [16];
  undefined1 in_q10 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_q11 [16];
  undefined1 auVar32 [16];
  undefined1 local_88 [8];
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int *local_74;
  undefined4 local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  undefined8 local_5c;
  int *local_54;
  
  local_60 = *(int *)(param_3 + 4);
  iVar9 = *(int *)(param_2 + 4);
  piVar14 = *(int **)(param_3 + 0x14);
  puVar19 = local_88;
  puVar20 = local_88;
  auVar27._8_8_ = in_q8._8_8_;
  auVar27._0_8_ = *(undefined8 *)(param_3 + 8);
  puVar21 = *(undefined4 **)(param_3 + 0x10);
  local_70 = param_1;
  local_6c = param_4;
  local_5c = auVar27._0_8_;
  local_54 = piVar14 + local_60 * 2;
  iVar17 = iVar9 + *(int *)(param_2 + local_60 * 8) >> 1;
  piVar3 = (int *)(param_2 + local_60 * 8);
  *piVar14 = iVar17;
  iVar16 = local_60 / 2;
  iVar9 = iVar9 - *(int *)(param_2 + local_60 * 8) >> 1;
  piVar14[1] = iVar9;
  if (param_4 == 0) {
    if (local_60 < 8) {
      puVar18 = (undefined4 *)local_88;
      if (1 < local_60) {
        local_80 = param_2 + 4;
        local_7c = puVar21 + -2;
        local_78 = puVar21 + -1;
        local_74 = piVar14 + 1;
        iVar17 = 1;
        local_68 = piVar14;
        local_64 = iVar16;
        piVar8 = local_54;
        do {
          iVar13 = *(int *)(param_2 + iVar17 * 8);
          iVar9 = iVar13 - piVar3[-2];
          iVar13 = piVar3[-2] + iVar13;
          iVar11 = *(int *)(local_80 + iVar17 * 8);
          iVar4 = local_78[iVar17 * 2];
          iVar6 = local_7c[iVar17 * 2];
          iVar10 = piVar3[-1] + iVar11;
          iVar11 = iVar11 - piVar3[-1];
          iVar12 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20);
          piVar14[iVar17 * 2] = iVar12 * 2 + iVar13;
          iVar9 = ((int)((ulonglong)((longlong)iVar10 * (longlong)iVar6) >> 0x20) -
                  (int)((ulonglong)((longlong)iVar4 * (longlong)iVar9) >> 0x20)) * 2;
          local_74[iVar17 * 2] = iVar11 + iVar9;
          iVar17 = iVar17 + 1;
          piVar8[-2] = iVar13 + iVar12 * -2;
          piVar8[-1] = iVar9 - iVar11;
          piVar3 = piVar3 + -2;
          piVar8 = piVar8 + -2;
          puVar18 = (undefined4 *)local_88;
        } while (iVar17 <= iVar16);
      }
    }
    else {
      puVar7 = (undefined4 *)(param_2 + 8);
      piVar3 = piVar14 + 2;
      iVar17 = (param_2 + local_60 * 4) * 2 + -0x18;
      iVar9 = (int)(piVar14 + local_60) * 2 + -0x18;
      iVar4 = 1;
      do {
        puVar5 = (undefined4 *)(iVar17 - (int)puVar7);
        puVar18 = (undefined4 *)0x320;
        puVar1 = (undefined4 *)0x330;
        lVar26 = 2;
        puVar24 = puVar7;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x328;
        puVar1 = (undefined4 *)0x338;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        iVar4 = iVar4 + 4;
        puVar7 = puVar7 + 8;
        puVar18 = (undefined4 *)0x3a0;
        puVar1 = (undefined4 *)0x3b0;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x3a8;
        puVar1 = (undefined4 *)0x3b8;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        cVar23 = SBORROW4(iVar16,iVar4);
        cVar22 = iVar16 - iVar4 < 0;
        puVar5 = (undefined4 *)(iVar9 - (int)piVar3);
        auVar29 = vrev(in_q11,4);
        auVar28 = vrev(in_q10,4);
        auVar30._8_8_ = auVar29._0_8_;
        auVar30._0_8_ = auVar29._8_8_;
        auVar31._8_8_ = auVar28._0_8_;
        auVar31._0_8_ = auVar28._8_8_;
        auVar29 = FloatVectorNeg(auVar30,1,4);
        puVar18 = (undefined4 *)0x380;
        puVar1 = (undefined4 *)0x390;
        lVar26 = 2;
        puVar24 = puVar21;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x388;
        puVar1 = (undefined4 *)0x398;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar21 = puVar21 + 8;
        auVar30 = VectorSub(in_q2,auVar31,4);
        auVar32 = VectorAdd(auVar31,in_q2,4);
        auVar31 = VectorSub(in_q3,auVar29,4);
        auVar29 = VectorAdd(auVar29,in_q3,4);
        auVar28 = VectorDoubleMultiplyHighHalf(auVar31,in_q9,4,0);
        auVar28 = SatQ(auVar28,4,0);
        auVar31 = VectorDoubleMultiplyHighHalf(auVar31,auVar27,4,0);
        in_q11 = SatQ(auVar31,4,0);
        auVar31 = VectorDoubleMultiplyHighHalf(auVar30,in_q9,4,0);
        auVar31 = SatQ(auVar31,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(auVar30,auVar27,4,0);
        auVar27 = SatQ(auVar27,4,0);
        auVar30 = VectorSub(in_q11,auVar31,4);
        VectorAdd(auVar29,auVar30,4);
        auVar27 = VectorAdd(auVar27,auVar28,4);
        auVar29 = VectorSub(auVar30,auVar29,4);
        VectorAdd(auVar32,auVar27,4);
        auVar30 = VectorSub(auVar32,auVar27,4);
        in_q9 = vrev(auVar29,4);
        piVar8 = (int *)0x3c0;
        piVar2 = (int *)0x3d0;
        lVar26 = 2;
        piVar25 = piVar3;
        while( true ) {
          *piVar25 = *piVar8;
          piVar25[1] = *piVar2;
          piVar25 = piVar25 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          piVar8 = piVar8 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar8 = (int *)0x3c8;
        piVar2 = (int *)0x3d8;
        lVar26 = 2;
        while( true ) {
          *piVar25 = *piVar8;
          piVar25[1] = *piVar2;
          piVar25 = piVar25 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          piVar8 = piVar8 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar3 = piVar3 + 8;
        in_q10 = vrev(auVar30,4);
        puVar18 = (undefined4 *)0x3e0;
        puVar1 = (undefined4 *)0x3f0;
        lVar26 = 2;
        while( true ) {
          *puVar5 = *puVar18;
          puVar5[1] = *puVar1;
          puVar5 = puVar5 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x3e8;
        puVar1 = (undefined4 *)0x3f8;
        lVar26 = 2;
        while( true ) {
          *puVar5 = *puVar18;
          puVar5[1] = *puVar1;
          puVar5 = puVar5 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)puVar19;
      } while (cVar22 == cVar23);
    }
  }
  else {
    *piVar14 = iVar17 / 2;
    piVar14[1] = iVar9 / 2;
    if (local_60 < 8) {
      puVar18 = (undefined4 *)local_88;
      if (1 < local_60) {
        local_80 = param_2 + 4;
        iVar17 = 1;
        local_7c = puVar21 + -2;
        local_78 = puVar21 + -1;
        local_68 = piVar14;
        local_74 = piVar14 + 1;
        local_64 = iVar16;
        piVar8 = local_54;
        do {
          iVar13 = local_7c[iVar17 * 2];
          iVar10 = local_78[iVar17 * 2];
          iVar4 = *(int *)(param_2 + iVar17 * 8) / 2;
          iVar6 = *(int *)(local_80 + iVar17 * 8) / 2;
          iVar9 = piVar3[-2] / 2;
          iVar12 = iVar6 - -piVar3[-1] / 2;
          iVar11 = iVar4 - iVar9;
          iVar6 = iVar6 + -piVar3[-1] / 2;
          iVar4 = iVar4 + iVar9;
          iVar15 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar10) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar11 * (longlong)iVar13) >> 0x20);
          piVar14[iVar17 * 2] = iVar4 + iVar15 * 2;
          iVar9 = ((int)((ulonglong)((longlong)iVar13 * (longlong)iVar12) >> 0x20) -
                  (int)((ulonglong)((longlong)iVar11 * (longlong)iVar10) >> 0x20)) * 2;
          local_74[iVar17 * 2] = iVar6 + iVar9;
          iVar17 = iVar17 + 1;
          piVar8[-2] = iVar4 + iVar15 * -2;
          piVar8[-1] = iVar9 - iVar6;
          piVar8 = piVar8 + -2;
          puVar18 = (undefined4 *)local_88;
          piVar3 = piVar3 + -2;
        } while (iVar17 <= iVar16);
      }
    }
    else {
      puVar7 = (undefined4 *)(param_2 + 8);
      piVar3 = piVar14 + 2;
      iVar17 = (param_2 + local_60 * 4) * 2 + -0x18;
      iVar9 = (int)(piVar14 + local_60) * 2 + -0x18;
      iVar4 = 1;
      do {
        puVar5 = (undefined4 *)(iVar17 - (int)puVar7);
        puVar18 = (undefined4 *)0x320;
        puVar1 = (undefined4 *)0x330;
        lVar26 = 2;
        puVar24 = puVar7;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x328;
        puVar1 = (undefined4 *)0x338;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        iVar4 = iVar4 + 4;
        puVar7 = puVar7 + 8;
        puVar18 = (undefined4 *)0x300;
        puVar1 = (undefined4 *)0x310;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x308;
        puVar1 = (undefined4 *)0x318;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar5 = (undefined4 *)(iVar9 - (int)piVar3);
        auVar29 = vrev(in_q1,4);
        cVar23 = SBORROW4(iVar16,iVar4);
        cVar22 = iVar16 - iVar4 < 0;
        auVar27 = vrev(in_q0,4);
        auVar32._8_8_ = auVar29._0_8_;
        auVar32._0_8_ = auVar29._8_8_;
        auVar28._8_8_ = auVar27._0_8_;
        auVar28._0_8_ = auVar27._8_8_;
        auVar30 = FloatVectorNeg(auVar32,1,4);
        puVar18 = (undefined4 *)0x320;
        puVar1 = (undefined4 *)0x330;
        lVar26 = 2;
        puVar24 = puVar21;
        auVar27 = in_q2;
        auVar29 = in_q3;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x328;
        puVar1 = (undefined4 *)0x338;
        lVar26 = 2;
        while( true ) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + 1;
          *puVar1 = *puVar24;
          puVar24 = puVar24 + 1;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar21 = puVar21 + 8;
        in_q1 = VectorHalvingSubtract(auVar27,auVar28,4,0);
        in_q0 = VectorHalvingAdd(auVar27,auVar28,4,0);
        auVar28 = VectorHalvingSubtract(auVar29,auVar30,4,0);
        auVar31 = VectorHalvingAdd(auVar29,auVar30,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(in_q1,in_q3,4,0);
        auVar29 = SatQ(auVar27,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(auVar28,in_q3,4,0);
        auVar32 = SatQ(auVar27,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(auVar28,in_q2,4,0);
        auVar30 = SatQ(auVar27,4,0);
        auVar27 = VectorDoubleMultiplyHighHalf(in_q1,in_q2,4,0);
        auVar27 = SatQ(auVar27,4,0);
        auVar29 = VectorSub(auVar30,auVar29,4);
        VectorAdd(auVar31,auVar29,4);
        auVar27 = VectorAdd(auVar27,auVar32,4);
        auVar29 = VectorSub(auVar29,auVar31,4);
        VectorAdd(in_q0,auVar27,4);
        auVar27 = VectorSub(in_q0,auVar27,4);
        vrev(auVar29,4);
        piVar8 = (int *)0x3c0;
        piVar2 = (int *)0x3d0;
        lVar26 = 2;
        piVar25 = piVar3;
        while( true ) {
          *piVar25 = *piVar8;
          piVar25[1] = *piVar2;
          piVar25 = piVar25 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          piVar8 = piVar8 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar8 = (int *)0x3c8;
        piVar2 = (int *)0x3d8;
        lVar26 = 2;
        while( true ) {
          *piVar25 = *piVar8;
          piVar25[1] = *piVar2;
          piVar25 = piVar25 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          piVar8 = piVar8 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar3 = piVar3 + 8;
        in_q2 = vrev(auVar27,4);
        puVar18 = (undefined4 *)0x3e0;
        puVar1 = (undefined4 *)0x3f0;
        lVar26 = 2;
        while( true ) {
          *puVar5 = *puVar18;
          puVar5[1] = *puVar1;
          puVar5 = puVar5 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)0x3e8;
        puVar1 = (undefined4 *)0x3f8;
        lVar26 = 2;
        while( true ) {
          *puVar5 = *puVar18;
          puVar5[1] = *puVar1;
          puVar5 = puVar5 + 2;
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) break;
          puVar18 = puVar18 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar18 = (undefined4 *)puVar20;
      } while (cVar22 == cVar23);
    }
  }
  *puVar18 = puVar18[7];
  skv_fft_c2c_1d_int32_neon(puVar18[6],piVar14,puVar18 + 10,1);
  return;
}



/* ===== skv_fft_alloc_r2c_int32 @ 00023878 size=632 ===== */

void * skv_fft_alloc_r2c_int32(int param_1)

{
  uint uVar1;
  double dVar2;
  float fVar3;
  void *__ptr;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint in_fpscr;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_6c;
  undefined4 *local_68;
  void *local_60;
  
  uVar1 = param_1 >> 1;
  __ptr = calloc((uVar1 & 0x1fffffff) * 4 + (param_1 + 0x23 + uVar1) * 8 + 8,1);
  local_60 = __ptr;
  if (__ptr != (void *)0x0) {
    uVar4 = (int)__ptr + 0x1fU & 0xfffffff8;
    *(uint *)((int)__ptr + 4) = uVar1;
    iVar5 = uVar4 + 0x100;
    *(uint *)((int)__ptr + 8) = uVar4;
    iVar7 = iVar5 + uVar1 * 8;
    *(int *)((int)__ptr + 0xc) = iVar5;
    *(int *)((int)__ptr + 0x10) = iVar7;
    *(int *)((int)__ptr + 0x14) = iVar7 + ((int)uVar1 / 2) * 8;
    iVar5 = skv_factor();
    fVar3 = DAT_00023af8;
    dVar2 = DAT_00023af0;
    if (iVar5 == -1) {
      local_60 = (void *)0x0;
      free(__ptr);
    }
    else {
      piVar6 = *(int **)((int)__ptr + 8);
      local_68 = *(undefined4 **)((int)__ptr + 0xc);
      local_6c = piVar6[1];
      if (1 < *piVar6) {
        piVar10 = piVar6 + *piVar6 * 2;
        do {
          iVar5 = piVar10[-2];
          local_6c = __aeabi_idiv(local_6c,iVar5);
          iVar7 = piVar10[-1];
          if ((0 < iVar7) && (1 < iVar5)) {
            fVar19 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
            iVar8 = 0;
            fVar18 = (float)VectorSignedToFloat(local_6c,(byte)(in_fpscr >> 0x16) & 3);
            puVar9 = local_68;
            do {
              fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
              iVar11 = 1;
              puVar13 = puVar9;
              do {
                iVar12 = iVar11 + 1;
                fVar15 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
                dVar16 = (double)((fVar15 * fVar18 * fVar3 * fVar17) / fVar19);
                dVar14 = cos(dVar16);
                dVar14 = floor(dVar14 * dVar2 + 0.5);
                *puVar13 = (int)(longlong)dVar14;
                dVar14 = sin(dVar16);
                dVar14 = floor(dVar14 * dVar2 + 0.5);
                puVar13[1] = (int)(longlong)dVar14;
                puVar13 = puVar13 + iVar7 * 2;
                iVar11 = iVar12;
              } while (iVar5 != iVar12);
              iVar8 = iVar8 + 1;
              puVar9 = puVar9 + 2;
            } while (iVar7 != iVar8);
          }
          piVar10 = piVar10 + -2;
          local_68 = local_68 + iVar7 * (iVar5 + -1) * 2;
        } while (piVar6 + 2 != piVar10);
      }
      fVar3 = DAT_00023afc;
      dVar2 = DAT_00023af0;
      if (1 < (int)uVar1) {
        iVar5 = 0;
        fVar18 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
        puVar9 = *(undefined4 **)((int)__ptr + 0x10);
        do {
          iVar5 = iVar5 + 1;
          fVar19 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
          dVar16 = (double)((fVar19 / fVar18 + 0.5) * fVar3);
          dVar14 = cos(dVar16);
          dVar14 = floor(dVar14 * dVar2 + 0.5);
          *puVar9 = (int)(longlong)dVar14;
          dVar14 = sin(dVar16);
          dVar14 = floor(dVar14 * dVar2 + 0.5);
          puVar9[1] = (int)(longlong)dVar14;
          puVar9 = puVar9 + 2;
        } while (iVar5 < (int)uVar1 / 2);
      }
    }
  }
  return local_60;
}



/* ===== skv_fft_destroy_r2c_int32 @ 00023b00 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void skv_fft_destroy_r2c_int32(void *__ptr)

{
  (*(code *)PTR_free_0003c154)(__ptr);
  return;
}



/* ===== skv_fft_generate_twiddles_line_float32 @ 00023b08 size=192 ===== */

void skv_fft_generate_twiddles_line_float32
               (float *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  double __x;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((0 < param_2) && (1 < param_4)) {
    iVar4 = 0;
    dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = dVar6 * DAT_00023bc8;
    dVar7 = (double)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    do {
      dVar5 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      iVar1 = 1;
      pfVar3 = param_1;
      do {
        iVar2 = iVar1 + 1;
        dVar8 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        __x = (double)(float)((dVar8 * dVar6 * dVar5) / dVar7);
        dVar8 = cos(__x);
        *pfVar3 = (float)dVar8;
        dVar8 = sin(__x);
        pfVar3[1] = (float)dVar8;
        pfVar3 = pfVar3 + param_2 * 2;
        iVar1 = iVar2;
      } while (param_4 != iVar2);
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 2;
    } while (param_2 != iVar4);
  }
  return;
}



/* ===== skv_fft_generate_twiddles_line_transposed_float32 @ 00023bd0 size=196 ===== */

void skv_fft_generate_twiddles_line_transposed_float32
               (float *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  double __x;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((0 < param_2) && (1 < param_4)) {
    iVar4 = 0;
    dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = dVar6 * DAT_00023c98;
    dVar7 = (double)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    do {
      dVar5 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      iVar1 = 1;
      pfVar3 = param_1;
      do {
        iVar2 = iVar1 + 1;
        dVar8 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        __x = (double)(float)((dVar8 * dVar6 * dVar5) / dVar7);
        dVar8 = cos(__x);
        *pfVar3 = (float)dVar8;
        dVar8 = sin(__x);
        pfVar3[1] = (float)dVar8;
        iVar1 = iVar2;
        pfVar3 = pfVar3 + 2;
      } while (param_4 != iVar2);
      iVar4 = iVar4 + 1;
      param_1 = param_1 + (param_4 + -1) * 2;
    } while (param_2 != iVar4);
  }
  return;
}



/* ===== skv_factor @ 00023ca0 size=960 ===== */

undefined4 skv_factor(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == (uint *)0x0 || (int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar6 = param_3 & 1;
  param_3 = param_3 & 2;
  uVar1 = param_1;
  uVar5 = param_3;
  if (uVar6 == 0) {
    if (param_3 == 0) {
      uVar3 = 1;
      do {
        uVar4 = 4;
        if (((uVar1 & 3) != 0) && (uVar4 = 2, (uVar1 & 1) != 0)) {
          uVar5 = 1;
          uVar4 = 5;
          if ((uVar1 % 5 != 0) && (uVar4 = 3, uVar1 != (uVar1 / 3) * 3)) goto LAB_00023e04;
        }
        param_3 = param_3 + 1;
        uVar1 = __aeabi_idiv(uVar1,uVar4);
        param_2[uVar3 * 2] = uVar4;
        param_2[uVar3 * 2 + 1] = uVar1;
        uVar3 = uVar3 + 1;
      } while (1 < (int)uVar1);
    }
    else {
      uVar3 = 1;
      param_3 = 0;
      uVar5 = uVar6;
      do {
        if ((uVar1 & 7) == 0) {
          uVar4 = 8;
        }
        else if ((uVar1 & 3) == 0) {
          uVar4 = 4;
        }
        else if ((uVar1 & 1) == 0) {
          uVar4 = 2;
        }
        else if (uVar1 % 5 == 0) {
          uVar5 = 1;
          uVar4 = 5;
        }
        else {
          if (uVar1 % 3 != 0) goto LAB_00023e04;
          uVar5 = 1;
          uVar4 = 3;
        }
        param_3 = param_3 + 1;
        uVar1 = __aeabi_idiv(uVar1,uVar4);
        param_2[uVar3 * 2] = uVar4;
        param_2[uVar3 * 2 + 1] = uVar1;
        uVar3 = uVar3 + 1;
      } while (1 < (int)uVar1);
    }
  }
  else {
    uVar3 = uVar6;
    if (param_3 == 0) {
      do {
        if (uVar1 == 0x28 || (uVar1 & 0xffffffef) == 8) {
          if (uVar1 == 8) goto LAB_00023e4c;
          if (uVar1 == 0x18) {
            uVar4 = 3;
            uVar5 = uVar6;
          }
          else {
            uVar4 = 5;
            uVar5 = uVar6;
          }
        }
        else if ((uVar1 & 3) == 0) {
          uVar4 = 4;
        }
        else if ((uVar1 & 1) == 0) {
          uVar4 = 2;
        }
        else if (uVar1 == (uVar1 / 5) * 5) {
          uVar4 = 5;
          uVar5 = uVar6;
        }
        else {
          if (uVar1 != (uVar1 / 3) * 3) goto LAB_00023e04;
          uVar4 = 3;
          uVar5 = uVar6;
        }
        param_3 = param_3 + 1;
        uVar1 = __aeabi_idiv(uVar1,uVar4);
        param_2[uVar3 * 2] = uVar4;
        param_2[uVar3 * 2 + 1] = uVar1;
        uVar3 = uVar3 + 1;
      } while (1 < (int)uVar1);
    }
    else {
      param_3 = 0;
      uVar5 = 0;
      do {
        if (uVar1 == 0x28 || (uVar1 & 0xffffffef) == 8) {
          while( true ) {
            if (uVar1 == 8) goto LAB_00023e4c;
            if (uVar1 != 0x18) break;
            uVar1 = 8;
            param_2[uVar3 * 2] = 3;
            param_2[uVar3 * 2 + 1] = 8;
            param_3 = param_3 + 1;
            uVar3 = uVar3 + 1;
            uVar5 = uVar6;
          }
LAB_00023f84:
          uVar4 = 5;
          uVar5 = uVar6;
        }
        else if ((uVar1 & 7) == 0) {
          uVar4 = 8;
        }
        else if ((uVar1 & 3) == 0) {
          uVar4 = 4;
        }
        else if ((uVar1 & 1) == 0) {
          uVar4 = 2;
        }
        else {
          if (uVar1 == (uVar1 / 5) * 5) goto LAB_00023f84;
          if (uVar1 != (uVar1 / 3) * 3) goto LAB_00023e04;
          uVar4 = 3;
          uVar5 = uVar6;
        }
        param_3 = param_3 + 1;
        uVar1 = __aeabi_idiv(uVar1,uVar4);
        param_2[uVar3 * 2] = uVar4;
        param_2[uVar3 * 2 + 1] = uVar1;
        uVar3 = uVar3 + 1;
      } while (1 < (int)uVar1);
    }
  }
LAB_00023e68:
  *param_2 = param_3;
  uVar1 = __aeabi_idiv(param_1,uVar4);
  param_2[1] = uVar1;
  if ((int)param_3 < 0x16) {
    uVar2 = 0;
    param_2[uVar3 * 2] = uVar5;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
LAB_00023e4c:
  uVar4 = 8;
  param_3 = param_3 + 1;
  param_2[uVar3 * 2] = 8;
  param_2[uVar3 * 2 + 1] = 1;
  uVar3 = uVar3 + 1;
  goto LAB_00023e68;
LAB_00023e04:
  uVar5 = 1;
  param_2[uVar3 * 2] = uVar1;
  param_3 = param_3 + 1;
  param_2[uVar3 * 2 + 1] = 1;
  uVar4 = uVar1;
  uVar3 = uVar3 + 1;
  goto LAB_00023e68;
}



/* ===== skv_fft_generate_twiddles_impl_float32 @ 00024060 size=204 ===== */

undefined8 *
skv_fft_generate_twiddles_impl_float32
          (code *param_1,undefined8 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar1 = *param_3;
  iVar6 = param_3[1];
  uVar4 = param_3[iVar1 * 2];
  if ((uVar4 & 1) != 0) {
    *param_2 = DAT_00024130;
    (*param_1)(param_2 + 1,1,iVar6,uVar4,param_4);
    param_2 = param_2 + 1 + uVar4 + 0x1fffffff;
  }
  if (1 < iVar1) {
    piVar2 = param_3 + iVar1 * 2;
    do {
      iVar1 = piVar2[-2];
      piVar3 = piVar2 + -2;
      iVar6 = __aeabi_idiv(iVar6,iVar1);
      puVar5 = param_2 + piVar2[-1] * (iVar1 + -1);
      (*param_1)(param_2,piVar2[-1],iVar6,iVar1,param_4);
      piVar2 = piVar3;
      param_2 = puVar5;
    } while (piVar3 != param_3 + 2);
    return puVar5;
  }
  return param_2;
}



/* ===== skv_fft_generate_twiddles_float32 @ 00024138 size=56 ===== */

void skv_fft_generate_twiddles_float32(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00012ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_fft_generate_twiddles_impl_float32_0003c0c4)
            (*(undefined4 *)(DAT_00024164 + 0x2414c + DAT_00024168),param_1,param_2,param_3);
  return;
}



/* ===== skv_fft_generate_twiddles_transposed_float32 @ 0002416c size=44 ===== */

void skv_fft_generate_twiddles_transposed_float32
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00012ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_skv_fft_generate_twiddles_impl_float32_0003c0c4)
            (*(undefined4 *)(DAT_00024198 + 0x24180 + DAT_0002419c),param_1,param_2,param_3);
  return;
}



/* ===== skv_radix8_r2c_c @ 000241a0 size=272 ===== */

void skv_radix8_r2c_c(int param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar2 = DAT_000242b4;
  fVar1 = DAT_000242b0;
  if (param_3 != 0) {
    param_5 = param_5 >> 3;
    pfVar8 = param_2 + param_5 * 4;
    pfVar7 = pfVar8 + param_5 * -3;
    pfVar6 = pfVar7 + param_5 * 4;
    pfVar5 = pfVar6 + param_5 * -3;
    pfVar4 = pfVar5 + param_5 * 4;
    pfVar9 = pfVar4 + param_5 * -3;
    pfVar10 = pfVar9 + param_5 * 4;
    puVar3 = (undefined8 *)(param_1 + 4);
    do {
      fVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      param_3 = param_3 + -1;
      fVar21 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      fVar14 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar16 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      fVar13 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar15 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      fVar17 = (fVar21 - fVar12) * fVar1;
      fVar20 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar19 = *param_2;
      param_2 = param_2 + 1;
      fVar11 = fVar16 - fVar14;
      fVar18 = fVar17 + fVar11 * fVar2;
      fVar17 = fVar17 + -fVar11 * fVar2;
      fVar21 = fVar21 + fVar12;
      fVar16 = fVar16 + fVar14;
      fVar11 = fVar20 + fVar15;
      fVar14 = fVar19 + fVar13;
      fVar20 = fVar20 - fVar15;
      fVar19 = fVar19 - fVar13;
      fVar13 = fVar14 + fVar11;
      fVar12 = fVar16 + fVar21;
      *puVar3 = CONCAT44(fVar19 + fVar18,fVar13 + fVar12);
      puVar3[1] = CONCAT44(fVar14 - fVar11,fVar17 - fVar20);
      puVar3[2] = CONCAT44(fVar19 - fVar18,fVar21 - fVar16);
      puVar3[3] = CONCAT44(fVar13 - fVar12,fVar20 + fVar17);
      puVar3 = puVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



/* ===== skv_radix8_c2r_c @ 000242b8 size=304 ===== */

void skv_radix8_c2r_c(float *param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar2 = DAT_000243ec;
  fVar1 = DAT_000243e8;
  if (param_3 != 0) {
    param_5 = param_5 >> 3;
    pfVar7 = param_1 + param_5 * 4;
    pfVar6 = pfVar7 + param_5 * -3;
    pfVar5 = pfVar6 + param_5 * 4;
    pfVar4 = pfVar5 + param_5 * -3;
    pfVar9 = pfVar4 + param_5 * 4;
    pfVar8 = pfVar9 + param_5 * -3;
    pfVar3 = pfVar8 + param_5 * 4;
    do {
      fVar18 = param_2[2];
      param_3 = param_3 + -1;
      fVar17 = param_2[1];
      fVar12 = param_2[5];
      fVar13 = param_2[6];
      fVar19 = *param_2;
      fVar10 = param_2[3];
      fVar11 = param_2[4];
      fVar14 = param_2[7];
      fVar20 = (((fVar17 - fVar18) - fVar12) - fVar13) / fVar1;
      fVar15 = (((fVar17 + fVar18) - fVar12) + fVar13) / fVar2;
      fVar16 = fVar19 + fVar10 + fVar10 + fVar14;
      fVar12 = fVar12 + fVar17 * 2.0 + fVar12;
      fVar13 = (-fVar18 - fVar18) + fVar13 + fVar13;
      fVar17 = ((fVar19 - fVar11) - fVar11) - fVar14;
      fVar10 = ((fVar19 - fVar10) - fVar10) + fVar14;
      *param_1 = fVar16 + fVar12;
      param_1 = param_1 + 1;
      *pfVar7 = fVar16 - fVar12;
      pfVar7 = pfVar7 + 1;
      fVar14 = (fVar19 + fVar11 + fVar11) - fVar14;
      *pfVar6 = fVar17 + fVar20;
      pfVar6 = pfVar6 + 1;
      *pfVar5 = fVar17 - fVar20;
      pfVar5 = pfVar5 + 1;
      *pfVar4 = fVar10 + fVar13;
      pfVar4 = pfVar4 + 1;
      *pfVar9 = fVar10 - fVar13;
      pfVar9 = pfVar9 + 1;
      *pfVar8 = fVar14 + fVar15;
      pfVar8 = pfVar8 + 1;
      *pfVar3 = fVar14 - fVar15;
      pfVar3 = pfVar3 + 1;
      param_2 = param_2 + 8;
    } while (param_3 != 0);
  }
  return;
}



/* ===== skv_radix4_r2c_c @ 000243f0 size=124 ===== */

void skv_radix4_r2c_c(int param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 != 0) {
    param_5 = param_5 >> 2;
    puVar1 = (undefined8 *)(param_1 + 4);
    pfVar4 = param_2 + param_5;
    pfVar3 = pfVar4 + param_5;
    pfVar2 = pfVar3 + param_5;
    do {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      param_3 = param_3 + -1;
      fVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      fVar9 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar8 = *param_2;
      param_2 = param_2 + 1;
      fVar7 = fVar6 + fVar9;
      fVar10 = fVar8 + fVar5;
      *puVar1 = CONCAT44(fVar8 - fVar5,fVar10 + fVar7);
      puVar1[1] = CONCAT44(fVar10 - fVar7,fVar9 - fVar6);
      puVar1 = puVar1 + 2;
    } while (param_3 != 0);
  }
  return;
}



/* ===== skv_radix4_c2r_c @ 0002446c size=124 ===== */

void skv_radix4_c2r_c(float *param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  code *UNRECOVERED_JUMPTABLE;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 == 0) {
    return;
  }
  param_5 = param_5 >> 2;
  pfVar3 = param_1 + param_5;
  pfVar2 = pfVar3 + param_5;
  pfVar1 = pfVar2 + param_5;
  do {
    param_3 = param_3 + -1;
    fVar4 = param_2[1];
    fVar6 = *param_2 + param_2[3];
    fVar5 = param_2[2];
    fVar7 = *param_2 - param_2[3];
    *param_1 = fVar6 + fVar4 * 2.0;
    param_1 = param_1 + 1;
    *pfVar3 = fVar7 + -fVar5 * 2.0;
    pfVar3 = pfVar3 + 1;
    *pfVar2 = fVar6 + -fVar4 * 2.0;
    pfVar2 = pfVar2 + 1;
    *pfVar1 = fVar7 + fVar5 * 2.0;
    pfVar1 = pfVar1 + 1;
    param_2 = param_2 + 4;
  } while (param_3 != 0);
                    /* WARNING: Could not recover jumptable at 0x000244e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== skv_radix2_r2c_c @ 000244e8 size=36 ===== */

void skv_radix2_r2c_c(int param_1,float *param_2)

{
  *(float *)(param_1 + 4) = *param_2 + param_2[1];
  *(float *)(param_1 + 8) = *param_2 - param_2[1];
  return;
}



/* ===== skv_radix2_c2r_c @ 0002450c size=36 ===== */

void skv_radix2_c2r_c(float *param_1,float *param_2)

{
  *param_1 = *param_2 + param_2[1];
  param_1[1] = *param_2 - param_2[1];
  return;
}



/* ===== skv_fft_alloc_r2c_float32 @ 00024530 size=1808 ===== */

uint * skv_fft_alloc_r2c_float32(uint param_1)

{
  int iVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint in_fpscr;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  
  uVar11 = param_1 + 0x1f;
  if (-1 < (int)param_1) {
    uVar11 = param_1;
  }
  puVar3 = calloc(param_1 * 0x18 + (param_1 & 0x1fffffff) * 2 + ((int)uVar11 >> 5) * 0x60 + 0x294,1)
  ;
  if (puVar3 != (uint *)0x0) {
    uVar7 = (int)puVar3 + 0x2bU & 0xfffffff8;
    uVar4 = uVar7 + param_1 * 8;
    uVar8 = param_1 + 3;
    if (-1 < (int)param_1) {
      uVar8 = param_1;
    }
    uVar6 = uVar4 + param_1 * 8;
    iVar10 = (int)uVar8 >> 2;
    *puVar3 = uVar7;
    uVar8 = uVar6 + 0x100 + iVar10 * 8;
    puVar3[5] = uVar6 + 0x100;
    puVar3[1] = param_1;
    puVar3[2] = uVar4;
    puVar3[3] = uVar6;
    puVar3[7] = uVar8;
    puVar3[8] = uVar8 + 0x100;
    if (0xf < (int)param_1) {
      skv_factor(param_1,uVar6,1);
      uVar8 = skv_fft_generate_twiddles_float32(puVar3[2],puVar3[3],param_1);
      puVar3[4] = uVar8;
      iVar5 = skv_factor(iVar10,puVar3[7],1);
      if (iVar5 != -1) {
        uVar8 = skv_fft_generate_twiddles_transposed_float32(puVar3[5],puVar3[7],iVar10);
        fVar2 = DAT_00024858;
        puVar12 = (undefined8 *)puVar3[8];
        fVar25 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
        fVar26 = DAT_0002485c / fVar25;
        puVar3[6] = uVar8;
        dVar27 = (double)(fVar26 * fVar2);
        dVar13 = cos(dVar27);
        fVar33 = (float)dVar13;
        dVar13 = sin(dVar27);
        fVar26 = (float)dVar13;
        dVar27 = (double)((1.0 / fVar25) * fVar2);
        dVar13 = cos(dVar27);
        dVar27 = sin(dVar27);
        dVar28 = (double)((2.0 / fVar25) * fVar2);
        dVar14 = cos(dVar28);
        dVar28 = sin(dVar28);
        dVar29 = (double)((3.0 / fVar25) * fVar2);
        dVar15 = cos(dVar29);
        dVar29 = sin(dVar29);
        dVar30 = (double)((4.0 / fVar25) * fVar2);
        dVar16 = cos(dVar30);
        dVar30 = sin(dVar30);
        dVar31 = (double)((6.0 / fVar25) * fVar2);
        dVar17 = cos(dVar31);
        dVar31 = sin(dVar31);
        dVar32 = (double)((9.0 / fVar25) * fVar2);
        dVar18 = cos(dVar32);
        dVar32 = sin(dVar32);
        *puVar12 = CONCAT44(fVar26,fVar33);
        puVar12[1] = CONCAT44((float)dVar27,(float)dVar13);
        puVar12[2] = CONCAT44((float)dVar28,(float)dVar14);
        puVar12[3] = CONCAT44((float)dVar29,(float)dVar15);
        puVar12[4] = CONCAT44(fVar26,fVar33);
        puVar12[5] = CONCAT44((float)dVar28,(float)dVar14);
        puVar12[6] = CONCAT44((float)dVar30,(float)dVar16);
        puVar12[7] = CONCAT44((float)dVar31,(float)dVar17);
        puVar12[8] = CONCAT44(fVar26,fVar33);
        puVar12[9] = CONCAT44((float)dVar29,(float)dVar15);
        puVar12[10] = CONCAT44((float)dVar31,(float)dVar17);
        puVar12[0xb] = CONCAT44((float)dVar32,(float)dVar18);
        if (0x3f < (int)param_1) {
          iVar10 = 0xc;
          iVar5 = 1;
          do {
            iVar9 = iVar5 * 4;
            iVar1 = iVar5 * 8;
            iVar5 = iVar5 + 1;
            fVar26 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
            dVar27 = (double)((fVar26 / fVar25) * fVar2);
            dVar13 = cos(dVar27);
            dVar27 = sin(dVar27);
            fVar26 = (float)VectorSignedToFloat(iVar9 + 1,(byte)(in_fpscr >> 0x16) & 3);
            dVar28 = (double)((fVar26 / fVar25) * fVar2);
            dVar14 = cos(dVar28);
            dVar28 = sin(dVar28);
            fVar26 = (float)VectorSignedToFloat(iVar9 + 2,(byte)(in_fpscr >> 0x16) & 3);
            dVar29 = (double)((fVar26 / fVar25) * fVar2);
            dVar15 = cos(dVar29);
            dVar29 = sin(dVar29);
            fVar26 = (float)VectorSignedToFloat(iVar9 + 3,(byte)(in_fpscr >> 0x16) & 3);
            dVar30 = (double)((fVar26 / fVar25) * fVar2);
            dVar16 = cos(dVar30);
            dVar30 = sin(dVar30);
            fVar26 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
            dVar31 = (double)((fVar26 / fVar25) * fVar2);
            dVar17 = cos(dVar31);
            dVar31 = sin(dVar31);
            fVar26 = (float)VectorSignedToFloat(iVar1 + 2,(byte)(in_fpscr >> 0x16) & 3);
            dVar32 = (double)((fVar26 / fVar25) * fVar2);
            dVar18 = cos(dVar32);
            dVar32 = sin(dVar32);
            fVar26 = (float)VectorSignedToFloat(iVar1 + 4,(byte)(in_fpscr >> 0x16) & 3);
            dVar34 = (double)((fVar26 / fVar25) * fVar2);
            dVar19 = cos(dVar34);
            dVar34 = sin(dVar34);
            fVar26 = (float)VectorSignedToFloat(iVar1 + 6,(byte)(in_fpscr >> 0x16) & 3);
            dVar35 = (double)((fVar26 / fVar25) * fVar2);
            dVar20 = cos(dVar35);
            dVar35 = sin(dVar35);
            fVar26 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
            dVar36 = (double)((fVar26 / fVar25) * fVar2);
            dVar21 = cos(dVar36);
            dVar36 = sin(dVar36);
            fVar26 = (float)VectorSignedToFloat(iVar10 + 3,(byte)(in_fpscr >> 0x16) & 3);
            dVar37 = (double)((fVar26 / fVar25) * fVar2);
            dVar22 = cos(dVar37);
            dVar37 = sin(dVar37);
            fVar26 = (float)VectorSignedToFloat(iVar10 + 6,(byte)(in_fpscr >> 0x16) & 3);
            dVar38 = (double)((fVar26 / fVar25) * fVar2);
            dVar23 = cos(dVar38);
            dVar38 = sin(dVar38);
            iVar9 = iVar10 + 9;
            iVar10 = iVar10 + 0xc;
            fVar26 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
            dVar39 = (double)((fVar26 / fVar25) * fVar2);
            dVar24 = cos(dVar39);
            dVar39 = sin(dVar39);
            puVar12[0xc] = CONCAT44((float)dVar27,(float)dVar13);
            puVar12[0xd] = CONCAT44((float)dVar28,(float)dVar14);
            puVar12[0xe] = CONCAT44((float)dVar29,(float)dVar15);
            puVar12[0xf] = CONCAT44((float)dVar30,(float)dVar16);
            puVar12[0x10] = CONCAT44((float)dVar31,(float)dVar17);
            puVar12[0x11] = CONCAT44((float)dVar32,(float)dVar18);
            puVar12[0x12] = CONCAT44((float)dVar34,(float)dVar19);
            puVar12[0x13] = CONCAT44((float)dVar35,(float)dVar20);
            puVar12[0x14] = CONCAT44((float)dVar36,(float)dVar21);
            puVar12[0x15] = CONCAT44((float)dVar37,(float)dVar22);
            puVar12[0x16] = CONCAT44((float)dVar38,(float)dVar23);
            puVar12[0x17] = CONCAT44((float)dVar39,(float)dVar24);
            puVar12 = puVar12 + 0xc;
          } while (iVar5 < (int)uVar11 >> 5);
          return puVar3;
        }
      }
    }
  }
  return puVar3;
}



/* ===== skv_fft_destroy_r2c_float32 @ 00024c48 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void skv_fft_destroy_r2c_float32(void *__ptr)

{
  (*(code *)PTR_free_0003c154)(__ptr);
  return;
}



/* ===== skv_fft_r2c_1d_float32_c @ 00024c4c size=1304 ===== */

void skv_fft_r2c_1d_float32_c(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  int local_a8;
  uint local_a4;
  int local_9c;
  float *local_98;
  float *local_94;
  float *local_90;
  
  iVar22 = param_3[1];
  if (iVar22 == 4) {
    skv_radix4_r2c_c(param_1,param_2,1,1,4);
    iVar22 = param_3[1];
  }
  else if (iVar22 == 8) {
    skv_radix8_r2c_c(param_1,param_2,1,1,8);
    iVar22 = param_3[1];
  }
  else if (iVar22 == 2) {
    skv_radix2_r2c_c();
    iVar22 = param_3[1];
  }
  else {
    local_a8 = param_3[2];
    puVar4 = (uint *)param_3[3];
    local_b4 = puVar4[1];
    bVar26 = (*puVar4 & 1) == 0;
    iVar14 = *puVar4 * 2;
    local_b0 = (undefined4 *)*param_3;
    if (bVar26) {
      local_b0 = param_1;
      local_ac = (undefined4 *)*param_3;
    }
    uVar16 = puVar4[iVar14 + 0x3fffffff];
    if (!bVar26) {
      local_ac = param_1;
    }
    uVar10 = puVar4[iVar14 + 0x40000000];
    iVar14 = uVar10 * local_b4;
    if (uVar10 == 8) {
      skv_radix8_r2c_c(local_ac,param_2,local_b4,uVar16,iVar14);
      iVar22 = param_3[1];
    }
    else if (uVar10 == 4) {
      skv_radix4_r2c_c(local_ac,param_2,local_b4,uVar16,iVar14);
      iVar22 = param_3[1];
    }
    fVar2 = DAT_000250bc;
    if (1 < (int)local_b4) {
      iVar14 = iVar14 >> 2;
      iVar7 = iVar14 + 1;
      do {
        pfVar23 = (float *)(local_b0 + 1);
        pfVar21 = (float *)(local_ac + 1);
        local_b4 = (int)local_b4 >> 2;
        if (local_b4 == 0) break;
        iVar1 = uVar16 * 2;
        iVar8 = ((int)uVar16 >> 1) + -1;
        pfVar20 = (float *)(local_b0 + iVar1 + 0x40000001);
        pfVar19 = (float *)(local_ac + iVar7);
        local_a4 = local_b4;
        do {
          fVar28 = *pfVar19;
          fVar31 = *pfVar21;
          fVar27 = pfVar21[iVar14 * 2];
          fVar32 = pfVar21[iVar14 * 3];
          fVar33 = fVar31 + fVar27;
          fVar29 = fVar28 + fVar32;
          *pfVar23 = fVar33 + fVar29;
          pfVar23[iVar1 + 0x3fffffff] = fVar31 - fVar27;
          *pfVar20 = fVar32 - fVar28;
          pfVar23[uVar16 * 4 + -1] = fVar33 - fVar29;
          if (iVar8 != 0) {
            pfVar11 = (float *)(local_a8 + uVar16 * 8);
            pfVar3 = pfVar23 + uVar16 * 4 + -5;
            iVar5 = local_a8 + 0x10;
            pfVar9 = pfVar23 + uVar16 * 2 + -3;
            pfVar13 = pfVar21 + 3;
            pfVar15 = pfVar21 + iVar14 * 3;
            pfVar17 = pfVar21 + iVar14 * 2;
            pfVar18 = pfVar21 + iVar7;
            pfVar24 = pfVar23 + 3;
            pfVar25 = pfVar11 + uVar16 * 2;
            local_9c = iVar8;
            local_98 = pfVar23 + iVar1 + 0x40000001;
            local_94 = pfVar20;
            local_90 = pfVar19;
            do {
              local_9c = local_9c + -1;
              fVar31 = pfVar15[2];
              fVar35 = pfVar17[2];
              fVar27 = pfVar11[2];
              fVar28 = pfVar25[2];
              fVar30 = pfVar11[3] * pfVar17[1] + fVar27 * fVar35;
              fVar29 = pfVar25[3] * pfVar15[1] + fVar28 * fVar31;
              fVar32 = -(fVar31 * pfVar25[3]) + fVar28 * pfVar15[1];
              fVar33 = *(float *)(iVar5 + -4) * local_90[1] + *(float *)(iVar5 + -8) * pfVar18[1];
              fVar34 = -(pfVar18[1] * *(float *)(iVar5 + -4)) + *(float *)(iVar5 + -8) * local_90[1]
              ;
              fVar35 = -(fVar35 * pfVar11[3]) + fVar27 * pfVar17[1];
              fVar31 = pfVar13[-1] + fVar30;
              fVar27 = fVar33 + fVar29;
              fVar28 = fVar34 - fVar32;
              fVar30 = pfVar13[-1] - fVar30;
              fVar34 = fVar34 + fVar32;
              fVar33 = fVar33 - fVar29;
              fVar29 = pfVar13[-2] + fVar35;
              fVar35 = pfVar13[-2] - fVar35;
              pfVar24[-2] = fVar29 + fVar34;
              pfVar24[-1] = fVar31 + fVar27;
              local_94[1] = fVar35 + fVar33;
              local_98[1] = fVar30 - fVar28;
              pfVar3[2] = fVar29 - fVar34;
              pfVar3[3] = -(fVar31 - fVar27);
              pfVar9[1] = -(fVar30 + fVar28);
              *pfVar9 = fVar35 - fVar33;
              pfVar3 = pfVar3 + -2;
              iVar5 = iVar5 + 8;
              pfVar9 = pfVar9 + -2;
              pfVar11 = pfVar11 + 2;
              pfVar13 = pfVar13 + 2;
              pfVar15 = pfVar15 + 2;
              pfVar17 = pfVar17 + 2;
              pfVar18 = pfVar18 + 2;
              pfVar24 = pfVar24 + 2;
              pfVar25 = pfVar25 + 2;
              local_98 = local_98 + 2;
              local_94 = local_94 + 2;
              local_90 = local_90 + 2;
            } while (local_9c != 0);
          }
          pfVar9 = pfVar21 + iVar7 + iVar8 * 2;
          local_a4 = local_a4 - 1;
          pfVar3 = pfVar21 + iVar14 * 3 + iVar8 * 2 + 1;
          pfVar20 = pfVar20 + iVar8 * 2 + uVar16 * 3 + 2;
          fVar28 = pfVar21[iVar8 * 2 + 1];
          pfVar11 = pfVar23 + iVar8 * 2 + 1;
          fVar27 = *pfVar3 - *pfVar9;
          pfVar19 = pfVar19 + iVar8 * 2 + 2;
          fVar29 = pfVar21[iVar14 * 2 + iVar8 * 2 + 1];
          pfVar21 = pfVar21 + iVar8 * 2 + 2;
          pfVar13 = pfVar23 + iVar1 + 0x3fffffff + iVar8 * 2 + 2;
          pfVar23 = pfVar23 + iVar8 * 2 + uVar16 * 3 + 2;
          fVar31 = *pfVar9 + *pfVar3;
          *pfVar11 = fVar28 + fVar27 * fVar2;
          pfVar11[1] = -fVar29 + fVar31 * fVar2;
          *pfVar13 = fVar28 + -fVar27 * fVar2;
          pfVar13[1] = fVar29 + fVar31 * fVar2;
        } while (local_a4 != 0);
        local_a8 = uVar16 * 0x18 + local_a8;
        uVar16 = uVar16 << 2;
        puVar12 = local_ac;
        local_ac = local_b0;
        local_b0 = puVar12;
      } while (local_b4 != 1);
    }
  }
  uVar6 = param_1[1];
  param_1[1] = 0;
  *param_1 = uVar6;
  param_1[(iVar22 >> 1) * 2 + 1] = 0;
  return;
}



/* ===== skv_fft_c2r_1d_float32_c @ 00025168 size=2104 ===== */

void skv_fft_c2r_1d_float32_c(float *param_1,float *param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float *local_d8;
  float *local_d4;
  float *local_d0;
  int local_cc;
  float *local_c0;
  float *local_bc;
  float *local_b8;
  float *local_b4;
  int local_b0;
  
  iVar22 = param_3[1];
  local_d4 = (float *)*param_3;
  fVar37 = *param_2;
  param_2[1] = fVar37;
  pfVar20 = param_2 + 1;
  *param_2 = 0.0;
  if (iVar22 == 4) {
    skv_radix4_c2r_c(param_1,pfVar20,1,1,4);
  }
  else if (iVar22 == 8) {
    skv_radix8_c2r_c(param_1,pfVar20,1,1,8);
  }
  else if (iVar22 == 2) {
    skv_radix2_c2r_c();
  }
  else {
    puVar2 = (uint *)param_3[3];
    uVar23 = *puVar2;
    uVar9 = uVar23 & 1;
    uVar3 = puVar2[uVar23 * 2];
    if ((int)uVar23 < 0) {
      uVar9 = -uVar9;
    }
    iVar22 = puVar2[1] * uVar3;
    local_d0 = param_1;
    if (uVar9 == 1) {
      local_d0 = local_d4;
      local_d4 = param_1;
    }
    iVar1 = iVar22 >> 2;
    if ((int)uVar23 < 2) {
      pfVar20 = (float *)0x1;
      iVar16 = iVar1;
    }
    else {
      iVar16 = iVar1 * 2;
      fVar32 = pfVar20[iVar16 + 0x3fffffff];
      pfVar4 = local_d4 + iVar1;
      fVar30 = pfVar20[iVar16 + 0x40000000];
      iVar15 = (iVar22 >> 3) + -1;
      fVar35 = fVar37 - pfVar20[iVar1 * 4 + -1];
      local_cc = param_3[4] + iVar1 * -0x18;
      fVar37 = fVar37 + pfVar20[iVar1 * 4 + -1];
      *local_d4 = fVar37 + fVar32 * 2.0;
      *pfVar4 = fVar35 + -fVar30 * 2.0;
      pfVar4[iVar1] = fVar37 + -fVar32 * 2.0;
      (pfVar4 + iVar1)[iVar1] = fVar35 + fVar30 * 2.0;
      if (iVar15 != 0) {
        local_d8 = param_2 + iVar16 + 0x40000000;
        pfVar8 = param_2 + iVar16 + 0x40000001;
        pfVar11 = local_d4 + iVar1 * 3;
        pfVar20 = local_d4 + iVar1 + 1;
        pfVar7 = (float *)(local_cc + iVar1 * 0x10);
        pfVar10 = param_2 + iVar1 * 2 + -2;
        pfVar13 = local_d4 + 3;
        pfVar17 = param_2 + 4;
        iVar5 = local_cc + 0x10;
        pfVar6 = param_2 + iVar1 * 4 + -4;
        do {
          pfVar8 = pfVar8 + 2;
          pfVar14 = pfVar6 + -2;
          local_d8 = local_d8 + 2;
          iVar21 = iVar5 + iVar1 * 8;
          fVar37 = *local_d8 - *pfVar10;
          fVar31 = *(float *)(iVar5 + -4);
          fVar34 = pfVar7[3];
          fVar33 = *(float *)(iVar21 + -4);
          fVar29 = pfVar17[-1] + pfVar6[3];
          fVar39 = *(float *)(iVar5 + -8);
          fVar35 = pfVar7[2];
          fVar30 = *(float *)(iVar21 + -8);
          fVar38 = pfVar17[-1] - pfVar6[3];
          fVar26 = *local_d8 + *pfVar10;
          fVar28 = pfVar17[-2] - pfVar6[2];
          fVar36 = pfVar17[-2] + pfVar6[2];
          fVar32 = *pfVar8 + pfVar10[1];
          fVar27 = *pfVar8 - pfVar10[1];
          fVar41 = fVar29 + fVar37;
          fVar40 = fVar28 - fVar32;
          fVar29 = fVar29 - fVar37;
          fVar28 = fVar28 + fVar32;
          fVar37 = fVar36 - fVar26;
          fVar32 = fVar38 - fVar27;
          pfVar13[-2] = fVar36 + fVar26;
          pfVar13[-1] = fVar38 + fVar27;
          pfVar4[1] = fVar31 * fVar41 + fVar40 * fVar39;
          pfVar20[1] = -(fVar31 * fVar40) + fVar39 * fVar41;
          pfVar13[iVar1 * 2 + -2] = fVar33 * fVar32 + fVar30 * fVar37;
          pfVar13[iVar1 * 2 + -1] = -(fVar37 * fVar33) + fVar30 * fVar32;
          pfVar11[1] = fVar34 * fVar29 + fVar35 * fVar28;
          pfVar11 = pfVar11 + 2;
          *pfVar11 = -(fVar28 * fVar34) + fVar35 * fVar29;
          pfVar20 = pfVar20 + 2;
          pfVar4 = pfVar4 + 2;
          pfVar7 = pfVar7 + 2;
          pfVar10 = pfVar10 + -2;
          pfVar13 = pfVar13 + 2;
          pfVar17 = pfVar17 + 2;
          iVar5 = iVar5 + 8;
          pfVar6 = pfVar14;
        } while (param_2 + iVar1 * 4 + (iVar22 >> 3) * -2 + -2 != pfVar14);
      }
      fVar30 = DAT_00025840;
      fVar37 = DAT_0002583c;
      local_b0 = uVar23 - 1;
      pfVar20 = param_2 + iVar15 * 2 + 2;
      pfVar17 = pfVar20 + iVar16 + 0x40000000;
      pfVar10 = pfVar20 + iVar16 + 0x40000001;
      pfVar13 = local_d4 + iVar15 * 2 + 1;
      fVar32 = *pfVar20;
      pfVar7 = pfVar13 + iVar1;
      pfVar4 = pfVar20 + 1;
      if (local_b0 == 1) {
        pfVar20 = (float *)0x4;
      }
      iVar16 = iVar22 >> 4;
      fVar26 = *pfVar4 + *pfVar10;
      fVar27 = fVar32 - *pfVar17;
      fVar35 = (fVar27 - fVar26) / DAT_0002583c;
      fVar26 = (fVar27 + fVar26) / DAT_00025840;
      fVar32 = fVar32 + *pfVar17;
      fVar27 = *pfVar10 - *pfVar4;
      *pfVar13 = fVar32 + fVar32;
      *pfVar7 = fVar35;
      pfVar7[iVar1] = fVar27 + fVar27;
      (pfVar7 + iVar1)[iVar1] = fVar26;
      if (local_b0 != 1) {
        pfVar20 = (float *)0x4;
        while( true ) {
          pfVar4 = local_d0;
          local_cc = local_cc + iVar16 * -0x18;
          if (pfVar20 != (float *)0x0) {
            iVar15 = iVar16 * 2;
            iVar5 = (iVar16 >> 1) + -1;
            local_d8 = local_d4 + iVar15 + 0x40000000;
            pfVar10 = local_d0 + iVar1;
            pfVar13 = local_d0 + iVar1 * 3;
            pfVar7 = local_d4;
            local_c0 = pfVar20;
            do {
              fVar26 = *pfVar7 + pfVar7[iVar16 * 4 + -1];
              pfVar17 = local_d0 + iVar1 * 2;
              fVar32 = pfVar7[iVar15 + 0x3fffffff];
              fVar35 = *local_d8;
              fVar27 = *pfVar7 - pfVar7[iVar16 * 4 + -1];
              *local_d0 = fVar26 + fVar32 * 2.0;
              *pfVar10 = fVar27 + -fVar35 * 2.0;
              *pfVar17 = fVar26 + -fVar32 * 2.0;
              *pfVar13 = fVar27 + fVar35 * 2.0;
              if (iVar5 != 0) {
                pfVar8 = (float *)(local_cc + iVar16 * 8);
                local_b4 = local_d8;
                iVar21 = local_cc + 0x10;
                pfVar6 = pfVar7 + iVar16 * 2 + -3;
                pfVar11 = pfVar7 + iVar16 * 4 + -5;
                pfVar14 = pfVar7 + 3;
                pfVar18 = local_d0 + iVar1 + 1;
                pfVar19 = pfVar7 + iVar15 + 0x40000001;
                pfVar24 = local_d0 + 3;
                pfVar25 = pfVar8 + iVar16 * 2;
                local_bc = pfVar13;
                local_b8 = pfVar10;
                do {
                  pfVar12 = pfVar11 + -2;
                  fVar35 = local_b4[1] - *pfVar6;
                  fVar33 = *(float *)(iVar21 + -4);
                  fVar34 = pfVar8[3];
                  fVar36 = pfVar25[3];
                  fVar31 = pfVar14[-1] + pfVar11[3];
                  fVar43 = *(float *)(iVar21 + -8);
                  fVar41 = pfVar8[2];
                  fVar32 = pfVar25[2];
                  fVar39 = pfVar14[-1] - pfVar11[3];
                  fVar27 = local_b4[1] + *pfVar6;
                  fVar29 = pfVar14[-2] - pfVar11[2];
                  fVar38 = pfVar14[-2] + pfVar11[2];
                  fVar26 = pfVar19[1] + pfVar6[1];
                  fVar28 = pfVar19[1] - pfVar6[1];
                  fVar45 = fVar31 + fVar35;
                  fVar42 = fVar38 - fVar27;
                  fVar40 = fVar39 - fVar28;
                  fVar44 = fVar29 - fVar26;
                  fVar31 = fVar31 - fVar35;
                  fVar29 = fVar29 + fVar26;
                  pfVar24[-2] = fVar38 + fVar27;
                  pfVar24[-1] = fVar39 + fVar28;
                  local_b8[1] = fVar33 * fVar45 + fVar44 * fVar43;
                  pfVar18[1] = -(fVar33 * fVar44) + fVar43 * fVar45;
                  pfVar17[1] = fVar34 * fVar40 + fVar41 * fVar42;
                  pfVar17 = pfVar17 + 2;
                  *pfVar17 = -(fVar42 * fVar34) + fVar41 * fVar40;
                  local_bc[1] = fVar36 * fVar31 + fVar32 * fVar29;
                  local_bc = local_bc + 2;
                  *local_bc = -(fVar29 * fVar36) + fVar32 * fVar31;
                  iVar21 = iVar21 + 8;
                  pfVar6 = pfVar6 + -2;
                  pfVar8 = pfVar8 + 2;
                  pfVar11 = pfVar12;
                  pfVar14 = pfVar14 + 2;
                  pfVar18 = pfVar18 + 2;
                  pfVar19 = pfVar19 + 2;
                  pfVar24 = pfVar24 + 2;
                  pfVar25 = pfVar25 + 2;
                  local_b8 = local_b8 + 2;
                  local_b4 = local_b4 + 2;
                } while (pfVar7 + (iVar16 >> 1) * -2 + iVar16 * 4 + -3 != pfVar12);
              }
              pfVar17 = pfVar7 + iVar5 * 2 + 1;
              pfVar6 = pfVar7 + iVar15 + 0x3fffffff + iVar5 * 2 + 2;
              fVar28 = *pfVar17;
              local_c0 = (float *)((int)local_c0 + -1);
              fVar29 = pfVar6[1];
              local_d8 = local_d8 + iVar5 * 2 + iVar16 * 3 + 2;
              pfVar7 = pfVar7 + iVar5 * 2 + iVar16 * 3 + 2;
              fVar35 = *pfVar6;
              fVar26 = pfVar17[1];
              fVar27 = fVar28 - fVar35;
              pfVar10 = pfVar10 + iVar5 * 2 + 2;
              pfVar13 = pfVar13 + iVar5 * 2 + 2;
              fVar32 = fVar26 + fVar29;
              fVar28 = fVar28 + fVar35;
              fVar29 = fVar29 - fVar26;
              local_d0[iVar5 * 2 + 1] = fVar28 + fVar28;
              local_d0[iVar1 + iVar5 * 2 + 1] = (fVar27 - fVar32) / fVar37;
              local_d0[iVar5 * 2 + iVar1 * 2 + 1] = fVar29 + fVar29;
              local_d0[iVar5 * 2 + iVar1 * 3 + 1] = (fVar27 + fVar32) / fVar30;
              local_d0 = local_d0 + iVar5 * 2 + 2;
            } while (local_c0 != (float *)0x0);
          }
          pfVar20 = (float *)((int)pfVar20 << 2);
          iVar16 = iVar16 >> 2;
          local_b0 = local_b0 + -1;
          if (local_b0 == 1) break;
          local_d0 = local_d4;
          local_d4 = pfVar4;
        }
        local_d0 = local_d4;
        local_d4 = pfVar4;
      }
    }
    if (uVar3 == 8) {
      skv_radix8_c2r_c(local_d0,local_d4,pfVar20,iVar16,iVar22);
    }
    else if (uVar3 == 4) {
      skv_radix4_c2r_c(local_d0,local_d4,pfVar20,iVar16,iVar22);
    }
  }
  fVar37 = param_2[1];
  param_2[1] = 0.0;
  *param_2 = fVar37;
  return;
}



/* ===== skv_fft_r2c_1d_float32_neon @ 000259a8 size=3272 ===== */

void skv_fft_r2c_1d_float32_neon(undefined4 *param_1,undefined1 (*param_2) [16],undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [12];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined1 (*pauVar25) [16];
  uint *puVar26;
  undefined1 (*pauVar27) [16];
  float *pfVar28;
  undefined4 *puVar29;
  int *piVar30;
  undefined1 (*pauVar31) [16];
  undefined4 *puVar32;
  undefined1 uVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 in_q4 [16];
  float fVar57;
  undefined1 in_q5 [16];
  undefined1 auVar58 [16];
  undefined1 in_q8 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 in_q12 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 in_q13 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int local_168 [2];
  float local_160;
  undefined1 (*local_150) [16];
  undefined1 (*local_14c) [16];
  int local_148;
  undefined1 (*local_144) [16];
  int local_140;
  undefined1 (*local_13c) [16];
  uint local_138;
  undefined1 (*local_134) [16];
  undefined4 *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  undefined1 (*local_6c) [16];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  local_78 = param_3;
  local_168[0] = param_3[1];
  local_b0 = param_1;
  if (local_168[0] == 4) {
    skv_radix4_r2c_c(param_1,param_2,1);
    *local_b0 = local_b0[1];
    return;
  }
  if (local_168[0] == 8) {
    skv_radix8_r2c_c(param_1,param_2,1);
    *local_b0 = local_b0[1];
    return;
  }
  if (local_168[0] == 2) {
    skv_radix2_r2c_c();
    *local_b0 = local_b0[1];
    return;
  }
  puVar26 = (uint *)param_3[7];
  local_6c = (undefined1 (*) [16])*param_3;
  local_14c = (undefined1 (*) [16])(*local_6c + (local_168[0] / 2) * 8 + 8);
  local_160 = (float)puVar26[1];
  local_148 = param_3[5];
  uVar8 = *puVar26;
  uVar9 = uVar8 & 1;
  if ((int)uVar8 < 0) {
    uVar9 = -uVar9;
  }
  if (uVar9 != 1) {
    local_144 = local_6c;
  }
  local_138 = puVar26[uVar8 * 2 + 0x3fffffff];
  uVar8 = puVar26[uVar8 * 2 + 0x40000000];
  local_150 = (undefined1 (*) [16])(uVar8 * (int)local_160);
  if (uVar9 == 1) {
    local_14c = local_6c;
    local_144 = (undefined1 (*) [16])(*local_6c + (local_168[0] / 2) * 8 + 8);
  }
  if (uVar8 == 8) {
    if ((int)local_160 < 1) goto LAB_00025e58;
    auVar59._8_8_ = DAT_00026690;
    auVar59._0_8_ = DAT_00026688;
    pauVar7 = param_2 + (int)local_160;
    auVar62._8_8_ = DAT_000266a0;
    auVar62._0_8_ = DAT_00026698;
    local_13c = local_6c;
    local_140 = (int)local_160 * 0x50;
    pauVar15 = local_14c;
    uVar9 = (uint)local_160;
    do {
      auVar38 = *pauVar7;
      pauVar10 = pauVar7 + (int)local_160 * 6;
      uVar9 = uVar9 - 1;
      auVar65 = FloatVectorSub(auVar38,param_2[(int)local_160 * 5],2,0x20);
      pauVar7 = pauVar7 + 1;
      auVar68 = FloatVectorSub(param_2[(int)local_160 * 3],*pauVar10,2,0x20);
      auVar69 = FloatVectorAdd(param_2[(int)local_160 * 3],*pauVar10,2);
      auVar72 = FloatVectorAdd(auVar38,param_2[(int)local_160 * 5],2);
      auVar74 = FloatVectorAdd(*param_2,param_2[(int)local_160 * 4],2);
      auVar75 = FloatVectorAdd(param_2[(int)local_160 * 2],param_2[(int)local_160 * 6],2);
      auVar65 = FloatVectorMult(auVar65,auVar59,2,0x20);
      auVar71 = FloatVectorMult(auVar68,auVar62,2,0x20);
      auVar63 = FloatVectorSub(*param_2,param_2[(int)local_160 * 4],2,0x20);
      auVar38 = FloatVectorAdd(auVar72,auVar69,2);
      auVar68 = FloatVectorAdd(auVar65,auVar71,2);
      in_q12 = FloatVectorSub(auVar71,auVar65,2,0x20);
      auVar71 = FloatVectorSub(param_2[(int)local_160 * 2],param_2[(int)local_160 * 6],2,0x20);
      auVar66 = FloatVectorAdd(auVar74,auVar75,2);
      auVar65 = FloatVectorAdd(auVar63,auVar68,2);
      auVar69 = FloatVectorSub(auVar69,auVar72,2,0x20);
      in_q13 = FloatVectorSub(auVar74,auVar75,2,0x20);
      auVar74 = FloatVectorAdd(auVar66,auVar38,2);
      auVar72 = FloatVectorSub(in_q12,auVar71,2,0x20);
      auVar68 = FloatVectorSub(auVar63,auVar68,2,0x20);
      auVar38 = FloatVectorSub(auVar66,auVar38,2,0x20);
      *(longlong *)*pauVar15 = auVar74._0_8_;
      *(longlong *)(*pauVar15 + 8) = auVar74._8_8_;
      in_q8 = FloatVectorAdd(auVar71,in_q12,2);
      *(longlong *)pauVar15[1] = auVar65._0_8_;
      *(longlong *)(pauVar15[1] + 8) = auVar65._8_8_;
      *(longlong *)pauVar15[2] = auVar72._0_8_;
      *(longlong *)(pauVar15[2] + 8) = auVar72._8_8_;
      *(longlong *)pauVar15[3] = in_q13._0_8_;
      *(longlong *)(pauVar15[3] + 8) = in_q13._8_8_;
      *(longlong *)pauVar15[4] = auVar69._0_8_;
      *(longlong *)(pauVar15[4] + 8) = auVar69._8_8_;
      *(longlong *)pauVar15[5] = auVar68._0_8_;
      *(longlong *)(pauVar15[5] + 8) = auVar68._8_8_;
      *(longlong *)pauVar15[6] = in_q8._0_8_;
      *(longlong *)(pauVar15[6] + 8) = in_q8._8_8_;
      *(longlong *)pauVar15[7] = auVar38._0_8_;
      *(longlong *)(pauVar15[7] + 8) = auVar38._8_8_;
      pauVar15 = pauVar15 + 8;
      param_2 = param_2 + 1;
      local_6c = local_13c;
    } while (uVar9 != 0);
  }
  else if (uVar8 == 4) {
    if ((int)local_160 < 1) goto LAB_00025e58;
    uVar9 = 0;
    pauVar15 = local_14c;
    do {
      pauVar7 = param_2 + (int)local_160 * 3;
      auVar59 = *param_2;
      pauVar10 = param_2 + (int)local_160;
      pauVar27 = param_2 + (int)local_160 * 2;
      uVar9 = uVar9 + 1;
      param_2 = param_2 + 1;
      auVar62 = FloatVectorAdd(auVar59,*pauVar27,2);
      in_q13 = *pauVar10;
      auVar38 = FloatVectorSub(auVar59,*pauVar27,2,0x20);
      auVar65 = FloatVectorAdd(in_q13,*pauVar7,2);
      auVar59 = FloatVectorSub(*pauVar7,in_q13,2,0x20);
      in_q12 = FloatVectorAdd(auVar62,auVar65,2);
      in_q8 = FloatVectorSub(auVar62,auVar65,2,0x20);
      *(longlong *)*pauVar15 = in_q12._0_8_;
      *(longlong *)(*pauVar15 + 8) = in_q12._8_8_;
      *(longlong *)pauVar15[1] = auVar38._0_8_;
      *(longlong *)(pauVar15[1] + 8) = auVar38._8_8_;
      *(longlong *)pauVar15[2] = auVar59._0_8_;
      *(longlong *)(pauVar15[2] + 8) = auVar59._8_8_;
      *(longlong *)pauVar15[3] = in_q8._0_8_;
      *(longlong *)(pauVar15[3] + 8) = in_q8._8_8_;
      pauVar15 = pauVar15 + 4;
    } while (local_160 != (float)uVar9);
  }
  if (1 < (int)local_160) {
    auVar38._8_8_ = DAT_00025e40;
    auVar38._0_8_ = DAT_00025e38;
    iVar19 = (int)(uVar8 * (int)local_160) >> 2;
    local_a8 = iVar19 * 0x20;
    local_74 = iVar19 * 0x20 + 0x10;
    local_70 = iVar19 * 0x30 + 0x10;
    local_a0 = iVar19 * 0x10;
    local_ac = iVar19 * 0x10 + 0x10;
    local_a4 = iVar19 * 0x30;
    local_160 = (float)((int)local_160 >> 2);
    local_7c = local_138;
    pauVar15 = local_14c;
    while (local_160 != 0.0) {
      iVar1 = local_7c * 2;
      local_13c = (undefined1 (*) [16])(((int)local_7c >> 1) + -1);
      iVar13 = (iVar1 + 0xfffffff) * 0x10;
      local_98 = iVar13 + 0x10;
      iVar24 = (int)local_13c * 0x20;
      local_88 = local_7c * 0x40 + -0x30;
      local_150 = local_144 + iVar1 + 0x10000000;
      local_138 = iVar13 + 0x20;
      local_8c = iVar24 + 0x20;
      local_80 = iVar24 + local_ac;
      local_94 = local_7c * 0x40 + -0x10;
      local_9c = local_7c * -0x20 + 0x10;
      local_90 = local_7c * 0x30 + iVar24 + 0x20;
      local_134 = local_144 + (int)local_13c * 2 + 1;
      pauVar27 = pauVar15 + iVar19 * 2;
      local_84 = local_90;
      pauVar7 = local_144;
      pauVar10 = pauVar15;
      local_140 = (int)local_160;
      do {
        pauVar6 = local_134;
        pauVar31 = pauVar7 + 1;
        auVar59 = FloatVectorAdd(*pauVar10,*pauVar27,2);
        in_q13 = pauVar10[iVar19];
        auVar68 = FloatVectorAdd(in_q13,pauVar10[iVar19 * 3],2);
        auVar65 = FloatVectorSub(*pauVar10,*pauVar27,2,0x20);
        auVar62 = FloatVectorSub(pauVar10[iVar19 * 3],in_q13,2,0x20);
        auVar71 = FloatVectorAdd(auVar59,auVar68,2);
        auVar59 = FloatVectorSub(auVar59,auVar68,2,0x20);
        *(longlong *)*pauVar7 = auVar71._0_8_;
        *(longlong *)(*pauVar7 + 8) = auVar71._8_8_;
        *(longlong *)pauVar7[iVar1 + 0xfffffff] = auVar65._0_8_;
        *(longlong *)(pauVar7[iVar1 + 0xfffffff] + 8) = auVar65._8_8_;
        *(longlong *)*local_150 = auVar62._0_8_;
        *(longlong *)(*local_150 + 8) = auVar62._8_8_;
        *(longlong *)pauVar7[local_7c * 4 + -1] = auVar59._0_8_;
        *(longlong *)(pauVar7[local_7c * 4 + -1] + 8) = auVar59._8_8_;
        if (0 < (int)local_13c) {
          iVar13 = local_148 + 0x30;
          pauVar16 = pauVar10 + 1;
          pauVar17 = pauVar7 + local_7c * 4 + -3;
          iVar24 = (int)local_13c;
          do {
            iVar24 = iVar24 + -1;
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -0x18),*(undefined4 *)(iVar13 + -0x18));
            auVar65._8_8_ = uVar2;
            auVar65._0_8_ = uVar2;
            FloatVectorMult(pauVar16[iVar19],auVar65,2,0x20);
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -8),*(undefined4 *)(iVar13 + -8));
            auVar68._8_8_ = uVar2;
            auVar68._0_8_ = uVar2;
            FloatVectorMult(pauVar16[iVar19 * 3],auVar68,2,0x20);
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -0xc),*(undefined4 *)(iVar13 + -0xc));
            auVar71._8_8_ = uVar2;
            auVar71._0_8_ = uVar2;
            FloatVectorMult(pauVar16[iVar19 * 2],auVar71,2,0x20);
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -0x14),*(undefined4 *)(iVar13 + -0x14));
            auVar63._8_8_ = uVar2;
            auVar63._0_8_ = uVar2;
            FloatVectorMult(pauVar16[iVar19],auVar63,2,0x20);
            auVar59 = FloatVectorMultiplySubtract(pauVar16[iVar19 + 1],auVar63,2,0x10);
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -0x10),*(undefined4 *)(iVar13 + -0x10));
            auVar66._8_8_ = uVar2;
            auVar66._0_8_ = uVar2;
            FloatVectorMult(pauVar16[iVar19 * 2],auVar66,2,0x20);
            auVar63 = FloatVectorMultiplyAccumulate(pauVar16[iVar19 + 1],auVar65,2,0x10);
            uVar2 = CONCAT44(*(undefined4 *)(iVar13 + -4),*(undefined4 *)(iVar13 + -4));
            auVar69._8_8_ = uVar2;
            auVar69._0_8_ = uVar2;
            auVar65 = FloatVectorMultiplySubtract(pauVar16[iVar19 * 3 + 1],auVar69,2,0x10);
            auVar71 = FloatVectorMultiplySubtract(pauVar16[iVar19 * 2 + 1],auVar71,2,0x10);
            FloatVectorMult(pauVar16[iVar19 * 3],auVar69,2,0x20);
            auVar74 = FloatVectorMultiplyAccumulate(pauVar16[iVar19 * 3 + 1],auVar68,2,0x10);
            auVar68 = FloatVectorMultiplyAccumulate(pauVar16[iVar19 * 2 + 1],auVar66,2,0x10);
            auVar62 = FloatVectorSub(auVar59,auVar65,2,0x20);
            auVar59 = FloatVectorAdd(auVar59,auVar65,2);
            auVar72 = FloatVectorAdd(*pauVar16,auVar71,2);
            auVar65 = FloatVectorSub(pauVar16[1],auVar68,2,0x20);
            auVar69 = FloatVectorAdd(auVar63,auVar74,2);
            auVar66 = FloatVectorAdd(pauVar16[1],auVar68,2);
            auVar63 = FloatVectorSub(auVar63,auVar74,2,0x20);
            auVar75 = FloatVectorAdd(auVar72,auVar59,2);
            auVar68 = FloatVectorSub(*pauVar16,auVar71,2,0x20);
            auVar74 = FloatVectorAdd(auVar62,auVar65,2);
            *(longlong *)*pauVar31 = auVar75._0_8_;
            *(longlong *)(*pauVar31 + 8) = auVar75._8_8_;
            auVar76 = FloatVectorAdd(auVar66,auVar69,2);
            auVar75 = FloatVectorAdd(auVar68,auVar63,2);
            auVar72 = FloatVectorSub(auVar72,auVar59,2,0x20);
            auVar71 = FloatVectorSub(auVar69,auVar66,2,0x20);
            *(longlong *)pauVar31[1] = auVar76._0_8_;
            *(longlong *)(pauVar31[1] + 8) = auVar76._8_8_;
            auVar68 = FloatVectorSub(auVar68,auVar63,2,0x20);
            *(longlong *)pauVar31[iVar1 + 0x10000000] = auVar75._0_8_;
            *(longlong *)(pauVar31[iVar1 + 0x10000000] + 8) = auVar75._8_8_;
            pauVar25 = pauVar31 + iVar1 + 0x10000001;
            auVar59 = FloatVectorSub(auVar65,auVar62,2,0x20);
            puVar21 = (undefined8 *)((int)pauVar17 - local_98);
            in_q13 = FloatVectorNeg(auVar74,2,2);
            pauVar31 = pauVar31 + 2;
            *(longlong *)*pauVar25 = auVar59._0_8_;
            *(longlong *)(*pauVar25 + 8) = auVar59._8_8_;
            *(longlong *)*pauVar17 = auVar72._0_8_;
            *(longlong *)(*pauVar17 + 8) = auVar72._8_8_;
            *(longlong *)pauVar17[1] = auVar71._0_8_;
            *(longlong *)(pauVar17[1] + 8) = auVar71._8_8_;
            *puVar21 = auVar68._0_8_;
            puVar21[1] = auVar68._8_8_;
            *(longlong *)pauVar17[local_7c * -2 + 1] = in_q13._0_8_;
            *(longlong *)(pauVar17[local_7c * -2 + 1] + 8) = in_q13._8_8_;
            iVar13 = iVar13 + 0x18;
            pauVar16 = pauVar16 + 2;
            pauVar17 = pauVar17 + -2;
          } while (iVar24 != 0);
        }
        local_140 = local_140 + -1;
        pauVar31 = pauVar27 + (int)local_13c * 2 + 1;
        auVar59 = FloatVectorMult(pauVar10[iVar19 + (int)local_13c * 2 + 1],auVar38,2,0x20);
        pauVar17 = pauVar10 + (int)local_13c * 2 + 1;
        auVar62 = FloatVectorMult(pauVar27[iVar19 + (int)local_13c * 2 + 1],auVar38,2,0x20);
        pauVar7 = pauVar7 + (int)local_13c * 2 + local_7c * 3 + 2;
        auVar68 = FloatVectorAdd(auVar59,auVar62,2);
        pauVar27 = pauVar27 + (int)local_13c * 2 + 2;
        pauVar10 = pauVar10 + (int)local_13c * 2 + 2;
        auVar59 = FloatVectorSub(auVar59,auVar62,2,0x20);
        pauVar25 = local_150 + (int)local_13c * 2 + 1;
        local_150 = local_150 + local_7c * 3 + (int)local_13c * 2 + 2;
        auVar65 = FloatVectorAdd(*pauVar31,auVar68,2);
        pauVar16 = local_134 + iVar1 + 0x10000001;
        auVar62 = FloatVectorSub(*pauVar31,auVar68,2,0x20);
        local_134 = local_134 + local_7c * 3 + (int)local_13c * 2 + 2;
        in_q12 = FloatVectorAdd(*pauVar17,auVar59,2);
        auVar65 = FloatVectorNeg(auVar65,2,2);
        in_q8 = FloatVectorSub(*pauVar17,auVar59,2,0x20);
        *(longlong *)*pauVar6 = in_q12._0_8_;
        *(longlong *)(*pauVar6 + 8) = in_q12._8_8_;
        *(longlong *)pauVar6[1] = auVar65._0_8_;
        *(longlong *)(pauVar6[1] + 8) = auVar65._8_8_;
        *(longlong *)*pauVar25 = in_q8._0_8_;
        *(longlong *)(*pauVar25 + 8) = in_q8._8_8_;
        *(longlong *)*pauVar16 = auVar62._0_8_;
        *(longlong *)(*pauVar16 + 8) = auVar62._8_8_;
      } while (local_140 != 0);
      iVar1 = local_7c * 0x18;
      local_7c = local_7c << 2;
      local_148 = iVar1 + local_148;
      local_14c = local_144;
      if (local_160 == 1.4013e-45) break;
      local_144 = pauVar15;
      local_160 = (float)((int)local_160 >> 2);
      pauVar15 = local_14c;
    }
  }
  local_168[0] = param_3[1];
LAB_00025e58:
  fVar37 = DAT_00025e48;
  fVar51 = *(float *)(*local_6c + 8);
  iVar1 = local_168[0] >> 2;
  iVar19 = local_168[0] * 4;
  fVar43 = *(float *)(*local_6c + 0xc);
  iVar13 = local_168[0] >> 3;
  iVar11 = param_3[8];
  pfVar18 = (float *)(param_1 + iVar1 * 2);
  fVar40 = *(float *)*local_6c;
  pfVar28 = pfVar18 + (iVar13 - iVar1) * 2;
  pfVar20 = pfVar28 + iVar1 * 2;
  fVar41 = *(float *)(*local_6c + 4);
  *pfVar18 = fVar40 - fVar51;
  pfVar18[1] = fVar43 - fVar41;
  fVar40 = fVar40 + fVar51;
  fVar47 = *(float *)(local_6c[-1] + iVar19);
  fVar51 = *(float *)(local_6c[-1] + iVar19 + 0xc) - *(float *)(local_6c[-1] + iVar19 + 4);
  fVar49 = *(float *)(local_6c[-1] + iVar19 + 8);
  fVar52 = *(float *)(local_6c[-1] + iVar19 + 0xc) + *(float *)(local_6c[-1] + iVar19 + 4);
  *pfVar28 = fVar47 + fVar51 * fVar37;
  pfVar28[1] = -fVar49 + fVar52 * fVar37;
  iVar24 = local_168[0] >> 1;
  *pfVar20 = fVar47 + -fVar51 * fVar37;
  fVar51 = *(float *)(iVar11 + 0x10);
  fVar55 = *(float *)(iVar11 + 8);
  auVar72._0_4_ = *(float *)(iVar11 + 0x18);
  pfVar20[1] = fVar49 + fVar52 * fVar37;
  fVar41 = fVar41 + fVar43;
  auVar72._4_4_ = *(float *)(local_6c[1] + 0xc);
  fVar47 = -(*(float *)(iVar11 + 0x14) * *(float *)(local_6c[2] + 8)) +
           *(float *)(local_6c[1] + 8) * fVar51;
  fVar49 = -(*(float *)(iVar11 + 0xc) * *(float *)(local_6c[2] + 4)) +
           *(float *)(local_6c[1] + 4) * fVar55;
  fVar45 = -(*(float *)(iVar11 + 0x1c) * *(float *)(local_6c[2] + 0xc)) +
           auVar72._4_4_ * auVar72._0_4_;
  fVar52 = *(float *)(local_6c[2] + 0xc) * auVar72._0_4_ + auVar72._4_4_ * *(float *)(iVar11 + 0x1c)
  ;
  fVar43 = *(float *)(local_6c[2] + 8) * fVar51 +
           *(float *)(local_6c[1] + 8) * *(float *)(iVar11 + 0x14);
  fVar55 = *(float *)(local_6c[2] + 4) * fVar55 +
           *(float *)(local_6c[1] + 4) * *(float *)(iVar11 + 0xc);
  fVar37 = fVar49 - fVar45;
  fVar51 = *(float *)local_6c[1] + fVar47;
  fVar49 = fVar49 + fVar45;
  auVar72._12_4_ = *(float *)local_6c[2] + fVar43;
  fVar43 = *(float *)local_6c[2] - fVar43;
  fVar45 = fVar55 + fVar52;
  fVar47 = *(float *)local_6c[1] - fVar47;
  fVar55 = fVar55 - fVar52;
  pfVar28[iVar13 * -2 + 2] = fVar51 + fVar49;
  pfVar28[iVar13 * -2 + 3] = auVar72._12_4_ + fVar45;
  pfVar20[iVar13 * -2 + 2] = fVar47 + fVar55;
  pfVar20[iVar13 * -2 + 3] = fVar43 - fVar37;
  pfVar20[iVar13 * -2 + -2] = fVar47 - fVar55;
  auVar72._8_4_ = -(fVar43 + fVar37);
  fVar37 = fVar40 + fVar41;
  pfVar20[iVar13 * -2 + -1] = auVar72._8_4_;
  pfVar20[iVar13 * -2 + iVar1 * 2 + -1] = -(auVar72._12_4_ - fVar45);
  pfVar20[iVar13 * -2 + iVar1 * 2 + -2] = fVar51 - fVar49;
  fVar40 = fVar40 - fVar41;
  piVar30 = local_168;
  if (local_168[0] != 0x10) {
    auVar74._8_8_ = auVar72._8_8_;
    auVar74._4_4_ = *(float *)(iVar11 + 0x50);
    iVar13 = iVar24 * 4;
    pfVar20 = (float *)(param_1 + iVar24 + 4);
    pfVar18 = pfVar20 + iVar24 + -10;
    auVar74._0_4_ = *(float *)(local_6c[5] + 8);
    local_160 = -(*(float *)(iVar11 + 0x54) * *(float *)(local_6c[6] + 8));
    auVar75._0_8_ = auVar74._0_8_;
    auVar75._8_4_ = *(float *)local_6c[3];
    auVar75._12_4_ = *(float *)local_6c[4];
    fVar51 = *(float *)(local_6c[6] + 8) * auVar74._4_4_ + auVar74._0_4_ * *(float *)(iVar11 + 0x54)
    ;
    fVar50 = -(*(float *)(iVar11 + 0x34) * *(float *)(local_6c[4] + 8)) +
             *(float *)(local_6c[3] + 8) * *(float *)(iVar11 + 0x30);
    fVar49 = -(*(float *)(iVar11 + 0x2c) * *(float *)(local_6c[4] + 4)) +
             *(float *)(local_6c[3] + 4) * *(float *)(iVar11 + 0x28);
    fVar55 = -(*(float *)(iVar11 + 0x3c) * *(float *)(local_6c[4] + 0xc)) +
             *(float *)(local_6c[3] + 0xc) * *(float *)(iVar11 + 0x38);
    fVar48 = *(float *)(local_6c[6] + 0xc) * *(float *)(iVar11 + 0x58) +
             *(float *)(local_6c[5] + 0xc) * *(float *)(iVar11 + 0x5c);
    fVar45 = *(float *)(local_6c[6] + 4) * *(float *)(iVar11 + 0x48) +
             *(float *)(local_6c[5] + 4) * *(float *)(iVar11 + 0x4c);
    fVar44 = *(float *)(local_6c[4] + 8) * *(float *)(iVar11 + 0x30) +
             *(float *)(local_6c[3] + 8) * *(float *)(iVar11 + 0x34);
    fVar52 = *(float *)(local_6c[4] + 4) * *(float *)(iVar11 + 0x28) +
             *(float *)(local_6c[3] + 4) * *(float *)(iVar11 + 0x2c);
    fVar46 = *(float *)(local_6c[4] + 0xc) * *(float *)(iVar11 + 0x38) +
             *(float *)(local_6c[3] + 0xc) * *(float *)(iVar11 + 0x3c);
    fVar42 = -(*(float *)(iVar11 + 0x5c) * *(float *)(local_6c[6] + 0xc)) +
             *(float *)(local_6c[5] + 0xc) * *(float *)(iVar11 + 0x58);
    fVar41 = -(*(float *)(iVar11 + 0x4c) * *(float *)(local_6c[6] + 4)) +
             *(float *)(local_6c[5] + 4) * *(float *)(iVar11 + 0x48);
    local_160 = local_160 + auVar74._0_4_ * auVar74._4_4_;
    fVar43 = *(float *)local_6c[6];
    auVar5._4_8_ = auVar75._8_8_;
    auVar5._0_4_ = fVar43;
    auVar76._0_12_ = auVar5 << 0x20;
    fVar57 = fVar49 + fVar55;
    fVar56 = auVar75._8_4_ + fVar50;
    fVar54 = auVar75._12_4_ - fVar44;
    fVar53 = fVar43 - fVar51;
    fVar44 = auVar75._12_4_ + fVar44;
    fVar43 = fVar43 + fVar51;
    auVar76._12_4_ = fVar52 + fVar46;
    auVar36._8_8_ = auVar76._8_8_;
    fVar47 = fVar45 + fVar48;
    fVar45 = fVar45 - fVar48;
    fVar48 = fVar41 + fVar42;
    fVar41 = fVar41 - fVar42;
    fVar42 = *(float *)local_6c[5];
    param_1[4] = fVar56 + fVar57;
    fVar51 = fVar42 + local_160;
    fVar52 = fVar52 - fVar46;
    fVar50 = auVar75._8_4_ - fVar50;
    param_1[5] = fVar44 + auVar76._12_4_;
    fVar49 = fVar49 - fVar55;
    param_1[6] = fVar51 + fVar48;
    fVar42 = fVar42 - local_160;
    param_1[7] = fVar43 + fVar47;
    pfVar20[-8] = fVar50 - fVar52;
    *pfVar20 = fVar50 + fVar52;
    pfVar20[1] = fVar54 - fVar49;
    pfVar20[2] = fVar42 + fVar45;
    pfVar20[3] = fVar53 - fVar41;
    auVar36._0_4_ = fVar51 - fVar48;
    auVar36._4_4_ = fVar47 - fVar43;
    pfVar20[-7] = -fVar54 - fVar49;
    pfVar20[-10] = fVar42 - fVar45;
    pfVar20[-9] = -fVar53 - fVar41;
    pfVar18[2] = fVar56 - fVar57;
    *pfVar18 = auVar36._0_4_;
    pfVar18[1] = auVar36._4_4_;
    pfVar18[3] = auVar76._12_4_ - fVar44;
    piVar30 = local_168;
    if (local_168[0] != 0x20) {
      pauVar15 = local_6c + 7;
      puVar14 = (undefined4 *)(iVar11 + 0x60);
      iVar1 = iVar1 + -8 >> 3;
      piVar30 = local_168;
      if (0 < iVar1) {
        iVar19 = iVar19 + (int)param_1 * 2 + -0x18;
        iVar24 = iVar13 + (int)param_1 * 2 + -0x18;
        puVar12 = (undefined4 *)(iVar11 + iVar1 * 0x60 + 0x60);
        piVar30 = local_168;
        do {
          param_1 = param_1 + 8;
          pauVar7 = pauVar15 + 3;
          auVar59 = pauVar15[2];
          puVar23 = puVar14 + 0x10;
          auVar62 = pauVar15[6];
          uVar33 = puVar14 + 0x18 == puVar12;
          auVar65 = VectorTranspose(auVar62,4);
          auVar38 = VectorTranspose(auVar59,4);
          auVar60._0_8_ = in_q8._0_8_;
          auVar60._8_8_ = auVar62._0_8_;
          puVar3 = (undefined4 *)0x3c0;
          puVar4 = (undefined4 *)0x3d0;
          lVar34 = 2;
          puVar29 = puVar14 + 0x18;
          puVar22 = puVar14;
          puVar32 = puVar14;
          while( true ) {
            puVar14 = puVar29;
            *puVar3 = *puVar32;
            puVar32 = puVar32 + 1;
            *puVar4 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
            puVar29 = puVar14;
          }
          puVar3 = (undefined4 *)0x3c8;
          puVar4 = (undefined4 *)0x3d8;
          lVar34 = 2;
          while( true ) {
            *puVar3 = *puVar32;
            puVar32 = puVar32 + 1;
            *puVar4 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar22 = puVar22 + 8;
          auVar68 = *pauVar7;
          pauVar7 = pauVar15 + 7;
          pauVar15 = pauVar15 + 8;
          auVar71 = VectorTranspose(auVar68,4);
          auVar61._8_8_ = auVar60._8_8_;
          auVar61._0_8_ = auVar59._0_8_;
          auVar73._8_8_ = auVar62._8_8_;
          auVar73._0_8_ = auVar59._8_8_;
          auVar59 = *pauVar7;
          puVar29 = (undefined4 *)(iVar19 - (int)param_1);
          puVar32 = (undefined4 *)(iVar24 - (int)param_1);
          auVar62 = VectorTranspose(auVar59,4);
          FloatVectorMult(auVar61,in_q12,2,0x20);
          FloatVectorMult(auVar61,in_q13,2,0x20);
          *(longlong *)((int)piVar30 + 8) = auVar71._0_8_;
          *(longlong *)((int)piVar30 + 0x10) = auVar71._8_8_;
          auVar39._8_8_ = auVar59._0_8_;
          auVar39._0_8_ = auVar68._0_8_;
          auVar67._8_8_ = auVar65._0_8_;
          auVar67._0_8_ = auVar38._0_8_;
          auVar64._8_8_ = auVar65._8_8_;
          auVar64._0_8_ = auVar38._8_8_;
          puVar3 = (undefined4 *)0x300;
          puVar4 = (undefined4 *)0x310;
          lVar34 = 2;
          while( true ) {
            *puVar3 = *puVar23;
            puVar23 = puVar23 + 1;
            *puVar4 = *puVar23;
            puVar23 = puVar23 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x308;
          puVar4 = (undefined4 *)0x318;
          lVar34 = 2;
          while( true ) {
            *puVar3 = *puVar23;
            puVar23 = puVar23 + 1;
            *puVar4 = *puVar23;
            puVar23 = puVar23 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          auVar63 = FloatVectorMultiplyAccumulate(auVar39,in_q12,2,0x10);
          auVar71 = FloatVectorMultiplySubtract(auVar39,in_q13,2,0x10);
          auVar65 = *(undefined1 (*) [16])((int)piVar30 + 8);
          FloatVectorMult(auVar73,auVar36,2,0x20);
          auVar58._8_8_ = auVar59._8_8_;
          auVar58._0_8_ = auVar68._8_8_;
          puVar3 = (undefined4 *)0x3e0;
          puVar4 = (undefined4 *)0x3f0;
          lVar34 = 2;
          auVar68 = auVar59;
          while( true ) {
            *puVar3 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar4 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x3e8;
          puVar4 = (undefined4 *)0x3f8;
          lVar34 = 2;
          while( true ) {
            *puVar3 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar4 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          FloatVectorMult(auVar73,auVar38,2,0x20);
          auVar38 = FloatVectorMultiplySubtract(auVar58,auVar38,2,0x10);
          auVar35._8_8_ = auVar62._8_8_;
          auVar35._0_8_ = auVar65._8_8_;
          auVar70._0_8_ = auVar65._0_8_;
          auVar70._8_8_ = auVar62._0_8_;
          in_q12 = FloatVectorMultiplyAccumulate(auVar58,auVar36,2,0x10);
          FloatVectorMult(auVar64,auVar68,2,0x20);
          FloatVectorMult(auVar64,auVar59,2,0x20);
          auVar65 = FloatVectorMultiplyAccumulate(auVar35,auVar59,2,0x10);
          auVar69 = FloatVectorSub(auVar71,auVar38,2,0x20);
          auVar62 = FloatVectorMultiplySubtract(auVar35,auVar68,2,0x10);
          auVar59 = FloatVectorAdd(auVar71,auVar38,2);
          auVar38 = FloatVectorSub(auVar70,auVar65,2,0x20);
          in_q13 = FloatVectorAdd(auVar70,auVar65,2);
          auVar66 = FloatVectorSub(auVar67,auVar62,2,0x20);
          auVar62 = FloatVectorAdd(auVar67,auVar62,2);
          auVar72 = FloatVectorAdd(auVar63,in_q12,2);
          auVar68 = FloatVectorSub(auVar63,in_q12,2,0x20);
          auVar63 = FloatVectorAdd(auVar62,auVar59,2);
          auVar59 = FloatVectorSub(auVar62,auVar59,2,0x20);
          auVar71 = FloatVectorAdd(auVar66,auVar68,2);
          auVar65 = FloatVectorAdd(auVar38,auVar69,2);
          *(longlong *)((int)piVar30 + 0x38) = auVar63._0_8_;
          *(longlong *)((int)piVar30 + 0x40) = auVar63._8_8_;
          auVar62 = vrev(auVar59,4);
          auVar59 = FloatVectorSub(in_q13,auVar72,2,0x20);
          auVar68 = FloatVectorSub(auVar66,auVar68,2,0x20);
          *(longlong *)((int)piVar30 + 0x58) = auVar71._0_8_;
          *(longlong *)((int)piVar30 + 0x60) = auVar71._8_8_;
          auVar65 = FloatVectorNeg(auVar65,2,2);
          *(longlong *)((int)piVar30 + 0x78) = auVar62._8_8_;
          *(longlong *)((int)piVar30 + 0x80) = auVar62._0_8_;
          auVar71 = FloatVectorSub(auVar38,auVar69,2,0x20);
          auVar59 = FloatVectorNeg(auVar59,2,2);
          auVar38 = vrev(auVar68,4);
          auVar62 = vrev(auVar65,4);
          *(longlong *)((int)piVar30 + 0x68) = auVar71._0_8_;
          *(longlong *)((int)piVar30 + 0x70) = auVar71._8_8_;
          auVar65 = FloatVectorAdd(in_q13,auVar72,2);
          *(longlong *)((int)piVar30 + 0x98) = auVar38._8_8_;
          *(longlong *)((int)piVar30 + 0xa0) = auVar38._0_8_;
          auVar36 = vrev(auVar59,4);
          *(longlong *)((int)piVar30 + 0xa8) = auVar62._8_8_;
          *(longlong *)((int)piVar30 + 0xb0) = auVar62._0_8_;
          *(longlong *)((int)piVar30 + 0x48) = auVar65._0_8_;
          *(longlong *)((int)piVar30 + 0x50) = auVar65._8_8_;
          *(longlong *)((int)piVar30 + 0x88) = auVar36._8_8_;
          *(longlong *)((int)piVar30 + 0x90) = auVar36._0_8_;
          puVar3 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar34 = 2;
          puVar22 = param_1;
          while( true ) {
            *puVar22 = *puVar3;
            puVar22[1] = *puVar4;
            puVar22 = puVar22 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar34 = 2;
          while( true ) {
            *puVar22 = *puVar3;
            puVar22[1] = *puVar4;
            puVar22 = puVar22 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar22 = (undefined4 *)((int)param_1 + iVar13);
          puVar3 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar34 = 2;
          while( true ) {
            *puVar22 = *puVar3;
            puVar22[1] = *puVar4;
            puVar22 = puVar22 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar34 = 2;
          while( true ) {
            *puVar22 = *puVar3;
            puVar22[1] = *puVar4;
            puVar22 = puVar22 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar34 = 2;
          while( true ) {
            *puVar32 = *puVar3;
            puVar32[1] = *puVar4;
            puVar32 = puVar32 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar34 = 2;
          while( true ) {
            *puVar32 = *puVar3;
            puVar32[1] = *puVar4;
            puVar32 = puVar32 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          in_q8 = *(undefined1 (*) [16])((int)piVar30 + 0x78);
          puVar3 = (undefined4 *)0x380;
          puVar4 = (undefined4 *)0x390;
          lVar34 = 2;
          while( true ) {
            *puVar29 = *puVar3;
            puVar29[1] = *puVar4;
            puVar29 = puVar29 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined4 *)0x388;
          puVar4 = (undefined4 *)0x398;
          lVar34 = 2;
          while( true ) {
            *puVar29 = *puVar3;
            puVar29[1] = *puVar4;
            puVar29 = puVar29 + 2;
            lVar34 = lVar34 + -1;
            if (lVar34 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        } while (!(bool)uVar33);
        iVar24 = *(int *)(*(int *)((int)piVar30 + 0xf0) + 4) >> 1;
      }
    }
  }
  iVar19 = *(int *)((int)piVar30 + 0xb8);
  *(float *)(iVar19 + 4) = fVar37;
  *(float *)(iVar19 + iVar24 * 8) = fVar40;
  return;
}



/* ===== skv_fft_c2r_1d_float32_neon @ 000266a8 size=3472 ===== */

void skv_fft_c2r_1d_float32_neon(undefined1 (*param_1) [16],undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 (*pauVar19) [16];
  int iVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  undefined4 *puVar29;
  undefined4 *puVar30;
  uint *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  float *pfVar38;
  int iVar39;
  undefined4 *puVar40;
  int iVar41;
  int *piVar42;
  int *piVar43;
  float *pfVar44;
  int iVar45;
  undefined4 *puVar46;
  undefined8 *puVar47;
  undefined1 uVar48;
  longlong lVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar71 [16];
  float fVar80;
  undefined1 in_q5 [16];
  undefined1 auVar79 [16];
  undefined1 in_q6 [16];
  undefined1 auVar81 [16];
  undefined1 in_q8 [16];
  undefined1 auVar82 [16];
  undefined1 in_q9 [16];
  undefined1 in_q10 [16];
  undefined1 auVar83 [16];
  undefined1 in_q11 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 in_q14 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 in_q15 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  int local_f0 [2];
  undefined1 (*local_e8) [16];
  int local_e4;
  int local_e0;
  uint local_c4;
  uint local_6c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  fVar51 = DAT_00026b08;
  fVar59 = DAT_00026b04;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  uStack_44 = in_q6._0_8_;
  uStack_3c = in_q6._8_8_;
  local_f0[0] = param_3[1];
  piVar42 = local_f0;
  if (local_f0[0] == 4) {
    param_2[1] = *param_2;
    *param_2 = 0;
    skv_radix4_c2r_c(param_1,param_2 + 1,1);
    *param_2 = param_2[1];
    return;
  }
  if (local_f0[0] == 8) {
    param_2[1] = *param_2;
    *param_2 = 0;
    skv_radix8_c2r_c(param_1,param_2 + 1,1);
    *param_2 = param_2[1];
    return;
  }
  if (local_f0[0] == 2) {
    param_2[1] = *param_2;
    *param_2 = 0;
    skv_radix2_c2r_c(param_1,param_2 + 1);
    *param_2 = param_2[1];
    return;
  }
  local_e8 = (undefined1 (*) [16])(local_f0[0] >> 1);
  local_e4 = local_f0[0] >> 2;
  puVar31 = (uint *)param_3[7];
  pauVar37 = (undefined1 (*) [16])*param_3;
  pfVar44 = (float *)(param_2 + local_e4 * 2);
  local_c4 = *puVar31;
  iVar41 = local_f0[0] >> 3;
  fVar54 = *pfVar44;
  local_e0 = local_f0[0] * 4;
  fVar58 = pfVar44[1];
  pfVar44 = pfVar44 + (iVar41 - local_e4) * 2;
  iVar16 = param_3[8];
  local_6c = puVar31[local_c4 * 2];
  pfVar38 = pfVar44 + local_e4 * 2;
  if (puVar31[local_c4 * 2] == 2) {
    local_c4 = local_c4 - 1;
  }
  uVar23 = local_c4 & 1;
  fVar62 = (float)param_2[1] + (float)param_2[(int)local_e8 * 2];
  if ((int)local_c4 < 0) {
    uVar23 = -uVar23;
  }
  pauVar19 = pauVar37;
  if (uVar23 != 1) {
    pauVar19 = param_1;
  }
  fVar66 = (float)param_2[1] - (float)param_2[(int)local_e8 * 2];
  *(float *)(*pauVar19 + 8) = fVar62 + -fVar54 * 2.0;
  *(float *)*pauVar19 = fVar62 + fVar54 * 2.0;
  *(float *)(*pauVar19 + 0xc) = fVar66 + fVar58 * 2.0;
  *(float *)(*pauVar19 + 4) = fVar66 + -fVar58 * 2.0;
  fVar58 = pfVar44[1];
  fVar67 = pfVar38[1];
  fVar62 = *pfVar44 - *pfVar38;
  fVar54 = fVar58 + fVar67;
  fVar66 = *pfVar44 + *pfVar38;
  *(float *)(pauVar19[-1] + local_e0 + 0xc) = (fVar62 + fVar54) / fVar59;
  fVar67 = fVar67 - fVar58;
  *(float *)(pauVar19[-1] + local_e0 + 4) = (fVar62 - fVar54) / fVar51;
  *(float *)(pauVar19[-1] + local_e0) = fVar66 + fVar66;
  *(float *)(pauVar19[-1] + local_e0 + 8) = fVar67 + fVar67;
  fVar66 = (float)*(undefined8 *)(pfVar38 + iVar41 * -2 + 2);
  fVar59 = fVar66 - pfVar38[iVar41 * -2 + -2];
  fVar58 = *(float *)(iVar16 + 0x1c);
  fVar68 = pfVar44[iVar41 * -2 + 3] + pfVar38[iVar41 * -2 + local_e4 * 2 + -1];
  fVar76 = *(float *)(iVar16 + 8);
  fVar72 = *(float *)(iVar16 + 0xc);
  fVar69 = *(float *)(iVar16 + 0x10);
  fVar53 = (float)((ulonglong)*(undefined8 *)(pfVar38 + iVar41 * -2 + 2) >> 0x20);
  fVar62 = fVar53 - pfVar38[iVar41 * -2 + -1];
  fVar51 = *(float *)(iVar16 + 0x14);
  fVar54 = *(float *)(iVar16 + 0x18);
  fVar63 = pfVar44[iVar41 * -2 + 3] - pfVar38[iVar41 * -2 + local_e4 * 2 + -1];
  fVar55 = fVar68 + fVar59;
  fVar68 = fVar68 - fVar59;
  fVar60 = fVar63 - fVar62;
  fVar53 = fVar53 + pfVar38[iVar41 * -2 + -1];
  fVar66 = fVar66 + pfVar38[iVar41 * -2 + -2];
  fVar67 = pfVar44[iVar41 * -2 + 2] + pfVar38[iVar41 * -2 + local_e4 * 2 + -2];
  fVar65 = pfVar44[iVar41 * -2 + 2] - pfVar38[iVar41 * -2 + local_e4 * 2 + -2];
  fVar74 = fVar65 - fVar53;
  fVar59 = fVar67 - fVar66;
  fVar65 = fVar65 + fVar53;
  *(float *)(pauVar19[1] + 4) = fVar55 * fVar72 + fVar74 * fVar76;
  *(float *)(pauVar19[2] + 4) = fVar55 * fVar76 + -fVar74 * fVar72;
  *(float *)(pauVar19[1] + 8) = fVar60 * fVar51 + fVar59 * fVar69;
  *(float *)(pauVar19[2] + 8) = fVar60 * fVar69 + -fVar59 * fVar51;
  *(float *)(pauVar19[1] + 0xc) = fVar68 * fVar58 + fVar65 * fVar54;
  *(float *)(pauVar19[2] + 0xc) = fVar68 * fVar54 + -fVar65 * fVar58;
  *(float *)pauVar19[1] = fVar67 + fVar66;
  *(float *)pauVar19[2] = fVar63 + fVar62;
  piVar43 = local_f0;
  if (local_f0[0] != 0x10) {
    iVar41 = (int)local_e8 * 4;
    pfVar38 = (float *)(param_2 + (int)local_e8 + 4);
    pfVar44 = pfVar38 + (int)local_e8 + -10;
    fVar54 = pfVar38[-7];
    auVar10._4_8_ = in_q6._8_8_;
    auVar10._0_4_ = fVar54;
    auVar82._0_8_ = auVar10._0_8_ << 0x20;
    fVar67 = (float)param_2[5] + pfVar44[3];
    fVar77 = (float)param_2[7] + pfVar44[1];
    fVar80 = pfVar38[1] - fVar54;
    auVar11._4_8_ = in_q5._8_8_;
    auVar11._0_4_ = fVar80;
    auVar84._0_12_ = auVar11 << 0x20;
    auVar81._0_4_ = *(float *)(iVar16 + 0x38);
    auVar82._12_4_ = in_q6._12_4_;
    auVar82._8_4_ = *(float *)(iVar16 + 0x50);
    auVar86._0_4_ = *(float *)(iVar16 + 0x48);
    fVar75 = (float)param_2[5] - pfVar44[3];
    auVar84._12_4_ = *(float *)(iVar16 + 0x58);
    auVar81._12_4_ = *(float *)(iVar16 + 0x34);
    fVar59 = *pfVar38 - pfVar38[-8];
    fVar70 = (float)param_2[7] - pfVar44[1];
    fVar51 = pfVar38[2] - pfVar38[-10];
    auVar88._4_12_ = auVar84._4_12_;
    auVar88._0_4_ = pfVar38[3] - pfVar38[-9];
    auVar86._8_8_ = auVar82._8_8_;
    fVar62 = fVar67 + fVar59;
    fVar55 = -fVar54 - pfVar38[1];
    auVar79._0_8_ = auVar88._0_8_;
    auVar79._8_4_ = (float)param_2[4] + pfVar44[2];
    auVar79._12_4_ = auVar84._12_4_;
    fVar66 = -pfVar38[-9] - pfVar38[3];
    fVar58 = fVar75 - fVar80;
    fVar67 = fVar67 - fVar59;
    fVar61 = (float)param_2[4] - pfVar44[2];
    fVar53 = fVar77 + fVar51;
    fVar77 = fVar77 - fVar51;
    fVar78 = (float)param_2[6] + *pfVar44;
    fVar64 = (float)param_2[6] - *pfVar44;
    fVar59 = pfVar38[2] + pfVar38[-10];
    fVar51 = *(float *)(iVar16 + 0x30);
    auVar81._4_4_ = fVar61 + fVar55;
    fVar54 = *(float *)(iVar16 + 0x28);
    fVar61 = fVar61 - fVar55;
    auVar86._4_4_ = fVar64 + fVar66;
    fVar64 = fVar64 - fVar66;
    fVar55 = *(float *)(iVar16 + 0x2c);
    fVar66 = fVar70 - auVar88._0_4_;
    fVar60 = *(float *)(iVar16 + 0x3c);
    fVar73 = *pfVar38 + pfVar38[-8];
    fVar63 = *(float *)(iVar16 + 0x54);
    fVar65 = *(float *)(iVar16 + 0x4c);
    fVar68 = *(float *)(iVar16 + 0x5c);
    fVar69 = *(float *)(iVar16 + 0x2c);
    auVar71._0_12_ = auVar86._0_12_;
    auVar71._12_4_ = fVar78 - fVar59;
    fVar72 = *(float *)(iVar16 + 0x3c);
    fVar74 = *(float *)(iVar16 + 0x54);
    fVar76 = *(float *)(iVar16 + 0x4c);
    auVar81._8_4_ = auVar79._8_4_ - fVar73;
    fVar56 = *(float *)(iVar16 + 0x5c);
    auVar50._12_4_ = fVar58 * auVar81._12_4_ + auVar81._8_4_ * *(float *)(iVar16 + 0x30);
    fVar57 = *(float *)(iVar16 + 0x28);
    *(float *)(pauVar19[3] + 8) = auVar50._12_4_;
    *(float *)(pauVar19[3] + 0xc) = fVar67 * fVar60 + fVar61 * auVar81._0_4_;
    *(float *)(pauVar19[3] + 4) = fVar62 * fVar55 + auVar81._4_4_ * fVar57;
    *(float *)(pauVar19[5] + 8) = fVar66 * fVar63 + auVar71._12_4_ * auVar82._8_4_;
    *(float *)(pauVar19[5] + 4) = fVar53 * fVar65 + auVar86._4_4_ * auVar86._0_4_;
    *(float *)(pauVar19[5] + 0xc) = fVar77 * fVar68 + fVar64 * auVar84._12_4_;
    *(float *)pauVar19[4] = fVar80 + fVar75;
    *(float *)pauVar19[3] = auVar79._8_4_ + fVar73;
    auVar85._0_4_ = fVar78 + fVar59;
    *(float *)pauVar19[6] = auVar88._0_4_ + fVar70;
    auVar85._4_4_ = -(-(fVar51 * fVar58) + auVar81._8_4_ * auVar81._12_4_);
    *(float *)pauVar19[5] = auVar85._0_4_;
    auVar85._8_4_ = -(-(fVar54 * fVar62) + auVar81._4_4_ * fVar69);
    *(float *)(pauVar19[4] + 8) = auVar85._4_4_;
    auVar85._12_4_ = -(-(auVar81._0_4_ * fVar67) + fVar61 * fVar72);
    *(float *)(pauVar19[4] + 4) = auVar85._8_4_;
    auVar50._0_4_ = -(-(auVar82._8_4_ * fVar66) + auVar71._12_4_ * fVar74);
    *(float *)(pauVar19[4] + 0xc) = auVar85._12_4_;
    auVar50._4_4_ = -(-(auVar86._0_4_ * fVar53) + auVar86._4_4_ * fVar76);
    *(float *)(pauVar19[6] + 8) = auVar50._0_4_;
    auVar50._8_4_ = -(-(auVar84._12_4_ * fVar77) + fVar64 * fVar56);
    *(float *)(pauVar19[6] + 4) = auVar50._4_4_;
    *(float *)(pauVar19[6] + 0xc) = auVar50._8_4_;
    piVar43 = local_f0;
    if (local_f0[0] != 0x20) {
      pauVar19 = pauVar19 + 7;
      puVar17 = (undefined4 *)(iVar16 + 0x60);
      puVar40 = param_2 + 8;
      iVar16 = local_e4 + -8 >> 3;
      piVar43 = local_f0;
      if (0 < iVar16) {
        local_e8 = pauVar37;
        iVar45 = local_e0 + (int)param_2 * 2 + 8;
        puVar18 = param_2 + (iVar16 + 1) * 8;
        iVar16 = iVar41 + (int)param_2 * 2 + 8;
        do {
          puVar33 = puVar40 + 8;
          puVar32 = (undefined4 *)(iVar16 - (int)puVar33);
          puVar29 = (undefined4 *)(iVar45 - (int)puVar33);
          puVar8 = (undefined4 *)0x3a0;
          puVar9 = (undefined4 *)0x3b0;
          lVar49 = 2;
          pauVar37 = pauVar19;
          puVar46 = puVar40;
          puVar30 = puVar40;
          auVar84 = auVar71;
          while( true ) {
            puVar40 = puVar33;
            *puVar8 = *puVar30;
            puVar30 = puVar30 + 1;
            *puVar9 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
            puVar33 = puVar40;
          }
          puVar8 = (undefined4 *)0x3a8;
          puVar9 = (undefined4 *)0x3b8;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar30;
            puVar30 = puVar30 + 1;
            *puVar9 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar46 = (undefined4 *)((int)puVar46 + iVar41);
          pauVar36 = pauVar37 + 3;
          pauVar35 = pauVar37 + 4;
          uVar48 = puVar40 == puVar18;
          puVar8 = (undefined4 *)0x3e0;
          puVar9 = (undefined4 *)0x3f0;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar32;
            puVar32 = puVar32 + 1;
            *puVar9 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x3e8;
          puVar9 = (undefined4 *)0x3f8;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar32;
            puVar32 = puVar32 + 1;
            *puVar9 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x380;
          puVar9 = (undefined4 *)0x390;
          lVar49 = 2;
          puVar33 = puVar17;
          while( true ) {
            *puVar8 = *puVar29;
            puVar29 = puVar29 + 1;
            *puVar9 = *puVar29;
            puVar29 = puVar29 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar9 = (undefined4 *)0x398;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar29;
            puVar29 = puVar29 + 1;
            *puVar9 = *puVar29;
            puVar29 = puVar29 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar30 = puVar17 + 0x10;
          puVar17 = puVar17 + 0x18;
          auVar88 = vrev(in_q15,4);
          auVar71 = vrev(in_q9,4);
          auVar83._8_8_ = auVar88._0_8_;
          auVar83._0_8_ = auVar88._8_8_;
          auVar52._8_8_ = auVar71._0_8_;
          auVar52._0_8_ = auVar71._8_8_;
          auVar88 = FloatVectorNeg(auVar83,2,2);
          puVar8 = (undefined4 *)0x360;
          puVar9 = (undefined4 *)0x370;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar46;
            puVar46 = puVar46 + 1;
            *puVar9 = *puVar46;
            puVar46 = puVar46 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x368;
          puVar9 = (undefined4 *)0x378;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar46;
            puVar46 = puVar46 + 1;
            *puVar9 = *puVar46;
            puVar46 = puVar46 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          pauVar19 = pauVar37 + 2;
          auVar71 = FloatVectorNeg(auVar52,2,2);
          auVar82 = vrev(in_q8,4);
          auVar86 = vrev(in_q14,4);
          auVar89._8_8_ = in_q15._8_8_;
          auVar89._0_8_ = auVar82._8_8_;
          puVar8 = (undefined4 *)0x300;
          puVar9 = (undefined4 *)0x310;
          lVar49 = 2;
          puVar46 = puVar33;
          while( true ) {
            *puVar8 = *puVar46;
            puVar46 = puVar46 + 1;
            *puVar9 = *puVar46;
            puVar46 = puVar46 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x308;
          puVar9 = (undefined4 *)0x318;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar46;
            puVar46 = puVar46 + 1;
            *puVar9 = *puVar46;
            puVar46 = puVar46 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar33 = puVar33 + 8;
          auVar92._0_8_ = auVar89._0_8_;
          auVar92._8_8_ = auVar82._0_8_;
          auVar87._8_8_ = auVar86._0_8_;
          auVar87._0_8_ = auVar86._8_8_;
          auVar86 = FloatVectorAdd(auVar88,auVar81,2);
          puVar8 = (undefined4 *)0x380;
          puVar9 = (undefined4 *)0x390;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar33;
            puVar33 = puVar33 + 1;
            *puVar9 = *puVar33;
            puVar33 = puVar33 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x388;
          puVar9 = (undefined4 *)0x398;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar33;
            puVar33 = puVar33 + 1;
            *puVar9 = *puVar33;
            puVar33 = puVar33 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          pauVar34 = pauVar37 + 5;
          auVar52 = FloatVectorAdd(in_q10,auVar92,2);
          auVar90 = FloatVectorAdd(in_q11,auVar71,2);
          auVar83 = FloatVectorSub(in_q10,auVar92,2,0x20);
          auVar92 = FloatVectorAdd(auVar84,auVar87,2);
          auVar89 = FloatVectorSub(auVar88,auVar81,2,0x20);
          auVar88 = FloatVectorSub(in_q11,auVar71,2,0x20);
          puVar8 = (undefined4 *)0x340;
          puVar9 = (undefined4 *)0x350;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar30;
            puVar30 = puVar30 + 1;
            *puVar9 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)0x348;
          puVar9 = (undefined4 *)0x358;
          lVar49 = 2;
          while( true ) {
            *puVar8 = *puVar30;
            puVar30 = puVar30 + 1;
            *puVar9 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar49 = lVar49 + -1;
            if (lVar49 == 0) break;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          auVar81 = FloatVectorSub(auVar52,auVar92,2,0x20);
          auVar84 = FloatVectorSub(auVar84,auVar87,2,0x20);
          auVar87 = FloatVectorSub(auVar90,auVar86,2,0x20);
          FloatVectorAdd(auVar52,auVar92,2);
          FloatVectorAdd(auVar90,auVar86,2);
          auVar86 = FloatVectorMult(auVar87,in_q9,2,0x20);
          auVar87 = FloatVectorMult(auVar87,auVar82,2,0x20);
          auVar82 = FloatVectorMult(auVar81,auVar82,2,0x20);
          auVar81 = FloatVectorMult(auVar81,in_q9,2,0x20);
          auVar52 = FloatVectorSub(auVar83,auVar89,2,0x20);
          auVar83 = FloatVectorAdd(auVar83,auVar89,2);
          auVar92 = FloatVectorSub(auVar88,auVar84,2,0x20);
          auVar89 = FloatVectorAdd(auVar88,auVar84,2);
          auVar88 = FloatVectorMult(auVar92,auVar79,2,0x20);
          auVar84 = FloatVectorMult(auVar52,auVar71,2,0x20);
          auVar79 = FloatVectorMult(auVar52,auVar79,2,0x20);
          auVar52 = FloatVectorMult(auVar92,auVar71,2,0x20);
          auVar88 = FloatVectorAdd(auVar84,auVar88,2);
          auVar84 = FloatVectorMult(auVar83,auVar85,2,0x20);
          auVar83 = FloatVectorMult(auVar83,auVar50,2,0x20);
          auVar50 = FloatVectorMult(auVar89,auVar50,2,0x20);
          FloatVectorSub(auVar87,auVar81,2,0x20);
          auVar52 = FloatVectorSub(auVar52,auVar79,2,0x20);
          auVar85 = FloatVectorMult(auVar89,auVar85,2,0x20);
          FloatVectorAdd(auVar82,auVar86,2);
          auVar84 = FloatVectorAdd(auVar84,auVar50,2);
          auVar50 = VectorTranspose(auVar52,4);
          auVar85 = FloatVectorSub(auVar85,auVar83,2,0x20);
          auVar82 = VectorTranspose(auVar88,4);
          in_q9 = VectorTranspose(auVar85,4);
          auVar86 = VectorTranspose(auVar84,4);
          in_q15._8_8_ = auVar88._0_8_;
          in_q15._0_8_ = auVar84._0_8_;
          *(longlong *)*pauVar37 = auVar86._0_8_;
          *(longlong *)(*pauVar37 + 8) = auVar82._0_8_;
          in_q11._8_8_ = auVar88._8_8_;
          in_q11._0_8_ = auVar84._8_8_;
          *(longlong *)pauVar37[1] = in_q9._0_8_;
          *(longlong *)(pauVar37[1] + 8) = auVar50._0_8_;
          *(longlong *)*pauVar19 = auVar84._0_8_;
          *(longlong *)(*pauVar19 + 8) = auVar88._0_8_;
          in_q14._8_8_ = auVar52._0_8_;
          in_q14._0_8_ = auVar85._0_8_;
          pauVar19 = pauVar37 + 8;
          in_q8._8_8_ = auVar52._8_8_;
          in_q8._0_8_ = auVar85._8_8_;
          *(longlong *)*pauVar36 = auVar85._0_8_;
          *(longlong *)(*pauVar36 + 8) = auVar52._0_8_;
          *(longlong *)*pauVar35 = auVar86._8_8_;
          *(longlong *)(*pauVar35 + 8) = auVar82._8_8_;
          *(longlong *)*pauVar34 = in_q9._8_8_;
          *(longlong *)(*pauVar34 + 8) = auVar50._8_8_;
          *(longlong *)pauVar37[6] = auVar84._8_8_;
          *(longlong *)(pauVar37[6] + 8) = auVar88._8_8_;
          *(longlong *)pauVar37[7] = auVar85._8_8_;
          *(longlong *)(pauVar37[7] + 8) = auVar52._8_8_;
          in_q10 = auVar85;
        } while (!(bool)uVar48);
        puVar31 = (uint *)param_3[7];
        pauVar37 = *(undefined1 (**) [16])((int)piVar42 + 8);
        uVar23 = *puVar31;
        *(uint *)((int)piVar42 + 0x2c) = uVar23;
        *(uint *)((int)piVar42 + 0x84) = puVar31[uVar23 * 2];
        piVar43 = piVar42;
      }
    }
  }
  uVar23 = puVar31[1];
  iVar41 = *(int *)((int)piVar43 + 0x84);
  *(undefined4 *)((int)piVar43 + 0xc) = param_3[6];
  pauVar19 = param_1;
  if ((*(uint *)((int)piVar43 + 0x2c) & 1) != 0) {
    pauVar19 = pauVar37;
    pauVar37 = param_1;
  }
  iVar16 = (int)(uVar23 * iVar41) >> 2;
  if ((int)*(uint *)((int)piVar43 + 0x2c) < 2) {
    if (iVar41 == 8) {
      iVar24 = 0x70;
      iVar20 = 0x60;
      iVar21 = 0x50;
      *(undefined4 *)((int)piVar43 + 8) = 0x40;
      iVar25 = 0x30;
      iVar45 = 0x20;
      iVar16 = 0x10;
      iVar41 = 1;
      goto LAB_000272f4;
    }
    if (iVar41 != 4) {
      return;
    }
    iVar41 = 1;
  }
  else {
    auVar90._8_8_ = DAT_00026f00;
    auVar90._0_8_ = DAT_00026ef8;
    *(undefined4 *)((int)piVar43 + 0x78) = 0x30;
    *(undefined1 (**) [16])((int)piVar43 + 0x14) = pauVar37;
    *(int *)((int)piVar43 + 0x30) = iVar16 * 0x10 + 0x10;
    *(int *)((int)piVar43 + 0x7c) = iVar16 * 0x20 + 0x10;
    *(int *)((int)piVar43 + 0x80) = iVar16 * 0x30 + 0x10;
    iVar41 = 1;
    *(int *)((int)piVar43 + 0x34) = iVar16 * 0x10;
    *(int *)((int)piVar43 + 0x1c) = iVar16 * 0x30;
    *(int *)((int)piVar43 + 0x18) = iVar16 * 0x20;
    *(undefined4 *)((int)piVar43 + 8) = 1;
    pauVar37 = pauVar19;
    while( true ) {
      iVar45 = *(int *)((int)piVar43 + 0xc);
      *(int *)((int)piVar43 + 0xc) = iVar45 + iVar16 * -0x18;
      if (iVar41 != 0) {
        iVar20 = iVar16 * 2 + 0xfffffff;
        iVar24 = (iVar16 >> 1) + -1;
        iVar41 = iVar20 * 0x10;
        *(int *)((int)piVar43 + 0x54) = iVar16 * 0x40 + -0x30;
        *(undefined1 (**) [16])((int)piVar43 + 0x10) = pauVar37 + iVar16 * 2 + 0x10000000;
        *(int *)((int)piVar43 + 0x24) = iVar41 + 0x20;
        *(int *)((int)piVar43 + 0x38) = iVar24;
        iVar21 = iVar24 * 0x20;
        *(int *)((int)piVar43 + 0x5c) = iVar21 + *(int *)((int)piVar43 + 0x30);
        *(int *)((int)piVar43 + 100) = iVar21 + *(int *)((int)piVar43 + 0x18);
        *(int *)((int)piVar43 + 0x60) = iVar21 + 0x20;
        *(int *)((int)piVar43 + 0x44) = iVar16 * 0x40 + -0x10;
        *(int *)((int)piVar43 + 0x3c) = iVar16 * -0x20 + 0x10;
        *(int *)((int)piVar43 + 0x68) = iVar21 + *(int *)((int)piVar43 + 0x1c);
        *(int *)((int)piVar43 + 0x48) = iVar45 + iVar16 * -0x18 + (iVar16 >> 1) * 0x18 + 0x18;
        iVar45 = *(int *)((int)piVar43 + 0x78) * iVar16 + iVar21 + 0x20;
        *(undefined4 *)((int)piVar43 + 0x20) = *(undefined4 *)((int)piVar43 + 8);
        *(int *)((int)piVar43 + 0x50) = iVar21 + 0x10;
        *(int *)((int)piVar43 + 0x40) = iVar41 + 0x10;
        *(int *)((int)piVar43 + 0x4c) = iVar45;
        *(undefined1 (**) [16])((int)piVar43 + 0x28) = pauVar37 + iVar24 * 2 + 1;
        *(int *)((int)piVar43 + 0x58) = iVar45;
        *(undefined1 (**) [16])((int)piVar43 + 0x6c) = pauVar37;
        *(int *)((int)piVar43 + 0x70) = iVar16;
        puVar27 = *(undefined8 **)((int)piVar43 + 0x14);
        do {
          iVar16 = *(int *)((int)piVar43 + 0x38);
          pauVar19 = pauVar37 + 1;
          auVar71 = FloatVectorAdd(pauVar37[iVar20],pauVar37[iVar20],2);
          auVar84 = FloatVectorAdd(*pauVar37,
                                   *(undefined1 (*) [16])(*pauVar37 + *(int *)((int)piVar43 + 0x44))
                                   ,2);
          iVar45 = *(int *)((int)piVar43 + 0x18);
          auVar85 = FloatVectorSub(*pauVar37,
                                   *(undefined1 (*) [16])(*pauVar37 + *(int *)((int)piVar43 + 0x44))
                                   ,2,0x20);
          auVar50 = FloatVectorAdd(**(undefined1 (**) [16])((int)piVar43 + 0x10),
                                   **(undefined1 (**) [16])((int)piVar43 + 0x10),2);
          iVar21 = *(int *)((int)piVar43 + 0x1c);
          iVar41 = *(int *)((int)piVar43 + 0x34);
          pauVar35 = (undefined1 (*) [16])(*pauVar37 + *(int *)((int)piVar43 + 0x54));
          auVar88 = FloatVectorAdd(auVar84,auVar71,2);
          if (0 < iVar16) {
            *(undefined8 **)((int)piVar43 + 0x74) = puVar27;
          }
          auVar71 = FloatVectorSub(auVar84,auVar71,2,0x20);
          auVar84 = FloatVectorSub(auVar85,auVar50,2,0x20);
          auVar85 = FloatVectorAdd(auVar85,auVar50,2);
          *puVar27 = auVar88._0_8_;
          puVar27[1] = auVar88._8_8_;
          *(undefined8 *)((int)puVar27 + iVar41) = auVar84._0_8_;
          ((undefined8 *)((int)puVar27 + iVar41))[1] = auVar84._8_8_;
          *(undefined8 *)((int)puVar27 + iVar45) = auVar71._0_8_;
          ((undefined8 *)((int)puVar27 + iVar45))[1] = auVar71._8_8_;
          *(undefined8 *)((int)puVar27 + iVar21) = auVar85._0_8_;
          ((undefined8 *)((int)puVar27 + iVar21))[1] = auVar85._8_8_;
          if (0 < iVar16) {
            puVar27 = puVar27 + 2;
            iVar41 = *(int *)((int)piVar43 + 0xc) + 0x30;
            do {
              pauVar36 = pauVar35 + 1;
              puVar12 = *pauVar19;
              iVar45 = *(int *)((int)piVar43 + 0x48);
              iVar16 = iVar41 + 0x18;
              auVar71 = FloatVectorNeg(*(undefined1 (*) [16])
                                        (*pauVar35 + *(int *)((int)piVar43 + 0x3c)),2,2);
              auVar85 = *pauVar19;
              pauVar34 = pauVar19 + 1;
              puVar13 = *pauVar19;
              auVar88 = FloatVectorSub(auVar85,*pauVar35,2,0x20);
              pauVar19 = pauVar19 + 2;
              auVar50 = *(undefined1 (*) [16])((int)pauVar35 - *(int *)((int)piVar43 + 0x40));
              auVar79 = FloatVectorAdd(auVar85,*pauVar35,2);
              pauVar35 = pauVar35 + -2;
              auVar82 = FloatVectorSub(auVar71,*(undefined1 (*) [16])
                                                (puVar12 + *(int *)((int)piVar43 + 0x24)),2,0x20);
              auVar71 = FloatVectorAdd(*(undefined1 (*) [16])
                                        (puVar12 + *(int *)((int)piVar43 + 0x24)),auVar71,2);
              auVar85 = FloatVectorAdd(*pauVar36,*pauVar34,2);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -0xc),*(undefined4 *)(iVar41 + -0xc));
              auVar2._8_8_ = uVar1;
              auVar2._0_8_ = uVar1;
              iVar39 = *(int *)((int)piVar43 + 0x34);
              auVar83 = FloatVectorSub(*pauVar34,*pauVar36,2,0x20);
              auVar86 = FloatVectorSub(*(undefined1 (*) [16])
                                        (puVar13 + *(int *)((int)piVar43 + 0x40)),auVar50,2,0x20);
              auVar81 = FloatVectorAdd(*(undefined1 (*) [16])
                                        (puVar13 + *(int *)((int)piVar43 + 0x40)),auVar50,2);
              auVar50 = FloatVectorAdd(auVar88,auVar82,2);
              auVar84 = FloatVectorAdd(auVar85,auVar86,2);
              auVar82 = FloatVectorSub(auVar88,auVar82,2,0x20);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -0x18),*(undefined4 *)(iVar41 + -0x18));
              auVar3._8_8_ = uVar1;
              auVar3._0_8_ = uVar1;
              auVar86 = FloatVectorSub(auVar85,auVar86,2,0x20);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -0x14),*(undefined4 *)(iVar41 + -0x14));
              auVar4._8_8_ = uVar1;
              auVar4._0_8_ = uVar1;
              iVar21 = *(int *)((int)piVar43 + 0x30);
              auVar85 = FloatVectorMult(auVar50,auVar3,2,0x20);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -4),*(undefined4 *)(iVar41 + -4));
              auVar5._8_8_ = uVar1;
              auVar5._0_8_ = uVar1;
              iVar24 = *(int *)((int)piVar43 + 0x18);
              auVar52 = FloatVectorMult(auVar84,auVar3,2,0x20);
              auVar88 = FloatVectorMult(auVar84,auVar4,2,0x20);
              auVar50 = FloatVectorMult(auVar50,auVar4,2,0x20);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -0x10),*(undefined4 *)(iVar41 + -0x10));
              auVar6._8_8_ = uVar1;
              auVar6._0_8_ = uVar1;
              iVar25 = *(int *)((int)piVar43 + 0x7c);
              auVar84 = FloatVectorSub(auVar83,auVar71,2,0x20);
              auVar89 = FloatVectorAdd(auVar83,auVar71,2);
              uVar1 = CONCAT44(*(undefined4 *)(iVar41 + -8),*(undefined4 *)(iVar41 + -8));
              auVar7._8_8_ = uVar1;
              auVar7._0_8_ = uVar1;
              iVar41 = *(int *)((int)piVar43 + 0x1c);
              auVar83 = FloatVectorSub(auVar52,auVar50,2,0x20);
              iVar26 = *(int *)((int)piVar43 + 0x80);
              auVar52 = FloatVectorSub(auVar79,auVar81,2,0x20);
              auVar50 = FloatVectorAdd(auVar79,auVar81,2);
              auVar85 = FloatVectorAdd(auVar85,auVar88,2);
              auVar88 = FloatVectorMult(auVar86,auVar7,2,0x20);
              *puVar27 = auVar50._0_8_;
              puVar27[1] = auVar50._8_8_;
              auVar71 = FloatVectorMult(auVar84,auVar2,2,0x20);
              auVar81 = FloatVectorMult(auVar82,auVar7,2,0x20);
              puVar27[2] = auVar89._0_8_;
              puVar27[3] = auVar89._8_8_;
              auVar50 = FloatVectorMult(auVar52,auVar2,2,0x20);
              *(undefined8 *)((int)puVar27 + iVar39) = auVar85._0_8_;
              ((undefined8 *)((int)puVar27 + iVar39))[1] = auVar85._8_8_;
              auVar52 = FloatVectorMult(auVar52,auVar6,2,0x20);
              *(undefined8 *)((int)puVar27 + iVar21) = auVar83._0_8_;
              ((undefined8 *)((int)puVar27 + iVar21))[1] = auVar83._8_8_;
              auVar85 = FloatVectorMult(auVar84,auVar6,2,0x20);
              auVar79 = FloatVectorMult(auVar86,auVar5,2,0x20);
              auVar84 = FloatVectorMult(auVar82,auVar5,2,0x20);
              auVar82 = FloatVectorAdd(auVar52,auVar71,2);
              auVar85 = FloatVectorSub(auVar85,auVar50,2,0x20);
              auVar71 = FloatVectorAdd(auVar81,auVar79,2);
              auVar50 = FloatVectorSub(auVar88,auVar84,2,0x20);
              *(undefined8 *)((int)puVar27 + iVar24) = auVar82._0_8_;
              ((undefined8 *)((int)puVar27 + iVar24))[1] = auVar82._8_8_;
              *(undefined8 *)((int)puVar27 + iVar25) = auVar85._0_8_;
              ((undefined8 *)((int)puVar27 + iVar25))[1] = auVar85._8_8_;
              *(undefined8 *)((int)puVar27 + iVar41) = auVar71._0_8_;
              ((undefined8 *)((int)puVar27 + iVar41))[1] = auVar71._8_8_;
              *(undefined8 *)((int)puVar27 + iVar26) = auVar50._0_8_;
              ((undefined8 *)((int)puVar27 + iVar26))[1] = auVar50._8_8_;
              puVar27 = puVar27 + 4;
              iVar41 = iVar16;
            } while (iVar16 != iVar45);
            puVar27 = *(undefined8 **)((int)piVar43 + 0x74);
          }
          pauVar19 = *(undefined1 (**) [16])((int)piVar43 + 0x28);
          iVar45 = *(int *)((int)piVar43 + 0x20);
          *(int *)((int)piVar43 + 0x20) = iVar45 + -1;
          auVar85 = *pauVar19;
          pauVar37 = (undefined1 (*) [16])(*pauVar37 + *(int *)((int)piVar43 + 0x58));
          auVar84 = FloatVectorNeg(pauVar19[1],2,2);
          *(undefined1 **)((int)piVar43 + 0x28) = *pauVar19 + *(int *)((int)piVar43 + 0x4c);
          auVar50 = *(undefined1 (*) [16])(*pauVar19 + *(int *)((int)piVar43 + 0x24));
          iVar41 = *(int *)((int)piVar43 + 100);
          puVar47 = (undefined8 *)((int)puVar27 + *(int *)((int)piVar43 + 0x50));
          auVar71 = *(undefined1 (*) [16])
                     (*(int *)((int)piVar43 + 0x10) + *(int *)((int)piVar43 + 0x50));
          auVar88 = FloatVectorSub(auVar84,auVar50,2,0x20);
          iVar16 = *(int *)((int)piVar43 + 0x68);
          auVar82 = FloatVectorSub(auVar85,auVar71,2,0x20);
          *(int *)((int)piVar43 + 0x10) =
               *(int *)((int)piVar43 + 0x10) + *(int *)((int)piVar43 + 0x4c);
          iVar21 = *(int *)((int)piVar43 + 0x5c);
          auVar71 = FloatVectorAdd(auVar85,auVar71,2);
          auVar85 = FloatVectorAdd(auVar84,auVar50,2);
          auVar79 = FloatVectorAdd(auVar82,auVar88,2);
          auVar84 = FloatVectorSub(auVar88,auVar82,2,0x20);
          auVar50 = FloatVectorAdd(auVar71,auVar71,2);
          auVar85 = FloatVectorAdd(auVar85,auVar85,2);
          auVar88 = FloatVectorMult(auVar79,auVar90,2,0x20);
          auVar71 = FloatVectorMult(auVar84,auVar90,2,0x20);
          *puVar47 = auVar50._0_8_;
          puVar47[1] = auVar50._8_8_;
          iVar24 = *(int *)((int)piVar43 + 0x60);
          *(undefined8 *)((int)puVar27 + iVar21) = auVar88._0_8_;
          ((undefined8 *)((int)puVar27 + iVar21))[1] = auVar88._8_8_;
          *(longlong *)((int)puVar27 + iVar41 + 0x10) = auVar85._0_8_;
          *(longlong *)((int)puVar27 + iVar41 + 0x18) = auVar85._8_8_;
          *(longlong *)((int)puVar27 + iVar16 + 0x10) = auVar71._0_8_;
          *(longlong *)((int)puVar27 + iVar16 + 0x18) = auVar71._8_8_;
          puVar27 = (undefined8 *)((int)puVar27 + iVar24);
        } while (iVar45 + -1 != 0);
        pauVar37 = *(undefined1 (**) [16])((int)piVar43 + 0x6c);
        iVar16 = *(int *)((int)piVar43 + 0x70);
      }
      iVar45 = *(int *)((int)piVar43 + 0x2c);
      iVar16 = iVar16 >> 2;
      iVar26 = *(int *)((int)piVar43 + 8);
      *(int *)((int)piVar43 + 0x2c) = iVar45 + -1;
      iVar41 = iVar26 * 4;
      *(int *)((int)piVar43 + 8) = iVar41;
      if (iVar45 + -1 == 1) break;
      pauVar19 = *(undefined1 (**) [16])((int)piVar43 + 0x14);
      *(undefined1 (**) [16])((int)piVar43 + 0x14) = pauVar37;
      pauVar37 = pauVar19;
    }
    pauVar19 = *(undefined1 (**) [16])((int)piVar43 + 0x14);
    if (*(int *)((int)piVar43 + 0x84) == 8) {
      if (iVar41 < 1) {
        return;
      }
      iVar25 = iVar26 * 0xc0;
      iVar16 = iVar26 << 6;
      iVar21 = iVar26 * 0x140;
      iVar45 = iVar26 << 7;
      iVar20 = iVar26 * 0x180;
      iVar24 = iVar26 * 0x1c0;
      *(int *)((int)piVar43 + 8) = iVar26 << 8;
LAB_000272f4:
      auVar93._8_8_ = DAT_00027458;
      auVar93._0_8_ = DAT_00027450;
      auVar91._8_8_ = DAT_00027468;
      auVar91._0_8_ = DAT_00027460;
      do {
        auVar85 = *pauVar19;
        pauVar35 = pauVar19 + 2;
        pauVar34 = pauVar19 + 6;
        pauVar36 = pauVar19 + 7;
        iVar41 = iVar41 + -1;
        pauVar28 = pauVar19 + 4;
        auVar50 = FloatVectorSub(pauVar19[1],pauVar19[5],2,0x20);
        auVar84 = FloatVectorAdd(pauVar19[1],pauVar19[5],2);
        pauVar22 = pauVar19 + 3;
        auVar79 = FloatVectorAdd(*pauVar34,*pauVar35,2);
        pauVar19 = pauVar19 + 8;
        auVar71 = FloatVectorAdd(auVar85,*pauVar36,2);
        puVar12 = *pauVar37;
        auVar82 = FloatVectorSub(auVar85,*pauVar36,2,0x20);
        auVar85 = FloatVectorAdd(*pauVar28,*pauVar28,2);
        auVar81 = FloatVectorAdd(*pauVar22,*pauVar22,2);
        auVar88 = FloatVectorSub(*pauVar34,*pauVar35,2,0x20);
        auVar52 = FloatVectorSub(auVar50,auVar79,2,0x20);
        auVar86 = FloatVectorAdd(auVar79,auVar50,2);
        auVar79 = FloatVectorAdd(auVar84,auVar84,2);
        auVar50 = FloatVectorAdd(auVar71,auVar81,2);
        auVar81 = FloatVectorSub(auVar71,auVar81,2,0x20);
        auVar84 = FloatVectorMult(auVar52,auVar93,2,0x20);
        auVar52 = FloatVectorSub(auVar82,auVar85,2,0x20);
        auVar86 = FloatVectorMult(auVar86,auVar91,2,0x20);
        auVar82 = FloatVectorAdd(auVar82,auVar85,2);
        auVar88 = FloatVectorAdd(auVar88,auVar88,2);
        auVar71 = FloatVectorAdd(auVar52,auVar84,2);
        auVar85 = FloatVectorAdd(auVar50,auVar79,2);
        auVar52 = FloatVectorSub(auVar52,auVar84,2,0x20);
        auVar84 = FloatVectorAdd(auVar82,auVar86,2);
        auVar82 = FloatVectorSub(auVar82,auVar86,2,0x20);
        *(longlong *)*pauVar37 = auVar85._0_8_;
        *(longlong *)(*pauVar37 + 8) = auVar85._8_8_;
        auVar86 = FloatVectorAdd(auVar81,auVar88,2);
        *(longlong *)(*pauVar37 + iVar16) = auVar71._0_8_;
        *(longlong *)((int)(*pauVar37 + iVar16) + 8) = auVar71._8_8_;
        iVar26 = *(int *)((int)piVar43 + 8);
        auVar50 = FloatVectorSub(auVar50,auVar79,2,0x20);
        puVar13 = *pauVar37;
        puVar14 = *pauVar37;
        auVar85 = FloatVectorSub(auVar81,auVar88,2,0x20);
        *(longlong *)(*pauVar37 + iVar45) = auVar86._0_8_;
        *(longlong *)((int)(*pauVar37 + iVar45) + 8) = auVar86._8_8_;
        *(longlong *)(*pauVar37 + iVar25) = auVar84._0_8_;
        *(longlong *)((int)(*pauVar37 + iVar25) + 8) = auVar84._8_8_;
        puVar15 = *pauVar37;
        pauVar37 = pauVar37 + 1;
        *(longlong *)(puVar13 + iVar26) = auVar50._0_8_;
        *(longlong *)((int)(puVar13 + iVar26) + 8) = auVar50._8_8_;
        *(longlong *)(puVar12 + iVar21) = auVar52._0_8_;
        *(longlong *)((int)(puVar12 + iVar21) + 8) = auVar52._8_8_;
        *(longlong *)(puVar14 + iVar20) = auVar85._0_8_;
        *(longlong *)((int)(puVar14 + iVar20) + 8) = auVar85._8_8_;
        *(longlong *)(puVar15 + iVar24) = auVar82._0_8_;
        *(longlong *)((int)(puVar15 + iVar24) + 8) = auVar82._8_8_;
      } while (iVar41 != 0);
      return;
    }
    if (*(int *)((int)piVar43 + 0x84) != 4) {
      return;
    }
    if (iVar41 < 1) {
      return;
    }
  }
  iVar16 = 0;
  do {
    pauVar35 = pauVar19 + 3;
    auVar85 = *pauVar19;
    pauVar36 = pauVar19 + 1;
    pauVar34 = pauVar19 + 2;
    iVar16 = iVar16 + 1;
    pauVar19 = pauVar19 + 4;
    auVar84 = FloatVectorAdd(auVar85,*pauVar35,2);
    auVar85 = FloatVectorSub(auVar85,*pauVar35,2,0x20);
    auVar71 = FloatVectorAdd(*pauVar36,*pauVar36,2);
    auVar50 = FloatVectorAdd(*pauVar34,*pauVar34,2);
    auVar88 = FloatVectorAdd(auVar84,auVar71,2);
    auVar71 = FloatVectorSub(auVar84,auVar71,2,0x20);
    auVar84 = FloatVectorSub(auVar85,auVar50,2,0x20);
    auVar85 = FloatVectorAdd(auVar85,auVar50,2);
    *(longlong *)*pauVar37 = auVar88._0_8_;
    *(longlong *)(*pauVar37 + 8) = auVar88._8_8_;
    *(longlong *)pauVar37[iVar41] = auVar84._0_8_;
    *(longlong *)(pauVar37[iVar41] + 8) = auVar84._8_8_;
    *(longlong *)pauVar37[iVar41 * 2] = auVar71._0_8_;
    *(longlong *)(pauVar37[iVar41 * 2] + 8) = auVar71._8_8_;
    *(longlong *)pauVar37[iVar41 * 3] = auVar85._0_8_;
    *(longlong *)(pauVar37[iVar41 * 3] + 8) = auVar85._8_8_;
    pauVar37 = pauVar37 + 1;
  } while (iVar16 != iVar41);
  return;
}



/* ===== htk_qfixed_filterbank_init @ 00027470 size=1428 ===== */

int * htk_qfixed_filterbank_init(float param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  float *pfVar10;
  size_t sVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  size_t __nmemb;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  char local_34;
  
  skv_logtab_init();
  if (param_3 != 0x100) {
    fprintf((FILE *)**(undefined4 **)(DAT_00027874 + 0x274a0 + DAT_00027878),
            (char *)(DAT_00027880 + 0x279e8),DAT_0002787c + 0x279e4,0x111);
    return (int *)0x0;
  }
  piVar7 = calloc(0x50,1);
  fVar22 = DAT_0002785c;
  fVar20 = DAT_00027858;
  uVar6 = DAT_00027848;
  uVar5 = DAT_00027840;
  dVar23 = DAT_00027838 / (double)param_1;
  piVar7[5] = 2;
  piVar7[3] = (int)param_1;
  piVar7[2] = param_2;
  piVar7[8] = 1;
  *(undefined8 *)piVar7 = uVar5;
  *(undefined8 *)(piVar7 + 6) = uVar6;
  iVar8 = (int)(longlong)dVar23;
  piVar7[4] = iVar8;
  fVar21 = (float)VectorSignedToFloat(iVar8 << 9,(byte)(in_fpscr >> 0x16) & 3);
  fVar22 = fVar22 / (fVar21 * fVar20);
  piVar7[9] = (int)fVar22;
  if (param_4 < 1) {
    piVar7[0x13] = 0;
    *(undefined1 *)(piVar7 + 0x12) = 0xf8;
    piVar7[0xd] = 0;
    piVar7[0xe] = 0;
    sVar11 = 0x400;
    piVar7[0xf] = 0;
    piVar7[0x11] = 0;
    pvVar9 = calloc(0x400,1);
    piVar7[0x10] = (int)pvVar9;
    iVar8 = 0x100;
  }
  else {
    piVar7[0x13] = 1;
    *(undefined1 *)(piVar7 + 0x12) = 0xf8;
    iVar8 = skv_fft_fix_init(0x200);
    __nmemb = piVar7[1];
    sVar11 = __nmemb << 2;
    piVar7[0xd] = iVar8;
    pvVar9 = calloc(sVar11,1);
    piVar7[0xe] = (int)pvVar9;
    if ((int)__nmemb < 1) {
      pvVar9 = calloc(sVar11,1);
      piVar7[0xf] = (int)pvVar9;
      pvVar9 = calloc(__nmemb,1);
      piVar7[0x11] = (int)pvVar9;
      if (pvVar9 == (void *)0x0) goto LAB_00027a28;
    }
    else {
      pvVar9 = calloc(sVar11,1);
      piVar7[0xf] = (int)pvVar9;
      pvVar9 = calloc(__nmemb,1);
      piVar7[0x11] = (int)pvVar9;
      if (pvVar9 == (void *)0x0) {
LAB_00027a28:
        pvVar9 = calloc(__nmemb,1);
        dVar23 = (double)VectorSignedToFloat(__nmemb - 1,(byte)(in_fpscr >> 0x16) & 3);
        dVar23 = DAT_00027a60 / dVar23;
        if ((int)__nmemb < 1) goto LAB_00027610;
      }
      else {
        dVar23 = (double)VectorSignedToFloat(__nmemb - 1,(byte)(in_fpscr >> 0x16) & 3);
        dVar23 = DAT_00027850 / dVar23;
      }
      fVar21 = DAT_00027884;
      fVar22 = DAT_00027864;
      fVar20 = DAT_00027860;
      pcVar13 = (char *)((int)pvVar9 + -1);
      do {
        fVar19 = (float)VectorSignedToFloat(pcVar13 + (1 - (int)pvVar9),(byte)(in_fpscr >> 0x16) & 3
                                           );
        fVar19 = (float)skv_fast_cos(fVar19 * (float)dVar23);
        local_34 = '\0';
        fVar19 = (fVar22 + -fVar19 * fVar20) * fVar21;
        uVar2 = in_fpscr & 0xfffffff;
        uVar3 = uVar2 | (uint)(fVar19 < DAT_00027888) << 0x1f |
                (uint)(fVar19 == DAT_00027888) << 0x1e;
        in_fpscr = uVar3 | (uint)(NAN(fVar19) || NAN(DAT_00027888)) << 0x1c;
        bVar4 = (byte)(uVar3 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          in_fpscr = uVar2 | (uint)(fVar19 < 0.0) << 0x1f;
          if (!SUB41(in_fpscr >> 0x1f,0)) {
            fVar19 = roundf(fVar19);
            local_34 = (0.0 < fVar19) * (char)(int)fVar19;
          }
        }
        else {
          local_34 = -1;
        }
        pcVar13 = pcVar13 + 1;
        *pcVar13 = local_34;
      } while ((char *)((int)pvVar9 + (__nmemb - 1)) != pcVar13);
    }
LAB_00027610:
    iVar8 = *piVar7;
    piVar7[0x11] = (int)pvVar9;
    sVar11 = iVar8 << 2;
    pvVar9 = calloc(sVar11,1);
    fVar22 = (float)piVar7[9];
    piVar7[0x10] = (int)pvVar9;
    if (iVar8 < 1) goto LAB_00027688;
  }
  if (iVar8 < 1) {
    sVar11 = 4;
  }
  memset(pvVar9,0,sVar11);
LAB_00027688:
  fVar20 = (float)skv_fast_log2(fVar22 * DAT_00027884 + 1.0);
  iVar8 = piVar7[2];
  iVar17 = iVar8 + 1;
  fVar22 = fVar20 * DAT_00027868 * DAT_0002786c;
  pfVar10 = calloc(iVar17 * 4,1);
  piVar7[10] = (int)pfVar10;
  fVar20 = DAT_00027870;
  if (0 < iVar17) {
    fVar21 = (float)VectorSignedToFloat(iVar17,(byte)(in_fpscr >> 0x16) & 3);
    iVar14 = 1;
    do {
      iVar12 = iVar14 + 1;
      fVar19 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar10 = fVar20 + (fVar19 / fVar21) * fVar22;
      pfVar10 = pfVar10 + 1;
      iVar14 = iVar12;
    } while (iVar12 != iVar8 + 2);
  }
  pvVar9 = calloc(0x200,1);
  fVar22 = DAT_0002786c;
  fVar20 = DAT_00027868;
  iVar12 = 1;
  iVar14 = 1;
  piVar7[0xb] = (int)pvVar9;
  do {
    while( true ) {
      fVar21 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
      fVar21 = (float)skv_fast_log2((float)piVar7[9] * (fVar21 - 1.0) + 1.0);
      iVar15 = piVar7[5];
      if ((iVar14 < iVar15) || (piVar7[6] < iVar14)) break;
      iVar16 = (iVar12 + 0x3fffffff) * 4;
      fVar19 = *(float *)(piVar7[10] + iVar16);
      fVar21 = fVar21 * fVar20 * fVar22;
      uVar2 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar19) << 0x1f |
              (uint)(fVar21 == fVar19) << 0x1e;
      in_fpscr = uVar2 | (uint)(NAN(fVar21) || NAN(fVar19)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if (iVar12 <= iVar17 &&
          (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
        pfVar10 = (float *)(piVar7[10] + iVar16 + 4);
        iVar16 = iVar12;
        do {
          fVar19 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          iVar12 = iVar16 + 1;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar21) << 0x1f;
          bVar1 = iVar16 <= iVar8;
          iVar16 = iVar12;
        } while (bVar1 && SUB41(in_fpscr >> 0x1f,0));
      }
      iVar18 = piVar7[0xb];
      iVar16 = iVar14 * 2;
      iVar14 = iVar14 + 1;
      *(short *)(iVar18 + iVar16 + -2) = (short)iVar12 + -1;
      if (iVar14 == 0x101) goto LAB_00027810;
    }
    iVar18 = piVar7[0xb];
    iVar16 = iVar14 * 2;
    iVar14 = iVar14 + 1;
    *(undefined2 *)(iVar18 + iVar16 + -2) = 0xffff;
  } while (iVar14 != 0x101);
LAB_00027810:
  pvVar9 = calloc(0x100,1);
  fVar22 = DAT_0002786c;
  fVar20 = DAT_00027868;
  iVar8 = 1;
  piVar7[0xc] = (int)pvVar9;
  do {
    if ((iVar8 < iVar15) || (piVar7[6] < iVar8)) {
      *(undefined1 *)(piVar7[0xc] + iVar8 + -1) = 0;
    }
    else {
      iVar17 = (int)*(short *)(iVar18 + iVar8 * 2 + -2);
      fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      fVar21 = (float)piVar7[9] * (fVar21 - 1.0) + 1.0;
      if (iVar17 < 1) {
        fVar19 = *(float *)piVar7[10];
        fVar21 = (float)skv_fast_log2(fVar21);
        fVar21 = ((fVar19 + -(fVar20 * fVar21) * fVar22) / *(float *)piVar7[10]) * DAT_00027884;
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar21 < DAT_00027888) << 0x1f |
                (uint)(fVar21 == DAT_00027888) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar21) || NAN(DAT_00027888)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_000279a0;
LAB_0002790c:
        local_34 = -1;
      }
      else {
        fVar19 = ((float *)piVar7[10])[iVar17];
        fVar21 = (float)skv_fast_log2(fVar21);
        pfVar10 = (float *)(piVar7[10] + iVar17 * 4);
        fVar21 = ((fVar19 + -(fVar20 * fVar21) * fVar22) / (*pfVar10 - pfVar10[-1])) * DAT_00027884;
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar21 < DAT_00027888) << 0x1f |
                (uint)(fVar21 == DAT_00027888) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar21) || NAN(DAT_00027888)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_0002790c;
LAB_000279a0:
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar21 < 0.0) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          local_34 = '\0';
        }
        else {
          fVar21 = roundf(fVar21);
          local_34 = (0.0 < fVar21) * (char)(int)fVar21;
        }
      }
      *(char *)(piVar7[0xc] + iVar8 + -1) = local_34;
    }
    if (iVar8 == 0x100) {
      return piVar7;
    }
    iVar8 = iVar8 + 1;
    iVar18 = piVar7[0xb];
    iVar15 = piVar7[5];
  } while( true );
}



/* ===== htk_qfixed_filterbank_destroy @ 00027a68 size=260 ===== */

undefined4 htk_qfixed_filterbank_destroy(void *param_1)

{
  if (param_1 == (void *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00027b6c + 0x27a7c + DAT_00027b70),
            (char *)(DAT_00027b78 + 0x27b64),DAT_00027b74 + 0x27b60,0x19d);
  }
  else {
    if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x28));
      *(undefined4 *)((int)param_1 + 0x28) = 0;
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x2c));
      *(undefined4 *)((int)param_1 + 0x2c) = 0;
    }
    if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x30));
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x3c));
      *(undefined4 *)((int)param_1 + 0x3c) = 0;
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x44) = 0;
    }
    if (*(int *)((int)param_1 + 0x34) != 0) {
      skv_fft_fix_destroy();
      *(undefined4 *)((int)param_1 + 0x34) = 0;
    }
    if (*(void **)((int)param_1 + 0x38) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x38));
      *(undefined4 *)((int)param_1 + 0x38) = 0;
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x40));
    }
    free(param_1);
  }
  return 0;
}



/* ===== htk_qfixed_filterbank_compute_bank @ 00027b80 size=2736 ===== */

void htk_qfixed_filterbank_compute_bank
               (int *param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  byte bVar1;
  short sVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  short *psVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  short sVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  int *piVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  byte *pbVar27;
  bool bVar28;
  uint in_fpscr;
  undefined4 uVar29;
  float fVar30;
  float extraout_s14;
  float extraout_s14_00;
  float extraout_s14_01;
  float fVar31;
  undefined8 uVar32;
  undefined1 in_q8 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  if ((param_4 == 0 || param_1 == (int *)0x0) || (param_1[0x13] != 1)) {
    fprintf((FILE *)**(undefined4 **)(DAT_00028128 + 0x27b9c + DAT_0002812c),
            (char *)(DAT_00028134 + 0x28384),DAT_00028130 + 0x28380,0x1ca);
    return;
  }
  if (param_5 == (float *)0x0) {
    param_5 = calloc(param_1[2] << 2,1);
  }
  uVar17 = param_1[1];
  pauVar14 = (undefined1 (*) [16])param_1[0xe];
  if (0 < (int)uVar17) {
    psVar10 = (short *)(param_4 + -2);
    piVar21 = (int *)(pauVar14[-1] + 0xc);
    iVar13 = 0;
    do {
      psVar10 = psVar10 + 1;
      iVar13 = iVar13 + 1;
      piVar21 = piVar21 + 1;
      *piVar21 = (int)*psVar10;
      uVar17 = param_1[1];
    } while (iVar13 < (int)uVar17);
    if (0 < (int)uVar17) {
      if (uVar17 - 1 < 4) {
        iVar13 = *(int *)*pauVar14;
        if (uVar17 != 1) {
          iVar6 = 1;
          iVar7 = 0;
LAB_00027c60:
          iVar13 = iVar13 + *(int *)(*pauVar14 + iVar7 + 4);
          if ((iVar6 + 1 < (int)uVar17) &&
             (iVar13 = iVar13 + *(int *)(*pauVar14 + iVar7 + 8), iVar6 + 2 < (int)uVar17)) {
            iVar13 = iVar13 + *(int *)(*pauVar14 + iVar7 + 0xc);
          }
        }
        iVar13 = __aeabi_idiv(iVar13,uVar17);
        if (2 < uVar17 - 1) goto LAB_00027cb0;
        uVar19 = 0;
LAB_00027cd8:
        *(int *)(*pauVar14 + uVar19 * 4) = *(int *)(*pauVar14 + uVar19 * 4) - iVar13;
        if (((int)(uVar19 + 1) < (int)uVar17) &&
           (iVar7 = uVar19 * 4 + 4,
           *(int *)(*pauVar14 + iVar7) = *(int *)(*pauVar14 + iVar7) - iVar13,
           (int)(uVar19 + 2) < (int)uVar17)) {
          iVar7 = uVar19 * 4 + 8;
          *(int *)(*pauVar14 + iVar7) = *(int *)(*pauVar14 + iVar7) - iVar13;
        }
      }
      else {
        auVar33 = (undefined1  [16])0x0;
        pauVar26 = pauVar14;
        do {
          auVar34 = *pauVar26;
          pauVar26 = pauVar26 + 1;
          auVar33 = VectorAdd(auVar33,auVar34,4);
        } while (pauVar26 != pauVar14 + (uVar17 >> 2));
        in_q8._8_8_ = auVar33._8_8_;
        uVar32 = VectorAdd(auVar33._0_8_,in_q8._8_8_,4);
        uVar19 = uVar17 & 0xfffffffc;
        in_q8._0_8_ = VectorPairwiseAdd(uVar32,uVar32,4);
        iVar13 = (int)in_q8._0_8_;
        if (uVar19 != uVar17) {
          iVar6 = uVar19 + 1;
          iVar7 = uVar19 << 2;
          iVar13 = iVar13 + *(int *)(*pauVar14 + uVar19 * 4);
          if (iVar6 < (int)uVar17) goto LAB_00027c60;
        }
        iVar13 = __aeabi_idiv(iVar13,uVar17);
LAB_00027cb0:
        uVar19 = uVar17 & 0xfffffffc;
        auVar33._8_8_ = CONCAT44(iVar13,iVar13);
        auVar33._0_8_ = CONCAT44(iVar13,iVar13);
        pauVar26 = pauVar14;
        do {
          in_q8 = VectorSub(*pauVar26,auVar33,4);
          *(longlong *)*pauVar26 = in_q8._0_8_;
          *(longlong *)(*pauVar26 + 8) = in_q8._8_8_;
          pauVar26 = pauVar26 + 1;
        } while (pauVar26 != pauVar14 + (uVar17 >> 2));
        if (uVar17 != uVar19) goto LAB_00027cd8;
      }
      uVar17 = param_1[1];
    }
  }
  uVar22 = uVar17 - 1;
  uVar19 = (uint)*(byte *)(param_1 + 0x12);
  if (0 < (int)uVar22) {
    iVar13 = uVar17 * 4;
    iVar6 = iVar13 + -0x14;
    bVar28 = SBORROW4(iVar6,iVar13);
    iVar7 = iVar6 + uVar17 * -4;
    if (iVar6 < iVar13) {
      bVar28 = SBORROW4(iVar13 + -0x10,iVar13 + -4);
      iVar7 = (iVar13 + -0x10) - (iVar13 + -4);
    }
    if (uVar17 - 2 < 4 || iVar7 < 0 != bVar28) {
      pauVar26 = (undefined1 (*) [16])(pauVar14[-1] + iVar13 + 0xc);
      do {
        pauVar3 = (undefined1 (*) [16])(pauVar26[-1] + 0xc);
        *(uint *)*pauVar26 = *(int *)*pauVar26 * 0x100 - *(int *)*pauVar3 * uVar19;
        pauVar26 = pauVar3;
      } while (pauVar3 != pauVar14);
    }
    else {
      pauVar3 = (undefined1 (*) [16])(pauVar14[-1] + iVar13);
      puVar11 = pauVar14[-2] + iVar13 + 0xc;
      auVar33 = ZEXT516(CONCAT14(*(byte *)(param_1 + 0x12),uVar19));
      pauVar18 = pauVar3 + -(uVar22 >> 2);
      pauVar26 = pauVar3;
      do {
        auVar34 = *pauVar3;
        pauVar3 = (undefined1 (*) [16])VectorTableLookup(puVar11,param_1,2);
        uVar19 = VectorTableLookup(pauVar26,param_1,2);
        puVar11 = puVar11 + -0x10;
        VectorShiftLeft(in_q8,8,0x20,0);
        VectorTableLookup(puVar11,pauVar14,2);
        VectorTableLookup(pauVar26,pauVar14,2);
        in_q8 = VectorMultiplySubtract(auVar33 | auVar33 << 0x40,auVar34,4,0);
        param_1 = (int *)VectorTableLookup(puVar11,pauVar3,2);
        param_5 = (float *)VectorTableLookup(pauVar26,pauVar3,2);
        *(longlong *)*pauVar26 = auVar34._0_8_;
        *(longlong *)(*pauVar26 + 8) = auVar34._8_8_;
        pauVar26 = pauVar26 + -1;
      } while (pauVar26 != pauVar18);
      iVar13 = uVar22 - (uVar22 & 0xfffffffc);
      if ((uVar22 & 0xfffffffc) != uVar22) {
        iVar7 = iVar13 + -1;
        *(uint *)((int)pauVar14 + iVar13 * 4) =
             *(int *)((int)pauVar14 + iVar13 * 4) * 0x100 -
             *(int *)((int)pauVar14 + iVar13 * 4 + -4) * uVar19;
        if (iVar7 != 0) {
          iVar13 = iVar13 + -2;
          *(uint *)((int)pauVar14 + iVar7 * 4) =
               *(int *)((int)pauVar14 + iVar7 * 4) * 0x100 -
               *(int *)((int)pauVar14 + iVar7 * 4 + -4) * uVar19;
          if (iVar13 != 0) {
            *(uint *)((int)pauVar14 + iVar13 * 4) =
                 *(int *)((int)pauVar14 + iVar13 * 4) * 0x100 -
                 *(int *)((int)pauVar14 + iVar13 * 4 + -4) * uVar19;
          }
        }
      }
    }
  }
  pauVar26 = (undefined1 (*) [16])param_1[0x11];
  piVar21 = (int *)param_1[0x10];
  *(uint *)*pauVar14 = *(int *)*pauVar14 * 0x100 - uVar19 * *(int *)*pauVar14;
  uVar17 = param_1[1];
  if (pauVar26 == (undefined1 (*) [16])0x0) {
LAB_000280b0:
    if ((int)uVar17 < 1) goto LAB_0002860c;
    fVar31 = 1.0;
    pauVar26 = pauVar14;
    do {
      puVar11 = *pauVar26;
      iVar13 = *(int *)*pauVar26;
      if (iVar13 < 0) {
        iVar13 = -iVar13;
      }
      fVar30 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
      uVar19 = in_fpscr & 0xfffffff;
      in_fpscr = uVar19 | (uint)(fVar30 < fVar31) << 0x1f;
      if (!SUB41(in_fpscr >> 0x1f,0)) {
        fVar31 = fVar30;
      }
      pauVar26 = (undefined1 (*) [16])(puVar11 + 4);
    } while ((undefined1 (*) [16])(puVar11 + 4) != (undefined1 (*) [16])(*pauVar14 + uVar17 * 4));
    if (fVar31 < 0.0) {
      fVar31 = -fVar31;
    }
    uVar22 = uVar19 | (uint)(fVar31 < DAT_00028138) << 0x1f;
    in_fpscr = uVar22 | (uint)(NAN(fVar31) || NAN(DAT_00028138)) << 0x1c;
    if (SUB41(uVar22 >> 0x1f,0)) {
      fVar31 = fVar31 + fVar31;
      in_fpscr = uVar19 | (uint)(fVar31 == DAT_00028138) << 0x1e |
                 (uint)(DAT_00028138 <= fVar31) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) goto LAB_00028614;
      goto LAB_000283a4;
    }
    if (((byte)(in_fpscr >> 0x1c) & 1) == 0) {
      sVar2 = -1;
      do {
        sVar16 = sVar2;
        fVar31 = fVar31 * 0.5;
        uVar22 = (uint)sVar16;
        uVar19 = in_fpscr & 0xfffffff | (uint)(fVar31 < DAT_00028138) << 0x1f;
        in_fpscr = uVar19 | (uint)(NAN(fVar31) || NAN(DAT_00028138)) << 0x1c;
        sVar2 = sVar16 + -1;
      } while ((byte)(uVar19 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1));
      uVar19 = (uint)(short)(sVar16 + 9);
      if (-1 < (int)uVar22) goto LAB_00028178;
      goto LAB_000283f0;
    }
LAB_00028614:
    uVar19 = 9;
    uVar22 = 0;
  }
  else {
    if (0 < (int)uVar17) {
      if (uVar17 - 1 < 0xf ||
          pauVar14 < (undefined1 (*) [16])(*pauVar26 + uVar17) &&
          pauVar26 < (undefined1 (*) [16])(*pauVar14 + uVar17 * 4)) {
        pbVar27 = pauVar26[-1] + 0xf;
        piVar24 = (int *)(pauVar14[-1] + 0xc);
        do {
          pbVar27 = pbVar27 + 1;
          piVar24 = piVar24 + 1;
          *piVar24 = (uint)*pbVar27 * *piVar24;
        } while (pbVar27 != ((undefined1 (*) [16])(*pauVar26 + uVar17))[-1] + 0xf);
      }
      else {
        pauVar23 = pauVar14 + 1;
        pauVar4 = pauVar14 + 2;
        pauVar8 = pauVar14 + 3;
        pauVar3 = pauVar14;
        pauVar18 = pauVar26;
        do {
          auVar33 = *pauVar18;
          pauVar18 = pauVar18 + 1;
          auVar35 = VectorCopyLong(auVar33._0_8_,1,1);
          auVar34 = VectorCopyLong(auVar33._8_8_,1,1);
          auVar33 = VectorCopyLong(auVar35._0_8_,2,1);
          auVar36 = VectorCopyLong(auVar34._0_8_,2,1);
          auVar35 = VectorCopyLong(auVar35._8_8_,2,1);
          auVar37 = VectorMultiply(auVar33,*pauVar3,4);
          auVar33 = *pauVar8;
          auVar34 = VectorCopyLong(auVar34._8_8_,2,1);
          auVar35 = VectorMultiply(auVar35,*pauVar23,4);
          auVar36 = VectorMultiply(auVar36,*pauVar4,4);
          *(longlong *)*pauVar3 = auVar37._0_8_;
          *(longlong *)(*pauVar3 + 8) = auVar37._8_8_;
          pauVar3 = pauVar3 + 4;
          auVar33 = VectorMultiply(auVar34,auVar33,4);
          *(longlong *)*pauVar23 = auVar35._0_8_;
          *(longlong *)(*pauVar23 + 8) = auVar35._8_8_;
          pauVar23 = pauVar23 + 4;
          *(longlong *)*pauVar4 = auVar36._0_8_;
          *(longlong *)(*pauVar4 + 8) = auVar36._8_8_;
          pauVar4 = pauVar4 + 4;
          *(longlong *)*pauVar8 = auVar33._0_8_;
          *(longlong *)(*pauVar8 + 8) = auVar33._8_8_;
          pauVar8 = pauVar8 + 4;
        } while (pauVar3 != pauVar14 + (uVar17 >> 4) * 4);
        uVar19 = uVar17 & 0xfffffff0;
        if (uVar19 != uVar17) {
          *(uint *)(*pauVar14 + uVar19 * 4) =
               (uint)(byte)(*pauVar26)[uVar19] * *(int *)(*pauVar14 + uVar19 * 4);
          if ((int)(uVar19 + 1) < (int)uVar17) {
            *(uint *)(*pauVar14 + uVar19 * 4 + 4) =
                 (uint)(byte)(*pauVar26)[uVar19 + 1] * *(int *)(*pauVar14 + uVar19 * 4 + 4);
            if ((int)(uVar19 + 2) < (int)uVar17) {
              *(uint *)(*pauVar14 + uVar19 * 4 + 8) =
                   (uint)(byte)(*pauVar26)[uVar19 + 2] * *(int *)(*pauVar14 + uVar19 * 4 + 8);
              if ((int)(uVar19 + 3) < (int)uVar17) {
                *(uint *)(*pauVar14 + uVar19 * 4 + 0xc) =
                     (uint)(byte)(*pauVar26)[uVar19 + 3] * *(int *)(*pauVar14 + uVar19 * 4 + 0xc);
                if ((int)(uVar19 + 4) < (int)uVar17) {
                  *(uint *)(pauVar14[1] + uVar19 * 4) =
                       (uint)(byte)(*pauVar26)[uVar19 + 4] * *(int *)(pauVar14[1] + uVar19 * 4);
                  if ((int)(uVar19 + 5) < (int)uVar17) {
                    *(uint *)(pauVar14[1] + uVar19 * 4 + 4) =
                         (uint)(byte)(*pauVar26)[uVar19 + 5] *
                         *(int *)(pauVar14[1] + uVar19 * 4 + 4);
                    if ((int)(uVar19 + 6) < (int)uVar17) {
                      *(uint *)(pauVar14[1] + uVar19 * 4 + 8) =
                           (uint)(byte)(*pauVar26)[uVar19 + 6] *
                           *(int *)(pauVar14[1] + uVar19 * 4 + 8);
                      if ((int)(uVar19 + 7) < (int)uVar17) {
                        *(uint *)(pauVar14[1] + uVar19 * 4 + 0xc) =
                             (uint)(byte)(*pauVar26)[uVar19 + 7] *
                             *(int *)(pauVar14[1] + uVar19 * 4 + 0xc);
                        if ((int)(uVar19 + 8) < (int)uVar17) {
                          *(uint *)(pauVar14[2] + uVar19 * 4) =
                               (uint)(byte)(*pauVar26)[uVar19 + 8] *
                               *(int *)(pauVar14[2] + uVar19 * 4);
                          if ((int)(uVar19 + 9) < (int)uVar17) {
                            *(uint *)(pauVar14[2] + uVar19 * 4 + 4) =
                                 (uint)(byte)(*pauVar26)[uVar19 + 9] *
                                 *(int *)(pauVar14[2] + uVar19 * 4 + 4);
                            if ((int)(uVar19 + 10) < (int)uVar17) {
                              *(uint *)(pauVar14[2] + uVar19 * 4 + 8) =
                                   (uint)(byte)(*pauVar26)[uVar19 + 10] *
                                   *(int *)(pauVar14[2] + uVar19 * 4 + 8);
                              if ((int)(uVar19 + 0xb) < (int)uVar17) {
                                *(uint *)(pauVar14[2] + uVar19 * 4 + 0xc) =
                                     (uint)(byte)(*pauVar26)[uVar19 + 0xb] *
                                     *(int *)(pauVar14[2] + uVar19 * 4 + 0xc);
                                if ((int)(uVar19 + 0xc) < (int)uVar17) {
                                  *(uint *)(pauVar14[3] + uVar19 * 4) =
                                       (uint)(byte)(*pauVar26)[uVar19 + 0xc] *
                                       *(int *)(pauVar14[3] + uVar19 * 4);
                                  if ((int)(uVar19 + 0xd) < (int)uVar17) {
                                    *(uint *)(pauVar14[3] + uVar19 * 4 + 4) =
                                         (uint)(byte)(*pauVar26)[uVar19 + 0xd] *
                                         *(int *)(pauVar14[3] + uVar19 * 4 + 4);
                                    if ((int)(uVar19 + 0xe) < (int)uVar17) {
                                      *(uint *)(pauVar14[3] + uVar19 * 4 + 8) =
                                           (uint)(byte)(*pauVar26)[uVar19 + 0xe] *
                                           *(int *)(pauVar14[3] + uVar19 * 4 + 8);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar17 = param_1[1];
      goto LAB_000280b0;
    }
LAB_0002860c:
    fVar31 = 2.0;
LAB_000283a4:
    sVar2 = 1;
    do {
      sVar16 = sVar2;
      fVar31 = fVar31 + fVar31;
      uVar22 = (uint)sVar16;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar31 == DAT_00028138) << 0x1e |
                 (uint)(DAT_00028138 <= fVar31) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      sVar2 = sVar16 + 1;
    } while (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6));
    uVar19 = (uint)(short)(sVar16 + 9);
    if ((int)uVar17 < 1) goto LAB_00028200;
    if ((int)uVar22 < 0) {
LAB_000283f0:
      uVar5 = uVar17;
      if ((int)uVar17 < 1) {
        uVar5 = 1;
      }
      if ((int)uVar17 < 4) {
        uVar12 = 0;
      }
      else {
        auVar34._8_8_ = CONCAT44(uVar22,uVar22);
        auVar34._0_8_ = CONCAT44(uVar22,uVar22);
        pauVar26 = pauVar14;
        do {
          auVar33 = VectorShiftLeft(*pauVar26,auVar34,4,0);
          *(longlong *)*pauVar26 = auVar33._0_8_;
          *(longlong *)(*pauVar26 + 8) = auVar33._8_8_;
          pauVar26 = pauVar26 + 1;
        } while (pauVar26 != pauVar14 + (uVar5 >> 2));
        uVar12 = uVar5 & 0xfffffffc;
        if (uVar12 == uVar5) goto LAB_00028200;
      }
      uVar22 = -uVar22;
      *(int *)(*pauVar14 + uVar12 * 4) = *(int *)(*pauVar14 + uVar12 * 4) >> (uVar22 & 0xff);
      if (((int)(uVar12 + 1) < (int)uVar17) &&
         (iVar13 = uVar12 * 4 + 4,
         *(int *)(*pauVar14 + iVar13) = *(int *)(*pauVar14 + iVar13) >> (uVar22 & 0xff),
         (int)(uVar12 + 2) < (int)uVar17)) {
        iVar13 = uVar12 * 4 + 8;
        *(int *)(*pauVar14 + iVar13) = *(int *)(*pauVar14 + iVar13) >> (uVar22 & 0xff);
      }
      goto LAB_00028200;
    }
  }
LAB_00028178:
  uVar5 = uVar17;
  if ((int)uVar17 < 1) {
    uVar5 = 1;
  }
  if ((int)uVar17 < 4) {
    uVar12 = 0;
  }
  else {
    auVar35._8_8_ = CONCAT44(uVar22,uVar22);
    auVar35._0_8_ = CONCAT44(uVar22,uVar22);
    pauVar26 = pauVar14;
    do {
      auVar33 = VectorShiftLeft(*pauVar26,auVar35,4,0);
      *(longlong *)*pauVar26 = auVar33._0_8_;
      *(longlong *)(*pauVar26 + 8) = auVar33._8_8_;
      pauVar26 = pauVar26 + 1;
    } while (pauVar26 != pauVar14 + (uVar5 >> 2));
    uVar12 = uVar5 & 0xfffffffc;
    if (uVar12 == uVar5) goto LAB_00028200;
  }
  iVar13 = uVar12 * 4;
  *(int *)(*pauVar14 + uVar12 * 4) = *(int *)(*pauVar14 + uVar12 * 4) << (uVar22 & 0xff);
  if ((int)(uVar12 + 1) < (int)uVar17) {
    iVar7 = iVar13 + 4;
    if ((int)(uVar12 + 2) < (int)uVar17) {
      iVar13 = iVar13 + 8;
    }
    *(int *)(*pauVar14 + iVar7) = *(int *)(*pauVar14 + iVar7) << (uVar22 & 0xff);
    if ((int)(uVar12 + 2) < (int)uVar17) {
      *(int *)(*pauVar14 + iVar13) = *(int *)(*pauVar14 + iVar13) << (uVar22 & 0xff);
    }
  }
LAB_00028200:
  skv_fft_fix(param_1[0xd],pauVar14,param_1[0xf]);
  if ((int)uVar19 < 1) {
    piVar24 = (int *)param_1[0xf];
    uVar19 = -uVar19;
    iVar13 = *piVar24 << (uVar19 & 0xff);
    iVar7 = piVar24[param_1[1] + 0x3fffffff] << (uVar19 & 0xff);
    *piVar21 = iVar7 * iVar7 + iVar13 * iVar13;
    if (1 < *param_1) {
      iVar13 = 1;
      do {
        iVar7 = iVar13 * 2;
        iVar6 = iVar13 * 2;
        iVar13 = iVar13 + 1;
        iVar7 = piVar24[iVar7 + -1] << (uVar19 & 0xff);
        iVar6 = piVar24[iVar6] << (uVar19 & 0xff);
        piVar21 = piVar21 + 1;
        *piVar21 = iVar6 * iVar6 + iVar7 * iVar7;
      } while (iVar13 < *param_1);
    }
  }
  else {
    piVar24 = (int *)param_1[0xf];
    iVar13 = piVar24[param_1[1] + 0x3fffffff] >> (uVar19 & 0xff);
    iVar7 = *piVar24 >> (uVar19 & 0xff);
    *piVar21 = iVar7 * iVar7 + iVar13 * iVar13;
    if (1 < *param_1) {
      iVar13 = 1;
      do {
        iVar7 = iVar13 * 2;
        iVar6 = iVar13 * 2;
        iVar13 = iVar13 + 1;
        iVar7 = piVar24[iVar7] >> (uVar19 & 0xff);
        iVar6 = piVar24[iVar6 + -1] >> (uVar19 & 0xff);
        piVar21 = piVar21 + 1;
        *piVar21 = iVar6 * iVar6 + iVar7 * iVar7;
      } while (iVar13 < *param_1);
    }
  }
  iVar13 = param_1[2];
  iVar7 = param_1[0x10];
  fVar31 = extraout_s14;
  if (0 < iVar13) {
    memset(param_5,0,iVar13 << 2);
    fVar31 = extraout_s14_00;
  }
  iVar6 = param_1[5];
  iVar25 = param_1[6];
  if (iVar6 < iVar25) {
    iVar7 = iVar6 + -1;
    puVar20 = (uint *)(iVar7 + iVar6 * 4);
    do {
      uVar17 = *puVar20;
      if (param_1[7] == 0) {
        uVar29 = VectorUnsignedToFloat(uVar17,(byte)(in_fpscr >> 0x16) & 3);
        fVar31 = (float)skv_fast_sqrtf(uVar29);
        iVar25 = param_1[6];
        iVar13 = param_1[2];
        uVar17 = (uint)(0.0 < fVar31) * (int)fVar31;
        fVar31 = extraout_s14_01;
      }
      iVar9 = iVar7 + 2;
      iVar6 = (int)*(short *)(param_1[0xb] + iVar7 * 2);
      if (0 < iVar6) {
        fVar31 = param_5[iVar6 + 0x3fffffff];
      }
      fVar30 = (float)VectorUnsignedToFloat
                                ((uVar17 >> 6) * (uint)*(byte *)(param_1[0xc] + iVar7),
                                 (byte)(in_fpscr >> 0x16) & 3);
      if (0 < iVar6) {
        fVar31 = fVar31 + fVar30;
        param_5[iVar6 + 0x3fffffff] = fVar31;
      }
      if (iVar6 < iVar13) {
        fVar31 = (float)VectorUnsignedToFloat(uVar17 << 2,(byte)(in_fpscr >> 0x16) & 3);
        param_5[iVar6] = param_5[iVar6] + (fVar31 - fVar30);
      }
      iVar7 = iVar7 + 1;
      puVar20 = puVar20 + 1;
    } while (iVar9 < iVar25);
  }
  fVar31 = DAT_0002813c;
  if (param_1[8] != 0) {
    if (iVar13 < 1) {
      return;
    }
    iVar7 = 1;
    pfVar15 = param_5;
    do {
      while (3.0 <= *pfVar15) {
        fVar30 = (float)skv_fast_log2();
        iVar13 = param_1[2];
        iVar7 = iVar7 + 1;
        *pfVar15 = fVar30 * fVar31 + 4.0;
        pfVar15 = pfVar15 + 1;
        if (iVar13 < iVar7) goto LAB_000284cc;
      }
      iVar13 = param_1[2];
      iVar7 = iVar7 + 1;
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    } while (iVar7 <= iVar13);
  }
LAB_000284cc:
  if (0 < iVar13) {
    pfVar15 = param_5 + iVar13;
    do {
      fVar31 = *param_2;
      param_2 = param_2 + 1;
      fVar30 = *param_3;
      param_3 = param_3 + 1;
      *param_5 = (*param_5 + fVar31) * fVar30;
      param_5 = param_5 + 1;
    } while (param_5 != pfVar15);
  }
  return;
}



/* ===== htk_qfixed_filterbank_compute_bank_fft @ 00028658 size=536 ===== */

void htk_qfixed_filterbank_compute_bank_fft(int *param_1,int param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float in_s14;
  float extraout_s14;
  float extraout_s14_00;
  float extraout_s14_01;
  
  if ((param_2 != 0 && param_1 != (int *)0x0) && (param_1[0x13] == 0)) {
    if (param_3 == (float *)0x0) {
      param_3 = calloc(param_1[2] << 2,1);
      in_s14 = extraout_s14_01;
    }
    iVar6 = param_1[0x10];
    if (0 < *param_1) {
      piVar1 = (int *)(iVar6 + -4);
      iVar4 = 0;
      do {
        iVar5 = iVar4 * 8;
        iVar8 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        iVar5 = *(int *)(param_2 + 4 + iVar5) >> 2;
        iVar8 = *(int *)(param_2 + iVar8) >> 2;
        piVar1 = piVar1 + 1;
        *piVar1 = iVar8 * iVar8 + iVar5 * iVar5;
      } while (iVar4 < *param_1);
    }
    iVar4 = param_1[2];
    if (0 < iVar4) {
      memset(param_3,0,iVar4 << 2);
      in_s14 = extraout_s14;
    }
    iVar5 = param_1[5];
    iVar8 = param_1[6];
    if (iVar5 < iVar8) {
      iVar6 = iVar5 + -1;
      puVar7 = (uint *)(iVar6 + iVar5 * 4);
      do {
        uVar3 = *puVar7;
        if (param_1[7] == 0) {
          uVar9 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
          fVar10 = (float)skv_fast_sqrtf(uVar9);
          iVar8 = param_1[6];
          iVar4 = param_1[2];
          uVar3 = (uint)(0.0 < fVar10) * (int)fVar10;
          in_s14 = extraout_s14_00;
        }
        iVar5 = iVar6 + 2;
        iVar2 = (int)*(short *)(param_1[0xb] + iVar6 * 2);
        if (0 < iVar2) {
          in_s14 = param_3[iVar2 + 0x3fffffff];
        }
        fVar10 = (float)VectorUnsignedToFloat
                                  ((uVar3 >> 6) * (uint)*(byte *)(param_1[0xc] + iVar6),
                                   (byte)(in_fpscr >> 0x16) & 3);
        if (0 < iVar2) {
          in_s14 = in_s14 + fVar10;
          param_3[iVar2 + 0x3fffffff] = in_s14;
        }
        if (iVar2 < iVar4) {
          in_s14 = (float)VectorUnsignedToFloat(uVar3 << 2,(byte)(in_fpscr >> 0x16) & 3);
          param_3[iVar2] = param_3[iVar2] + (in_s14 - fVar10);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 < iVar8);
    }
    fVar10 = DAT_00028870;
    if ((param_1[8] != 0) && (0 < iVar4)) {
      iVar6 = 1;
      do {
        while (*param_3 < 3.0) {
          iVar4 = param_1[2];
          iVar6 = iVar6 + 1;
          *param_3 = 0.0;
          param_3 = param_3 + 1;
          if (iVar4 < iVar6) {
            return;
          }
        }
        fVar11 = (float)skv_fast_log2();
        iVar4 = param_1[2];
        iVar6 = iVar6 + 1;
        *param_3 = fVar11 * fVar10 + 4.0;
        param_3 = param_3 + 1;
      } while (iVar6 <= iVar4);
    }
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_00028874 + 0x28678 + DAT_00028878),
          (char *)(DAT_00028880 + 0x28854),DAT_0002887c + 0x2884c,0x1ee);
  return;
}



/* ===== rkaudio_agc_init @ 00028884 size=836 ===== */

int * rkaudio_agc_init(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar6 = DAT_00028bcc + 0x288a4;
  piVar1 = calloc(0x88,1);
  *piVar1 = param_1;
  if (param_1 % 10 == 0) {
    iVar5 = 10;
  }
  else {
    iVar5 = 0x10;
  }
  piVar1[1] = iVar5;
  iVar2 = __aeabi_idiv(param_1,iVar5);
  fVar11 = (float)param_3[2];
  fVar10 = (float)param_3[10];
  fVar12 = (float)param_3[3];
  fVar13 = (float)param_3[6];
  fVar9 = (float)param_3[4];
  piVar1[4] = (int)fVar11;
  piVar1[5] = (int)fVar10;
  piVar1[3] = (int)fVar12;
  piVar1[7] = (int)fVar13;
  piVar1[9] = (int)fVar9;
  piVar1[2] = iVar2;
  if (((fVar11 + fVar10 <= fVar12) && (fVar9 <= fVar13)) &&
     (uVar7 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar13) << 0x1f, !SUB41(uVar7 >> 0x1f,0))) {
    fVar8 = (float)param_3[1];
    iVar4 = param_3[9];
    iVar6 = param_3[0xd];
    piVar1[0xf] = (int)fVar8;
    piVar1[0xd] = iVar4;
    iVar4 = *param_3;
    piVar1[0xe] = iVar6;
    piVar1[0x10] = iVar4;
    fVar14 = (float)VectorSignedToFloat(param_2,(byte)(uVar7 >> 0x16) & 3);
    piVar1[8] = (int)(((fVar11 + fVar13) - fVar9) / (fVar13 - fVar9));
    piVar1[6] = (int)(-(fVar12 - (fVar11 + fVar10)) / fVar10);
    fVar9 = (float)VectorSignedToFloat(iVar5 * iVar2 * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0xb] = 0x3f800000;
    fVar9 = expf(fVar9 / (fVar8 * fVar14));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x18] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / (fVar14 * (float)piVar1[0xf]));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x17] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / ((float)piVar1[0xf] * 4.0 * fVar14));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x15] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / ((float)piVar1[0xf] * 12.0 * fVar14));
    fVar10 = (float)VectorSignedToFloat(piVar1[1] * piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x16] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / (fVar14 * (float)piVar1[0x10]));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x11] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / (fVar14 * (float)piVar1[0x10]));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x12] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / ((float)piVar1[0x10] * 4.0 * fVar14));
    fVar10 = (float)VectorSignedToFloat(piVar1[2] * -0x898,(byte)(uVar7 >> 0x16) & 3);
    piVar1[0x13] = (int)(1.0 - fVar9);
    fVar9 = expf(fVar10 / ((float)piVar1[0x10] * 12.0 * fVar14));
    piVar1[0x14] = (int)(1.0 - fVar9);
    fVar9 = powf(10.0,(float)piVar1[4] / 20.0);
    piVar1[0xc] = (int)fVar9;
    fVar9 = powf(10.0,(float)piVar1[3] / 20.0);
    piVar1[0x1d] = (int)(fVar9 * DAT_00028bc8);
    piVar1[0x19] = 0;
    piVar1[0x1a] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piVar1[0x1b] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar1[0x1c] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    pvVar3 = calloc(0x14,1);
    piVar1[0x1e] = (int)pvVar3;
    pvVar3 = calloc(0x50,1);
    piVar1[0x1f] = (int)pvVar3;
    pvVar3 = calloc(0xa0,1);
    piVar1[0x20] = (int)pvVar3;
    pvVar3 = calloc(0x28,1);
    piVar1[0x21] = (int)pvVar3;
    return piVar1;
  }
  fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00028bd0),(char *)(DAT_00028bd8 + 0x28bb4),
          DAT_00028bd4 + 0x28bb0,0x41);
  return (int *)0x0;
}



/* ===== rkaudio_agc_param_printf @ 00028bdc size=148 ===== */

void rkaudio_agc_param_printf(float *param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_00028c70 + 0x28bfc + DAT_00028c74),
          (char *)(DAT_00028c7c + 0x28c28),DAT_00028c78 + 0x28c1c,0x67,(int)*param_1,(int)param_1[1]
          ,(int)param_1[2],(int)param_1[3],(int)param_1[4],(int)param_1[10],(int)param_1[6]);
  return;
}



/* ===== rkaudio_agc_destory @ 00028c80 size=112 ===== */

void rkaudio_agc_destory(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 0x78) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x78));
    *(undefined4 *)((int)param_1 + 0x78) = 0;
  }
  if (*(void **)((int)param_1 + 0x7c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x7c));
    *(undefined4 *)((int)param_1 + 0x7c) = 0;
  }
  if (*(void **)((int)param_1 + 0x80) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x80));
    *(undefined4 *)((int)param_1 + 0x80) = 0;
  }
  if (*(void **)((int)param_1 + 0x84) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x84));
  }
  free(param_1);
  return;
}



/* ===== buffer_sum @ 00028cf0 size=184 ===== */

/* buffer_sum(int*, int) */

uint buffer_sum(int *param_1,int param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (param_2 < 1) {
    return 0;
  }
  if (param_2 - 1U < 4) {
    uVar2 = 0;
    uVar4 = uVar2;
  }
  else {
    auVar6 = (undefined1  [16])0x0;
    pauVar3 = (undefined1 (*) [16])param_1;
    do {
      auVar1 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      auVar6 = VectorAdd(auVar6,auVar1,4);
    } while (pauVar3 != (undefined1 (*) [16])(param_1 + (param_2 & 0xfffffffc)));
    uVar5 = VectorAdd(auVar6._0_8_,auVar6._8_8_,4);
    uVar2 = param_2 & 0xfffffffc;
    uVar5 = VectorPairwiseAdd(uVar5,uVar5,4);
    uVar4 = (uint)uVar5;
    if (param_2 == uVar2) {
      return (uint)uVar5;
    }
  }
  uVar4 = uVar4 + param_1[uVar2];
  if ((int)(uVar2 + 1) < param_2) {
    uVar4 = uVar4 + param_1[uVar2 + 1];
    if (((int)(uVar2 + 2) < param_2) &&
       (uVar4 = uVar4 + param_1[uVar2 + 2], (int)(uVar2 + 3) < param_2)) {
      uVar4 = uVar4 + param_1[uVar2 + 3];
    }
  }
  return uVar4;
}



/* ===== gainCal_new @ 00028da8 size=344 ===== */

/* gainCal_new(RKAudioAGCState_*, float) */

float gainCal_new(RKAudioAGCState_ *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = DAT_00028f20;
  fVar4 = DAT_00028f18;
  fVar8 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x1c);
  if (fVar7 - 3.0 <= param_2) {
    if (fVar7 + 3.0 <= param_2) {
      fVar7 = param_2;
      if (fVar8 - 3.0 <= param_2) {
        if (param_2 < fVar8 + 3.0) {
          fVar7 = (param_2 - fVar8) + 3.0;
          fVar7 = ((*(float *)(param_1 + 0x18) - 1.0) * fVar7 * fVar7) / 12.0 + param_2;
        }
        else {
          fVar7 = fVar8 + *(float *)(param_1 + 0x18) * (param_2 - fVar8);
        }
      }
    }
    else {
      fVar7 = (param_2 - fVar7) - 3.0;
      fVar7 = ((1.0 - *(float *)(param_1 + 0x20)) * fVar7 * fVar7) / 12.0 + param_2;
    }
  }
  else {
    fVar7 = fVar7 + (param_2 - fVar7) * *(float *)(param_1 + 0x20);
  }
  pdVar6 = (double *)(DAT_00028f20 + 0x28df8);
  fVar8 = (float)skv_fast_log2(0x41200000);
  dVar3 = DAT_00028f10;
  dVar2 = DAT_00028f08;
  dVar1 = DAT_00028f00;
  *(int *)(iVar5 + 0x28dfc) =
       (int)(longlong)
            (DAT_00028f00 + (double)((fVar8 * fVar4 * (fVar7 - param_2)) / 20.0) * DAT_00028f08);
  if (*pdVar6 <= dVar3) {
    return DAT_00028f1c;
  }
  fVar8 = (float)skv_fast_log2(0x41200000);
  *(int *)(iVar5 + 0x28dfc) =
       (int)(longlong)(dVar1 + (double)((fVar8 * fVar4 * (fVar7 - param_2)) / 20.0) * dVar2);
  return (float)*pdVar6;
}



/* ===== rkaudio_agc_process @ 00028f28 size=1832 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
rkaudio_agc_process(float *param_1,float *param_2,RKAudioAGCState_ *param_3,undefined4 param_4,
                   int param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float local_130;
  float local_12c [15];
  float afStack_f0 [17];
  float local_ac [16];
  float local_6c;
  
  iVar9 = DAT_0002937c + 0x28f40;
  if (param_3 != (RKAudioAGCState_ *)0x0) {
    if (param_2 != param_1) {
      memcpy(param_2,param_1,*(int *)param_3 << 2);
    }
    fVar19 = DAT_00029378;
    dVar4 = DAT_00029370;
    dVar3 = DAT_00029368;
    uVar14 = *(uint *)(param_3 + 8);
    local_ac[0] = *(float *)(param_3 + 0x2c);
    dVar24 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = CONCAT44((float)(1.0 / dVar24),(float)(1.0 / dVar24));
    auVar23._8_8_ = uVar1;
    auVar23._0_8_ = uVar1;
    if (*(int *)(param_3 + 4) < 1) {
      fVar18 = 1.0;
LAB_00029124:
      fVar19 = log10f(fVar18);
      fVar22 = (float)(((double)fVar19 - DAT_00029368) * 20.0);
      fVar17 = (float)gainCal_new(param_3,fVar22);
      fVar21 = *(float *)(param_3 + 0x34) - 16.0;
      uVar14 = in_fpscr & 0xfffffff | (uint)(fVar21 < 0.0) << 0x1f | (uint)(fVar21 == 0.0) << 0x1e;
      *(float *)(param_3 + 0x34) = fVar21;
      fVar18 = DAT_00029390;
      fVar19 = DAT_0002938c;
      bVar2 = (byte)(uVar14 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == NAN(fVar21)) {
        fVar21 = *(float *)(param_3 + 0x38);
        uVar14 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar22) << 0x1f |
                 (uint)(fVar21 == fVar22) << 0x1e;
        bVar2 = (byte)(uVar14 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar21) || NAN(fVar22))) {
          param_7 = 1;
        }
      }
      iVar9 = *(int *)(param_3 + 4);
      uVar14 = uVar14 & 0xfffffff;
      uVar16 = uVar14 | (uint)(*(float *)(param_3 + 0x14) < fVar22) << 0x1f;
      if (SUB41(uVar16 >> 0x1f,0)) {
        if (0 < iVar9) {
          pfVar11 = afStack_f0 + 1;
          pfVar5 = local_12c;
          pfVar8 = pfVar11 + iVar9;
          do {
            while( true ) {
              fVar22 = *pfVar5;
              uVar16 = uVar16 & 0xfffffff | (uint)(fVar17 < fVar22) << 0x1f |
                       (uint)(fVar17 == fVar22) << 0x1e;
              fVar21 = *pfVar11;
              if (fVar17 <= *pfVar11) {
                fVar21 = fVar17;
              }
              bVar2 = (byte)(uVar16 >> 0x18);
              *pfVar11 = fVar21;
              pfVar11 = pfVar11 + 1;
              if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar17) || NAN(fVar22)))
              break;
              *pfVar5 = fVar17;
              pfVar5 = pfVar5 + 1;
              if (pfVar8 == pfVar11) goto LAB_00029508;
            }
            pfVar5 = pfVar5 + 1;
          } while (pfVar8 != pfVar11);
        }
LAB_00029508:
        iVar12 = 0;
        iVar13 = 1;
      }
      else {
        uVar16 = uVar14 | (uint)(*(float *)(param_3 + 0x24) < fVar22) << 0x1f;
        if (SUB41(uVar16 >> 0x1f,0)) {
          iVar13 = 0;
          fVar17 = *(float *)(param_3 + 0x24) + 15.0;
          uVar16 = uVar14 | (uint)(fVar17 < fVar22) << 0x1f | (uint)(fVar17 == fVar22) << 0x1e;
          bVar2 = (byte)(uVar16 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar17) || NAN(fVar22))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 2;
          }
        }
        else {
          iVar12 = 0;
          iVar13 = iVar12;
        }
      }
      if (1 < iVar9) {
        pfVar8 = local_12c;
        pfVar5 = afStack_f0 + 2;
        do {
          pfVar8 = pfVar8 + 1;
          pfVar11 = pfVar5 + 1;
          fVar17 = pfVar8[-1];
          if (*pfVar5 < pfVar5[-1]) {
            pfVar5[-1] = *pfVar5;
          }
          fVar21 = *pfVar8;
          uVar16 = uVar16 & 0xfffffff | (uint)(fVar17 < fVar21) << 0x1f |
                   (uint)(fVar17 == fVar21) << 0x1e;
          bVar2 = (byte)(uVar16 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar17) || NAN(fVar21))) {
            pfVar8[-1] = fVar21;
          }
          pfVar5 = pfVar11;
        } while (afStack_f0 + iVar9 + 1 != pfVar11);
      }
      if (0 < iVar9) {
        pfVar5 = local_12c;
        bVar15 = false;
        fVar17 = *(float *)(param_3 + 0x5c);
        pfVar8 = local_ac + 1;
        iVar7 = 0;
        do {
          iVar6 = iVar7 + 1;
          if (param_7 == 1 || (param_5 == 1 || param_6 == 1)) {
            fVar21 = *(float *)(param_3 + 0x50);
          }
          else {
            fVar21 = *(float *)(param_3 + 0x48);
          }
          fVar22 = fVar17;
          if (iVar13 == 1) {
            fVar20 = pfVar8[-1];
            local_ac[1] = afStack_f0[iVar6];
            uVar16 = uVar16 & 0xfffffff | (uint)(local_ac[1] < fVar20) << 0x1f |
                     (uint)(local_ac[1] == fVar20) << 0x1e;
            bVar2 = (byte)(uVar16 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(local_ac[1]) || NAN(fVar20))) {
              if (iVar7 == 0) {
              }
              else {
                *pfVar8 = local_ac[1] * fVar17 + fVar20 * (1.0 - fVar17);
              }
              bVar15 = true;
              if (param_5 == 1) goto LAB_00029310;
LAB_00029290:
              if (param_7 == 1) {
                fVar22 = *(float *)(param_3 + 0x60);
                goto LAB_00029310;
              }
            }
            else {
LAB_00029278:
              *pfVar8 = local_ac[1] * fVar21 + fVar20 * (1.0 - fVar21);
LAB_00029288:
              if (param_5 != 1) goto LAB_00029290;
LAB_00029310:
              fVar21 = *(float *)(param_3 + 0x30);
              fVar20 = (1.0 - fVar22) * *pfVar8;
              if (iVar12 != 1) goto LAB_00029328;
              *pfVar8 = fVar22 / (fVar21 * fVar21) + fVar20;
            }
          }
          else {
            local_ac[1] = *pfVar5;
            fVar20 = pfVar8[-1];
            uVar16 = uVar16 & 0xfffffff | (uint)(local_ac[1] < fVar20) << 0x1f |
                     (uint)(local_ac[1] == fVar20) << 0x1e;
            bVar2 = (byte)(uVar16 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(local_ac[1]) || NAN(fVar20))) {
              if (iVar12 != 2) {
                *pfVar8 = local_ac[1] * fVar17 + fVar20 * (1.0 - fVar17);
                goto LAB_00029288;
              }
              *pfVar8 = local_ac[1] * *(float *)(param_3 + 0x58) +
                        fVar20 * (1.0 - *(float *)(param_3 + 0x58));
            }
            else {
              if (iVar12 != 2) goto LAB_00029278;
              *pfVar8 = local_ac[1] * *(float *)(param_3 + 0x44) +
                        fVar20 * (1.0 - *(float *)(param_3 + 0x44));
            }
            if (param_5 != 1) goto LAB_00029290;
            fVar21 = *(float *)(param_3 + 0x30);
            fVar20 = (1.0 - fVar17) * *pfVar8;
LAB_00029328:
            *pfVar8 = fVar22 / fVar21 + fVar20;
          }
          pfVar5 = pfVar5 + 1;
          pfVar8 = pfVar8 + 1;
          iVar7 = iVar6;
        } while (iVar9 != iVar6);
        if (bVar15) {
          iVar9 = *(int *)param_3;
          fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(uVar16 >> 0x16) & 3);
          fVar19 = (local_6c - local_ac[0]) / fVar19;
          if (0 < iVar9) {
            pfVar8 = param_1;
            iVar13 = 0;
            fVar18 = local_ac[0];
            do {
              iVar12 = iVar13;
              fVar18 = fVar18 + fVar19;
              fVar17 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              fVar17 = fVar17 * fVar18 * *(float *)(param_3 + 0x30);
              if (0.0 <= fVar17) {
                uVar16 = uVar16 & 0xfffffff | (uint)(fVar17 < DAT_00029394) << 0x1f |
                         (uint)(fVar17 == DAT_00029394) << 0x1e;
                bVar2 = (byte)(uVar16 >> 0x18);
                if ((bool)(bVar2 >> 6 & 1) ||
                    (bool)(bVar2 >> 7) != (NAN(fVar17) || NAN(DAT_00029394))) {
                  bVar15 = false;
                }
                else {
                  bVar15 = true;
                }
              }
              else {
                uVar16 = uVar16 & 0xfffffff | (uint)(fVar17 < DAT_00029398) << 0x1f;
                bVar15 = SUB41(uVar16 >> 0x1f,0);
              }
              if (bVar15) {
                fVar19 = (float)VectorSignedToFloat(iVar12,(byte)(uVar16 >> 0x16) & 3);
                fVar19 = (local_6c - local_ac[0]) / fVar19;
                if (iVar12 == 0) goto LAB_0002962c;
                break;
              }
              iVar13 = iVar12 + 1;
              iVar12 = iVar9;
            } while (iVar9 != iVar13);
            local_ac[0] = local_ac[0] + fVar19;
            *param_2 = local_ac[0] * *param_1 * *(float *)(param_3 + 0x30);
            if (iVar12 != 1) {
              pfVar5 = param_1 + 1;
              pfVar8 = param_2;
              do {
                pfVar8 = pfVar8 + 1;
                local_ac[0] = local_ac[0] + fVar19;
                fVar18 = *pfVar5;
                pfVar5 = pfVar5 + 1;
                *pfVar8 = fVar18 * local_ac[0] * *(float *)(param_3 + 0x30);
              } while (param_1 + iVar12 != pfVar5);
            }
            if (iVar12 != iVar9) {
LAB_0002962c:
              if (iVar12 < iVar9) {
                param_2 = param_2 + iVar12;
                pfVar8 = param_1 + iVar12;
                do {
                  fVar19 = *pfVar8;
                  pfVar8 = pfVar8 + 1;
                  *param_2 = fVar19 * local_ac[0] * *(float *)(param_3 + 0x30);
                  param_2 = param_2 + 1;
                } while (param_1 + iVar9 != pfVar8);
              }
            }
          }
        }
        else if (0 < iVar9) {
          iVar12 = *(int *)(param_3 + 8);
          fVar17 = (float)VectorSignedToFloat(iVar12,(byte)(uVar16 >> 0x16) & 3);
          iVar13 = 0;
          pfVar8 = local_ac + 1;
          do {
            iVar7 = iVar13 + 1;
            fVar21 = pfVar8[-1];
            fVar22 = *pfVar8 - fVar21;
            if (0 < iVar12) {
              iVar13 = iVar13 * iVar12;
              pfVar5 = param_1 + iVar13;
              pfVar11 = param_2 + iVar13;
              do {
                fVar20 = *pfVar5;
                pfVar5 = pfVar5 + 1;
                fVar21 = fVar21 + fVar22 / fVar17;
                fVar20 = fVar20 * fVar21 * *(float *)(param_3 + 0x30);
                if (fVar19 < fVar20) {
                  *pfVar11 = 32766.0;
                }
                else if (fVar18 <= fVar20) {
                  *pfVar11 = fVar20;
                }
                else {
                  *pfVar11 = -32766.0;
                }
                pfVar11 = pfVar11 + 1;
              } while (param_1 + iVar13 + iVar12 != pfVar5);
            }
            iVar13 = iVar7;
            pfVar8 = pfVar8 + 1;
          } while (iVar7 != iVar9);
        }
      }
      *(float *)(param_3 + 0x2c) = local_6c;
      return 1;
    }
    if ((uVar14 & 3) == 0) {
      pfVar8 = afStack_f0;
      pfVar5 = local_12c;
      iVar13 = 0;
      fVar18 = DAT_00029378;
      do {
        pfVar8 = pfVar8 + 1;
        auVar26 = (undefined1  [16])0x0;
        auVar25 = auVar26;
        if (0 < (int)uVar14) {
          pauVar10 = (undefined1 (*) [16])(param_1 + iVar13 * uVar14);
          iVar12 = 0;
          do {
            auVar25 = *pauVar10;
            pauVar10 = pauVar10 + 1;
            iVar12 = iVar12 + 4;
            auVar27 = FloatVectorAbsolute(auVar25,4);
            auVar25 = FloatVectorMult(auVar25,auVar25,2,0x20);
            auVar26 = FloatVectorMax(auVar26,auVar27,2,0x20);
            auVar25 = FloatVectorMultiplyAccumulate(auVar25,auVar23,2,0x10);
          } while (iVar12 < (int)uVar14);
        }
        iVar13 = iVar13 + 1;
        local_14c = auVar26._0_4_;
        fStack_148 = auVar26._4_4_;
        local_144 = auVar26._8_4_;
        if (local_14c <= 0.0) {
          local_14c = fVar19;
        }
        fStack_138 = auVar25._4_4_;
        local_13c = auVar25._0_4_;
        if (local_14c < fStack_148) {
          local_14c = fStack_148;
        }
        local_140 = auVar26._12_4_;
        local_134 = auVar25._8_4_;
        local_130 = auVar25._12_4_;
        if (local_14c < local_144) {
          local_14c = local_144;
        }
        if (local_14c < local_140) {
          local_14c = local_140;
        }
        uVar14 = in_fpscr & 0xfffffff | (uint)(local_14c < fVar18) << 0x1f |
                 (uint)(local_14c == fVar18) << 0x1e;
        in_fpscr = uVar14 | (uint)(NAN(local_14c) || NAN(fVar18)) << 0x1c;
        bVar2 = (byte)(uVar14 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar18 = local_14c;
        }
        fVar17 = log10f(local_14c + 1.0);
        fVar17 = (float)gainCal_new(param_3,(float)(((double)fVar17 - dVar3) * 20.0));
        *pfVar8 = fVar17;
        fVar17 = log10f(local_13c + fStack_138 + local_134 + local_130 + 1.0);
        fVar17 = (float)gainCal_new(param_3,(float)(((double)fVar17 - dVar4) * 10.0));
        iVar12 = *(int *)(param_3 + 4);
        *pfVar5 = fVar17;
        pfVar5 = pfVar5 + 1;
        if (iVar12 <= iVar13) {
          fVar18 = fVar18 + 1.0;
          goto LAB_00029124;
        }
        uVar14 = *(uint *)(param_3 + 8);
      } while ((uVar14 & 3) == 0);
    }
    fprintf((FILE *)**(undefined4 **)(iVar9 + DAT_00029380),(char *)(DAT_00029388 + 0x2910c),
            DAT_00029384 + 0x29108,0x117);
  }
  return 0;
}



/* ===== rkaudio_agc_short_process @ 00029684 size=1232 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

uint rkaudio_agc_short_process(int *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  uint in_fpscr;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  if (param_1 == (int *)0x0) {
    uVar13 = 0xffffffff;
    fprintf((FILE *)**(undefined4 **)(DAT_00029b54 + 0x296a0 + DAT_00029b58),
            (char *)(DAT_00029b68 + 0x29b4c),DAT_00029b64 + 0x29b48,0x1cf);
  }
  else if (param_2 == 0 || param_3 == 0) {
    uVar13 = 0xffffffff;
    fprintf((FILE *)**(undefined4 **)(DAT_00029b54 + 0x296a0 + DAT_00029b58),
            (char *)(DAT_00029b60 + 0x29b20),DAT_00029b5c + 0x29b1c,0x1d4);
  }
  else {
    iVar17 = param_1[2];
    uVar13 = param_1[3];
    iVar12 = 0;
    if (0 < iVar17) {
      do {
        puVar3 = (undefined8 *)param_1[4];
        if (0 < (int)uVar13) {
          if (uVar13 - 1 < 7) {
            uVar18 = 0;
          }
          else {
            puVar8 = (undefined2 *)(param_2 + iVar12 * 2);
            puVar5 = puVar8 + iVar17 * 4;
            puVar10 = puVar3;
            do {
              uVar2 = *puVar8;
              puVar4 = puVar8 + iVar17;
              puVar16 = puVar8 + iVar17 * 2;
              puVar1 = puVar8 + iVar17 * 3;
              puVar8 = puVar8 + iVar17 * 8;
              puVar11 = puVar10 + 4;
              uVar21 = CONCAT26(*puVar1,CONCAT24(*puVar16,CONCAT22(*puVar4,uVar2)));
              auVar22._8_2_ = *puVar5;
              auVar22._0_8_ = uVar21;
              auVar22._10_2_ = puVar5[iVar17];
              auVar22._12_2_ = puVar5[iVar17 * 2];
              auVar22._14_2_ = puVar5[iVar17 * 3];
              auVar24 = VectorCopyLong(uVar21,2,0);
              auVar22 = VectorCopyLong(auVar22._8_8_,2,0);
              auVar24 = FixedToFP(auVar24,0,0,0,0x20);
              auVar22 = FixedToFP(auVar22,0,0,0,0x20);
              *puVar10 = auVar24._0_8_;
              puVar10[1] = auVar24._8_8_;
              puVar10[2] = auVar22._0_8_;
              puVar10[3] = auVar22._8_8_;
              puVar5 = puVar5 + iVar17 * 8;
              puVar10 = puVar11;
            } while (puVar11 != puVar3 + (uVar13 >> 3) * 4);
            uVar18 = uVar13 & 0xfffffff8;
            if (uVar13 == uVar18) goto LAB_000298c8;
          }
          puVar6 = (undefined4 *)((int)puVar3 + uVar18 * 4);
          uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar12 + uVar18 * iVar17) * 2),
                                       (byte)(in_fpscr >> 0x16) & 3);
          *puVar6 = uVar20;
          if ((int)(uVar18 + 1) < (int)uVar13) {
            iVar9 = iVar17 + uVar18 * iVar17;
            uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar9 + iVar12) * 2),
                                         (byte)(in_fpscr >> 0x16) & 3);
            puVar6[1] = uVar20;
            if ((int)(uVar18 + 2) < (int)uVar13) {
              iVar9 = iVar9 + iVar17;
              uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar12 + iVar9) * 2),
                                           (byte)(in_fpscr >> 0x16) & 3);
              puVar6[2] = uVar20;
              if ((int)(uVar18 + 3) < (int)uVar13) {
                iVar9 = iVar17 + iVar9;
                uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar12 + iVar9) * 2),
                                             (byte)(in_fpscr >> 0x16) & 3);
                puVar6[3] = uVar20;
                if ((int)(uVar18 + 4) < (int)uVar13) {
                  iVar9 = iVar17 + iVar9;
                  uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar12 + iVar9) * 2),
                                               (byte)(in_fpscr >> 0x16) & 3);
                  puVar6[4] = uVar20;
                  if ((int)(uVar18 + 5) < (int)uVar13) {
                    iVar9 = iVar17 + iVar9 + iVar12;
                    uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + iVar9 * 2),
                                                 (byte)(in_fpscr >> 0x16) & 3);
                    puVar6[5] = uVar20;
                    if ((int)(uVar18 + 6) < (int)uVar13) {
                      uVar20 = VectorSignedToFloat((int)*(short *)(param_2 + (iVar9 + iVar17) * 2),
                                                   (byte)(in_fpscr >> 0x16) & 3);
                      puVar6[6] = uVar20;
                    }
                  }
                }
              }
            }
          }
        }
LAB_000298c8:
        rkaudio_agc_process(puVar3,param_1[5],*(undefined4 *)(*param_1 + iVar12 * 4),1);
        uVar13 = param_1[3];
        if ((int)uVar13 < 1) {
          iVar17 = param_1[2];
        }
        else {
          pauVar14 = (undefined1 (*) [16])param_1[5];
          iVar17 = param_1[2];
          if (uVar13 - 1 < 7) {
            uVar18 = 0;
          }
          else {
            puVar8 = (undefined2 *)(param_3 + iVar12 * 2);
            puVar5 = puVar8 + iVar17 * 4;
            pauVar19 = pauVar14;
            do {
              auVar22 = *pauVar19;
              pauVar7 = pauVar19 + 1;
              pauVar19 = pauVar19 + 2;
              auVar24 = FPToFixed(auVar22,0,0,3,0x20);
              auVar22 = FPToFixed(*pauVar7,0,0,3,0x20);
              uVar21 = VectorCopyNarrow(auVar24,4);
              uVar23 = VectorCopyNarrow(auVar22,4);
              *puVar8 = (short)uVar21;
              puVar4 = puVar8 + iVar17;
              puVar16 = puVar4 + iVar17;
              puVar8 = puVar16 + iVar17 * 6;
              *puVar4 = (short)((ulonglong)uVar21 >> 0x10);
              *puVar16 = (short)((ulonglong)uVar21 >> 0x20);
              puVar16[iVar17] = (short)((ulonglong)uVar21 >> 0x30);
              *puVar5 = (short)uVar23;
              puVar5 = puVar5 + iVar17;
              puVar4 = puVar5 + iVar17;
              *puVar5 = (short)((ulonglong)uVar23 >> 0x10);
              puVar5 = puVar4 + iVar17 + iVar17 * 5;
              *puVar4 = (short)((ulonglong)uVar23 >> 0x20);
              puVar4[iVar17] = (short)((ulonglong)uVar23 >> 0x30);
            } while (pauVar19 != pauVar14 + (uVar13 >> 3) * 2);
            uVar18 = uVar13 & 0xfffffff8;
            if (uVar18 == uVar13) goto LAB_00029ac8;
          }
          pfVar15 = (float *)(*pauVar14 + uVar18 * 4);
          *(short *)(param_3 + (uVar18 * iVar17 + iVar12) * 2) = (short)(int)*pfVar15;
          if ((int)(uVar18 + 1) < (int)uVar13) {
            iVar9 = uVar18 * iVar17 + iVar17;
            *(short *)(param_3 + (iVar12 + iVar9) * 2) = (short)(int)pfVar15[1];
            if ((int)(uVar18 + 2) < (int)uVar13) {
              iVar9 = iVar17 + iVar9;
              *(short *)(param_3 + (iVar12 + iVar9) * 2) = (short)(int)pfVar15[2];
              if ((int)(uVar18 + 3) < (int)uVar13) {
                iVar9 = iVar17 + iVar9;
                *(short *)(param_3 + (iVar12 + iVar9) * 2) = (short)(int)pfVar15[3];
                if ((int)(uVar18 + 4) < (int)uVar13) {
                  iVar9 = iVar17 + iVar9;
                  *(short *)(param_3 + (iVar12 + iVar9) * 2) = (short)(int)pfVar15[4];
                  if ((int)(uVar18 + 5) < (int)uVar13) {
                    iVar9 = iVar17 + iVar9;
                    *(short *)(param_3 + (iVar12 + iVar9) * 2) = (short)(int)pfVar15[5];
                    if ((int)(uVar18 + 6) < (int)uVar13) {
                      *(short *)(param_3 + (iVar12 + iVar17 + iVar9) * 2) = (short)(int)pfVar15[6];
                    }
                  }
                }
              }
            }
          }
        }
LAB_00029ac8:
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar17);
    }
  }
  return uVar13;
}



/* ===== rkaudio_agc_short_destroy @ 00029b6c size=116 ===== */

void rkaudio_agc_short_destroy(int *param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    if (0 < param_1[2]) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        rkaudio_agc_destory(*(undefined4 *)((int)__ptr + iVar1));
        __ptr = (void *)*param_1;
      } while (iVar2 < param_1[2]);
    }
    free(__ptr);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  free(param_1);
  return;
}



/* ===== rkaudio_agc_short_init @ 00029be0 size=180 ===== */

undefined4 * rkaudio_agc_short_init(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = calloc(0x18,1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_1;
    pvVar2 = calloc(param_3 << 2,1);
    *puVar1 = pvVar2;
    if (0 < param_3) {
      iVar5 = 0;
      while( true ) {
        uVar3 = rkaudio_agc_init(param_1,param_2,param_4);
        iVar4 = puVar1[2];
        param_1 = puVar1[3];
        *(undefined4 *)((int)pvVar2 + iVar5 * 4) = uVar3;
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) break;
        param_2 = puVar1[1];
        pvVar2 = (void *)*puVar1;
      }
    }
    pvVar2 = calloc(param_1 << 2,1);
    puVar1[4] = pvVar2;
    pvVar2 = calloc(param_1 << 2,1);
    puVar1[5] = pvVar2;
  }
  return puVar1;
}



/* ===== _fini @ 00029c94 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 0003f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::floor @ 0003f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0003f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0003f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0003f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::powf @ 0003f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0003f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0003f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::expf @ 0003f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0003f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 0003f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0003f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__isnanf @ 0003f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnanf(float __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0003f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 0003f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__isinff @ 0003f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isinff(float __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sin @ 0003f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0003f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fmodf @ 0003f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float fmodf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0003f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0003f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 0003f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cos @ 0003f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0003f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::roundf @ 0003f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float roundf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log10f @ 0003f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log10f(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



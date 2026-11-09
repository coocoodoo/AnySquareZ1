// rgaImDemo — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010a10 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010a34 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002400c)();
  return;
}



/* ===== <EXTERNAL>::imflip @ 00010a40 size=12 ===== */

void imflip(void)

{
  (*(code *)PTR_imflip_00024010)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00024014)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00024018)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::imStrError_t @ 00010a64 size=12 ===== */

void imStrError_t(void)

{
  (*(code *)PTR_imStrError_t_0002401c)();
  return;
}



/* ===== <EXTERNAL>::get_buf_from_file @ 00010a70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void get_buf_from_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (*(code *)PTR_get_buf_from_file_00024020)(param_1);
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00024024)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024028)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::imcvtcolor @ 00010a94 size=12 ===== */

void imcvtcolor(void)

{
  (*(code *)PTR_imcvtcolor_0002402c)();
  return;
}



/* ===== <EXTERNAL>::querystring @ 00010aa0 size=12 ===== */

void querystring(void)

{
  (*(code *)PTR_querystring_00024030)();
  return;
}



/* ===== <EXTERNAL>::output_buf_data_to_file @ 00010ab8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void output_buf_data_to_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (*(code *)PTR_output_buf_data_to_file_00024038)(param_1);
  return;
}



/* ===== <EXTERNAL>::imtranslate @ 00010ac4 size=12 ===== */

void imtranslate(void)

{
  (*(code *)PTR_imtranslate_0002403c)();
  return;
}



/* ===== <EXTERNAL>::importbuffer_virtualaddr @ 00010ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void importbuffer_virtualaddr(void *param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR_importbuffer_virtualaddr_00024040)(param_1);
  return;
}



/* ===== <EXTERNAL>::releasebuffer_handle @ 00010adc size=12 ===== */

void releasebuffer_handle(void)

{
  (*(code *)PTR_releasebuffer_handle_00024044)();
  return;
}



/* ===== <EXTERNAL>::get_bpp_from_format @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void get_bpp_from_format(int param_1)

{
  (*(code *)PTR_get_bpp_from_format_00024048)(param_1);
  return;
}



/* ===== <EXTERNAL>::wrapbuffer_handle @ 00010af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wrapbuffer_handle(uint param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR_wrapbuffer_handle_0002404c)(param_1);
  return;
}



/* ===== <EXTERNAL>::imblend @ 00010b00 size=12 ===== */

void imblend(void)

{
  (*(code *)PTR_imblend_00024050)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024054)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::imcheck_t @ 00010b18 size=12 ===== */

void imcheck_t(void)

{
  (*(code *)PTR_imcheck_t_00024058)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002405c)();
  return;
}



/* ===== <EXTERNAL>::imrotate @ 00010b30 size=12 ===== */

void imrotate(void)

{
  (*(code *)PTR_imrotate_00024060)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00024064)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::imresize @ 00010b48 size=12 ===== */

void imresize(void)

{
  (*(code *)PTR_imresize_00024068)();
  return;
}



/* ===== <EXTERNAL>::imcrop @ 00010b54 size=12 ===== */

void imcrop(void)

{
  (*(code *)PTR_imcrop_0002406c)();
  return;
}



/* ===== <EXTERNAL>::imcopy @ 00010b60 size=12 ===== */

void imcopy(void)

{
  (*(code *)PTR_imcopy_00024070)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00024074)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00024078)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002407c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010b90 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00024080)();
  return;
}



/* ===== <EXTERNAL>::imfill @ 00010b9c size=12 ===== */

void imfill(void)

{
  (*(code *)PTR_imfill_00024084)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00024088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010bb4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002408c)();
  return;
}



/* ===== FUN_00010bc0 @ 00010bc0 size=4652 ===== */

int FUN_00010bc0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 *local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 *local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 *local_1d0;
  uint local_1c8;
  int local_1c4;
  void *local_1c0;
  undefined4 *local_1bc;
  void *local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 *puStack_17c;
  int local_178;
  undefined4 uStack_174;
  undefined4 *local_170;
  undefined4 *puStack_16c;
  undefined4 local_168;
  undefined4 *puStack_164;
  undefined4 local_160;
  undefined4 *puStack_15c;
  int local_158;
  undefined4 *puStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int local_144;
  undefined1 auStack_140 [12];
  undefined4 local_134;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  int local_dc;
  undefined1 auStack_a0 [92];
  
  puStack_17c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_178 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_174 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_170 = (undefined4 *)0x0;
  local_180 = 0;
  local_1b0 = ZEXT48(puStack_17c) << 0x20;
  local_1a8 = CONCAT44(uStack_174,local_178);
  local_1a0 = ZEXT48(puStack_17c) << 0x20;
  local_198 = CONCAT44(uStack_174,local_178);
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  puStack_16c = puStack_17c;
  puStack_164 = puStack_17c;
  puStack_15c = puStack_17c;
  puStack_154 = puStack_17c;
  memset(&local_150,0,0x58);
  memset(&local_f8,0,0x58);
  uVar8 = FUN_0001241c(param_1,param_2,&local_180);
  iVar14 = 0;
  if ((uVar8 & 0x80) != 0) {
    uVar8 = uVar8 & 0xffffff7f;
    iVar14 = local_158;
  }
  local_1c8 = uVar8;
  printf("MODE = %x\n",uVar8);
  fVar16 = DAT_00011b08;
  if (uVar8 == 0xb) {
    printf("%s, Unknow RGA mode\n",&DAT_00013548);
    return -1;
  }
  if (local_1c8 == 0) {
    local_1c0 = (void *)0x0;
    local_1b8 = (void *)0x0;
    lVar1 = DAT_00011038;
    uVar2 = DAT_00011040;
    lVar3 = DAT_00011048;
  }
  else {
    fVar15 = (float)get_bpp_from_format(0);
    fVar15 = fVar15 * fVar16;
    pvVar9 = malloc((uint)(0.0 < fVar15) * (int)fVar15);
    local_1b8 = pvVar9;
    fVar15 = (float)get_bpp_from_format(0);
    fVar15 = fVar15 * fVar16;
    local_1c0 = malloc((uint)(0.0 < fVar15) * (int)fVar15);
    iVar10 = get_buf_from_file(pvVar9,0,0x500,0x2d0,0);
    if (iVar10 == 0) {
      pcVar11 = "open file";
    }
    else {
      pcVar11 = "can not open file";
    }
    puts(pcVar11);
    if ((local_1c8 - 7 & 0xfffffffd) == 0) {
      iVar10 = get_buf_from_file(local_1c0,0,0x500,0x2d0,1);
      if (iVar10 == 0) {
        pcVar11 = "open file";
      }
      else {
        pcVar11 = "can not open file";
      }
      puts(pcVar11);
    }
    else {
      fVar16 = (float)get_bpp_from_format(0);
      memset(local_1c0,0,(uint)(0.0 < fVar16 * DAT_00011b08) * (int)(fVar16 * DAT_00011b08));
    }
    local_1b4 = importbuffer_virtualaddr(local_1b8,0x500,0x2d0,0);
    if (local_1b4 == 0) {
      puts("Failed to import virtualaddr for src channel!");
      return -1;
    }
    local_1c4 = importbuffer_virtualaddr(local_1c0,0x500,0x2d0,0);
    if (local_1c4 == 0) {
LAB_00011db8:
      puts("Failed to import virtualaddr for dst channel!");
      return -1;
    }
    wrapbuffer_handle((uint)&local_150,local_1b4,0x500,0x2d0);
    wrapbuffer_handle((uint)&local_f8,local_1c4,0x500,0x2d0);
    if ((local_144 == 0) ||
       (lVar1 = DAT_00011038, uVar2 = DAT_00011040, lVar3 = DAT_00011048, (int)local_ec == 0)) {
      uVar12 = imStrError_t(0xfffffffd);
      printf("%s, %s",&DAT_00013548,uVar12);
      return -1;
    }
  }
  do {
    lVar6 = DAT_00011048;
    uVar5 = DAT_00011040;
    lVar4 = DAT_00011038;
    DAT_00011038 = lVar1;
    DAT_00011040 = uVar2;
    DAT_00011048 = lVar3;
    if (iVar14 != 0) {
      iVar14 = iVar14 + -1;
      printf("This is %d time in the loop\n",DAT_00024168);
      DAT_00024168 = DAT_00024168 + 1;
    }
    puVar7 = local_170;
    switch(local_1c8) {
    case 0:
      uVar12 = querystring(local_180);
      printf("\n%s\n",uVar12);
      break;
    case 1:
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x169,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_254 = 0;
      local_258 = (undefined4 *)0x1;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imcopy(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("copying .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 2:
      releasebuffer_handle(local_1c4);
      if (local_178 == 0) {
        if (local_1c0 != (void *)0x0) {
          free(local_1c0);
        }
        fVar16 = DAT_00011b04;
        fVar15 = (float)get_bpp_from_format(0);
        fVar15 = fVar15 * fVar16;
        pvVar9 = malloc((uint)(0.0 < fVar15) * (int)fVar15);
        local_1c0 = pvVar9;
        fVar15 = (float)get_bpp_from_format(0);
        fVar15 = fVar15 * fVar16;
        memset(pvVar9,0,(uint)(0.0 < fVar15) * (int)fVar15);
        local_1c4 = importbuffer_virtualaddr(pvVar9,0x780,0x438,0);
        if (local_1c4 == 0) goto LAB_00011db8;
        iVar13 = 0x438;
        iVar10 = 0x780;
LAB_000117b0:
        wrapbuffer_handle((uint)&local_f8,local_1c4,iVar10,iVar13);
        if ((int)local_ec == 0) {
          uVar12 = imStrError_t(0xfffffffd);
          printf("%s, %s\n",&DAT_00013548,uVar12);
          return -1;
        }
      }
      else {
        if (local_178 == 1) {
          if (local_1c0 != (void *)0x0) {
            free(local_1c0);
          }
          fVar16 = DAT_00011b00;
          fVar15 = (float)get_bpp_from_format(0);
          fVar15 = fVar15 * fVar16;
          pvVar9 = malloc((uint)(0.0 < fVar15) * (int)fVar15);
          local_1c0 = pvVar9;
          fVar15 = (float)get_bpp_from_format(0);
          fVar15 = fVar15 * fVar16;
          memset(pvVar9,0,(uint)(0.0 < fVar15) * (int)fVar15);
          local_1c4 = importbuffer_virtualaddr(pvVar9,0x2d0,0x1e0,0);
          if (local_1c4 != 0) {
            iVar13 = 0x1e0;
            iVar10 = 0x2d0;
            goto LAB_000117b0;
          }
          goto LAB_00011db8;
        }
        local_1c4 = -1;
      }
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x1f1,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_250 = 0;
      local_254 = 1;
      local_258 = (undefined4 *)0x0;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imresize(0,local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("resizing .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 3:
      local_1b0 = lVar4;
      local_1a8 = uVar5;
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x100000;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x208,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_244 = 0;
      local_248 = 1;
      local_258 = (undefined4 *)local_1b0;
      local_254 = local_1b0._4_4_;
      local_250 = (undefined4)local_1a8;
      local_24c = local_1a8._4_4_;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imcrop(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("cropping .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 4:
      if (local_170 == (undefined4 *)0x4 || local_170 == (undefined4 *)0x1) {
        auVar17._4_12_ = auStack_140;
        auVar17._0_4_ = local_144;
        auVar17 = vrev(auVar17,4);
        local_ec = auVar17._0_8_;
        local_e4 = auVar17._8_8_;
      }
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = puVar7;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x223,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_258 = puVar7;
      local_254 = 1;
      local_250 = 0;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imrotate(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("rotating .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 5:
      local_1bc = puStack_16c;
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x237,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_250 = 0;
      local_258 = local_1bc;
      local_254 = 1;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imflip(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("flipping .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 6:
      local_1b0 = lVar6;
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x24c,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_254 = 300;
      local_258 = (undefined4 *)0x12c;
      local_250 = 1;
      local_24c = 0;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imtranslate(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("translating .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 7:
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x25e,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_250 = 0;
      local_254 = 1;
      local_258 = (undefined4 *)0x40;
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imblend(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("blending .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    case 8:
      local_134 = 0;
      local_dc = 0xa00;
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x0;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      local_1bc = &local_2b0;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x279,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_248 = 0;
      local_24c = 1;
      local_250 = 0;
      local_254 = 0xa00;
      local_258 = (undefined4 *)0x0;
      memcpy(local_1bc,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      uVar12 = imcvtcolor(local_150,uStack_14c,uStack_148,local_144);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(uVar12);
      printf("cvtcolor .... cost time %ld us, %s\n",iVar10,uVar12);
      if (iVar14 != 0) goto LAB_00010ffc;
LAB_00010e34:
      releasebuffer_handle(local_1b4);
      releasebuffer_handle(local_1c4);
      if (local_1b8 != (void *)0x0) {
        free(local_1b8);
      }
      pvVar9 = local_1c0;
      if (local_1c0 != (void *)0x0) {
        output_buf_data_to_file(local_1c0,local_dc,(int)local_e4,local_e4._4_4_,0);
        free(pvVar9);
      }
      return iVar14;
    case 9:
      local_1a0 = lVar4;
      local_198 = uVar5;
      local_1bc = puStack_15c;
      memset(auStack_a0,0,0x58);
      uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1d0 = (undefined4 *)0x200000;
      local_190 = 0;
      local_1e0 = 0;
      local_1f0 = (undefined4)local_1a0;
      uStack_1ec = local_1a0._4_4_;
      uStack_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      local_200 = (undefined4 *)local_1b0;
      uStack_1fc = local_1b0._4_4_;
      uStack_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_18c = uStack_1dc;
      uStack_188 = uStack_1d8;
      uStack_184 = uStack_1d4;
      memcpy(&local_258,auStack_a0,0x58);
      memcpy(&local_2b0,&local_f8,0x58);
      memcpy(&stack0xfffffd08,auStack_140,0x48);
      iVar10 = imcheck_t(local_150,uStack_14c,uStack_148,local_144);
      if (iVar10 != 2) {
        uVar12 = imStrError_t();
        printf("%d, check error! %s\n",0x292,uVar12);
        return -1;
      }
      gettimeofday((timeval *)&DAT_00024198,(__timezone_ptr_t)0x0);
      local_2a0 = local_1bc;
      local_298 = 0;
      local_29c = 1;
      local_2b0 = (undefined4)local_1a0;
      uStack_2ac = local_1a0._4_4_;
      uStack_2a8 = (undefined4)local_198;
      uStack_2a4 = local_198._4_4_;
      memcpy(&stack0xfffffd08,(void *)((int)&local_ec + 4),0x48);
      local_1bc = (undefined4 *)imfill(local_f8,uStack_f4,uStack_f0,(int)local_ec);
      gettimeofday((timeval *)&DAT_00024190,(__timezone_ptr_t)0x0);
      iVar10 = (DAT_00024190 - DAT_00024198) * 1000000 + (DAT_00024194 - DAT_0002419c);
      DAT_000241a0 = iVar10;
      uVar12 = imStrError_t(local_1bc);
      printf("filling .... cost time %ld us, %s\n",iVar10,uVar12);
      break;
    default:
      printf("%s, Invalid mode\n",&DAT_00013548);
    }
    if (iVar14 == 0) goto LAB_00010e34;
LAB_00010ffc:
    usleep(200000);
    lVar1 = DAT_00011038;
    uVar2 = DAT_00011040;
    lVar3 = DAT_00011048;
    DAT_00011048 = lVar6;
    DAT_00011040 = uVar5;
    DAT_00011038 = lVar4;
  } while( true );
}



/* ===== entry @ 00011e3c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024034)
            (DAT_00011e70,param_2,&stack0x00000004,DAT_00011e74,DAT_00011e6c,param_1);
  return;
}



/* ===== FUN_00011e78 @ 00011e78 size=32 ===== */

void FUN_00011e78(void)

{
  if (DAT_00011e9c == DAT_00011e98) {
    return;
  }
  if (DAT_00011ea0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011ea0)();
  return;
}



/* ===== _FINI_0 @ 00011edc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011f18;
  if (*DAT_00011f18 != '\0') {
    return;
  }
  FUN_00011e78();
  if (DAT_00011f1c != 0) {
    __deregister_frame_info(DAT_00011f20);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011f24 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011f48 != 0) {
    __register_frame_info(DAT_00011f50,DAT_00011f4c);
  }
  if ((DAT_00011ed4 - DAT_00011ed0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011ed8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011ed8)();
  return;
}



/* ===== FUN_00011f54 @ 00011f54 size=56 ===== */

void FUN_00011f54(void)

{
  puts(
      "\n============================================================================================="
      );
  puts(
      "   usage: rgaImDemo [--help/-h] [--while/-w=(time)] [--querystring/--querystring=<options>]\n                    [--copy] [--resize=<up/down>] [--crop] [--rotate=90/180/270]\n                    [--flip=H/V] [--translate] [--blend] [--cvtcolor]\n                    [--fill=blue/green/red]"
      );
  puts(
      "\t --help/-h     Call help\n\t --while/w     Set the loop mode. Users can set the number of cycles by themselves.\n\t --querystring You can print the version or support information corresponding to the current version of RGA according to the options.\n\t               If there is no input options, all versions and support information of the current version of RGA will be printed.\n\t               <options>:\n\t               vendor       \tPrint vendor information.\n\t               version      \tPrint RGA version, and librga/im2d_api version.\n\t               maxinput     \tPrint max input resolution.\n\t               maxoutput    \tPrint max output resolution.\n\t               scalelimit   \tPrint scale limit.\n\t               inputformat  \tPrint supported input formats.\n\t               outputformat \tPrint supported output formats.\n\t               expected     \tPrint expected performance.\n\t               all          \tPrint all information.\n\t --copy        Copy the image by RGA.The default is 720p to 720p.\n\t --resize      resize the image by RGA.You can choose to up(720p->1080p) or down(720p->480p).\n\t --crop        Crop the image by RGA.By default, a picture of 300*300 size is cropped from (100,100).\n\t --rotate      Rotate the image by RGA.You can choose to rotate 90/180/270 degrees.\n\t --flip        Flip the image by RGA.You can choice of horizontal flip or vertical flip.\n\t --translate   Translate the image by RGA.Default translation (300,300).\n\t --blend       Blend the image by RGA.Default, Porter-Duff \'SRC over DST\'.\n\t --cvtcolor    Modify the image format and color space by RGA.The default is RGBA8888 to NV12.\n\t --fill        Fill the image by RGA to blue, green, red, when you set the option to the corresponding color."
      );
  puts(
      "=============================================================================================\n"
      );
  return;
}



/* ===== FUN_00011f8c @ 00011f8c size=668 ===== */

undefined4 FUN_00011f8c(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"d");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"vendor"), iVar1 == 0)) {
    puts("im2d querystring .. vendor ...");
    return 0;
  }
  iVar1 = strcmp(param_1,"v");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"version"), iVar1 == 0)) {
    puts("im2d querystring .. vendor ...");
    return 1;
  }
  iVar1 = strcmp(param_1,"i");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"maxinput"), iVar1 == 0)) {
    puts("im2d querystring .. max input ...");
    return 2;
  }
  iVar1 = strcmp(param_1,"o");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"maxoutput"), iVar1 == 0)) {
    puts("im2d querystring .. max output ...");
    return 3;
  }
  iVar1 = strcmp(param_1,"s");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"scalelimit"), iVar1 == 0)) {
    puts("im2d querystring .. scale limit ...");
    return 5;
  }
  iVar1 = strcmp(param_1,"n");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"inputformat"), iVar1 == 0)) {
    puts("im2d querystring .. input format ...");
    return 6;
  }
  iVar1 = strcmp(param_1,"u");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"outputformat"), iVar1 == 0)) {
    puts("im2d querystring .. output format ...");
    return 7;
  }
  iVar1 = strcmp(param_1,"e");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_1,"expected"), iVar1 != 0)) {
    iVar1 = strcmp(param_1,"a");
    if (((iVar1 != 0) && (iVar1 = strcmp(param_1,"all"), iVar1 != 0)) &&
       (iVar1 = strcmp(param_1," "), iVar1 != 0)) {
      printf("%s, Invalid instruction\n","readInfo");
      return 10;
    }
    puts("im2d querystring .. all ...");
    return 10;
  }
  puts("im2d querystring .. expected ...");
  return 9;
}



/* ===== FUN_00012228 @ 00012228 size=500 ===== */

undefined4 FUN_00012228(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"up");
  if (iVar1 == 0) {
    puts("up resize ...");
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"down");
    if (iVar1 == 0) {
      puts("down resize ...");
      return 1;
    }
    iVar1 = strcmp(param_1,"90");
    if (iVar1 == 0) {
      puts("rotation 90 ...");
      return 1;
    }
    iVar1 = strcmp(param_1,"180");
    if (iVar1 == 0) {
      puts("nrotation 180 ...");
      uVar2 = 2;
    }
    else {
      iVar1 = strcmp(param_1,"270");
      if (iVar1 == 0) {
        puts("rotation 270 ...");
        uVar2 = 4;
      }
      else {
        iVar1 = strcmp(param_1,"H");
        if (iVar1 == 0) {
          puts("flip H ...");
          uVar2 = 8;
        }
        else {
          iVar1 = strcmp(param_1,"V");
          if (iVar1 == 0) {
            puts("flip V ...");
            uVar2 = 0x10;
          }
          else {
            iVar1 = strcmp(param_1,"blue");
            if (iVar1 == 0) {
              puts("fill blue ...");
              uVar2 = 0xffff0000;
            }
            else {
              iVar1 = strcmp(param_1,"green");
              if (iVar1 != 0) {
                iVar1 = strcmp(param_1,"red");
                if (iVar1 == 0) {
                  puts("fill red ...");
                  return 0xff0000ff;
                }
                printf("%s, Invalid parameter\n","readParm");
                return 0xffffffff;
              }
              puts("fill green ...");
              uVar2 = 0xff00ff00;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0001241c @ 0001241c size=772 ===== */

uint FUN_0001241c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  uVar3 = 0;
  local_30 = 0;
  local_2c[0] = 0x3a7768;
LAB_0001245c:
  iVar1 = getopt_long(param_1,param_2,local_2c,&DAT_00024098,&local_30);
  if (iVar1 == -1) {
LAB_000127dc:
    puts(
        "\n============================================================================================="
        );
    puts(
        "   usage: rgaImDemo [--help/-h] [--while/-w=(time)] [--querystring/--querystring=<options>]\n                    [--copy] [--resize=<up/down>] [--crop] [--rotate=90/180/270]\n                    [--flip=H/V] [--translate] [--blend] [--cvtcolor]\n                    [--fill=blue/green/red]"
        );
    puts(
        "\t --help/-h     Call help\n\t --while/w     Set the loop mode. Users can set the number of cycles by themselves.\n\t --querystring You can print the version or support information corresponding to the current version of RGA according to the options.\n\t               If there is no input options, all versions and support information of the current version of RGA will be printed.\n\t               <options>:\n\t               vendor       \tPrint vendor information.\n\t               version      \tPrint RGA version, and librga/im2d_api version.\n\t               maxinput     \tPrint max input resolution.\n\t               maxoutput    \tPrint max output resolution.\n\t               scalelimit   \tPrint scale limit.\n\t               inputformat  \tPrint supported input formats.\n\t               outputformat \tPrint supported output formats.\n\t               expected     \tPrint expected performance.\n\t               all          \tPrint all information.\n\t --copy        Copy the image by RGA.The default is 720p to 720p.\n\t --resize      resize the image by RGA.You can choose to up(720p->1080p) or down(720p->480p).\n\t --crop        Crop the image by RGA.By default, a picture of 300*300 size is cropped from (100,100).\n\t --rotate      Rotate the image by RGA.You can choose to rotate 90/180/270 degrees.\n\t --flip        Flip the image by RGA.You can choice of horizontal flip or vertical flip.\n\t --translate   Translate the image by RGA.Default translation (300,300).\n\t --blend       Blend the image by RGA.Default, Porter-Duff \'SRC over DST\'.\n\t --cvtcolor    Modify the image format and color space by RGA.The default is RGBA8888 to NV12.\n\t --fill        Fill the image by RGA to blue, green, red, when you set the option to the corresponding color."
        );
    puts(
        "=============================================================================================\n"
        );
    return 0xb;
  }
  printf("Start selecting mode %x\n",uVar3);
  switch(iVar1) {
  case 0x30:
    puts("im2d querystring ..");
    if (optarg == (char *)0x0) {
      *param_3 = 10;
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_00011f8c();
      uVar3 = 0;
      *param_3 = uVar2;
    }
    break;
  case 0x31:
    puts("im2d copy ..");
    uVar3 = uVar3 | 1;
    break;
  case 0x32:
    puts("im2d resize ..");
    if (optarg == (char *)0x0) {
      iVar1 = param_3[2];
    }
    else {
      iVar1 = FUN_00012228();
      param_3[2] = iVar1;
    }
    if (iVar1 == -1) goto LAB_000127dc;
    uVar3 = uVar3 | 2;
    break;
  case 0x33:
    puts("im2d crop ..");
    uVar3 = uVar3 | 3;
    break;
  case 0x34:
    puts("im2d rotate ..");
    if (optarg == (char *)0x0) {
      iVar1 = param_3[4];
    }
    else {
      iVar1 = FUN_00012228();
      param_3[4] = iVar1;
    }
    if (iVar1 == -1) goto LAB_000127dc;
    uVar3 = uVar3 | 4;
    break;
  case 0x35:
    puts("im2d flip ..");
    if (optarg == (char *)0x0) {
      iVar1 = param_3[5];
    }
    else {
      iVar1 = FUN_00012228();
      param_3[5] = iVar1;
    }
    if (iVar1 == -1) goto LAB_000127dc;
    uVar3 = uVar3 | 5;
    break;
  case 0x36:
    puts("im2d translate ..");
    uVar3 = uVar3 | 6;
    break;
  case 0x37:
    puts("im2d blend ..");
    uVar3 = uVar3 | 7;
    break;
  case 0x38:
    puts("im2d cvtcolor ..");
    uVar3 = uVar3 | 8;
    break;
  case 0x39:
    puts("im2d fill ..");
    if (optarg == (char *)0x0) {
      iVar1 = param_3[9];
    }
    else {
      iVar1 = FUN_00012228();
      param_3[9] = iVar1;
    }
    if (iVar1 == -1) goto LAB_000127dc;
    uVar3 = uVar3 | 9;
    break;
  default:
    printf("%s, no options!\n","readArguments");
    goto LAB_000127dc;
  case 0x68:
    puts(
        "\n============================================================================================="
        );
    uVar3 = uVar3 | 0xb;
    puts(
        "   usage: rgaImDemo [--help/-h] [--while/-w=(time)] [--querystring/--querystring=<options>]\n                    [--copy] [--resize=<up/down>] [--crop] [--rotate=90/180/270]\n                    [--flip=H/V] [--translate] [--blend] [--cvtcolor]\n                    [--fill=blue/green/red]"
        );
    puts(
        "\t --help/-h     Call help\n\t --while/w     Set the loop mode. Users can set the number of cycles by themselves.\n\t --querystring You can print the version or support information corresponding to the current version of RGA according to the options.\n\t               If there is no input options, all versions and support information of the current version of RGA will be printed.\n\t               <options>:\n\t               vendor       \tPrint vendor information.\n\t               version      \tPrint RGA version, and librga/im2d_api version.\n\t               maxinput     \tPrint max input resolution.\n\t               maxoutput    \tPrint max output resolution.\n\t               scalelimit   \tPrint scale limit.\n\t               inputformat  \tPrint supported input formats.\n\t               outputformat \tPrint supported output formats.\n\t               expected     \tPrint expected performance.\n\t               all          \tPrint all information.\n\t --copy        Copy the image by RGA.The default is 720p to 720p.\n\t --resize      resize the image by RGA.You can choose to up(720p->1080p) or down(720p->480p).\n\t --crop        Crop the image by RGA.By default, a picture of 300*300 size is cropped from (100,100).\n\t --rotate      Rotate the image by RGA.You can choose to rotate 90/180/270 degrees.\n\t --flip        Flip the image by RGA.You can choice of horizontal flip or vertical flip.\n\t --translate   Translate the image by RGA.Default translation (300,300).\n\t --blend       Blend the image by RGA.Default, Porter-Duff \'SRC over DST\'.\n\t --cvtcolor    Modify the image format and color space by RGA.The default is RGBA8888 to NV12.\n\t --fill        Fill the image by RGA to blue, green, red, when you set the option to the corresponding color."
        );
    puts(
        "=============================================================================================\n"
        );
    break;
  case 0x77:
    goto switchD_00012498_caseD_77;
  }
  return uVar3;
switchD_00012498_caseD_77:
  printf("im2d while .. ");
  if (optarg == (char *)0x0) {
    iVar1 = param_3[10];
  }
  else {
    iVar1 = atoi(optarg);
    param_3[10] = iVar1;
  }
  if (iVar1 == 0) {
    puts("Option must be a non-zero number.");
  }
  else {
    uVar3 = 0x80;
    printf("%d time.\n");
  }
  goto LAB_0001245c;
}



/* ===== _fini @ 00012840 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imflip @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imflip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::querystring @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void querystring(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imStrError_t @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imStrError_t(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imblend @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imblend(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imtranslate @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imtranslate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::releasebuffer_handle @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void releasebuffer_handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imcvtcolor @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imcvtcolor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imcrop @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imcrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wrapbuffer_handle @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wrapbuffer_handle(uint param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imfill @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imfill(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imrotate @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imrotate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imresize @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imresize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::importbuffer_virtualaddr @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void importbuffer_virtualaddr(void *param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_buf_from_file @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void get_buf_from_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imcheck_t @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imcheck_t(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::imcopy @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void imcopy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::output_buf_data_to_file @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void output_buf_data_to_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_bpp_from_format @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void get_bpp_from_format(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



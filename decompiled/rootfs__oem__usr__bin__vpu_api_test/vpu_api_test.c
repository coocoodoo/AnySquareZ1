// vpu_api_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001093c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::printf @ 00010960 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002300c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::usleep @ 0001096c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023010)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023014)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::puts @ 00010984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023018)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002301c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 0001099c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023020)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dlclose @ 000109a8 size=12 ===== */

void dlclose(void)

{
  (*(code *)PTR_dlclose_00023024)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000109b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023028)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000109c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002302c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000109cc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023030)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000109d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00023034)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000109e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00023038)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::dlopen @ 000109f0 size=12 ===== */

void dlopen(void)

{
  (*(code *)PTR_dlopen_0002303c)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 000109fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00023040)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::fread @ 00010a08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00023044)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::dlsym @ 00010a20 size=12 ===== */

void dlsym(void)

{
  (*(code *)PTR_dlsym_0002304c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023050)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00010a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_00023054)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010a44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002305c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023060)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023064)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010a74 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023068)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010a80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002306c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010a8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00023070)(__filename);
  return pFVar1;
}



/* ===== main @ 00010a98 size=4796 ===== */

int main(int param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  FILE *__s;
  void *pvVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  void *pvVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  int *piVar19;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  undefined4 uVar20;
  code *pcVar21;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  char *__s1;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  bool bVar30;
  undefined4 uVar31;
  uint uVar35;
  undefined1 in_q4 [16];
  uint uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  FILE *local_250;
  uint local_24c;
  uint local_238;
  size_t local_234;
  void *local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  uint local_200;
  uint uStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int local_1e8;
  uint uStack_1e4;
  char acStack_1e0 [200];
  char acStack_118 [200];
  char local_50;
  char local_4f;
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  
  uStack_3c = in_q4._0_8_;
  uStack_34 = in_q4._8_8_;
  iVar26 = DAT_00010ff4 + 0x10ac0;
  puts((char *)(DAT_00010ff0 + 0x10ab8));
  if (param_1 == 1) {
    FUN_00012030();
    return 0;
  }
  iVar5 = dlopen(DAT_00010ff8 + 0x10ad8,0x101);
  *(int *)(DAT_00010ffc + 0x10ae4) = iVar5;
  if (iVar5 == 0) {
    iVar26 = -1;
    puts((char *)(DAT_000110a0 + 0x11594));
  }
  else {
    iVar6 = dlsym(iVar5,DAT_00011000 + 0x10afc);
    piVar28 = *(int **)(iVar26 + DAT_00011004);
    iVar15 = DAT_00011008 + 0x10b10;
    *piVar28 = iVar6;
    iVar6 = dlsym(iVar5,iVar15);
    piVar29 = *(int **)(iVar26 + DAT_0001100c);
    iVar15 = DAT_00011010 + 0x10b2c;
    *piVar29 = iVar6;
    iVar6 = dlsym(iVar5,iVar15);
    piVar27 = *(int **)(iVar26 + DAT_00011014);
    iVar15 = DAT_00011018 + 0x10b48;
    *piVar27 = iVar6;
    iVar6 = dlsym(iVar5,iVar15);
    iVar15 = *piVar28;
    piVar19 = *(int **)(iVar26 + DAT_0001101c);
    *piVar19 = iVar6;
    if (((iVar15 == 0) || (*piVar29 == 0)) || (*piVar27 == 0 || iVar6 == 0)) {
      iVar26 = -1;
      printf((char *)(DAT_0001108c + 0x1134c),iVar15,*piVar29);
      printf((char *)(DAT_00011090 + 0x11364),*piVar27,*piVar19);
    }
    else {
      printf((char *)(DAT_00011020 + 0x10bac),iVar5,iVar15);
      memset(&local_1f0,0,0x1b0);
      bVar30 = true;
      local_1e8 = 1;
      if (1 < param_1) {
        __s2 = (char *)(DAT_00011024 + 0x10be0);
        pcVar16 = (char *)(DAT_00011028 + 0x10bec);
        __s2_00 = (char *)(DAT_0001102c + 0x10bf4);
        __s2_01 = (char *)(DAT_00011030 + 0x10c00);
        iVar26 = 1;
LAB_00010c04:
        iVar5 = iVar26 + 1;
        if (bVar30) {
          do {
            pcVar17 = (char *)param_2[1];
            if ((*pcVar17 != '-') || (cVar18 = pcVar17[1], cVar18 == '\0')) goto joined_r0x000112b8;
            if (cVar18 == '-') {
              cVar18 = pcVar17[2];
              if (cVar18 == '\0') goto LAB_00011598;
              pcVar17 = pcVar17 + 1;
            }
            __s1 = pcVar17 + 1;
            switch(cVar18) {
            case 'h':
              if ((pcVar17[2] != '\0') &&
                 (iVar15 = strncmp(__s1,(char *)(DAT_0001109c + 0x114d4),4), iVar6 = DAT_00011bf0,
                 iVar26 = DAT_00011bec, iVar15 == 0)) {
                puts((char *)(DAT_00011be8 + 0x11e10));
                iVar5 = 0;
                puVar23 = (undefined4 *)(iVar26 + 0x11e1c);
                do {
                  iVar5 = iVar5 + 1;
                  printf((char *)(iVar6 + 0x11e20),*puVar23,puVar23[1],puVar23[2]);
                  puVar23 = puVar23 + 3;
                } while (iVar5 != 8);
                return 0;
              }
              if ((char *)param_2[2] != (char *)0x0) {
                iStack_1ec = atoi((char *)param_2[2]);
                goto joined_r0x000112b8;
              }
              puts((char *)(DAT_00011bc0 + 0x11d08));
              goto LAB_000115b8;
            case 'i':
              pcVar17 = (char *)param_2[2];
              if (pcVar17 != (char *)0x0) {
                sVar13 = strlen(pcVar17);
                memcpy(acStack_1e0,pcVar17,sVar13);
                sVar13 = strlen(pcVar17);
                local_50 = '\x01';
                acStack_1e0[sVar13] = '\0';
                goto joined_r0x000112b8;
              }
              puts((char *)(DAT_000110a4 + 0x115b8));
              goto LAB_000115b8;
            case 'j':
              break;
            case 'k':
              break;
            case 'l':
              break;
            case 'm':
              break;
            case 'n':
              break;
            case 'o':
              pcVar17 = (char *)param_2[2];
              if (pcVar17 != (char *)0x0) {
                sVar13 = strlen(pcVar17);
                memcpy(acStack_118,pcVar17,sVar13);
                sVar13 = strlen(pcVar17);
                local_4f = '\x01';
                acStack_118[sVar13] = '\0';
                goto joined_r0x000112b8;
              }
              puts((char *)(DAT_00011bc4 + 0x11d18));
              goto LAB_000115b8;
            case 'p':
              break;
            case 'q':
              break;
            case 'r':
              break;
            case 's':
              break;
            case 't':
              if ((char *)param_2[2] != (char *)0x0) {
                local_1e8 = atoi((char *)param_2[2]);
                goto joined_r0x000112b8;
              }
              puts((char *)(DAT_00011bc8 + 73000));
              goto LAB_000115b8;
            case 'u':
              break;
            case 'v':
              break;
            case 'w':
              if ((char *)param_2[2] != (char *)0x0) {
                local_1f0 = atoi((char *)param_2[2]);
joined_r0x000112b8:
                if (param_1 != iVar5) goto LAB_000112bc;
                goto LAB_00010c30;
              }
              puts((char *)(DAT_00011bbc + 0x11cf8));
              goto LAB_000115b8;
            }
            if ((pcVar17[2] == '\0') || (pcVar17 = (char *)param_2[2], pcVar17 == (char *)0x0))
            goto LAB_000115b8;
            iVar26 = strncmp(__s1,__s2,6);
            if (iVar26 == 0) {
              printf(pcVar16,pcVar17);
              uStack_1e4 = atoi((char *)param_2[2]);
            }
            else {
              iVar26 = strncmp(__s1,__s2_00,7);
              if (iVar26 == 0) {
                local_4c = atoi(pcVar17);
              }
              else {
                iVar26 = strncmp(__s1,__s2_01,2);
                if (iVar26 != 0) goto LAB_000115b8;
                iVar26 = atoi(pcVar17);
                local_48 = VectorShiftRight(CONCAT44(iVar26,iVar26),0x20);
              }
            }
            if (param_1 == iVar5) goto LAB_00010c30;
LAB_000112bc:
            iVar5 = iVar5 + 1;
            param_2 = param_2 + 1;
          } while( true );
        }
        if (param_1 != iVar5) {
          iVar26 = iVar26 + 2;
          goto LAB_00010c20;
        }
        goto LAB_00010c30;
      }
LAB_000115b8:
      iVar26 = -0x65;
      puts((char *)(DAT_000110a8 + 0x115c8));
      FUN_00012030();
      puts((char *)(DAT_000110ac + 0x115d8));
      FUN_00012030();
    }
  }
  goto LAB_00011364;
LAB_00011598:
  if (param_1 == iVar5) goto LAB_00010c30;
  iVar26 = iVar5 + 1;
LAB_00010c20:
  param_2 = param_2 + 2;
  bVar30 = false;
  if (param_1 == iVar26) goto LAB_00010c30;
  goto LAB_00010c04;
LAB_00010c30:
  if (local_1e8 != 1) {
    if (local_1e8 != 2) {
      iVar26 = -0x65;
      goto LAB_00011364;
    }
    local_234 = 0;
    if ((((local_50 == '\0') || (local_1f0 == 0)) || (iStack_1ec == 0)) || (uStack_1e4 < 2)) {
      puts((char *)(DAT_000110b0 + 0x11608));
      if (local_50 != '\0') {
        if (local_1e8 == 1) {
          iVar26 = DAT_00011b98 + 0x11c38;
        }
        else {
          iVar26 = DAT_000110b4 + 0x11638;
        }
        goto LAB_00010c88;
      }
      puts((char *)(DAT_00011b9c + 0x11c44));
      pFVar7 = (FILE *)0x0;
LAB_00011c44:
      iVar5 = *(int *)(DAT_00011ba0 + 0x11c50);
      if (iVar5 != 0) {
        __s = (FILE *)0x0;
        iVar26 = -0x65;
        goto LAB_0001123c;
      }
      iVar26 = -0x65;
      if (pFVar7 != (FILE *)0x0) {
        __s = (FILE *)0x0;
        goto LAB_00011a48;
      }
    }
    else {
      iVar26 = DAT_00011034 + 0x10c8c;
LAB_00010c88:
      printf((char *)(DAT_00011038 + 0x10ca0),local_1f0,iStack_1ec,uStack_1e4,iVar26,acStack_1e0);
      pFVar7 = fopen64(acStack_1e0,(char *)(DAT_0001103c + 0x10cb0));
      if (pFVar7 == (FILE *)0x0) {
        puts((char *)(DAT_00011bb4 + 0x11cd8));
        goto LAB_00011c44;
      }
      __s = (FILE *)0x0;
      if (local_4f != '\0') {
        printf((char *)(DAT_00011040 + 0x10cd8),acStack_118);
        __s = fopen64(acStack_118,(char *)(DAT_00011044 + 0x10ce8));
        if (__s == (FILE *)0x0) {
          puts((char *)(DAT_00011be0 + 0x11de4));
          goto LAB_00011c44;
        }
      }
      pvVar8 = calloc(0xac,1);
      piVar19 = (int *)(DAT_00011048 + 0x10d08);
      *piVar19 = (int)pvVar8;
      if (pvVar8 == (void *)0x0) {
        iVar26 = -1;
        printf((char *)(DAT_00011c04 + 0x11f04));
        goto LAB_00011364;
      }
      uVar25 = 0;
      uVar35 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar36 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined8 *)((int)pvVar8 + 4) = DAT_00010fd0;
      *(ulonglong *)((int)pvVar8 + 0xc) = CONCAT44(iStack_1ec,local_1f0);
      fseek(pFVar7,0,2);
      lVar9 = ftell(pFVar7);
      fseek(pFVar7,0,0);
      local_218 = CONCAT44(uVar35,uVar25);
      local_210 = CONCAT44(uVar36,uVar24);
      local_208 = CONCAT44(uVar35,uVar25);
      uStack_22c = uVar25;
      uStack_228 = uVar35;
      uStack_224 = uVar24;
      local_220 = uVar25;
      uStack_21c = uVar35;
      local_200 = uVar25;
      uStack_1fc = uVar35;
      local_1f8 = uVar25;
      uStack_1f4 = uVar35;
      local_230 = malloc(iStack_1ec * local_1f0);
      if (((local_230 == (void *)0x0) ||
          (iVar6 = (*(code *)*piVar28)(piVar19), iVar5 = iStack_1ec, iVar26 = local_1f0, iVar6 != 0)
          ) || (iVar6 = *piVar19, iVar6 == 0)) {
        iVar26 = -0x68;
      }
      else {
        *(int *)(iVar6 + 4) = local_1e8;
        *(uint *)(iVar6 + 8) = uStack_1e4;
        *(int *)(iVar6 + 0xc) = local_1f0;
        *(int *)(iVar6 + 0x10) = iStack_1ec;
        *(undefined4 *)(iVar6 + 0x20) = 1;
        puVar10 = malloc(0x40);
        uVar4 = DAT_00010fe0;
        uVar3 = DAT_00010fd8;
        *(uint **)(iVar6 + 0x80) = puVar10;
        *puVar10 = uVar25;
        puVar10[1] = uVar35;
        puVar10[2] = uVar24;
        puVar10[3] = uVar36;
        puVar10[4] = uVar25;
        puVar10[5] = uVar35;
        puVar10[6] = uVar25;
        puVar10[7] = uVar35;
        puVar10[8] = uVar25;
        puVar10[9] = uVar35;
        puVar10[10] = uVar25;
        puVar10[0xb] = uVar35;
        puVar10[0xc] = uVar25;
        puVar10[0xd] = uVar35;
        puVar10[0xe] = uVar25;
        puVar10[0xf] = uVar35;
        piVar27 = *(int **)(iVar6 + 0x80);
        piVar27[1] = iVar5;
        *piVar27 = iVar26;
        piVar27[4] = 0x19;
        piVar27[2] = 0;
        piVar27[3] = 4000000;
        *(undefined8 *)(piVar27 + 6) = uVar3;
        *(undefined8 *)(piVar27 + 8) = uVar4;
        piVar27[0xb] = 100;
        piVar27[0xc] = 0x28;
        iVar26 = (**(code **)(iVar6 + 0x88))(iVar6,0);
        if (iVar26 == 0) {
          printf((char *)(DAT_0001104c + 0x10e88),*(undefined4 *)(*piVar19 + 0x18));
          if ((__s != (FILE *)0x0) && (0 < *(int *)(*piVar19 + 0x18))) {
            printf((char *)(DAT_00011050 + 0x10eac));
            fwrite(*(void **)(*piVar19 + 0x14),1,*(size_t *)(*piVar19 + 0x18),__s);
            fflush(__s);
          }
          iVar26 = (**(code **)(*(int *)(DAT_00011054 + 0x10ee0) + 0x98))
                             (*(int *)(DAT_00011054 + 0x10ee0),2,&local_234);
          if (iVar26 != 0) {
            printf((char *)(DAT_00011bd8 + 0x11d7c));
          }
          iVar26 = (**(code **)(*(int *)(DAT_00011058 + 0x10f04) + 0x98))
                             (*(int *)(DAT_00011058 + 0x10f04),1,piVar27);
          if (iVar26 != 0) {
            printf((char *)(DAT_00011bd4 + 0x11d6c));
          }
          iVar26 = DAT_0001105c;
          piVar27[2] = 1;
          iVar26 = (**(code **)(*(int *)(iVar26 + 0x10f2c) + 0x98))
                             (*(int *)(iVar26 + 0x10f2c),0,piVar27);
          if (iVar26 != 0) {
            printf((char *)(DAT_00011bd0 + 0x11d5c),iVar26);
          }
          iVar5 = DAT_00011064;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = DAT_00010fe8;
          auVar32 = auVar2 << 0x40;
          printf((char *)(DAT_00011060 + 0x10f58),lVar9);
          pcVar16 = (char *)(DAT_0001106c + 0x10f78);
          iVar15 = *(int *)(*(int *)(DAT_00011068 + 0x10f70) + 0x10);
          iVar6 = *(int *)(*(int *)(DAT_00011068 + 0x10f70) + 0xc);
          uVar24 = iVar15 + 0xfU & 0xfffffff0;
          uVar25 = uVar24 * (iVar6 + 0xfU & 0xfffffff0) * 3 >> 1;
          uVar35 = uVar25;
          printf((char *)(DAT_00011070 + 0x10f84));
          while (lVar12 = ftell(pFVar7), lVar12 < lVar9) {
            if (local_218._4_4_ == 0) {
              if ((void *)local_218 == (void *)0x0) {
                pvVar8 = malloc(uVar25);
                local_218 = CONCAT44(local_218._4_4_,pvVar8);
joined_r0x000110ec:
                uVar24 = uVar25;
                if (pvVar8 == (void *)0x0) {
                  iVar26 = -0x68;
                  goto LAB_00011208;
                }
              }
              else {
                uVar24 = local_1f8;
                if (local_1f8 < uVar25) {
                  pvVar8 = realloc((void *)local_218,uVar25);
                  local_218 = CONCAT44(local_218._4_4_,pvVar8);
                  goto joined_r0x000110ec;
                }
              }
              local_1f8 = uVar24;
              iVar11 = FUN_00012068((void *)local_218,(uint)(iVar15 * iVar6 * 3) >> 1,pFVar7);
              if (iVar11 != 0) goto LAB_00011a7c;
              local_208 = auVar32._0_8_;
              local_218 = CONCAT44(uVar25,(void *)local_218);
              uVar24 = ftell(pFVar7);
              uVar20 = auVar32._4_4_;
              uVar31 = auVar32._0_4_;
              auVar32._0_8_ = VectorAdd(auVar32._0_8_,auVar32._8_8_,8);
              printf(pcVar16,uVar25,uVar31,uVar20,uVar24);
            }
            pcVar21 = *(code **)(*(int *)(iVar5 + 0x10f6c) + 0x90);
            iVar26 = (*pcVar21)(*(int *)(iVar5 + 0x10f6c),&local_218,&local_230,pcVar21,uVar24,
                                uVar35);
            if (iVar26 < 0) {
              iVar26 = -0xbe;
              goto LAB_00011a7c;
            }
            local_218 = local_218 & 0xffffffff;
            printf((char *)(DAT_00011074 + 0x11168),uStack_22c,0);
            if ((uStack_22c != 0) && (local_230 != (void *)0x0)) {
              if (__s != (FILE *)0x0) {
                printf((char *)(DAT_00011078 + 0x11198));
                fwrite(local_230,1,uStack_22c,__s);
                fflush(__s);
              }
              uStack_22c = 0;
            }
            usleep(3000);
          }
          puts((char *)(DAT_00011bcc + 0x11d3c));
        }
        else {
          iVar26 = -0x69;
          printf((char *)(DAT_00011bb0 + 0x11cc8));
        }
      }
LAB_00011a7c:
      if ((void *)local_218 != (void *)0x0) {
        free((void *)local_218);
        local_218 = local_218 & 0xffffffff00000000;
      }
LAB_00011208:
      if (local_230 != (void *)0x0) {
        free(local_230);
        local_230 = (void *)0x0;
      }
      iVar5 = *(int *)(DAT_0001107c + 0x1122c);
      if (iVar5 == 0) goto LAB_00011a48;
LAB_0001123c:
      if (*(void **)(iVar5 + 0x80) != (void *)0x0) {
        free(*(void **)(iVar5 + 0x80));
        *(undefined4 *)(*(int *)(DAT_00011080 + 0x1125c) + 0x80) = 0;
      }
      puVar23 = (undefined4 *)(DAT_00011084 + 0x11270);
      (*(code *)*piVar29)(puVar23);
      *puVar23 = 0;
      if (pFVar7 != (FILE *)0x0) {
LAB_00011a48:
        fclose(pFVar7);
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      if (iVar26 == 0) {
        puts((char *)(DAT_00011b80 + 0x11a64));
        goto LAB_00011a64;
      }
    }
    printf((char *)(DAT_00011088 + 0x112ac),iVar26);
    goto LAB_00011364;
  }
  local_238 = 0;
  local_234 = 0;
  if ((((local_50 == '\0') || (local_1f0 == 0)) || (iStack_1ec == 0)) || (uStack_1e4 < 2)) {
    puts((char *)(DAT_00011b78 + 0x11a14));
    if (local_50 != '\0') {
      if (local_1e8 == 1) {
        iVar26 = DAT_00011bac + 0x11cb8;
      }
      else {
        iVar26 = DAT_00011b7c + 0x11a44;
      }
      goto LAB_000116a0;
    }
    puts((char *)(DAT_00011ba4 + 0x11c78));
    pFVar7 = (FILE *)0x0;
LAB_00011c78:
    if (*(int *)(DAT_00011ba8 + 0x11c84) == 0) {
      iVar26 = -0x65;
      local_250 = (FILE *)0x0;
    }
    else {
      iVar26 = -0x65;
      local_250 = (FILE *)0x0;
LAB_00011af4:
      puVar23 = (undefined4 *)(DAT_00011b8c + 0x11b04);
      (*(code *)*piVar29)(puVar23);
      *puVar23 = 0;
    }
    if (pFVar7 != (FILE *)0x0) goto LAB_00011c08;
  }
  else {
    iVar26 = DAT_000110b8 + 0x116a4;
LAB_000116a0:
    printf((char *)(DAT_000110bc + 0x116b8),local_1f0,iStack_1ec,uStack_1e4,iVar26,acStack_1e0);
    pFVar7 = fopen64(acStack_1e0,(char *)(DAT_000110c0 + 0x116c8));
    if (pFVar7 == (FILE *)0x0) {
      puts((char *)(DAT_00011bb8 + 0x11ce8));
      goto LAB_00011c78;
    }
    if (local_4f == '\0') {
      local_250 = (FILE *)0x0;
    }
    else {
      printf((char *)(DAT_000110c4 + 0x116f0),acStack_118);
      local_250 = fopen64(acStack_118,(char *)(DAT_000110c8 + 0x11700));
      if (local_250 == (FILE *)0x0) {
        puts((char *)(DAT_00011be4 + 0x11df4));
        goto LAB_00011c78;
      }
      if (local_4c == 0) {
        local_4c = 5;
      }
    }
    iVar26 = DAT_000110cc;
    fseek(pFVar7,0,2);
    lVar9 = ftell(pFVar7);
    piVar22 = (int *)(iVar26 + 0x1174c);
    fseek(pFVar7,0,0);
    uStack_22c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_228 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_224 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_208 = (ulonglong)uStack_22c << 0x20;
    local_230 = (void *)0x0;
    local_218 = DAT_00011b48;
    local_210 = DAT_00011b50;
    local_220 = 0;
    uStack_21c = uStack_22c;
    local_200 = uStack_228;
    uStack_1fc = uStack_224;
    iVar26 = (*(code *)*piVar28)(piVar22);
    if ((iVar26 == 0) && (*piVar22 != 0)) {
      iVar26 = FUN_00012068(&local_234,4,pFVar7);
      pvVar8 = (void *)0x0;
      if (iVar26 == 0) {
        printf((char *)(DAT_00011b60 + 0x117c0),local_234);
        sVar13 = local_234;
        pvVar8 = calloc(local_234,1);
        if (pvVar8 == (void *)0x0) goto LAB_00011a98;
        iVar26 = FUN_00012068(pvVar8,sVar13,pFVar7);
        if (iVar26 != 0) goto LAB_00011ca4;
        iVar26 = *piVar22;
        *(int *)(iVar26 + 4) = local_1e8;
        *(uint *)(iVar26 + 8) = uStack_1e4;
        *(int *)(iVar26 + 0xc) = local_1f0;
        *(int *)(iVar26 + 0x10) = iStack_1ec;
        *(undefined4 *)(iVar26 + 0x20) = 1;
        iVar5 = (**(code **)(iVar26 + 0x88))(iVar26,pvVar8,local_234);
        iVar26 = DAT_00011b68;
        if (iVar5 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = in_q4._8_8_;
          auVar33 = auVar1 << 0x40;
          printf((char *)(DAT_00011b64 + 0x11844),lVar9);
          uVar3 = DAT_00011b58;
          pcVar16 = (char *)(DAT_00011b6c + 0x11858);
          local_24c = 0;
          do {
            lVar12 = ftell(pFVar7);
            if (lVar9 <= lVar12) {
              iVar26 = 0;
              puts((char *)(DAT_00011bf8 + 0x11e98));
              goto LAB_00011aa0;
            }
            if (local_208._4_4_ == 0) {
              iVar5 = FUN_00012068(&local_238,4,pFVar7);
              if (iVar5 != 0) break;
              uVar25 = local_238;
              if ((void *)local_208 == (void *)0x0) {
                pvVar14 = malloc(local_238);
                local_208 = CONCAT44(local_208._4_4_,pvVar14);
                if (pvVar14 == (void *)0x0) {
LAB_00011ed8:
                  iVar26 = -0x68;
                  if (local_230 != (void *)0x0) goto LAB_00011ac4;
                  goto LAB_00011ad8;
                }
              }
              else {
                uVar25 = local_200;
                if (local_200 < local_238) {
                  pvVar14 = realloc((void *)local_208,local_238);
                  local_208 = CONCAT44(local_208._4_4_,pvVar14);
                  if (pvVar14 == (void *)0x0) goto LAB_00011ed8;
                  local_200 = local_238;
                  uVar25 = local_200;
                }
              }
              local_200 = uVar25;
              iVar5 = FUN_00012068((void *)local_208,local_238,pFVar7);
              uVar25 = local_238;
              if (iVar5 != 0) {
                iVar26 = 0;
                goto LAB_00011aa0;
              }
              auVar34._0_8_ = auVar33._0_8_;
              auVar34._8_8_ = VectorAdd(auVar34._0_8_,uVar3,8);
              local_208 = CONCAT44(local_238,(void *)local_208);
              local_218 = auVar34._0_8_;
              lVar12 = ftell(pFVar7);
              auVar33._8_8_ = auVar34._8_8_;
              auVar33._0_8_ = auVar33._8_8_;
              printf(pcVar16,uVar25,auVar34._0_4_,auVar34._4_4_,lVar12);
            }
            iVar5 = *(int *)(iVar26 + 0x11854);
            uStack_22c = 0;
            iVar5 = (**(code **)(iVar5 + 0x9c))(iVar5,&local_218);
            if (iVar5 != 0) {
              iVar26 = -0xbe;
              printf((char *)(DAT_00011bfc + 0x11eb4));
              goto LAB_00011aa0;
            }
            iVar5 = *(int *)(iVar26 + 0x11854);
            iVar5 = (**(code **)(iVar5 + 0xa0))(iVar5,&local_230);
            if (iVar5 != 0) {
              iVar26 = -0xbe;
              puts((char *)(DAT_00011c00 + 0x11ed0));
              goto LAB_00011aa0;
            }
            printf((char *)(DAT_00011b70 + 0x118b8),uStack_22c,local_208._4_4_);
            pvVar14 = local_230;
            if ((uStack_22c != 0) && (local_230 != (void *)0x0)) {
              iVar5 = (int)local_230 + 0x40;
              (*(code *)*piVar27)(iVar5);
              if ((local_250 != (FILE *)0x0) &&
                 (uVar25 = local_24c + 1, bVar30 = local_24c < local_4c, local_24c = uVar25, bVar30)
                 ) {
                uVar35 = (*(int *)((int)pvVar14 + 0x1c) + 0xfU & 0xfffffff0) *
                         (*(int *)((int)pvVar14 + 0x18) + 0xfU & 0xfffffff0) * 3 >> 1;
                printf((char *)(DAT_00011bdc + 0x11da8),uVar25,uVar35);
                fwrite(*(void **)((int)pvVar14 + 0x44),1,uVar35,local_250);
                fflush(local_250);
              }
              (*(code *)*piVar19)(iVar5);
              free(local_230);
              local_230 = (void *)0x0;
              uStack_22c = 0;
            }
            usleep(3000);
          } while (*(int *)(*(int *)(DAT_00011b74 + 0x11944) + 0x84) == 0);
          iVar26 = 0;
        }
        else {
          iVar26 = -0x69;
          printf((char *)(DAT_00011bf4 + 0x11e74),iVar5);
        }
      }
      else {
LAB_00011ca4:
        iVar26 = -0x67;
      }
    }
    else {
LAB_00011a98:
      pvVar8 = (void *)0x0;
      iVar26 = -0x68;
    }
LAB_00011aa0:
    if ((void *)local_208 != (void *)0x0) {
      free((void *)local_208);
      local_208 = local_208 & 0xffffffff00000000;
    }
    if (local_230 != (void *)0x0) {
LAB_00011ac4:
      free(local_230);
      local_230 = (void *)0x0;
    }
    if (pvVar8 != (void *)0x0) {
LAB_00011ad8:
      free(pvVar8);
    }
    if (*(int *)(DAT_00011b88 + 0x11aec) != 0) goto LAB_00011af4;
LAB_00011c08:
    fclose(pFVar7);
  }
  if (local_250 != (FILE *)0x0) {
    fclose(local_250);
  }
  if (iVar26 == 0) {
    puts((char *)(DAT_00011b94 + 0x11c20));
LAB_00011a64:
    puts((char *)(DAT_00011b84 + 0x11a74));
    return 0;
  }
  printf((char *)(DAT_00011b90 + 0x11b44),iVar26);
LAB_00011364:
  piVar19 = (int *)(DAT_00011094 + 0x11378);
  printf((char *)(DAT_00011098 + 0x1137c),iVar26);
  if (*piVar19 == 0) {
    return iVar26;
  }
  dlclose();
  *piVar19 = 0;
  return iVar26;
}



/* ===== _start @ 00011f18 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023048)
            (DAT_00011f4c,param_2,&stack0x00000004,DAT_00011f50,DAT_00011f48,param_1);
  return;
}



/* ===== FUN_00011f54 @ 00011f54 size=32 ===== */

void FUN_00011f54(void)

{
  if (DAT_00011f78 == DAT_00011f74) {
    return;
  }
  if (DAT_00011f7c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011f7c)();
  return;
}



/* ===== _FINI_0 @ 00011fb8 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011ff4;
  if (*DAT_00011ff4 != '\0') {
    return;
  }
  FUN_00011f54();
  if (DAT_00011ff8 != 0) {
    __deregister_frame_info(DAT_00011ffc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012000 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012024 != 0) {
    __register_frame_info(DAT_0001202c,DAT_00012028);
  }
  if ((DAT_00011fb0 - DAT_00011fac >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011fb4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011fb4)();
  return;
}



/* ===== FUN_00012030 @ 00012030 size=44 ===== */

void FUN_00012030(void)

{
  puts((char *)(DAT_0001205c + 0x12040));
  puts((char *)(DAT_00012060 + 0x1204c));
  puts((char *)((int)&DAT_0001205c + DAT_00012064));
  return;
}



/* ===== FUN_00012068 @ 00012068 size=108 ===== */

undefined4 FUN_00012068(void *param_1,size_t param_2,FILE *param_3)

{
  size_t sVar1;
  
  if (param_1 == (void *)0x0 || (param_3 == (FILE *)0x0 || param_2 == 0)) {
    return 0xffffffff;
  }
  sVar1 = fread(param_1,1,param_2,param_3);
  if (param_2 != sVar1) {
    printf((char *)(DAT_000120d4 + 0x120cc),param_2);
    return 0xffffffff;
  }
  return 0;
}



/* ===== _fini @ 000120d8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlclose @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlclose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlopen @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlopen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlsym @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlsym(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



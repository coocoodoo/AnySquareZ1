// ts_conf — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000107cc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 000107f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002200c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 000107fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00022010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010814 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00022018)();
  return;
}



/* ===== <EXTERNAL>::ts_close @ 00010820 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_0002201c)();
  return;
}



/* ===== <EXTERNAL>::perror @ 0001082c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00022020)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022024)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00010844 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_00022028)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002202c)();
  return;
}



/* ===== <EXTERNAL>::ts_conf_get @ 0001085c size=12 ===== */

void ts_conf_get(void)

{
  (*(code *)PTR_ts_conf_get_00022030)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022034)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_libversion @ 00010874 size=12 ===== */

void ts_libversion(void)

{
  (*(code *)PTR_ts_libversion_00022038)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010880 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002203c)();
  return;
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 0001088c size=12 ===== */

void ts_get_eventpath(void)

{
  (*(code *)PTR_ts_get_eventpath_00022040)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000108a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022048)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fgetc @ 000108b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0002204c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::scanf @ 000108bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scanf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scanf_00022050)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 000108c8 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00022054)();
  return;
}



/* ===== <EXTERNAL>::ts_conf_set @ 000108d4 size=12 ===== */

void ts_conf_set(void)

{
  (*(code *)PTR_ts_conf_set_00022058)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000108e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002205c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 000108ec size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00022060)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000108f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022064)();
  return piVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010904 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00022068)();
  return;
}



/* ===== <EXTERNAL>::ts_reconfig @ 00010910 size=12 ===== */

void ts_reconfig(void)

{
  (*(code *)PTR_ts_reconfig_0002206c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001091c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022070)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010928 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022074)(__ptr);
  return;
}



/* ===== FUN_00010934 @ 00010934 size=1588 ===== */

int FUN_00010934(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  FILE *__stream;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *__s;
  undefined4 *puVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 *__ptr;
  int local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = DAT_00010f6c;
  iVar12 = DAT_00010f68 + 0x10954;
  iVar2 = ts_libversion();
  uVar18 = 0;
  iVar13 = DAT_00010f70 + 0x1096c;
  while( true ) {
    local_58 = *(int *)(iVar1 + 0x10968);
    uStack_54 = *(undefined4 *)(iVar1 + 0x1096c);
    uStack_50 = *(undefined4 *)(iVar1 + 0x10970);
    uStack_4c = *(undefined4 *)(iVar1 + 0x10974);
    local_5c = 0;
    uStack_48 = *(undefined4 *)(iVar1 + 0x10978);
    uStack_44 = *(undefined4 *)(iVar1 + 0x1097c);
    uStack_40 = *(undefined4 *)(iVar1 + 0x10980);
    uStack_3c = *(undefined4 *)(iVar1 + 0x10984);
    uStack_38 = *(undefined4 *)(iVar1 + 0x10988);
    uStack_34 = *(undefined4 *)(iVar1 + 0x1098c);
    uStack_30 = *(undefined4 *)(iVar1 + 0x10990);
    uStack_2c = *(undefined4 *)(iVar1 + 0x10994);
    iVar3 = getopt_long(param_1,param_2,iVar12,&local_58,&local_5c);
    piVar4 = __errno_location();
    *piVar4 = 0;
    if (iVar3 == -1) break;
    if (iVar3 != 0x69) {
      if (iVar3 == 0x76) {
        pcVar5 = (char *)tslib_version();
        puts(pcVar5);
      }
      else {
        FUN_00011188(param_2);
      }
      return 0;
    }
    uVar18 = **(undefined4 **)(iVar13 + DAT_00010f74);
  }
  iVar12 = ts_setup(uVar18,0);
  iVar1 = DAT_00010f78;
  if (iVar12 == 0) {
    perror((char *)(DAT_00010fd8 + 0x10f00));
    iVar2 = *piVar4;
  }
  else {
    uVar17 = *(undefined4 *)(iVar2 + 4);
    uVar18 = ts_get_eventpath();
    printf((char *)(DAT_00010f7c + 0x10a58),uVar17,uVar18);
    puts((char *)(DAT_00010f80 + 0x10a64));
    pcVar5 = (char *)(DAT_00010f84 + 0x10a74);
    __s = (char *)(DAT_00010f88 + 0x10a84);
    do {
      putchar(10);
      puts(pcVar5);
      puts((char *)(iVar1 + 0x10a48));
      puts(__s);
      puts((char *)(DAT_00010f8c + 0x10ab0));
      puts((char *)(DAT_00010f90 + 0x10abc));
      puts((char *)(DAT_00010f94 + 0x10ac8));
      iVar2 = scanf((char *)(DAT_00010f98 + 0x10ad8),&local_5c);
      if (iVar2 < 1) {
        perror((char *)(DAT_00010fd4 + 0x10eec));
        return -1;
      }
      switch(local_5c) {
      case 1:
        goto LAB_00010b3c;
      case 2:
        uVar18 = ts_conf_get(iVar12);
        FUN_00011100();
        iVar2 = ts_conf_set(uVar18);
        goto joined_r0x00010cf0;
      case 3:
        iVar3 = ts_conf_get(iVar12);
        FUN_00011100();
        printf((char *)(DAT_00010fb0 + 0x10c44));
        iVar7 = scanf((char *)(DAT_00010fb4 + 0x10c54),&local_58);
        if (iVar7 < 1) {
          perror((char *)(DAT_00010fe0 + 0x10f54));
        }
        else {
          iVar7 = iVar3;
          iVar15 = 0;
          while (iVar11 = iVar7, iVar11 != 0) {
            iVar7 = *(int *)(iVar11 + 0x14);
            if (iVar7 == 0) {
              iVar15 = iVar11;
            }
          }
          while( true ) {
            iVar7 = iVar15;
            if (iVar7 == 0) {
              fwrite((void *)(DAT_00010fb8 + 0x10ccc),1,0x1a,
                     (FILE *)**(undefined4 **)(iVar13 + DAT_00010fa8));
              goto LAB_00010b58;
            }
            if (*(int *)(iVar7 + 0xc) == local_58) break;
            iVar15 = *(int *)(iVar7 + 0x10);
            if (iVar15 == 0) {
              iVar11 = iVar7;
            }
          }
          if (iVar11 != 0) {
            iVar7 = iVar11;
          }
          piVar4 = calloc(1,0x18);
          if (piVar4 != (int *)0x0) {
            pvVar9 = calloc(1,0x400);
            *piVar4 = (int)pvVar9;
            if (pvVar9 != (void *)0x0) {
              pvVar8 = calloc(1,0x400);
              piVar4[1] = (int)pvVar8;
              if (pvVar8 != (void *)0x0) {
                printf((char *)(DAT_00010fbc + 0x10d58));
                iVar15 = scanf((char *)(DAT_00010fc0 + 0x10d68),*piVar4);
                if (iVar15 < 1) {
                  perror((char *)(DAT_00010fdc + 0x10f18));
                }
                else {
                  printf((char *)(DAT_00010fc4 + 0x10d7c));
                  puVar6 = *(undefined4 **)(iVar13 + DAT_00010fc8);
LAB_00010d88:
                  do {
                    __stream = (FILE *)*puVar6;
                    if (__stream->_chain == (_IO_FILE *)0x0) {
                      iVar15 = fgetc(__stream);
                    }
                    else {
                      pcVar16 = __stream->_IO_write_base;
                      if (pcVar16 < __stream->_IO_write_end) {
                        __stream->_IO_write_base = pcVar16 + 1;
                        if (*pcVar16 == '\n') break;
                        goto LAB_00010d88;
                      }
                      iVar15 = __fgetc_unlocked();
                    }
                  } while (iVar15 != 10 && iVar15 != -1);
                  iVar15 = scanf((char *)(DAT_00010fcc + 0x10dcc),piVar4[1]);
                  if (-1 < iVar15) {
                    iVar2 = *(int *)(iVar7 + 0x10);
                    piVar4[5] = iVar7;
                    local_58 = local_58 + 1;
                    piVar4[4] = iVar2;
                    piVar4[3] = local_58;
                    *(int **)(iVar7 + 0x10) = piVar4;
                    do {
                      if ((*(int *)(iVar7 + 0x14) != 0) &&
                         (*(int *)(iVar7 + 0xc) == *(int *)(*(int *)(iVar7 + 0x14) + 0xc))) {
                        *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
                      }
                      iVar7 = *(int *)(iVar7 + 0x10);
                    } while (iVar7 != 0);
                    FUN_00011100(iVar3);
                    iVar2 = ts_conf_set(iVar3);
                    if (-1 < iVar2) goto LAB_00010b3c;
                    goto LAB_00010b58;
                  }
                }
                pvVar9 = (void *)*piVar4;
                if (pvVar9 == (void *)0x0) goto LAB_00010f2c;
              }
              free(pvVar9);
            }
LAB_00010f2c:
            if ((void *)piVar4[1] != (void *)0x0) {
              free((void *)piVar4[1]);
            }
            free(piVar4);
          }
        }
        goto LAB_00010b58;
      case 4:
        puVar6 = (undefined4 *)ts_conf_get(iVar12);
        FUN_00011100();
        FUN_000111e0(puVar6);
        goto LAB_00010b24;
      case 5:
        puVar6 = (undefined4 *)ts_conf_get(iVar12);
        FUN_00011100();
        printf((char *)(DAT_00010fa0 + 0x10b94));
        iVar2 = scanf((char *)(DAT_00010fa4 + 0x10ba4),&local_58);
        if (0 < iVar2) {
          puVar10 = puVar6;
          puVar19 = (undefined4 *)0x0;
          while (puVar14 = puVar10, puVar10 = puVar19, puVar14 != (undefined4 *)0x0) {
            puVar10 = (undefined4 *)puVar14[5];
            if (puVar10 == (undefined4 *)0x0) {
              puVar19 = puVar14;
            }
          }
LAB_00010bf8:
          __ptr = puVar10;
          if (__ptr == (undefined4 *)0x0) {
            fwrite((void *)(DAT_00010fac + 0x10c20),1,0x1a,
                   (FILE *)**(undefined4 **)(iVar13 + DAT_00010fa8));
          }
          else {
            if (__ptr[3] != local_58) goto code_r0x00010be8;
            if (puVar14 != (undefined4 *)0x0) {
              __ptr = puVar14;
            }
            iVar2 = __ptr[5];
            pvVar9 = (void *)*__ptr;
            if (iVar2 != 0) {
              *(undefined4 *)(iVar2 + 0x10) = __ptr[4];
            }
            if (__ptr[4] != 0) {
              *(int *)(__ptr[4] + 0x14) = iVar2;
            }
            free(pvVar9);
            free((void *)__ptr[1]);
            free(__ptr);
            for (; puVar19 != (undefined4 *)0x0; puVar19 = (undefined4 *)puVar19[4]) {
              if ((puVar19[5] != 0) && (puVar19[3] == *(int *)(puVar19[5] + 0xc))) {
                puVar19[3] = puVar19[3] + 1;
              }
            }
          }
          goto LAB_00010b24;
        }
        perror((char *)(DAT_00010fd0 + 0x10ed8));
LAB_00010b24:
        FUN_00011100(puVar6);
        iVar2 = ts_conf_set(puVar6);
        if (iVar2 < 0) goto LAB_00010b58;
LAB_00010b3c:
        iVar2 = ts_reconfig(iVar12);
joined_r0x00010cf0:
        if (iVar2 < 0) goto LAB_00010b58;
        break;
      case 6:
        puts((char *)(DAT_00010f9c + 0x10b74));
        break;
      default:
        puts((char *)(DAT_00010fe4 + 0x10f64));
      }
    } while (local_5c != 6);
LAB_00010b58:
    ts_close(iVar12);
  }
  return iVar2;
code_r0x00010be8:
  puVar10 = (undefined4 *)__ptr[4];
  if (puVar10 == (undefined4 *)0x0) {
    puVar14 = __ptr;
  }
  goto LAB_00010bf8;
}



/* ===== entry @ 00010fe8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022044)
            (DAT_0001101c,param_2,&stack0x00000004,DAT_00011020,DAT_00011018,param_1);
  return;
}



/* ===== FUN_00011024 @ 00011024 size=32 ===== */

void FUN_00011024(void)

{
  if (DAT_00011048 == DAT_00011044) {
    return;
  }
  if (DAT_0001104c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001104c)();
  return;
}



/* ===== _FINI_0 @ 00011088 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000110c4;
  if (*DAT_000110c4 != '\0') {
    return;
  }
  FUN_00011024();
  if (DAT_000110c8 != 0) {
    __deregister_frame_info(DAT_000110cc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000110d0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110f4 != 0) {
    __register_frame_info(DAT_000110fc,DAT_000110f8);
  }
  if ((DAT_00011080 - DAT_0001107c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011084 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011084)();
  return;
}



/* ===== FUN_00011100 @ 00011100 size=128 ===== */

void FUN_00011100(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *__format;
  char *__format_00;
  undefined4 uVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[5];
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      param_1 = puVar1;
      puVar2 = (undefined4 *)puVar1[5];
    }
    __format = (char *)(DAT_00011180 + 0x11138);
    __format_00 = (char *)(DAT_00011184 + 0x1113c);
    do {
      uVar3 = param_1[1];
      if (param_1[2] == 0) {
        printf(__format,param_1[3],*param_1,uVar3);
      }
      else {
        printf(__format_00,*param_1,uVar3,uVar3);
      }
      param_1 = (undefined4 *)param_1[4];
    } while (param_1 != (undefined4 *)0x0);
    return;
  }
  return;
}



/* ===== FUN_00011188 @ 00011188 size=76 ===== */

void FUN_00011188(undefined4 *param_1)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_000111d4 + 0x111ac),uVar1);
  putchar(10);
  puts((char *)(DAT_000111d8 + 0x111c0));
  printf((char *)(DAT_000111dc + 0x111d0),*param_1);
  return;
}



/* ===== FUN_000111e0 @ 000111e0 size=340 ===== */

void FUN_000111e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  char *__format;
  undefined4 *puVar5;
  int local_41c;
  char acStack_418 [1024];
  
  iVar2 = DAT_00011334;
  memset(acStack_418,0,0x400);
  FUN_00011100(param_1);
  printf((char *)(DAT_00011338 + 0x11220));
  iVar3 = scanf((char *)(DAT_0001133c + 0x11230),&local_41c);
  if (iVar3 < 1) {
    perror((char *)(DAT_00011348 + 0x11328));
    return;
  }
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    while (iVar1 = iVar3, iVar1 != 0) {
      param_1 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x14);
    }
    __format = (char *)(DAT_00011340 + 0x11268);
    do {
      while (*(int *)(param_1 + 0xc) != local_41c) {
        param_1 = *(int *)(param_1 + 0x10);
        if (param_1 == 0) {
          return;
        }
      }
      puts(*(char **)(param_1 + 4));
      puVar5 = *(undefined4 **)(iVar2 + 0x1121c + DAT_00011344);
      do {
        __stream = (FILE *)*puVar5;
        while (__stream->_chain != (_IO_FILE *)0x0) {
          pcVar4 = __stream->_IO_write_base;
          if (__stream->_IO_write_end <= pcVar4) {
            iVar3 = __fgetc_unlocked();
            goto LAB_00011304;
          }
          __stream->_IO_write_base = pcVar4 + 1;
          if (*pcVar4 == '\n') goto LAB_000112c8;
        }
        iVar3 = fgetc(__stream);
LAB_00011304:
      } while (iVar3 != 10 && iVar3 != -1);
LAB_000112c8:
      iVar3 = scanf(__format,acStack_418);
      if (iVar3 < 0) {
        return;
      }
      strcpy(*(char **)(param_1 + 4),acStack_418);
      param_1 = *(int *)(param_1 + 0x10);
    } while (param_1 != 0);
  }
  return;
}



/* ===== _fini @ 0001134c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_libversion @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_libversion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_get_eventpath(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_conf_set @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_conf_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_conf_get @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_conf_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scanf @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scanf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_reconfig @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_reconfig(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



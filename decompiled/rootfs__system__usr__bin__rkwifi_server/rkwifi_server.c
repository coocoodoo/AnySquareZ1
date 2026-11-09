// rkwifi_server — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010fc4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::popen @ 00010fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_0002600c)(__command);
  return pFVar1;
}



/* ===== <EXTERNAL>::printf @ 00010ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00026010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 00011000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00026014)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 0001100c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00026018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00011018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002601c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00026020)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::pclose @ 00011030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00026024)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 0001103c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00026028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_start_keepalive @ 00011048 size=12 ===== */

void RK_wifi_start_keepalive(void)

{
  (*(code *)PTR_RK_wifi_start_keepalive_0002602c)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00026030)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00026034)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_wifi_reset @ 0001106c size=12 ===== */

void RK_wifi_reset(void)

{
  (*(code *)PTR_RK_wifi_reset_00026038)();
  return;
}



/* ===== <EXTERNAL>::prctl @ 00011078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0002603c)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00026040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00011090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00026044)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_cancel @ 0001109c size=12 ===== */

void RK_wifi_cancel(void)

{
  (*(code *)PTR_RK_wifi_cancel_00026048)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 000110a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002604c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_wifi_stop_keepalive @ 000110b4 size=12 ===== */

void RK_wifi_stop_keepalive(void)

{
  (*(code *)PTR_RK_wifi_stop_keepalive_00026050)();
  return;
}



/* ===== <EXTERNAL>::RK_wifi_forget_with_ssid @ 000110c0 size=12 ===== */

void RK_wifi_forget_with_ssid(void)

{
  (*(code *)PTR_RK_wifi_forget_with_ssid_00026054)();
  return;
}



/* ===== <EXTERNAL>::socket @ 000110cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00026058)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_connect @ 000110d8 size=12 ===== */

void RK_wifi_connect(void)

{
  (*(code *)PTR_RK_wifi_connect_0002605c)();
  return;
}



/* ===== <EXTERNAL>::RK_wifi_register_callback @ 000110e4 size=12 ===== */

void RK_wifi_register_callback(void)

{
  (*(code *)PTR_RK_wifi_register_callback_00026060)();
  return;
}



/* ===== <EXTERNAL>::Rk_wifi_ota @ 000110f0 size=12 ===== */

void Rk_wifi_ota(void)

{
  (*(code *)PTR_Rk_wifi_ota_00026064)();
  return;
}



/* ===== <EXTERNAL>::RK_wifi_running_getConnectionInfo @ 000110fc size=12 ===== */

void RK_wifi_running_getConnectionInfo(void)

{
  (*(code *)PTR_RK_wifi_running_getConnectionInfo_00026068)();
  return;
}



/* ===== <EXTERNAL>::send @ 00011108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0002606c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00026070)();
  return;
}



/* ===== <EXTERNAL>::RK_wifi_set_pir @ 00011120 size=12 ===== */

void RK_wifi_set_pir(void)

{
  (*(code *)PTR_RK_wifi_set_pir_00026074)();
  return;
}



/* ===== <EXTERNAL>::accept @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00026078)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002607c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_wifi_getSavedInfo @ 00011144 size=12 ===== */

void RK_wifi_getSavedInfo(void)

{
  (*(code *)PTR_RK_wifi_getSavedInfo_00026080)();
  return;
}



/* ===== <EXTERNAL>::write @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00026084)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strcat @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00026088)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0002608c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011174 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00026090)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00026094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00026098)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002609c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000260a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000260a4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000260a8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_000260ac)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_wifi_scan_for_softap @ 000111d4 size=12 ===== */

void RK_wifi_scan_for_softap(void)

{
  (*(code *)PTR_RK_wifi_scan_for_softap_000260b0)();
  return;
}



/* ===== <EXTERNAL>::listen @ 000111e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_000260b4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_scan @ 000111ec size=12 ===== */

void RK_wifi_scan(void)

{
  (*(code *)PTR_RK_wifi_scan_000260b8)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000260c0)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000260c4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000260c8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_disconnect_network @ 00011228 size=12 ===== */

void RK_wifi_disconnect_network(void)

{
  (*(code *)PTR_RK_wifi_disconnect_network_000260cc)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000260d0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::shutdown @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shutdown(int __fd,int __how)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shutdown_000260d4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000260d8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_connect_with_ssid @ 00011258 size=12 ===== */

void RK_wifi_connect_with_ssid(void)

{
  (*(code *)PTR_RK_wifi_connect_with_ssid_000260dc)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000260e0)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000260e4)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000260e8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::htons @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_000260ec)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000260f0)();
  return piVar1;
}



/* ===== <EXTERNAL>::atoi @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000260f4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000112ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000260f8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_wifi_enable @ 000112b8 size=12 ===== */

void RK_wifi_enable(void)

{
  (*(code *)PTR_RK_wifi_enable_000260fc)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00026100)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_wifi_enter_sleep @ 000112d0 size=12 ===== */

void RK_wifi_enter_sleep(void)

{
  (*(code *)PTR_RK_wifi_enter_sleep_00026104)();
  return;
}



/* ===== <EXTERNAL>::RK_wifi_scan_r @ 000112dc size=12 ===== */

void RK_wifi_scan_r(void)

{
  (*(code *)PTR_RK_wifi_scan_r_00026108)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002610c)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000112f4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00026110)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00026114)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00026118)(__ptr);
  return;
}



/* ===== entry @ 00011318 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000260bc)
            (DAT_0001134c,param_2,&stack0x00000004,DAT_00011350,DAT_00011348,param_1);
  return;
}



/* ===== FUN_00011354 @ 00011354 size=32 ===== */

void FUN_00011354(void)

{
  if (DAT_00011378 == DAT_00011374) {
    return;
  }
  if (DAT_0001137c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001137c)();
  return;
}



/* ===== _FINI_0 @ 000113b8 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000113f4;
  if (*DAT_000113f4 != '\0') {
    return;
  }
  FUN_00011354();
  if (DAT_000113f8 != 0) {
    __deregister_frame_info(DAT_000113fc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011400 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011424 != 0) {
    __register_frame_info(DAT_0001142c,DAT_00011428);
  }
  if ((DAT_000113b0 - DAT_000113ac >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000113b4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000113a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000113b4)();
  return;
}



/* ===== FUN_00011430 @ 00011430 size=624 ===== */

undefined4 FUN_00011430(int param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_6c8 [18];
  undefined4 local_6b6;
  undefined1 local_6b2;
  char acStack_658 [1600];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 1;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  memset(acStack_658,0,0x640);
  iVar2 = local_c * 4;
  local_c = local_c + 1;
  sprintf(acStack_658,(char *)(DAT_000116a0 + 0x114b0),*(undefined4 *)(param_2 + iVar2));
  while (local_c < param_1) {
    iVar2 = local_c * 4;
    local_c = local_c + 1;
    sprintf(acStack_658,(char *)(DAT_000116a4 + 0x114f0),acStack_658,
            *(undefined4 *)(param_2 + iVar2));
  }
  local_10 = socket(1,1,0);
  if (local_10 < 1) {
    puts((char *)(DAT_000116a8 + 0x1152c));
    uVar3 = 0xffffffff;
  }
  else {
    memset(local_6c8,0,0x6e);
    local_6c8._0_2_ = 1;
    local_6c8._2_4_ = *(undefined4 *)(DAT_000116ac + 0x11578);
    local_6c8._6_4_ = *(undefined4 *)(DAT_000116ac + 0x1157c);
    local_6c8._10_4_ = *(undefined4 *)(DAT_000116ac + 0x11580);
    local_6c8._14_4_ = *(undefined4 *)(DAT_000116ac + 0x11584);
    local_6b6 = *(undefined4 *)(DAT_000116ac + 0x11588);
    local_6b2 = *(undefined1 *)(DAT_000116ac + 0x1158c);
    local_14 = connect(local_10,(sockaddr *)local_6c8,0x6e);
    if (local_14 < 0) {
      puts((char *)(DAT_000116b0 + 0x115d4));
      uVar3 = 0xffffffff;
    }
    else {
      printf((char *)(DAT_000116b4 + 0x115f8),acStack_658);
      sVar1 = strlen(acStack_658);
      write(local_10,acStack_658,sVar1 + 1);
      read(local_10,acStack_658,0x640);
      iVar2 = strcmp(acStack_658,(char *)(DAT_000116b8 + 0x11654));
      if (iVar2 == 0) {
        puts(acStack_658);
        uVar3 = 0;
      }
      else {
        puts((char *)(DAT_000116bc + 0x11674));
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}



/* ===== FUN_000116c0 @ 000116c0 size=384 ===== */

void FUN_000116c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    puts((char *)(DAT_00011840 + 0x116e8));
    printf((char *)(DAT_00011844 + 0x11704),*param_1);
    printf((char *)(DAT_00011848 + 0x11720),param_1 + 1);
    printf((char *)(DAT_0001184c + 0x1173c),param_1 + 6);
    printf((char *)(DAT_00011850 + 0x11758),param_1[0x16]);
    printf((char *)(DAT_00011854 + 0x11774),param_1 + 0x17);
    printf((char *)(DAT_00011858 + 0x11790),(int)param_1 + 0x62);
    printf((char *)(DAT_0001185c + 0x117ac),(int)param_1 + 0x76);
    printf((char *)(DAT_00011860 + 0x117c8),(int)param_1 + 0x8a);
    printf((char *)(DAT_00011864 + 0x117e4),(int)param_1 + 0xc6);
    printf((char *)(DAT_00011868 + 0x11800),(int)param_1 + 0x9e);
    printf((char *)(DAT_0001186c + 0x1181c),(int)param_1 + 0xb2);
    puts((char *)(DAT_00011870 + 0x1182c));
  }
  return;
}



/* ===== FUN_00011874 @ 00011874 size=156 ===== */

undefined4 FUN_00011874(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    puts((char *)(DAT_00011910 + 0x118b8));
    break;
  case 2:
    puts((char *)(DAT_0001191c + 0x118f4));
    break;
  case 3:
    puts((char *)(DAT_00011918 + 0x118e0));
    break;
  case 4:
    puts((char *)(DAT_00011914 + 0x118cc));
  }
  return 1;
}



/* ===== FUN_00011920 @ 00011920 size=100 ===== */

void FUN_00011920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00011988 + 0x1194c),DAT_00011984 + 72000,param_3,
         (char *)(DAT_00011988 + 0x1194c),param_2,param_1);
  FUN_000147f8(DAT_0001198c + 0x1195c);
  FUN_000147a0(DAT_00011990 + 0x11970,0);
  return;
}



/* ===== FUN_00011994 @ 00011994 size=36 ===== */

void FUN_00011994(void)

{
  FUN_000147e0();
  return;
}



/* ===== FUN_000119b8 @ 000119b8 size=664 ===== */

undefined4 FUN_000119b8(int param_1,int param_2)

{
  void *__ptr;
  
  printf((char *)(DAT_00011c54 + 0x119e8),DAT_00011c50 + 0x119dc,param_1);
  FUN_000116c0(param_2);
  *(int *)(DAT_00011c58 + 0x11a00) = param_1;
  if (param_1 == 7) {
    puts((char *)(DAT_00011c5c + 0x11a1c));
  }
  else if (param_1 == 2) {
    puts((char *)(DAT_00011c60 + 0x11a3c));
  }
  else if (param_1 == 4) {
    puts((char *)(DAT_00011c64 + 0x11a5c));
  }
  else if (param_1 == 0xc) {
    puts((char *)(DAT_00011c68 + 0x11a7c));
  }
  else if (param_1 == 0xe) {
    puts((char *)(DAT_00011c6c + 0x11a9c));
  }
  else if (param_1 == 8) {
    puts((char *)(DAT_00011c70 + 0x11abc));
  }
  else if (param_1 == 0x10) {
    puts((char *)(DAT_00011c74 + 0x11adc));
    __ptr = (void *)RK_wifi_scan_r();
    free(__ptr);
  }
  else if (param_1 == 0x14) {
    if (*(int *)(param_2 + 0xec) == 5) {
      printf((char *)(DAT_00011c78 + 0x11b28),*(undefined4 *)(param_2 + 0xf0));
    }
    else if (*(int *)(param_2 + 0xec) == 6) {
      printf((char *)(DAT_00011c7c + 0x11b58),*(undefined4 *)(param_2 + 0xf0));
    }
    else if (*(int *)(param_2 + 0xec) == 0) {
      puts((char *)(DAT_00011c80 + 0x11b7c));
    }
    else if (*(int *)(param_2 + 0xec) == 2) {
      printf((char *)(DAT_00011c84 + 0x11ba0));
    }
    else if (*(int *)(param_2 + 0xec) == 1) {
      puts((char *)(DAT_00011c88 + 0x11bc4));
    }
    else if (*(int *)(param_2 + 0xec) == 3) {
      puts((char *)(DAT_00011c8c + 0x11be8));
    }
    else if (*(int *)(param_2 + 0xec) == 4) {
      puts((char *)(DAT_00011c90 + 0x11c0c));
    }
    else if (*(int *)(param_2 + 0xec) == 7) {
      printf((char *)(DAT_00011c94 + 0x11c3c),*(undefined4 *)(param_2 + 0xf0));
    }
  }
  return 1;
}



/* ===== FUN_00011c98 @ 00011c98 size=272 ===== */

undefined4 FUN_00011c98(void)

{
  int iVar1;
  undefined1 auStack_17c [368];
  int local_c;
  
  local_c = 200;
  puts((char *)(DAT_00011da8 + 0x11cb8));
  RK_wifi_register_callback(DAT_00011dac + 0x11cc8);
  iVar1 = RK_wifi_enable(1);
  if (iVar1 == 1) {
    while ((iVar1 = local_c + -1, local_c != 0 && (*(int *)(DAT_00011db8 + 73000) == 0xe))) {
      local_c = iVar1;
      usleep(10000);
      printf((char *)(DAT_00011db4 + 0x11d04),DAT_00011db0 + 0x11cf8);
    }
    local_c = iVar1;
    if (*(int *)(DAT_00011dbc + 0x11d3c) != 0xe) {
      iVar1 = RK_wifi_running_getConnectionInfo(auStack_17c);
      if (iVar1 != 0) {
        FUN_000116c0(auStack_17c);
      }
      return 1;
    }
  }
  printf((char *)(DAT_00011dc4 + 0x11d94),DAT_00011dc0 + 0x11d88);
  return 0;
}



/* ===== FUN_00011dc8 @ 00011dc8 size=68 ===== */

void FUN_00011dc8(void)

{
  int iVar1;
  
  iVar1 = RK_wifi_enable(0);
  if (iVar1 != 1) {
    puts((char *)(DAT_00011e0c + 0x11dfc));
  }
  return;
}



/* ===== FUN_00011e10 @ 00011e10 size=136 ===== */

void FUN_00011e10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  printf((char *)(DAT_00011e9c + 0x11e4c),DAT_00011e98 + 0x11e44,*param_2,param_2[1],param_2,param_1
        );
  iVar1 = RK_wifi_connect(*param_2,param_2[1]);
  if (iVar1 != 0) {
    puts((char *)(DAT_00011ea0 + 0x11e84));
  }
  return;
}



/* ===== FUN_00011ea4 @ 00011ea4 size=64 ===== */

void FUN_00011ea4(void)

{
  int iVar1;
  
  iVar1 = RK_wifi_scan();
  if (iVar1 != 1) {
    puts((char *)(DAT_00011ee4 + 0x11ed4));
  }
  return;
}



/* ===== FUN_00011ee8 @ 00011ee8 size=248 ===== */

void FUN_00011ee8(void)

{
  int local_14;
  void *local_10;
  int local_c;
  
  local_14 = 0;
  RK_wifi_getSavedInfo(&local_10,&local_14);
  for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
    printf((char *)(DAT_00011fe0 + 0x11fa0),*(undefined4 *)((int)local_10 + local_c * 0x6c),
           (int)local_10 + local_c * 0x6c + 0x18,(int)local_10 + local_c * 0x6c + 4,
           (int)local_10 + local_c * 0x6c + 0x58);
  }
  if (local_10 != (void *)0x0) {
    free(local_10);
  }
  return;
}



/* ===== FUN_00011fe4 @ 00011fe4 size=68 ===== */

void FUN_00011fe4(void)

{
  int iVar1;
  undefined1 auStack_178 [368];
  
  iVar1 = RK_wifi_running_getConnectionInfo(auStack_178);
  if (iVar1 != 0) {
    FUN_000116c0(auStack_178);
  }
  return;
}



/* ===== FUN_00012028 @ 00012028 size=76 ===== */

void FUN_00012028(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = RK_wifi_connect_with_ssid(*param_2);
  if (iVar1 != 1) {
    puts((char *)(DAT_00012074 + 0x12064));
  }
  return;
}



/* ===== FUN_00012078 @ 00012078 size=68 ===== */

void FUN_00012078(void)

{
  int iVar1;
  
  iVar1 = RK_wifi_stop_keepalive(0x362);
  if (iVar1 == 0) {
    puts((char *)(DAT_000120bc + 0x120ac));
  }
  return;
}



/* ===== FUN_000120c0 @ 000120c0 size=64 ===== */

void FUN_000120c0(void)

{
  int iVar1;
  
  iVar1 = RK_wifi_reset();
  if (iVar1 == 0) {
    puts((char *)(DAT_00012100 + 0x120f0));
  }
  return;
}



/* ===== FUN_00012104 @ 00012104 size=64 ===== */

void FUN_00012104(void)

{
  int iVar1;
  
  iVar1 = RK_wifi_cancel();
  if (iVar1 != 1) {
    puts((char *)(DAT_00012144 + 0x12134));
  }
  return;
}



/* ===== FUN_00012148 @ 00012148 size=76 ===== */

void FUN_00012148(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = RK_wifi_forget_with_ssid(*param_2);
  if (iVar1 != 1) {
    puts((char *)(DAT_00012194 + 0x12184));
  }
  return;
}



/* ===== FUN_00012198 @ 00012198 size=36 ===== */

void FUN_00012198(void)

{
  RK_wifi_disconnect_network();
  return;
}



/* ===== FUN_000121bc @ 000121bc size=156 ===== */

void FUN_000121bc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = atoi((char *)*param_2);
  if (iVar1 == 0) {
    iVar2 = DAT_0001225c + 0x12208;
  }
  else {
    iVar2 = DAT_00012258 + 0x121fc;
  }
  printf((char *)(DAT_00012264 + 0x12220),DAT_00012260 + 0x12214,iVar2,
         (char *)(DAT_00012264 + 0x12220),param_2,param_1);
  iVar1 = RK_wifi_set_pir(iVar1);
  if (iVar1 != 1) {
    puts((char *)(DAT_00012268 + 0x12244));
  }
  return;
}



/* ===== FUN_0001226c @ 0001226c size=332 ===== */

void FUN_0001226c(undefined4 param_1,undefined4 *param_2)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char acStack_198 [64];
  char acStack_158 [260];
  char acStack_54 [72];
  
  printf((char *)(DAT_000123b8 + 0x122ac),*param_2,param_2[1],param_2[2],param_2,param_1);
  memset(acStack_198,0,0x188);
  pcVar3 = (char *)*param_2;
  sVar1 = strlen((char *)*param_2);
  strncpy(acStack_198,pcVar3,sVar1);
  pcVar3 = (char *)param_2[1];
  sVar1 = strlen((char *)param_2[1]);
  strncpy(acStack_158,pcVar3,sVar1);
  pcVar3 = (char *)param_2[2];
  sVar1 = strlen((char *)param_2[2]);
  strncpy(acStack_54,pcVar3,sVar1);
  printf((char *)(DAT_000123bc + 0x12380),acStack_198,acStack_158,acStack_54);
  iVar2 = RK_wifi_start_keepalive(acStack_198);
  if (iVar2 != 1) {
    puts((char *)(DAT_000123c0 + 0x123a4));
  }
  return;
}



/* ===== FUN_000123c4 @ 000123c4 size=328 ===== */

void FUN_000123c4(void)

{
  int iVar1;
  
  do {
    RK_wifi_register_callback(DAT_0001250c + 0x123e0);
    iVar1 = RK_wifi_enable(1);
    if (iVar1 != 1) {
      puts((char *)(DAT_00012510 + 0x12404));
    }
    while (*(int *)(DAT_0001251c + 0x1243c) == 0xc) {
      sleep(1);
      printf((char *)(DAT_00012518 + 0x1242c),DAT_00012514 + 0x12420);
    }
    RK_wifi_scan();
    sleep(1);
    printf((char *)(DAT_00012524 + 0x12468),DAT_00012520 + 0x1245c);
    iVar1 = RK_wifi_enable(0);
    if (iVar1 != 1) {
      puts((char *)(DAT_00012528 + 0x1248c));
    }
    while (*(int *)(DAT_00012534 + 0x124c4) == 0xe) {
      sleep(1);
      printf((char *)(DAT_00012530 + 0x124b4),DAT_0001252c + 0x124a8);
    }
    iVar1 = *(int *)(DAT_00012538 + 0x124d8);
    *(int *)(DAT_0001253c + 0x124e8) = iVar1 + 1;
    printf((char *)(DAT_00012544 + 0x12504),DAT_00012540 + 75000,iVar1);
  } while( true );
}



/* ===== FUN_00012548 @ 00012548 size=164 ===== */

void FUN_00012548(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_000125ec + 0x12568;
  printf((char *)(DAT_000125f4 + 0x1257c),DAT_000125f0 + 0x12570,param_3,
         (char *)(DAT_000125f4 + 0x1257c),param_2,param_1);
  if (*(int *)(DAT_000125f8 + 0x1258c) == 0) {
    iVar1 = pthread_create((pthread_t *)(DAT_00012604 + 0x125c4),(pthread_attr_t *)0x0,
                           *(__start_routine **)(iVar1 + DAT_00012600),(void *)0x0);
    if (iVar1 != 0) {
      puts((char *)(DAT_00012608 + 0x125dc));
    }
  }
  else {
    puts((char *)(DAT_000125fc + 0x125a0));
  }
  return;
}



/* ===== FUN_0001260c @ 0001260c size=96 ===== */

void FUN_0001260c(int param_1,undefined4 *param_2)

{
  printf((char *)(DAT_0001266c + 0x12630),param_1);
  if (param_1 < 1) {
    puts((char *)(DAT_00012670 + 0x1264c));
  }
  else {
    Rk_wifi_ota(*param_2);
  }
  return;
}



/* ===== FUN_00012674 @ 00012674 size=372 ===== */

int FUN_00012674(char *param_1,int param_2)

{
  char *pcVar1;
  int local_10;
  char *local_c;
  
  local_10 = 0;
  printf((char *)(DAT_000127e8 + 0x126a4),param_1);
  local_c = param_1;
  while( true ) {
    for (; *local_c == ' '; local_c = local_c + 1) {
    }
    if (*local_c == '\0') {
      return local_10;
    }
    if (*local_c == '\"') {
      *(char **)(param_2 + local_10 * 4) = local_c + 1;
      pcVar1 = strrchr(local_c,0x22);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
        local_c = pcVar1 + 1;
      }
    }
    else {
      *(char **)(param_2 + local_10 * 4) = local_c;
    }
    local_10 = local_10 + 1;
    if (local_10 == 10) break;
    for (; (*local_c != '\0' && (*local_c != ' ')); local_c = local_c + 1) {
    }
    if (*local_c == ' ') {
      *local_c = '\0';
      local_c = local_c + 1;
    }
  }
  return 10;
}



/* ===== FUN_000127ec @ 000127ec size=356 ===== */

undefined4 FUN_000127ec(undefined4 param_1)

{
  int iVar1;
  char *local_40;
  undefined4 local_3c [9];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0x12;
  local_14 = 0;
  printf((char *)(DAT_00012950 + 0x12824),param_1);
  local_18 = FUN_00012674(param_1,&local_40,0);
  printf((char *)(DAT_00012954 + 0x12864),param_1,local_18,local_40,local_3c[0]);
  if (local_18 != 0) {
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      iVar1 = strcmp(*(char **)(DAT_00012958 + 0x12888 + local_c * 0xc),local_40);
      if (iVar1 == 0) {
        local_14 = (**(code **)(DAT_0001295c + local_c * 0xc + 0x128c8))(local_18 + -1,local_3c);
        if (local_14 == 0) {
          puts((char *)(DAT_00012960 + 0x12908));
          return 1;
        }
        puts((char *)(DAT_00012964 + 0x1291c));
        return 1;
      }
    }
  }
  return 1;
}



/* ===== FUN_00012968 @ 00012968 size=704 ===== */

undefined4 FUN_00012968(void)

{
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  char acStack_6c8 [1600];
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_84 [18];
  undefined4 local_72;
  undefined1 local_6e;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_88 = (undefined2)*(undefined4 *)(DAT_00012c28 + 0x129a0);
  local_86 = (undefined1)((uint)*(undefined4 *)(DAT_00012c28 + 0x129a0) >> 0x10);
  local_c = socket(1,1,0);
  if (local_c < 1) {
    puts((char *)(DAT_00012c2c + 0x129e0));
  }
  else {
    unlink((char *)(DAT_00012c30 + 0x129f8));
    memset(local_84,0,0x6e);
    local_84._0_2_ = 1;
    local_84._2_4_ = *(undefined4 *)(DAT_00012c34 + 0x12a2c);
    local_84._6_4_ = *(undefined4 *)(DAT_00012c34 + 0x12a30);
    local_84._10_4_ = *(undefined4 *)(DAT_00012c34 + 0x12a34);
    local_84._14_4_ = *(undefined4 *)(DAT_00012c34 + 0x12a38);
    local_72 = *(undefined4 *)(DAT_00012c34 + 0x12a3c);
    local_6e = *(undefined1 *)(DAT_00012c34 + 0x12a40);
    local_14 = bind(local_c,(sockaddr *)local_84,0x6e);
    if (local_14 < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_00012c3c + 0x12aac),DAT_00012c38 + 0x12aa0,pcVar2);
    }
    else {
      local_14 = listen(local_c,5);
      if (local_14 < 0) {
        puts((char *)(DAT_00012c40 + 0x12ae0));
      }
      else {
        while( true ) {
          do {
            puts((char *)(DAT_00012c44 + 0x12af8));
            local_10 = accept(local_c,(sockaddr *)0x0,(socklen_t *)0x0);
          } while (local_10 < 0);
          memset(acStack_6c8,0,0x640);
          local_14 = read(local_10,acStack_6c8,0x640);
          if (local_14 < 1) {
            puts((char *)(DAT_00012c48 + 0x12b68));
          }
          sVar3 = strlen((char *)&local_88);
          write(local_10,&local_88,sVar3 + 1);
          close(local_10);
          sVar3 = strlen(acStack_6c8);
          printf((char *)(DAT_00012c4c + 0x12bc4),acStack_6c8,sVar3);
          iVar4 = strncmp(acStack_6c8,(char *)(DAT_00012c50 + 0x12be0),4);
          if (iVar4 == 0) break;
          FUN_000127ec(acStack_6c8);
        }
        close(local_c);
      }
    }
  }
  return 0;
}



/* ===== FUN_00012c54 @ 00012c54 size=128 ===== */

void FUN_00012c54(void)

{
  undefined4 local_c;
  
  puts((char *)(DAT_00012cd4 + 0x12c6c));
  for (local_c = 0; local_c < 0x12; local_c = local_c + 1) {
    printf((char *)(DAT_00012cdc + 0x12cac),*(undefined4 *)(DAT_00012cd8 + local_c * 0xc + 0x12c8c))
    ;
  }
  return;
}



/* ===== FUN_00012ce0 @ 00012ce0 size=276 ===== */

undefined4 FUN_00012ce0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_t apStack_14 [2];
  
  iVar3 = DAT_00012df4 + 0x12d00;
  if (param_1 < 2) {
    FUN_00012c54();
    uVar2 = 1;
  }
  else {
    iVar1 = strcmp((char *)(DAT_00012df8 + 0x12d30),*(char **)(param_2 + 4));
    if (iVar1 == 0) {
      FUN_00012c54();
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp((char *)(DAT_00012dfc + 0x12d68),*(char **)(param_2 + 4));
      if (iVar1 == 0) {
        printf((char *)(DAT_00012e00 + 0x12d84));
        iVar1 = FUN_00011c98();
        if (iVar1 != 0) {
          pthread_create(apStack_14,(pthread_attr_t *)0x0,
                         *(__start_routine **)(iVar3 + DAT_00012e04),(void *)0x0);
          do {
            sleep(1);
          } while( true );
        }
        uVar2 = 0;
      }
      else if (param_1 < 2) {
        uVar2 = 1;
      }
      else {
        uVar2 = FUN_00011430(param_1,param_2);
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00012e08 @ 00012e08 size=280 ===== */

void FUN_00012e08(char *param_1,char *param_2,size_t param_3)

{
  FILE *__stream;
  size_t sVar1;
  char *pcVar2;
  size_t local_24;
  char *local_14;
  
  printf((char *)(DAT_00012f20 + 0x12e30),param_1);
  memset(param_2,0,param_3);
  __stream = popen(param_1,(char *)(DAT_00012f24 + 0x12e64));
  local_24 = param_3;
  local_14 = param_2;
  if (__stream == (FILE *)0x0) {
    printf((char *)(DAT_00012f2c + 0x12f10),param_1);
  }
  else {
    do {
      pcVar2 = fgets(local_14,local_24,__stream);
      if (pcVar2 == (char *)0x0) break;
      sVar1 = strlen(local_14);
      local_14 = local_14 + sVar1;
      sVar1 = strlen(local_14);
      local_24 = local_24 - sVar1;
    } while (1 < (int)local_24);
    printf((char *)(DAT_00012f28 + 0x12ef0),param_2);
    pclose(__stream);
  }
  return;
}



/* ===== FUN_00012f30 @ 00012f30 size=112 ===== */

bool FUN_00012f30(char *param_1)

{
  int iVar1;
  
  printf((char *)(DAT_00012fa0 + 0x12f54),0x30,param_1);
  iVar1 = system(param_1);
  if (-1 >= iVar1) {
    printf((char *)(DAT_00012fa4 + 0x12f84),0x34,param_1);
  }
  return -1 < iVar1;
}



/* ===== FUN_00012fa8 @ 00012fa8 size=548 ===== */

undefined4 FUN_00012fa8(undefined4 param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  char acStack_10c [256];
  FILE *local_c;
  
  memset(acStack_10c,0,0x100);
  local_c = fopen((char *)(DAT_000131d0 + 0x12fec),(char *)(DAT_000131cc + 0x12fe0));
  if (local_c == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sprintf(acStack_10c,(char *)(DAT_000131d4 + 0x1301c),param_1);
    fputs(acStack_10c,local_c);
    fwrite((void *)(DAT_000131d8 + 0x13048),1,0x20,local_c);
    fwrite((void *)(DAT_000131dc + 0x13060),1,0xf,local_c);
    fwrite((void *)(DAT_000131e0 + 0x13078),1,5,local_c);
    fputs(param_2,local_c);
    fputc(10,local_c);
    fwrite((void *)(DAT_000131e4 + 0x130a8),1,10,local_c);
    fwrite((void *)(DAT_000131e8 + 0x130c0),1,10,local_c);
    fwrite((void *)(DAT_000131ec + 0x130d8),1,0xd,local_c);
    fwrite((void *)(DAT_000131f0 + 0x130f0),1,0x18,local_c);
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      fwrite((void *)(DAT_000131f4 + 0x13124),1,0xc,local_c);
      fwrite((void *)(DAT_000131f8 + 0x1313c),1,6,local_c);
      fwrite((void *)(DAT_000131fc + 0x13154),1,0xf,local_c);
      fputs(param_3,local_c);
      fputc(10,local_c);
      fwrite((void *)(DAT_00013200 + 0x13184),1,0x15,local_c);
      fwrite((void *)(DAT_00013204 + 0x1319c),1,0x12,local_c);
      fwrite((void *)(DAT_00013208 + 0x131b4),1,0x11,local_c);
    }
    fclose(local_c);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001320c @ 0001320c size=232 ===== */

bool FUN_0001320c(void)

{
  FILE *__s;
  
  system((char *)(DAT_000132f4 + 0x13224));
  __s = fopen((char *)(DAT_000132fc + 0x13240),(char *)(DAT_000132f8 + 0x13234));
  if (__s != (FILE *)0x0) {
    fwrite((void *)(DAT_00013300 + 0x13274),1,10,__s);
    fwrite((void *)(DAT_00013304 + 0x1328c),1,0xf,__s);
    fputs((char *)(DAT_00013308 + 0x1329c),__s);
    fputc(10,__s);
    fwrite((void *)(DAT_0001330c + 0x132c4),1,0x28,__s);
    fwrite((void *)(DAT_00013310 + 0x132dc),1,0x17,__s);
    fclose(__s);
  }
  return __s != (FILE *)0x0;
}



/* ===== FUN_00013314 @ 00013314 size=360 ===== */

undefined4 FUN_00013314(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char acStack_10c [256];
  int local_c;
  
  memset(acStack_10c,0,0x100);
  FUN_00012fa8(param_1,param_2,param_3);
  sprintf(acStack_10c,(char *)(DAT_0001347c + 0x13368),param_1,acStack_10c,param_4);
  FUN_00012f30(acStack_10c);
  sleep(1);
  sprintf(acStack_10c,(char *)(DAT_00013480 + 0x13394),param_1);
  FUN_00012f30(acStack_10c);
  FUN_0001320c();
  memset(acStack_10c,0,0x100);
  sprintf(acStack_10c,(char *)(DAT_00013488 + 0x133d8),DAT_00013484 + 0x133d0,param_1);
  FUN_00012f30(acStack_10c);
  memset(acStack_10c,0,0x100);
  sprintf(acStack_10c,(char *)(DAT_00013490 + 0x13410),DAT_0001348c + 0x13408);
  FUN_00012f30(acStack_10c);
  local_c = 100;
  while ((0 < local_c &&
         (local_c = local_c + -1, iVar1 = access((char *)(DAT_00013494 + 0x1345c),0), iVar1 != 0)))
  {
    usleep(100000);
  }
  return 0;
}



/* ===== FUN_00013498 @ 00013498 size=400 ===== */

undefined4 FUN_00013498(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c8;
  undefined2 local_c4;
  char acStack_88 [128];
  
  FUN_00012f30(DAT_00013628 + 0x134bc);
  FUN_00012f30(DAT_0001362c + 0x134cc);
  FUN_00012f30(DAT_00013630 + 0x134dc);
  FUN_00012e08(DAT_00013634 + 0x134f8,acStack_88,0x80);
  pcVar1 = strstr(acStack_88,(char *)(DAT_00013638 + 0x1350c));
  if (pcVar1 == (char *)0x0) {
    local_c8 = *(undefined4 *)(DAT_00013648 + 0x13570);
    local_c4 = (undefined2)*(undefined4 *)(DAT_00013648 + 0x13574);
    FUN_00012f30(DAT_0001364c + 0x13588);
    FUN_00012f30(DAT_00013650 + 0x13598);
    FUN_00012f30(DAT_00013654 + 0x135a8);
    FUN_00012f30(DAT_00013658 + 0x135b8);
    iVar2 = strncmp(acStack_88,(char *)(DAT_0001365c + 0x135d0),6);
    if (iVar2 == 0) {
      FUN_00012f30(DAT_00013660 + 0x135ec);
    }
    else {
      FUN_00012f30(DAT_00013664 + 0x13600);
    }
  }
  else {
    local_c8 = *(undefined4 *)(DAT_0001363c + 0x13530);
    local_c4 = CONCAT11(local_c4._1_1_,(char)*(undefined4 *)(DAT_0001363c + 0x13534));
    FUN_00012f30(DAT_00013640 + 0x13548);
    FUN_00012f30(DAT_00013644 + 0x13558);
  }
  uVar3 = FUN_00013314(&local_c8,param_1,param_2,param_3);
  return uVar3;
}



/* ===== FUN_00013668 @ 00013668 size=232 ===== */

undefined4 FUN_00013668(void)

{
  char *pcVar1;
  int iVar2;
  char acStack_8c [128];
  int local_c;
  
  FUN_00012f30(DAT_00013750 + 0x13680);
  FUN_00012e08(DAT_00013754 + 0x1369c,acStack_8c,0x80);
  pcVar1 = strstr(acStack_8c,(char *)(DAT_00013758 + 0x136b0));
  if (pcVar1 == (char *)0x0) {
    FUN_00012f30(DAT_00013760 + 0x136e4);
    FUN_00012f30(DAT_00013764 + 0x136f4);
  }
  else {
    FUN_00012f30(DAT_0001375c + 0x136d0);
  }
  local_c = 100;
  while ((0 < local_c &&
         (local_c = local_c + -1, iVar2 = access((char *)(DAT_00013768 + 0x13730),0), iVar2 == 0)))
  {
    usleep(10000);
  }
  return 0;
}



/* ===== FUN_0001376c @ 0001376c size=76 ===== */

void FUN_0001376c(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)(DAT_000137b8 + 0x1378c) != 0) {
    (**(code **)(DAT_000137bc + 0x137a0))(param_1,param_2);
  }
  return;
}



/* ===== FUN_000137c0 @ 000137c0 size=416 ===== */

int FUN_000137c0(uint16_t param_1)

{
  uint16_t uVar1;
  sockaddr local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_14 = 1;
  local_c = socket(2,1,0);
  if (local_c < 0) {
    printf((char *)(DAT_00013964 + 0x13810),DAT_00013960 + 0x13804);
    local_c = -1;
  }
  else {
    local_10 = setsockopt(local_c,1,2,&local_14,4);
    if (local_10 < 0) {
      printf((char *)(DAT_0001396c + 0x13868),DAT_00013968 + 0x1385c,local_10);
      local_c = -2;
    }
    else {
      local_24.sa_data._2_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_24.sa_data._6_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_24.sa_data._10_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_24.sa_family = 2;
      local_24.sa_data[0] = '\0';
      local_24.sa_data[1] = '\0';
      local_24.sa_data._2_4_ = htonl(0);
      uVar1 = htons(param_1);
      local_24.sa_data[0] = (char)uVar1;
      local_24.sa_data[1] = (char)(uVar1 >> 8);
      local_10 = bind(local_c,&local_24,0x10);
      if (local_10 < 0) {
        printf((char *)(DAT_00013974 + 0x138f0),DAT_00013970 + 0x138e4,local_10);
        close(local_c);
        local_c = -3;
      }
      else {
        local_10 = listen(local_c,1);
        if (local_10 < 0) {
          printf((char *)(DAT_0001397c + 0x1393c),DAT_00013978 + 0x13930,local_10);
          close(local_c);
          local_c = -4;
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00013980 @ 00013980 size=552 ===== */

bool FUN_00013980(int param_1)

{
  size_t sVar1;
  ssize_t sVar2;
  char acStack_4580 [8888];
  undefined4 local_22c8;
  undefined4 uStack_22c4;
  undefined4 uStack_22c0;
  undefined4 uStack_22bc;
  undefined4 local_22b8;
  undefined4 uStack_22b4;
  undefined4 uStack_22b0;
  undefined2 local_22ac;
  undefined1 local_22aa;
  char *local_10;
  undefined4 local_c;
  
  memset(&local_22c8,0,0x22b8);
  memset(acStack_4580,0,0x22b8);
  local_c = 0;
  while( true ) {
    do {
      puts((char *)(DAT_00013ba8 + 0x139f8));
      RK_wifi_scan();
      usleep(800000);
      puts((char *)(DAT_00013bac + 0x13a18));
      local_10 = (char *)RK_wifi_scan_for_softap();
      printf((char *)(DAT_00013bb0 + 0x13a34),local_10);
    } while (local_10 == (char *)0x0);
    if ((local_10 == (char *)0x0) || (sVar1 = strlen(local_10), 2 < sVar1)) break;
    free(local_10);
  }
  local_22c8 = *(undefined4 *)(DAT_00013bb4 + 0x13a88);
  uStack_22c4 = *(undefined4 *)(DAT_00013bb4 + 0x13a8c);
  uStack_22c0 = *(undefined4 *)(DAT_00013bb4 + 0x13a90);
  uStack_22bc = *(undefined4 *)(DAT_00013bb4 + 0x13a94);
  local_22b8 = *(undefined4 *)(DAT_00013bb4 + 0x13a98);
  uStack_22b4 = *(undefined4 *)(DAT_00013bb4 + 0x13a9c);
  uStack_22b0 = *(undefined4 *)(DAT_00013bb4 + 0x13aa0);
  local_22ac = (undefined2)*(undefined4 *)(DAT_00013bb4 + 0x13aa4);
  local_22aa = (undefined1)((uint)*(undefined4 *)(DAT_00013bb4 + 0x13aa4) >> 0x10);
  strcat((char *)&local_22c8,local_10);
  sVar1 = strlen((char *)&local_22c8);
  *(undefined2 *)((int)&local_22c8 + sVar1) = *(undefined2 *)(DAT_00013bb8 + 0x13af0);
  sVar1 = strlen((char *)&local_22c8);
  snprintf(acStack_4580,0x22b8,(char *)(DAT_00013bbc + 0x13b30),sVar1,&local_22c8);
  printf((char *)(DAT_00013bc0 + 0x13b50),acStack_4580);
  sVar2 = send(param_1,acStack_4580,0x22b8,0);
  if (-1 < sVar2) {
    free(local_10);
  }
  return -1 < sVar2;
}



/* ===== FUN_00013bc4 @ 00013bc4 size=360 ===== */

bool FUN_00013bc4(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  undefined1 auStack_242c [113];
  char acStack_23bb [239];
  char acStack_22cc [8891];
  char local_11;
  
  iVar3 = DAT_00013d2c + 0x13bf8;
  memset(acStack_22cc,0,0x22b8);
  local_11 = '\0';
  iVar1 = RK_wifi_running_getConnectionInfo(auStack_242c);
  if ((iVar1 == 0) && (iVar1 = strncmp(acStack_23bb,(char *)(DAT_00013d30 + 0x13c58),9), iVar1 == 0)
     ) {
    local_11 = '\x01';
  }
  memset(acStack_22cc,0,0x22b8);
  if (local_11 == '\0') {
    iVar1 = DAT_00013d38 + 0x13cb0;
  }
  else {
    iVar1 = DAT_00013d34 + 0x13ca4;
  }
  snprintf(acStack_22cc,0x22b8,(char *)(DAT_00013d3c + 0x13ccc),1,iVar1);
  **(undefined1 **)(iVar3 + DAT_00013d40) = 0;
  sVar2 = send(param_1,acStack_22cc,0x22b8,0);
  return -1 < sVar2;
}



/* ===== FUN_00013d44 @ 00013d44 size=760 ===== */

undefined4 FUN_00013d44(int param_1,char *param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_22d4 [8888];
  int local_1c;
  char *local_18;
  char *local_14;
  
  iVar3 = DAT_0001403c + 0x13d78;
  memset(acStack_22d4,0,0x22b8);
  printf((char *)(DAT_00014044 + 0x13da8),DAT_00014040 + 0x13d9c);
  memset(acStack_22d4,0,0x22b8);
  snprintf(acStack_22d4,0x22b8,(char *)(DAT_0001404c + 0x13df0),0,DAT_00014048 + 0x13de0);
  sVar1 = send(param_1,acStack_22d4,0x22b8,0);
  if (sVar1 < 0) {
    uVar2 = 0;
  }
  else if (**(char **)(iVar3 + DAT_00014050) == '\0') {
    memset((void *)(DAT_00014054 + 0x13e60),0,0x80);
    memset((void *)(DAT_00014058 + 0x13e78),0,0x80);
    local_14 = strstr(param_2,(char *)(DAT_0001405c + 0x13e90));
    local_18 = strstr(param_2,(char *)(DAT_00014060 + 0x13eb0));
    strncpy((char *)(DAT_00014064 + 0x13ee4),local_14 + 8,(size_t)(local_18 + (-8 - (int)local_14)))
    ;
    local_14 = strstr(param_2,(char *)(DAT_00014068 + 0x13efc));
    local_18 = strstr(local_14,(char *)(DAT_0001406c + 0x13f14));
    strncpy((char *)(DAT_00014070 + 0x13f48),local_14 + 7,(size_t)(local_18 + (-7 - (int)local_14)))
    ;
    printf((char *)(DAT_0001407c + 0x13f74),DAT_00014078 + 0x13f6c,DAT_00014074 + 0x13f64,
           (uint)**(byte **)(iVar3 + DAT_00014050));
    FUN_0001376c(1,0);
    *(undefined4 *)(DAT_00014080 + 0x13f8c) = 1;
    system((char *)(DAT_00014084 + 0x13f9c));
    local_1c = RK_wifi_connect(DAT_0001408c + 0x13fb8,DAT_00014088 + 0x13fac);
    if (local_1c < 0) {
      FUN_0001376c(3,0);
      *(undefined4 *)(DAT_00014090 + 0x13fe4) = 3;
      **(undefined1 **)(iVar3 + DAT_00014050) = 0;
      uVar2 = 0;
    }
    else {
      **(undefined1 **)(iVar3 + DAT_00014050) = 1;
      printf((char *)(DAT_00014098 + 0x14028),DAT_00014094 + 0x1401c);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001409c @ 0001409c size=416 ===== */

undefined4 FUN_0001409c(int param_1,char *param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  char local_22c8 [4];
  char acStack_22c4 [8888];
  char *local_c;
  
  memset(acStack_22c4,0,0x22b8);
  memset(acStack_22c4,0,0x22b8);
  snprintf(acStack_22c4,0x22b8,(char *)(DAT_00014240 + 0x14124),0,DAT_0001423c + 0x14114);
  sVar1 = send(param_1,acStack_22c4,0x22b8,0);
  if (sVar1 < 0) {
    uVar2 = 0;
  }
  else {
    local_c = strstr(param_2,(char *)(DAT_00014244 + 0x14178));
    strncpy(local_22c8,local_c + 10,1);
    printf((char *)(DAT_0001424c + 0x141c4),DAT_00014248 + 0x141b8,local_22c8);
    if (local_22c8[0] == *(char *)(DAT_00014250 + 0x141e0)) {
      FUN_0001376c(2,0);
      *(undefined4 *)(DAT_00014254 + 0x14204) = 2;
      FUN_00013668();
    }
    else {
      FUN_0001376c(3,0);
      *(undefined4 *)(DAT_00014258 + 0x14228) = 3;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001425c @ 0001425c size=464 ===== */

void FUN_0001425c(int param_1)

{
  char *pcVar1;
  char acStack_80c [2048];
  ssize_t local_c;
  
  memset(acStack_80c,0,0x800);
  local_c = recv(param_1,acStack_80c,0x800,0);
  if (local_c == 0) {
    close(param_1);
  }
  else {
    acStack_80c[local_c] = '\0';
    printf((char *)(DAT_0001442c + 0x142fc),acStack_80c);
    pcVar1 = strstr(acStack_80c,(char *)(DAT_00014430 + 0x14318));
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(acStack_80c,(char *)(DAT_00014434 + 0x14360));
      if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(acStack_80c,(char *)(DAT_00014438 + 0x143a8));
        if (pcVar1 == (char *)0x0) {
          pcVar1 = strstr(acStack_80c,(char *)(DAT_0001443c + 0x143f0));
          if (pcVar1 != (char *)0x0) {
            FUN_0001409c(param_1,acStack_80c);
          }
        }
        else {
          FUN_00013bc4(param_1,acStack_80c);
        }
      }
      else {
        FUN_00013d44(param_1,acStack_80c);
      }
    }
    else {
      FUN_00013980(param_1,acStack_80c);
    }
    close(param_1);
  }
  return;
}



/* ===== FUN_00014440 @ 00014440 size=380 ===== */

undefined4 FUN_00014440(undefined4 *param_1)

{
  undefined4 uVar1;
  socklen_t local_24;
  sockaddr sStack_20;
  int local_10;
  undefined4 local_c;
  
  local_24 = 0x10;
  prctl(0xf,DAT_000145bc + 0x14464);
  local_c = *param_1;
  printf((char *)(DAT_000145c0 + 0x14488),local_c);
  uVar1 = FUN_000137c0(local_c);
  *(undefined4 *)(DAT_000145c4 + 0x144a8) = uVar1;
  if (*(int *)(DAT_000145c8 + 0x144b4) < 0) {
    printf((char *)(DAT_000145d0 + 0x144dc),local_c,*(undefined4 *)(DAT_000145cc + 0x144c8));
  }
  else {
    do {
      puts((char *)(DAT_000145d4 + 0x144f0));
      local_10 = accept(*(int *)(DAT_000145d8 + 0x14500),&sStack_20,&local_24);
      printf((char *)(DAT_000145dc + 0x14524),local_10);
      if (local_10 < 0) break;
      FUN_0001425c(local_10);
    } while (*(int *)(DAT_000145e0 + 0x14548) != 2);
  }
  puts((char *)(DAT_000145e4 + 0x1456c));
  shutdown(*(int *)(DAT_000145e8 + 0x1457c),2);
  close(*(int *)(DAT_000145ec + 0x14594));
  *(undefined4 *)(DAT_000145f0 + 0x145a8) = 0xffffffff;
  return 0;
}



/* ===== FUN_000145f4 @ 000145f4 size=136 ===== */

int FUN_000145f4(void)

{
  int iVar1;
  
  iVar1 = DAT_0001467c + 0x1460c;
  *(undefined4 *)(DAT_00014680 + 0x14614) = 0x20fb;
  *(undefined4 *)(DAT_00014684 + 0x14624) = 0;
  printf((char *)(DAT_0001468c + 0x14644),*(undefined4 *)(DAT_00014688 + 0x14634));
  iVar1 = pthread_create(*(pthread_t **)(iVar1 + DAT_00014698),(pthread_attr_t *)0x0,
                         (__start_routine *)(DAT_00014694 + 0x1465c),
                         (void *)(DAT_00014690 + 0x14654));
  return iVar1;
}



/* ===== FUN_0001469c @ 0001469c size=228 ===== */

undefined4 FUN_0001469c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_00014780 + 0x146b0;
  if (**(int **)(iVar3 + DAT_00014784) == 0) {
    uVar2 = 0;
  }
  else {
    if (-1 < *(int *)(DAT_00014788 + 0x146d4)) {
      shutdown(*(int *)(DAT_0001478c + 0x146e8),2);
      close(*(int *)(DAT_00014790 + 0x14700));
      *(undefined4 *)(DAT_00014794 + 0x14714) = 0xffffffff;
    }
    iVar1 = pthread_join(**(pthread_t **)(iVar3 + DAT_00014784),(void **)0x0);
    if (iVar1 == 0) {
      **(undefined4 **)(iVar3 + DAT_00014784) = 0;
      puts((char *)(DAT_0001479c + 0x14770));
      uVar2 = 0;
    }
    else {
      puts((char *)(DAT_00014798 + 0x14748));
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_000147a0 @ 000147a0 size=64 ===== */

undefined4 FUN_000147a0(undefined4 param_1)

{
  RK_wifi_enable(1);
  FUN_00013498(param_1,0,0);
  FUN_000145f4();
  return 0;
}



/* ===== FUN_000147e0 @ 000147e0 size=24 ===== */

undefined4 FUN_000147e0(void)

{
  FUN_0001469c();
  return 0;
}



/* ===== FUN_000147f8 @ 000147f8 size=52 ===== */

undefined4 FUN_000147f8(undefined4 param_1)

{
  *(undefined4 *)(DAT_0001482c + 0x14814) = param_1;
  return 0;
}



/* ===== _fini @ 00014860 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_reset @ 00027014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_reset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_enter_sleep @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_enter_sleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_start_keepalive @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_start_keepalive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::shutdown @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shutdown(int __fd,int __how)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_getSavedInfo @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_getSavedInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_stop_keepalive @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_stop_keepalive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_scan_r @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_scan_r(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::popen @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_connect_with_ssid @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_connect_with_ssid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_set_pir @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_set_pir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_disconnect_network @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_disconnect_network(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pclose @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_forget_with_ssid @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_forget_with_ssid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_connect @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_connect(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::Rk_wifi_ota @ 000270bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void Rk_wifi_ota(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 000270c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000270c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000270c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000270cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_cancel @ 000270d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_cancel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_running_getConnectionInfo @ 000270d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_running_getConnectionInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_enable @ 000270d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000270dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000270e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_scan @ 000270e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_scan(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 000270e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 000270ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 000270f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_register_callback @ 000270f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_register_callback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000270f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000270fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_wifi_scan_for_softap @ 00027100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_wifi_scan_for_softap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 00027104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00027108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00027110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00027114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



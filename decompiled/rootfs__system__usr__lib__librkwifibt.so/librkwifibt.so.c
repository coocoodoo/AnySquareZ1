// librkwifibt.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011a58 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::strcpy @ 00011a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0004400c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00044010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::popen @ 00011a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_00044014)(__command);
  return pFVar1;
}



/* ===== <EXTERNAL>::printf @ 00011aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00044018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::wpa_ctrl_close @ 00011aac size=12 ===== */

void wpa_ctrl_close(void)

{
  (*(code *)PTR_wpa_ctrl_close_0004401c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011ab8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00044020)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00044024)(__errnum);
  return pcVar1;
}



/* ===== get_ps_pid @ 00011ad0 size=12 ===== */

void get_ps_pid(void)

{
  (*(code *)PTR_get_ps_pid_00044028)();
  return;
}



/* ===== _get_id_from_list_network @ 00011adc size=12 ===== */

void _get_id_from_list_network(void)

{
  (*(code *)PTR__get_id_from_list_network_0004402c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00044030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pclose @ 00011af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00044034)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00044038)(__s);
  return iVar1;
}



/* ===== save_connect_info @ 00011b0c size=12 ===== */

void save_connect_info(void)

{
  (*(code *)PTR_save_connect_info_0004403c)();
  return;
}



/* ===== _get_bssid_from_list_network @ 00011b18 size=12 ===== */

void _get_bssid_from_list_network(void)

{
  (*(code *)PTR__get_bssid_from_list_network_00044040)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00044044)(__useconds);
  return iVar1;
}



/* ===== RK_encode_is_utf8 @ 00011b30 size=12 ===== */

void RK_encode_is_utf8(void)

{
  (*(code *)PTR_RK_encode_is_utf8_00044048)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 00011b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004404c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 00011b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00044050)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00011b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00044054)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00044058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011b6c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004405c)();
  return;
}



/* ===== gbk_to_utf8 @ 00011b78 size=12 ===== */

void gbk_to_utf8(void)

{
  (*(code *)PTR_gbk_to_utf8_00044060)();
  return;
}



/* ===== <EXTERNAL>::system @ 00011b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00044064)(__command);
  return iVar1;
}



/* ===== exec_command @ 00011b90 size=12 ===== */

void exec_command(void)

{
  (*(code *)PTR_exec_command_00044068)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004406c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::remove @ 00011ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_00044070)(__filename);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00044074)(__seconds);
  return uVar1;
}



/* ===== _get_columns_from_list_network @ 00011bc0 size=12 ===== */

void _get_columns_from_list_network(void)

{
  (*(code *)PTR__get_columns_from_list_network_00044078)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 00011bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0004407c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::socket @ 00011bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00044080)(__domain);
  return iVar1;
}



/* ===== get_bssid_from_list_network @ 00011be4 size=12 ===== */

void get_bssid_from_list_network(void)

{
  (*(code *)PTR_get_bssid_from_list_network_00044084)();
  return;
}



/* ===== <EXTERNAL>::wpa_ctrl_attach @ 00011bf0 size=12 ===== */

void wpa_ctrl_attach(void)

{
  (*(code *)PTR_wpa_ctrl_attach_00044088)();
  return;
}



/* ===== <EXTERNAL>::pthread_detach @ 00011bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_detach_0004408c)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00044090)(__nmemb);
  return pvVar1;
}



/* ===== get_columns_from_list_network @ 00011c14 size=12 ===== */

void get_columns_from_list_network(void)

{
  (*(code *)PTR_get_columns_from_list_network_00044094)();
  return;
}



/* ===== <EXTERNAL>::strcat @ 00011c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00044098)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011c2c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004409c)();
  return;
}



/* ===== _get_flags_from_list_network @ 00011c38 size=12 ===== */

void _get_flags_from_list_network(void)

{
  (*(code *)PTR__get_flags_from_list_network_000440a0)();
  return;
}



/* ===== <EXTERNAL>::wpa_ctrl_open @ 00011c44 size=12 ===== */

void wpa_ctrl_open(void)

{
  (*(code *)PTR_wpa_ctrl_open_000440a4)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00011c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000440a8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::pthread_kill @ 00011c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_kill(pthread_t __threadid,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_kill_000440ac)(__threadid);
  return iVar1;
}



/* ===== <EXTERNAL>::wpa_ctrl_get_fd @ 00011c68 size=12 ===== */

void wpa_ctrl_get_fd(void)

{
  (*(code *)PTR_wpa_ctrl_get_fd_000440b0)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00011c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000440b4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000440b8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000440bc)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtok @ 00011c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_000440c0)(__s);
  return pcVar1;
}



/* ===== exec_command_system @ 00011ca4 size=12 ===== */

void exec_command_system(void)

{
  (*(code *)PTR_exec_command_system_000440c4)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000440c8)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000440cc)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000440d0)(__s);
  return pvVar1;
}



/* ===== RK_encode_gbk_to_utf8 @ 00011cd4 size=12 ===== */

void RK_encode_gbk_to_utf8(void)

{
  (*(code *)PTR_RK_encode_gbk_to_utf8_000440d4)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000440d8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::poll @ 00011cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_000440dc)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000440e0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000440e4)(__s);
  return iVar1;
}



/* ===== get_id_from_list_network @ 00011d10 size=12 ===== */

void get_id_from_list_network(void)

{
  (*(code *)PTR_get_id_from_list_network_000440e8)();
  return;
}



/* ===== get_flags_from_list_network @ 00011d1c size=12 ===== */

void get_flags_from_list_network(void)

{
  (*(code *)PTR_get_flags_from_list_network_000440ec)();
  return;
}



/* ===== <EXTERNAL>::socketpair @ 00011d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socketpair_000440f0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00011d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000440f4)(__name);
  return iVar1;
}



/* ===== utf8_to_gbk @ 00011d40 size=12 ===== */

void utf8_to_gbk(void)

{
  (*(code *)PTR_utf8_to_gbk_000440f8)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000440fc)();
  return piVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00044100)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00044104)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00044108)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::wpa_ctrl_recv @ 00011d7c size=12 ===== */

void wpa_ctrl_recv(void)

{
  (*(code *)PTR_wpa_ctrl_recv_0004410c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011d94 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00044114)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00044118)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011dac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004411c)(__ptr);
  return;
}



/* ===== entry @ 00011db8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011e04 + 0x11dd0 == DAT_00011e00 + 0x11dc8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011e08 + 0x11dd8 + DAT_00011e0c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011e74 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011ee8 + 0x11e90;
  if (*(char *)(DAT_00011ee4 + 0x11e84) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011eec) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011ef0 + 0x11eb0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011ef4) != 0) {
    __deregister_frame_info(DAT_00011ef8 + 0x11ed0);
  }
  *(undefined1 *)(DAT_00011efc + 0x11ee0) = 1;
  return;
}



/* ===== _INIT_0 @ 00011f00 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011f38 + 0x11f10 + DAT_00011f3c) != 0) {
    __register_frame_info(DAT_00011f44 + 0x11f30,DAT_00011f40 + 0x11f2c);
  }
  if (((DAT_00011e68 + 0x11e28) - (DAT_00011e64 + 0x11e20) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011e6c + 0x11e30 + DAT_00011e70);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011f48 @ 00011f48 size=128 ===== */

byte * FUN_00011f48(byte *param_1)

{
  ushort uVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = DAT_00011fc8 + 0x11f64;
  if (*param_1 != 0) {
    sVar3 = strlen((char *)param_1);
    uVar4 = sVar3 - 1;
    if (!CARRY4((uint)param_1,uVar4)) {
      piVar5 = *(int **)(iVar7 + DAT_00011fcc);
      uVar1 = *(ushort *)(*piVar5 + (uint)param_1[uVar4] * 2);
      pbVar2 = param_1 + uVar4;
      while ((uVar1 & 0x20) != 0) {
        pbVar6 = pbVar2 + -1;
        *pbVar2 = 0;
        if (pbVar6 < param_1) {
          return param_1;
        }
        pbVar2 = pbVar6;
        uVar1 = *(ushort *)(*piVar5 + (uint)*pbVar6 * 2);
      }
    }
  }
  return param_1;
}



/* ===== FUN_00011fd0 @ 00011fd0 size=64 ===== */

char * FUN_00011fd0(void)

{
  int iVar1;
  timeval local_10;
  
  iVar1 = DAT_00012010;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  sprintf((char *)(iVar1 + 0x11ff0),(char *)(DAT_00012014 + 0x12004),local_10.tv_sec,
          local_10.tv_usec);
  return (char *)(iVar1 + 0x11ff0);
}



/* ===== wpa_wifi_scan @ 00012018 size=220 ===== */

undefined4 wpa_wifi_scan(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = FUN_00011fd0();
  iVar3 = DAT_000120f4 + 0x12038;
  iVar4 = DAT_000120f8 + 0x12040;
  printf((char *)(DAT_000120fc + 0x1205c),uVar1,iVar4,iVar3,0x3ff,DAT_000120f4 + 0x12048);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_20 = 0;
  local_18 = 0;
  uStack_1c = uStack_2c;
  uStack_14 = uStack_2c;
  exec_command(DAT_00012100 + 0x12074,local_30,0x20);
  iVar2 = strncmp(local_30,(char *)(DAT_00012104 + 0x12094),2);
  if ((iVar2 == 0) || (iVar2 = strncmp(local_30,(char *)(DAT_00012108 + 0x120b0),2), iVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_0001210c + 0x120ec),uVar1,iVar4,iVar3,0x405,local_30);
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



/* ===== FUN_00012110 @ 00012110 size=140 ===== */

bool FUN_00012110(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  char *__s;
  char local_a0 [140];
  
  __s = local_a0 + 8;
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  memset(__s,0,0x80);
  snprintf(__s,0x80,(char *)(DAT_0001219c + 0x12150),param_1,param_2);
  exec_command(__s,local_a0,8);
  bVar1 = false;
  if (local_a0[0] != '\0') {
    iVar2 = strncmp(local_a0,(char *)(DAT_000121a0 + 0x1218c),2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



/* ===== FUN_000121a4 @ 000121a4 size=212 ===== */

void FUN_000121a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  int iVar6;
  bool bVar7;
  char acStack_120 [128];
  char acStack_a0 [128];
  
  exec_command(DAT_00012278 + 0x121c8,acStack_120,0x80);
  iVar1 = atoi(acStack_120);
  uVar2 = FUN_00011fd0();
  iVar6 = iVar1 + -1;
  printf((char *)(DAT_00012284 + 0x12210),uVar2,DAT_00012280 + 0x12204,DAT_0001227c + 0x12214,0x63a,
         iVar6,acStack_120);
  if (0 < iVar6) {
    iVar5 = 2;
    __format = (char *)(DAT_00012288 + 0x1222c);
    do {
      snprintf(acStack_a0,0x80,__format,iVar5);
      exec_command(acStack_a0,acStack_120,0x80);
      iVar3 = atoi(acStack_120);
      iVar4 = 1;
      if (iVar3 == param_1) {
        iVar4 = iVar6;
      }
      FUN_00012110(iVar3,iVar4);
      bVar7 = iVar1 != iVar5;
      iVar5 = iVar5 + 1;
    } while (bVar7);
  }
  return;
}



/* ===== FUN_0001228c @ 0001228c size=340 ===== */

bool FUN_0001228c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s;
  char *__s_00;
  char *__format;
  char local_a0 [136];
  
  __s = local_a0 + 8;
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  memset(__s,0,0x80);
  snprintf(__s,0x80,(char *)(DAT_000123e0 + 0x122cc),param_1);
  exec_command(__s,local_a0,8);
  if ((local_a0[0] == '\0') ||
     (iVar2 = strncmp(local_a0,(char *)(DAT_000123e4 + 0x12300),2), iVar2 != 0)) {
    uVar3 = FUN_00011fd0();
    printf((char *)(DAT_000123fc + 0x123dc),uVar3,DAT_000123f8 + 0x123cc,DAT_000123f4 + 0x12408,
           0x579);
  }
  __s_00 = (char *)(DAT_000123e8 + 0x12334);
  __format = (char *)(DAT_000123ec + 0x1232c);
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  memset(__s,0,0x80);
  memset(__s_00,0,0x80);
  snprintf(__s,0x80,__format,param_1);
  snprintf(__s_00,0x80,__format,param_1);
  exec_command(__s,local_a0,8);
  bVar1 = false;
  if (local_a0[0] != '\0') {
    iVar2 = strncmp(local_a0,(char *)(DAT_000123f0 + 0x1239c),2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



/* ===== FUN_00012400 @ 00012400 size=132 ===== */

bool FUN_00012400(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  char *__s;
  char local_98 [136];
  
  __s = local_98 + 8;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  memset(__s,0,0x80);
  snprintf(__s,0x80,(char *)(DAT_00012484 + 0x12440),param_1);
  exec_command(__s,local_98,8);
  bVar1 = false;
  if (local_98[0] != '\0') {
    iVar2 = strncmp(local_98,(char *)(DAT_00012488 + 0x12474),2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



/* ===== FUN_0001248c @ 0001248c size=216 ===== */

void FUN_0001248c(undefined4 param_1)

{
  undefined4 uVar1;
  char *__s;
  undefined1 auStack_198 [128];
  char acStack_118 [128];
  char acStack_98 [132];
  
  uVar1 = FUN_00011fd0();
  __s = acStack_118;
  printf((char *)(DAT_0001256c + 0x124dc),uVar1,DAT_00012568 + 0x124cc,DAT_00012564 + 0x1250c,0x6a7,
         DAT_00012564 + 0x12528);
  memset(auStack_198,0,0x80);
  memset(__s,0,0x80);
  snprintf(__s,0x80,(char *)(DAT_00012570 + 0x12510),param_1);
  snprintf(acStack_98,0x80,(char *)(DAT_00012574 + 0x12528),param_1);
  if (*(char *)((int)&DAT_000125d4 + DAT_00012578) == '\0') {
    __s = acStack_98;
  }
  exec_command(__s,auStack_198,0x80);
  exec_command_system(DAT_0001257c + 0x1255c);
  return;
}



/* ===== wpa_wifi_disconnect_network @ 00012580 size=24 ===== */

undefined4 wpa_wifi_disconnect_network(void)

{
  exec_command_system(DAT_00012598 + 0x12590);
  return 1;
}



/* ===== wpa_wifi_recovery @ 0001259c size=48 ===== */

undefined4 wpa_wifi_recovery(void)

{
  exec_command_system(DAT_000125cc + 0x125ac);
  exec_command_system(DAT_000125d0 + 0x125b8);
  exec_command_system(DAT_000125d4 + 0x125c4);
  return 1;
}



/* ===== FUN_000125d8 @ 000125d8 size=164 ===== */

byte * FUN_000125d8(byte *param_1)

{
  ushort uVar1;
  byte *__src;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    iVar3 = **(int **)(DAT_0001267c + 0x125ec + DAT_00012680);
    uVar1 = *(ushort *)(iVar3 + (uint)*param_1 * 2);
    uVar4 = uVar1 & 0x20;
    __src = param_1;
    if ((uVar1 & 0x20) != 0) {
      uVar4 = 0;
      do {
        __src = __src + 1;
        uVar4 = uVar4 + 1;
        if (*__src == 0) break;
      } while ((*(ushort *)(iVar3 + (uint)*__src * 2) & 0x20) != 0);
    }
    sVar2 = strlen((char *)param_1);
    memmove(param_1,__src,(sVar2 + 1) - uVar4);
  }
  return param_1;
}



/* ===== FUN_00012684 @ 00012684 size=172 ===== */

undefined1 * FUN_00012684(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  
  sVar3 = strlen(param_1);
  memset(&stack0xfffffff0 + -(sVar3 + 8 & 0xfffffff8),0,sVar3 + 1);
  cVar6 = *param_1;
  puVar5 = param_2;
  if (cVar6 != '\0') {
    iVar2 = 0;
    do {
      while ((iVar4 = iVar2, cVar6 != '\\' || (cVar1 = param_1[1], cVar1 != '\"' && cVar1 != '\\')))
      {
        param_1 = param_1 + 1;
        param_2[iVar4] = cVar6;
        cVar6 = *param_1;
        iVar2 = iVar4 + 1;
        if (cVar6 == '\0') goto LAB_00012710;
      }
      param_1 = param_1 + 2;
      param_2[iVar4] = cVar1;
      cVar6 = *param_1;
      iVar2 = iVar4 + 1;
    } while (cVar6 != '\0');
LAB_00012710:
    puVar5 = param_2 + iVar4 + 1;
  }
  *puVar5 = 0;
  return param_2;
}



/* ===== FUN_00012730 @ 00012730 size=216 ===== */

undefined1 * FUN_00012730(char *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  
  sVar3 = strlen(param_1);
  iVar1 = -(sVar3 + 8 & 0xfffffff8);
  memset(&stack0xffffffe0 + iVar1,0,sVar3 + 1);
  cVar5 = *param_1;
  puVar7 = param_2;
  if (cVar5 != '\0') {
    iVar2 = 0;
    do {
      while ((iVar6 = iVar2, cVar5 != '\\' || (param_1[1] != 'x'))) {
        param_1 = param_1 + 1;
        param_2[iVar6] = cVar5;
        cVar5 = *param_1;
        iVar2 = iVar6 + 1;
        if (cVar5 == '\0') goto LAB_000127e8;
      }
      strcpy(&stack0xffffffe0 + iVar1,param_1);
      (&stack0xffffffe0)[iVar1] = 0x30;
      param_1 = param_1 + 4;
      (&stack0xffffffe4)[iVar1] = 0;
      uVar4 = strtoul(&stack0xffffffe0 + iVar1,(char **)0x0,0x10);
      param_2[iVar6] = (char)uVar4;
      cVar5 = *param_1;
      iVar2 = iVar6 + 1;
    } while (cVar5 != '\0');
LAB_000127e8:
    puVar7 = param_2 + iVar6 + 1;
  }
  *puVar7 = 0;
  return param_2;
}



/* ===== wpa_wifi_reset @ 00012808 size=96 ===== */

undefined4 wpa_wifi_reset(void)

{
  int iVar1;
  
  iVar1 = get_ps_pid(DAT_00012868 + 0x12818);
  if (iVar1 == 0) {
    exec_command_system(DAT_00012878 + 0x12858);
    exec_command_system(DAT_0001287c + 0x12864);
  }
  else {
    exec_command_system(DAT_0001286c + 0x1282c);
    exec_command_system(DAT_00012870 + 0x12838);
  }
  exec_command_system(DAT_00012874 + 0x12844);
  return 1;
}



/* ===== FUN_00012880 @ 00012880 size=216 ===== */

void FUN_00012880(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char acStack_418 [1028];
  
  iVar2 = DAT_0001295c;
  iVar1 = DAT_00012958;
  iVar5 = 5;
  memset(acStack_418,0,0x400);
  uVar3 = FUN_00011fd0();
  printf((char *)(DAT_00012968 + 0x128e4),uVar3,DAT_00012964 + 0x128d0,
         (int)&DAT_00012958 + DAT_00012960,0x67a);
  do {
    exec_command(iVar1 + 0x128b4,acStack_418,0x400);
    pcVar4 = strstr(acStack_418,(char *)(iVar2 + 0x128d8));
    if (pcVar4 != (char *)0x0) break;
    sleep(1);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = FUN_00011fd0();
  printf((char *)(DAT_00012974 + 0x1294c),uVar3,DAT_00012970 + 0x12940,DAT_0001296c + 0x129c0,0x681,
         acStack_418);
  return;
}



/* ===== FUN_00012978 @ 00012978 size=200 ===== */

void FUN_00012978(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00011fd0();
  iVar1 = DAT_00012a44;
  printf((char *)(DAT_00012a4c + 0x129c0),uVar2,DAT_00012a48 + 0x129b4,DAT_00012a40 + 0x12a34,0x863,
         (int)&DAT_00012a48 + DAT_00012a40);
  if (*(int *)((int)&DAT_00012a44 + iVar1) != 0) {
    wpa_ctrl_close();
    *(undefined4 *)((int)&DAT_00012a44 + iVar1) = 0;
  }
  iVar1 = DAT_00012a50;
  if (*(int *)(DAT_00012a50 + 0x12a80) != 0) {
    wpa_ctrl_close();
    *(undefined4 *)(iVar1 + 0x12a80) = 0;
  }
  iVar1 = DAT_00012a54;
  if (-1 < *(int *)(DAT_00012a54 + 0x12aa4)) {
    close(*(int *)(DAT_00012a54 + 0x12aa4));
    *(undefined4 *)(iVar1 + 0x12aa4) = 0xffffffff;
  }
  iVar1 = DAT_00012a58;
  if (-1 < *(int *)(DAT_00012a58 + 0x12ac8)) {
    close(*(int *)(DAT_00012a58 + 0x12ac8));
    *(undefined4 *)(iVar1 + 0x12ac8) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00012a5c @ 00012a5c size=208 ===== */

char * FUN_00012a5c(char *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  int iVar4;
  char *__format;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar5 = DAT_00012b30 + 0x12a8c;
    iVar4 = DAT_00012b2c + 0x12b4c;
    __format = (char *)(DAT_00012b34 + 0x12a94);
    do {
      uVar1 = FUN_00011fd0();
      __s = param_1 + 0x80;
      printf(__format,uVar1,iVar5,iVar4,0x7b,param_1,__s,param_2);
      iVar2 = strcmp(param_1,param_2);
      if (iVar2 == 0) {
        sVar3 = strlen(__s);
        strncpy(param_3,__s,sVar3);
        return param_3;
      }
      param_1 = *(char **)(param_1 + 0x100);
    } while (param_1 != (char *)0x0);
  }
  sVar3 = strlen(param_2);
  strncpy(param_3,param_2,sVar3);
  return param_3;
}



/* ===== wpa_wifi_running_getConnectionInfo @ 00013284 size=1832 ===== */

undefined4 wpa_wifi_running_getConnectionInfo(int *param_1)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__s;
  int iVar8;
  char *__s2;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 auStack_528 [256];
  undefined1 auStack_428 [256];
  char acStack_328 [255];
  char acStack_229 [521];
  
  uVar4 = FUN_00011fd0();
  printf((char *)(DAT_000132ec + 0x132c8),uVar4,DAT_000132e8 + 0x132bc,DAT_000132e4 + 0x13380);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = FUN_00011fd0();
  uVar10 = 0x328;
  iVar8 = DAT_00013200 + 0x12c38;
  iVar7 = DAT_00013204 + 0x12b70;
  iVar6 = DAT_00013200 + 0x12c5c;
  printf((char *)(DAT_00013208 + 0x12b8c),uVar4,iVar7,iVar8,0x328,iVar6,0x328);
  iVar1 = remove((char *)(DAT_0001320c + 0x12b98));
  if (iVar1 != 0) {
    uVar4 = FUN_00011fd0();
    printf((char *)(DAT_00013274 + 0x13128),uVar4,iVar7,iVar8,0x32b,iVar6,uVar10);
  }
  iVar6 = DAT_00013218;
  iVar1 = DAT_00013214;
  __s = acStack_229 + 1;
  exec_command_system(DAT_00013210 + 0x12bb4);
  iVar7 = DAT_0001321c;
  uVar4 = FUN_00011fd0();
  iVar8 = iVar1 + 0x12ca0;
  iVar6 = iVar6 + 0x12bd0;
  pcVar9 = (char *)(iVar7 + 0x12bd4);
  iVar1 = iVar1 + 0x12cc4;
  printf(pcVar9,uVar4,iVar6,iVar8,0x32d,iVar1,0x32d);
  memset(__s,0,0x200);
  exec_command(DAT_00013220 + 0x12c1c,__s,0x200);
  uVar4 = FUN_00011fd0();
  printf((char *)(DAT_00013224 + 0x12c44),uVar4,iVar6,iVar8,0x332,__s);
  uVar4 = FUN_00011fd0();
  printf(pcVar9,uVar4,iVar6,iVar8,0x333,iVar1,0x333);
  memset(__s,0,0x200);
  exec_command(DAT_00013228 + 0x12c90,__s,0x200);
  uVar4 = FUN_00011fd0();
  printf((char *)(DAT_0001322c + 0x12cb8),uVar4,iVar6,iVar8,0x337,__s);
  uVar4 = FUN_00011fd0();
  uVar10 = 0x338;
  iVar7 = iVar1;
  printf(pcVar9,uVar4,iVar6,iVar8,0x338,iVar1,0x338);
  __stream = fopen((char *)(DAT_00013234 + 0x12cf4),(char *)(DAT_00013230 + 0x12cf0));
  if (__stream == (FILE *)0x0) {
    uVar4 = FUN_00011fd0();
    printf((char *)(DAT_0001327c + 0x131a0),uVar4,iVar6,iVar8,0x33c,iVar7,uVar10);
    return 0;
  }
  uVar4 = FUN_00011fd0();
  iVar7 = DAT_00013238;
  iVar5 = DAT_00013238 + 0x12df4;
  __s2 = (char *)(DAT_0001323c + 0x12d34);
  printf(pcVar9,uVar4,iVar6,iVar8,0x33f,iVar1,0x33f);
  memset(param_1,0,0x170);
  memset(__s,0,0x200);
  while (pcVar9 = fgets(__s,0x1ff,__stream), pcVar9 != (char *)0x0) {
    sVar2 = strlen(__s);
    if (acStack_229[sVar2] == '\n') {
      acStack_229[sVar2] = '\0';
    }
    iVar1 = strncmp(__s,__s2,5);
    if (iVar1 == 0) {
      pcVar9 = strchr(__s,0x3d);
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        strncpy((char *)(param_1 + 1),pcVar9 + 1,0x14);
      }
    }
    else {
      iVar1 = strncmp(__s,(char *)(DAT_00013240 + 0x12df8),4);
      if (iVar1 == 0) {
        pcVar9 = strchr(__s,0x3d);
        if ((pcVar9 != (char *)0x0) && (sVar2 = strlen(pcVar9), 1 < sVar2)) {
          iVar1 = atoi(pcVar9 + 1);
          param_1[0x16] = iVar1;
        }
      }
      else {
        iVar1 = strncmp(__s,(char *)(DAT_00013244 + 0x12e44),4);
        if (iVar1 == 0) {
          pcVar9 = strchr(__s,0x3d);
          iVar1 = DAT_0001325c + 0x12f54;
          uVar4 = FUN_00011fd0();
          sVar2 = strlen(pcVar9);
          printf((char *)(DAT_00013260 + 0x12f90),uVar4,iVar1,iVar5,0x353,iVar7 + 0x12e18,sVar2);
          if (*pcVar9 != '\0') {
            pcVar9 = pcVar9 + 1;
            memset(auStack_528,0,0x100);
            memset(auStack_428,0,0x100);
            memset(acStack_328,0,0x100);
            FUN_00012730(pcVar9,auStack_528);
            FUN_00012684(auStack_528,auStack_428);
            FUN_00012a5c(*(undefined4 *)(DAT_00013264 + 0x130c0),auStack_428,acStack_328);
            uVar4 = FUN_00011fd0();
            printf((char *)(DAT_00013268 + 0x13050),uVar4,iVar1,iVar5,0x35f,pcVar9,auStack_428,
                   acStack_328);
            uVar4 = FUN_00011fd0();
            sVar2 = strlen(pcVar9);
            sVar3 = strlen(acStack_328);
            printf((char *)(DAT_0001326c + 0x13098),uVar4,iVar1,iVar5,0x360,sVar2,sVar3);
            sVar2 = strlen(acStack_328);
            strncpy((char *)(param_1 + 6),acStack_328,sVar2);
          }
        }
        else {
          iVar1 = strncmp(__s,(char *)(DAT_00013248 + 0x12e60),2);
          if (iVar1 == 0) {
            pcVar9 = strchr(__s,0x3d);
            if ((pcVar9 != (char *)0x0) && (sVar2 = strlen(pcVar9), 1 < sVar2)) {
              iVar1 = atoi(pcVar9 + 1);
              *param_1 = iVar1;
            }
          }
          else {
            iVar1 = strncmp(__s,(char *)(DAT_00013258 + 0x12f00),4);
            if (iVar1 == 0) {
              pcVar9 = strchr(__s,0x3d);
              if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
                strncpy((char *)((int)param_1 + 0x62),pcVar9 + 1,0x14);
              }
            }
            else {
              iVar1 = strncmp(__s,(char *)(DAT_00013270 + 0x130c8),9);
              if (iVar1 == 0) {
                pcVar9 = strchr(__s,0x3d);
                if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
                  strncpy((char *)((int)param_1 + 0x76),pcVar9 + 1,0x14);
                }
              }
              else {
                iVar1 = strncmp(__s,(char *)(DAT_00013278 + 0x13140),10);
                if (iVar1 == 0) {
                  pcVar9 = strchr(__s,0x3d);
                  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
                    strncpy((char *)((int)param_1 + 0x8a),pcVar9 + 1,0x14);
                  }
                }
                else {
                  iVar1 = strncmp(__s,(char *)(DAT_00013280 + 0x131c4),7);
                  if (((iVar1 == 0) && (pcVar9 = strchr(__s,0x3d), pcVar9 != (char *)0x0)) &&
                     (*pcVar9 != '\0')) {
                    strncpy((char *)((int)param_1 + 0xc6),pcVar9 + 1,0x14);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = FUN_00011fd0();
  printf((char *)(DAT_00013254 + 0x12ed4),uVar4,DAT_00013250 + 0x12ec8,DAT_0001324c + 0x12f88,0x37e,
         DAT_0001324c + 0x12fac,0x37e);
  fclose(__stream);
  return 1;
}



/* ===== FUN_00013908 @ 00013908 size=1532 ===== */

undefined4 FUN_00013908(int *param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 uVar6;
  char *__s;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_528 [256];
  undefined1 auStack_428 [256];
  char acStack_328 [255];
  char acStack_229 [521];
  
  uVar6 = FUN_00011fd0();
  printf((char *)(DAT_00013964 + 0x1394c),uVar6,DAT_00013960 + 0x13940,DAT_0001395c + 0x13a4c);
  iVar2 = remove((char *)(DAT_00013898 + 0x1330c));
  if (iVar2 != 0) {
    uVar6 = FUN_00011fd0();
    printf((char *)(DAT_000138f8 + 0x137c0),uVar6,DAT_000138f4 + 0x137b0,
           (int)&DAT_000138cc + DAT_000138f0,0x2cc);
  }
  iVar8 = DAT_000138a4;
  iVar2 = DAT_000138a0;
  __s = acStack_229 + 1;
  exec_command_system(DAT_0001389c + 0x13328);
  memset(__s,0,0x200);
  exec_command(DAT_000138a8 + 0x13350,__s,0x200);
  iVar8 = iVar8 + 0x1335c;
  uVar6 = FUN_00011fd0();
  iVar2 = iVar2 + 0x13474;
  printf((char *)(DAT_000138ac + 0x13384),uVar6,iVar8,iVar2,0x2d2,__s);
  memset(__s,0,0x200);
  exec_command(DAT_000138b0 + 0x133a8,__s,0x200);
  uVar6 = FUN_00011fd0();
  pcVar7 = __s;
  printf((char *)(DAT_000138b4 + 0x133d0),uVar6,iVar8,iVar2,0x2d6,__s);
  __stream = fopen((char *)(DAT_000138bc + 0x133e4),(char *)(DAT_000138b8 + 0x133e0));
  iVar1 = DAT_000138c0;
  if (__stream == (FILE *)0x0) {
    uVar6 = FUN_00011fd0();
    printf((char *)(DAT_00013900 + 0x13838),uVar6,iVar8,iVar2,0x2da,pcVar7);
    return 0;
  }
  memset(param_1,0,0x170);
  iVar2 = iVar1 + 0x13528;
  memset(__s,0,0x200);
  pcVar7 = (char *)(DAT_000138c4 + 0x13428);
  while (pcVar3 = fgets(__s,0x1ff,__stream), pcVar3 != (char *)0x0) {
    sVar4 = strlen(__s);
    if (acStack_229[sVar4] == '\n') {
      acStack_229[sVar4] = '\0';
    }
    iVar8 = strncmp(__s,pcVar7,5);
    if (iVar8 == 0) {
      pcVar3 = strchr(__s,0x3d);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        strncpy((char *)(param_1 + 1),pcVar3 + 1,0x14);
      }
    }
    else {
      iVar8 = strncmp(__s,(char *)(DAT_000138c8 + 0x134c0),4);
      if (iVar8 == 0) {
        pcVar3 = strchr(__s,0x3d);
        if ((pcVar3 != (char *)0x0) && (sVar4 = strlen(pcVar3), 1 < sVar4)) {
          iVar8 = atoi(pcVar3 + 1);
          param_1[0x16] = iVar8;
        }
      }
      else {
        iVar8 = strncmp(__s,(char *)(DAT_000138cc + 0x1350c),4);
        if (iVar8 == 0) {
          pcVar3 = strchr(__s,0x3d);
          iVar8 = DAT_000138d8 + 0x135e0;
          uVar6 = FUN_00011fd0();
          sVar4 = strlen(pcVar3);
          printf((char *)(DAT_000138dc + 0x1361c),uVar6,iVar8,iVar2,0x2f0,iVar1 + 0x1354c,sVar4);
          if (*pcVar3 != '\0') {
            pcVar3 = pcVar3 + 1;
            memset(auStack_528,0,0x100);
            memset(auStack_428,0,0x100);
            memset(acStack_328,0,0x100);
            FUN_00012730(pcVar3,auStack_528);
            FUN_00012684(auStack_528,auStack_428);
            FUN_00012a5c(*(undefined4 *)(DAT_000138e0 + 0x1374c),auStack_428,acStack_328);
            uVar6 = FUN_00011fd0();
            printf((char *)(DAT_000138e4 + 0x136dc),uVar6,iVar8,iVar2,0x2fc,pcVar3,auStack_428,
                   acStack_328);
            uVar6 = FUN_00011fd0();
            sVar4 = strlen(pcVar3);
            sVar5 = strlen(acStack_328);
            printf((char *)(DAT_000138e8 + 0x13724),uVar6,iVar8,iVar2,0x2fd,sVar4,sVar5);
            sVar4 = strlen(acStack_328);
            strncpy((char *)(param_1 + 6),acStack_328,sVar4);
          }
        }
        else {
          iVar8 = strncmp(__s,(char *)(DAT_000138d0 + 0x13528),2);
          if (iVar8 == 0) {
            pcVar3 = strchr(__s,0x3d);
            if ((pcVar3 != (char *)0x0) && (sVar4 = strlen(pcVar3), 1 < sVar4)) {
              iVar8 = atoi(pcVar3 + 1);
              *param_1 = iVar8;
            }
          }
          else {
            iVar8 = strncmp(__s,(char *)(DAT_000138d4 + 0x1358c),4);
            if (iVar8 == 0) {
              pcVar3 = strchr(__s,0x3d);
              if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                strncpy((char *)((int)param_1 + 0x62),pcVar3 + 1,0x14);
              }
            }
            else {
              iVar8 = strncmp(__s,(char *)(DAT_000138ec + 0x13754),9);
              if (iVar8 == 0) {
                pcVar3 = strchr(__s,0x3d);
                if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                  strncpy((char *)((int)param_1 + 0x76),pcVar3 + 1,0x14);
                }
              }
              else {
                iVar8 = strncmp(__s,(char *)(DAT_000138fc + 0x137d8),10);
                if (iVar8 == 0) {
                  pcVar3 = strchr(__s,0x3d);
                  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    strncpy((char *)((int)param_1 + 0x8a),pcVar3 + 1,0x14);
                  }
                }
                else {
                  iVar8 = strncmp(__s,(char *)(DAT_00013904 + 0x1385c),7);
                  if (((iVar8 == 0) && (pcVar3 = strchr(__s,0x3d), pcVar3 != (char *)0x0)) &&
                     (*pcVar3 != '\0')) {
                    strncpy((char *)((int)param_1 + 0xc6),pcVar3 + 1,0x14);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fclose(__stream);
  return 1;
}



/* ===== FUN_00013968 @ 00013968 size=740 ===== */

undefined4 FUN_00013968(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_190 [118];
  char acStack_11a [20];
  char local_106 [230];
  
  uVar2 = FUN_00011fd0();
  uVar4 = 0;
  bVar1 = true;
  iVar5 = DAT_00013c54 + 0x13b08;
  printf((char *)(DAT_00013c58 + 0x139c4),uVar2,DAT_00013c50 + 0x13994,DAT_00013c4c + 0x13af4,0x5c8)
  ;
  do {
    sleep(1);
    memset(auStack_190,0,0x170);
    FUN_00013908(auStack_190);
    iVar3 = strncmp(acStack_11a,(char *)(DAT_00013c78 + 0x13af8),9);
    if (iVar3 == 0) {
      if ((local_106[0] != '\0') &&
         (iVar3 = strncmp(local_106,(char *)(DAT_00013c5c + 0x139e8),9), iVar3 != 0)) {
        uVar2 = FUN_00011fd0();
        printf((char *)(DAT_00013cac + 0x13c44),uVar2,DAT_00013ca8 + 0x13c34,DAT_00013ca4 + 0x13d98,
               0x5d6);
        return 1;
      }
      if (uVar4 % 0x1e == 0) {
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = false;
        exec_command_system(DAT_00013c60 + 0x13a28);
        usleep(300000);
        exec_command_system(DAT_00013c64 + 0x13a40);
      }
    }
    else if (uVar4 == 0x14) {
      uVar2 = FUN_00011fd0();
      printf((char *)(DAT_00013c84 + 0x13b38),uVar2,DAT_00013c80 + 0x13b28,
             (int)&DAT_00013c8c + DAT_00013c7c,0x5e4);
      break;
    }
    uVar2 = FUN_00011fd0();
    uVar7 = 0x32;
    iVar3 = DAT_00013c68 + 0x13a58;
    uVar4 = uVar4 + 1;
    uVar6 = uVar4;
    printf((char *)(DAT_00013c6c + 0x13a7c),uVar2,iVar3,iVar5,0x5e8,uVar4,0x32);
    if (*(char *)(DAT_00013c70 + 0x13a88) == '\0') {
      uVar2 = FUN_00011fd0();
      printf((char *)(DAT_00013c94 + 0x13b98),uVar2,iVar3,iVar5,0x5eb,uVar6,uVar7);
      break;
    }
    if (*(char *)(DAT_00013c74 + 0x13b48) != '\0') {
      uVar2 = FUN_00011fd0();
      printf((char *)(DAT_00013c98 + 0x13bc0),uVar2,iVar3,iVar5,0x5f0,uVar6,uVar7);
      break;
    }
    if (*(char *)(DAT_00013c74 + 0x13b49) != '\0') {
      uVar2 = FUN_00011fd0();
      printf((char *)(DAT_00013c9c + 0x13be8),uVar2,iVar3,iVar5,0x5f5,uVar6,uVar7);
      break;
    }
    if (*(char *)(DAT_00013c74 + 0x13b4a) != '\0') {
      uVar2 = FUN_00011fd0();
      printf((char *)(DAT_00013ca0 + 0x13c10),uVar2,iVar3,iVar5,0x5fa,uVar6,uVar7);
      break;
    }
  } while (uVar4 != 0x32);
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00013c90 + 0x13b68),uVar2,DAT_00013c8c + 0x13b58,DAT_00013c88 + 0x13cbc,0x604)
  ;
  return 0;
}



/* ===== FUN_00013cb0 @ 00013cb0 size=116 ===== */

void FUN_00013cb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_188 [4];
  char acStack_184 [19];
  undefined1 local_171;
  char acStack_170 [63];
  undefined1 local_131;
  
  iVar2 = DAT_00013d28;
  iVar1 = DAT_00013d24;
  FUN_00013908(auStack_188);
  strncpy(acStack_170,(char *)(iVar1 + 0x13d80),0x40);
  strncpy(acStack_184,(char *)((int)&DAT_00013dc0 + iVar1),0x14);
  local_131 = 0;
  local_171 = 0;
  (*(code *)**(undefined4 **)(iVar2 + 0x13d00 + DAT_00013d2c))(param_1,auStack_188);
  return;
}



/* ===== FUN_00013d30 @ 00013d30 size=64 ===== */

void FUN_00013d30(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_00013d70 + 0x13d40 + DAT_00013d74);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  if (param_1 - 1U < 2) {
    FUN_00013cb0();
    return;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x57) = 0;
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00013d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== FUN_00013d78 @ 00013d78 size=68 ===== */

undefined4 FUN_00013d78(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_00013dc4 + 0x13db0),uVar1,DAT_00013dc0 + 0x13da4,DAT_00013dbc + 0x13f18,0x918,
         DAT_00013dbc + 0x13f18);
  return 0;
}



/* ===== FUN_00013dc8 @ 00013dc8 size=124 ===== */

bool FUN_00013dc8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00013e44 + 0x13dd8) != 0xc) {
    return false;
  }
  iVar1 = get_ps_pid(DAT_00013e48 + 0x13df4);
  if (0 >= iVar1) {
    uVar2 = FUN_00011fd0(iVar1);
    printf((char *)(DAT_00013e54 + 0x13e3c),uVar2,DAT_00013e50 + 0x13e2c,DAT_00013e4c + 0x13fc4,
           0x38b);
  }
  return 0 < iVar1;
}



/* ===== wpa_wifi_enable @ 00013e58 size=1300 ===== */

undefined4 wpa_wifi_enable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar1 = FUN_00011fd0();
  iVar3 = DAT_00014370;
  iVar9 = DAT_0001436c + 0x13e78;
  iVar8 = DAT_00014378 + 0x13e8c;
  iVar7 = DAT_00014374 + 0x14034;
  uVar2 = get_ps_pid(iVar9);
  uVar5 = *(undefined4 *)(iVar3 + 0x13f84);
  printf((char *)(DAT_0001437c + 0x13ec4),uVar1,iVar8,iVar7,0x399,uVar2,uVar5);
  uVar1 = FUN_00011fd0();
  if (param_1 == 0) {
    printf((char *)(DAT_0001438c + 0x13f38),uVar1,iVar8,iVar7,0x39b,DAT_00014388 + 0x13f2c,uVar5);
    iVar8 = FUN_00013dc8();
    if (iVar8 != 0) {
      exec_command_system(DAT_00014390 + 0x13f58);
      exec_command_system(DAT_00014394 + 0x13f64);
      *(undefined1 *)(DAT_00014398 + 0x13f78) = 0;
      usleep(200000);
      if (*(char *)(iVar3 + 0x13f2d) == '\0') {
        iVar8 = 0x31;
        do {
          usleep(200000);
          uVar1 = FUN_00011fd0();
          printf((char *)(DAT_000143a0 + 0x13fd8),uVar1,DAT_0001439c + 0x13fcc,iVar7,0x3de,
                 (uint)*(byte *)(iVar3 + 0x13f2d),iVar8);
          if (*(char *)(iVar3 + 0x13f2d) != '\0') break;
          bVar10 = iVar8 != 0;
          iVar8 = iVar8 + -1;
        } while (bVar10);
      }
      else {
        iVar8 = 0x32;
      }
      uVar1 = FUN_00011fd0();
      iVar3 = DAT_000143a4;
      printf((char *)(DAT_000143b0 + 0x14028),uVar1,DAT_000143ac + 0x1401c,DAT_000143a8 + 0x141b4,
             0x3e0,(uint)*(byte *)(DAT_000143a4 + 0x140a9),iVar8);
      exec_command_system(DAT_000143b4 + 0x14034);
      usleep(300000);
      exec_command_system(DAT_000143b8 + 0x1404c);
      usleep(300000);
      exec_command_system(DAT_000143bc + 0x14064);
      usleep(200000);
      iVar7 = DAT_000143c0;
      *(undefined4 *)(iVar3 + 0x14100) = 0;
      *(undefined4 *)(iVar7 + 0x14088) = 0xe;
      FUN_00013d30(0xe,0);
      iVar3 = get_ps_pid(DAT_000143c4 + 0x140a0);
      if (0 < iVar3) {
        exec_command_system(DAT_000143c8 + 0x140b4);
        usleep(200000);
      }
      uVar1 = FUN_00011fd0();
      printf((char *)(DAT_000143d4 + 0x140f4),uVar1,DAT_000143d0 + 0x140e0,DAT_000143cc + 0x14288,
             0x3f4);
      return 1;
    }
  }
  else {
    printf((char *)(DAT_00014384 + 0x13ef8),uVar1,iVar8,iVar7,0x39b,DAT_00014380 + 0x13ee8,uVar5);
    iVar3 = FUN_00013dc8();
    if (iVar3 == 0) {
      iVar3 = DAT_000143dc + 0x14118;
      *(undefined1 *)(DAT_000143d8 + 0x14114) = 1;
      exec_command_system(iVar3);
      exec_command_system(DAT_000143e0 + 0x14128);
      exec_command_system(DAT_000143e4 + 0x14134);
      iVar3 = get_ps_pid(iVar9);
      if (0 < iVar3) {
        exec_command_system(DAT_000143e8 + 0x14150);
        usleep(600000);
      }
      iVar3 = get_ps_pid(DAT_000143ec + 0x14168);
      if (0 < iVar3) {
        exec_command_system(DAT_000143f0 + 0x1417c);
        usleep(600000);
      }
      usleep(200000);
      iVar3 = access((char *)(DAT_000143f4 + 0x141a4),0);
      if (iVar3 == 0) {
        exec_command_system(DAT_000143f8 + 0x141b8);
      }
      else {
        iVar3 = access((char *)(DAT_00014418 + 0x1426c),0);
        if (iVar3 == 0) {
          iVar3 = exec_command_system(DAT_0001441c + 0x14280);
          if (iVar3 == 0) {
            exec_command_system(DAT_00014420 + 0x14294);
          }
          else {
            exec_command_system(DAT_00014444 + 0x14360);
          }
        }
        else {
          uVar1 = FUN_00011fd0();
          printf((char *)(DAT_0001443c + 0x1432c),uVar1,DAT_00014438 + 0x1431c,
                 DAT_00014434 + 0x144c4,0x3b9);
          puVar6 = (undefined1 *)(DAT_00014440 + 0x14340);
          *(undefined4 *)(DAT_00014440 + 0x14344) = 0xe;
          *puVar6 = 0;
          FUN_00013d30(0xe,0);
        }
      }
      usleep(500000);
      iVar7 = DAT_00014404;
      iVar3 = DAT_00014400;
      exec_command_system(DAT_000143fc + 0x141d4);
      *(undefined4 *)(iVar3 + 0x141e4) = 0xc;
      FUN_00013d30(0xc,0);
      iVar8 = pthread_create((pthread_t *)(iVar7 + 0x14304),(pthread_attr_t *)0x0,
                             (__start_routine *)(DAT_00014408 + 0x1420c),(void *)0x0);
      if (iVar8 != 0) {
        piVar4 = __errno_location();
        *piVar4 = iVar8;
        perror((char *)(DAT_00014424 + 0x142ac));
        uVar1 = FUN_00011fd0();
        printf((char *)(DAT_00014430 + 0x142dc),uVar1,DAT_0001442c + 0x142cc,DAT_00014428 + 0x14474,
               0x3cb);
        *(undefined4 *)(iVar3 + 0x141e4) = 0xe;
        *(undefined1 *)(iVar3 + 0x141e0) = 0;
        FUN_00013d30(0xe,0);
        return 0;
      }
      pthread_detach(*(pthread_t *)(iVar7 + 0x14304));
      uVar1 = FUN_00011fd0();
      printf((char *)(DAT_00014414 + 0x14250),uVar1,DAT_00014410 + 0x14240,
             (int)&DAT_000143e8 + DAT_0001440c,0x3d3);
      return 1;
    }
  }
  return 1;
}



/* ===== wpa_wifi_cancel @ 00014448 size=168 ===== */

byte wpa_wifi_cancel(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_000144f0;
  if (*(char *)(DAT_000144f0 + 0x14564) == '\0') {
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_00014500 + 0x144e4),uVar2,DAT_000144fc + 0x144d4,DAT_000144f8 + 0x1468c,
           0x7a5);
    return 0;
  }
  FUN_00014504[DAT_000144f0 + 6] = (code)0x1;
  if (FUN_00014504[iVar1 + 6] != (code)0x0) {
    sleep(1);
    iVar3 = 7;
    do {
      if (FUN_00014504[iVar1 + 6] == (code)0x0) break;
      sleep(1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return *(byte *)(DAT_000144f4 + 0x14556) ^ 1;
}



/* ===== FUN_00014504 @ 00014504 size=264 ===== */

char * FUN_00014504(char *param_1,char *param_2,char *param_3)

{
  char *__dest;
  size_t sVar1;
  undefined4 uVar2;
  char *__dest_00;
  
  __dest = param_1;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0' && param_3 != (char *)0x0)) &&
     (*param_3 != '\0')) {
    __dest = malloc(0x104);
    __dest_00 = __dest + 0x80;
    memset(__dest,0,0x80);
    memset(__dest_00,0,0x80);
    sVar1 = strlen(param_2);
    if ((0x7f < sVar1) || (sVar1 = strlen(param_3), 0x7f < sVar1)) {
      free(__dest);
      return param_1;
    }
    strcat(__dest,param_2);
    strcat(__dest_00,param_3);
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_00014614 + 0x145e4),uVar2,DAT_00014610 + 0x145d8,DAT_0001460c + 0x14794,0x48
           ,__dest,__dest_00);
    *(char **)(__dest + 0x100) = param_1;
  }
  return __dest;
}



/* ===== FUN_00014ce0 @ 00014ce0 size=988 ===== */

undefined4 FUN_00014ce0(undefined4 param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *__s;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  byte *__dest;
  char local_a38 [519];
  byte bStack_831;
  byte local_830 [511];
  char cStack_631;
  char local_630 [512];
  char local_430 [1028];
  
  __dest = local_830;
  __s = local_a38 + 8;
  strcpy((char *)__dest,param_2);
  strcpy(local_630,param_3);
  pbVar7 = &bStack_831;
  local_a38[0] = '\0';
  local_a38[1] = '\0';
  local_a38[2] = '\0';
  local_a38[3] = '\0';
  local_a38[4] = '\0';
  local_a38[5] = '\0';
  local_a38[6] = '\0';
  local_a38[7] = '\0';
  memset(__s,0,0x200);
  pcVar5 = (char *)(DAT_000150bc + 0x14d50);
  uVar8 = 0;
  pcVar6 = local_430;
  while( true ) {
    sVar2 = strlen((char *)__dest);
    if (sVar2 <= uVar8) break;
    pbVar7 = pbVar7 + 1;
    sprintf(pcVar6,pcVar5,(uint)*pbVar7);
    uVar8 = uVar8 + 1;
    pcVar6 = pcVar6 + 2;
  }
  local_430[sVar2 * 2] = '\0';
  strcpy((char *)__dest,local_430);
  uVar3 = FUN_00011fd0();
  printf((char *)(DAT_000150c8 + 0x14dd4),uVar3,DAT_000150c4 + 0x14dc8,DAT_000150c0 + 0x14fcc,0x614,
         __dest);
  snprintf(__s,0x200,(char *)(DAT_000150cc + 0x14de8),param_1,__dest);
  exec_command(__s,local_a38,8);
  if (local_a38[0] == '\0') {
    return 0;
  }
  pcVar6 = (char *)(DAT_000150d0 + 0x14e20);
  iVar4 = strncmp(local_a38,pcVar6,2);
  if (iVar4 != 0) {
    return 0;
  }
  local_a38[0] = '\0';
  local_a38[1] = '\0';
  local_a38[2] = '\0';
  local_a38[3] = '\0';
  local_a38[4] = '\0';
  local_a38[5] = '\0';
  local_a38[6] = '\0';
  local_a38[7] = '\0';
  memset(__s,0,0x200);
  if (*param_3 == '\0') {
    if (param_4 != 0) {
      if (param_4 == 2) goto LAB_00014ea4;
      if (param_4 != 1) {
        return 1;
      }
LAB_00014f8c:
      pcVar5 = &cStack_631;
      uVar8 = 0;
      pcVar6 = local_430;
      while( true ) {
        sVar2 = strlen(local_630);
        iVar4 = uVar8 * 2;
        bVar9 = sVar2 <= uVar8;
        uVar8 = uVar8 + 1;
        if (bVar9) break;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
        *pcVar6 = '\\';
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      }
      local_430[iVar4] = '\0';
      strcpy(local_630,local_430);
      uVar3 = FUN_00011fd0();
      printf((char *)(DAT_000150f0 + 0x15014),uVar3,DAT_000150ec + 0x15008,DAT_000150e8 + 0x1520c,
             0x61c,local_630);
      snprintf(__s,0x200,(char *)(DAT_000150f4 + 0x15028),param_1,local_630);
      exec_command(__s,local_a38,8);
      if (local_a38[0] == '\0') {
        return 0;
      }
      iVar4 = strncmp(local_a38,(char *)(DAT_000150f8 + 0x15060),2);
      goto joined_r0x000150b4;
    }
    pcVar5 = (char *)(DAT_000150fc + 0x1507c);
  }
  else {
    if (param_4 != 2) goto LAB_00014f8c;
LAB_00014ea4:
    snprintf(__s,0x200,(char *)(DAT_000150d4 + 0x14ec0),param_1,__dest);
    exec_command(__s,local_a38,8);
    if (local_a38[0] == '\0') {
      return 0;
    }
    pcVar6 = (char *)(DAT_000150d8 + 0x14ef0);
    iVar4 = strncmp(local_a38,pcVar6,2);
    if (iVar4 != 0) {
      return 0;
    }
    local_a38[0] = '\0';
    local_a38[1] = '\0';
    local_a38[2] = '\0';
    local_a38[3] = '\0';
    local_a38[4] = '\0';
    local_a38[5] = '\0';
    local_a38[6] = '\0';
    local_a38[7] = '\0';
    memset(__s,0,0x200);
    pcVar5 = (char *)(DAT_000150e0 + 0x14f30);
    *(undefined4 *)(DAT_000150dc + 0x14f2c) = param_1;
    snprintf(__s,0x200,pcVar5,param_1,param_3);
    exec_command(__s,local_a38,8);
    if (local_a38[0] == '\0') {
      return 0;
    }
    iVar4 = strncmp(local_a38,pcVar6,2);
    if (iVar4 != 0) {
      return 0;
    }
    local_a38[0] = '\0';
    local_a38[1] = '\0';
    local_a38[2] = '\0';
    local_a38[3] = '\0';
    local_a38[4] = '\0';
    local_a38[5] = '\0';
    local_a38[6] = '\0';
    local_a38[7] = '\0';
    memset(__s,0,0x200);
    pcVar5 = (char *)(DAT_000150e4 + 0x14f8c);
  }
  snprintf(__s,0x200,pcVar5,param_1);
  exec_command(__s,local_a38,8);
  if (local_a38[0] == '\0') {
    return 0;
  }
  iVar4 = strncmp(local_a38,pcVar6,2);
joined_r0x000150b4:
  if (iVar4 != 0) {
    return 0;
  }
  return 1;
}



/* ===== FUN_00015100 @ 00015100 size=1552 ===== */

char * FUN_00015100(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  FILE *__stream;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  void *pvVar13;
  char *__s;
  char *__delim;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uStack_370;
  int iStack_36c;
  undefined1 *local_364;
  int local_360;
  undefined1 *local_35c;
  undefined1 *local_358;
  undefined1 *local_354;
  char *local_350;
  char *local_34c;
  char *local_348;
  char *local_344;
  char *local_340;
  undefined2 *local_33c;
  char *local_338;
  FILE *local_334;
  size_t local_330;
  char *local_32c;
  char acStack_328 [128];
  char acStack_2a8 [255];
  char acStack_1a9 [389];
  
  puVar15 = &uStack_370;
  uVar5 = FUN_00011fd0();
  iStack_36c = DAT_00015710 + 0x15358;
  uStack_370 = 0x499;
  pcVar12 = (char *)(DAT_00015714 + 0x15134);
  printf((char *)(DAT_0001571c + 0x15148),uVar5,DAT_00015718 + 0x1513c,DAT_00015710 + 0x15344);
  remove(pcVar12);
  exec_command_system(DAT_00015720 + 0x1515c);
  __stream = fopen(pcVar12,(char *)(DAT_00015724 + 0x1516c));
  if (__stream == (FILE *)0x0) {
    return (char *)0x0;
  }
  local_334 = __stream;
  memset(acStack_2a8,0,0x100);
  fgets(acStack_2a8,0x100,__stream);
  pcVar12 = calloc(0x200,1);
  pvVar6 = *(void **)(DAT_00015728 + 0x15264);
  *(undefined2 *)pcVar12 = *(undefined2 *)(DAT_0001572c + 0x151c0);
  while (pvVar6 != (void *)0x0) {
    pvVar13 = *(void **)((int)pvVar6 + 0x100);
    free(pvVar6);
    pvVar6 = pvVar13;
  }
  puVar1 = (undefined4 *)(DAT_00015730 + 0x15300);
  *(undefined4 *)(DAT_00015730 + 0x1529c) = 0;
  pvVar6 = (void *)*puVar1;
  iVar11 = DAT_0001573c;
  while (DAT_0001573c = iVar11, pvVar6 != (void *)0x0) {
    pvVar13 = *(void **)((int)pvVar6 + 0x100);
    free(pvVar6);
    pvVar6 = pvVar13;
    iVar11 = DAT_0001573c;
  }
  local_330 = 0x200;
  __delim = (char *)(DAT_00015738 + 0x15234);
  *(undefined4 *)(DAT_00015734 + 0x15334) = 0;
  local_338 = (char *)(iVar11 + 0x1523c);
  local_34c = (char *)(DAT_00015740 + 0x15250);
  local_33c = (undefined2 *)(DAT_00015744 + 0x1525c);
  local_32c = acStack_2a8;
  do {
    pcVar7 = fgets(local_32c,0xff,local_334);
    if (pcVar7 == (char *)0x0) {
      sVar8 = strlen(pcVar12);
      if (pcVar12[sVar8 - 1] == ',') {
        pcVar12[sVar8 - 1] = '\0';
        sVar8 = strlen(pcVar12);
      }
      *(undefined2 *)(pcVar12 + sVar8) = *(undefined2 *)(DAT_00015764 + 0x15638);
      fclose(local_334);
      return pcVar12;
    }
    __s = acStack_1a9 + 1;
    pcVar7 = strtok(local_32c,local_338);
    memset(__s,0,0x180);
    sVar8 = strlen(__s);
    *(undefined2 *)(__s + sVar8) = *local_33c;
    if (pcVar7 != (char *)0x0) {
      bVar4 = false;
      uVar14 = 0;
      local_340 = (char *)(DAT_00015748 + 0x152cc);
LAB_000152f0:
      do {
        sVar8 = strlen(pcVar7);
        if (pcVar7[sVar8 - 1] == '\n') {
          pcVar7[sVar8 - 1] = '\0';
        }
        if ((1 << (uVar14 & 0xff) & 0x1fU) == 0) {
          if (uVar14 == 3) {
            memset(acStack_328,0,0x80);
LAB_000154cc:
            pcVar9 = strstr(pcVar7,local_34c);
            if ((pcVar9 == (char *)0x0) &&
               (pcVar7 = strstr(pcVar7,local_340), pcVar7 == (char *)0x0)) {
              bVar4 = true;
            }
            goto LAB_00015350;
          }
        }
        else {
          memset(acStack_328,0,0x80);
          if (uVar14 == 0) {
            snprintf(acStack_328,0x80,(char *)(DAT_0001574c + 0x15350),pcVar7);
          }
          else if (uVar14 == 1) {
            iVar11 = atoi(pcVar7);
            snprintf(acStack_328,0x80,(char *)(DAT_00015758 + 0x1559c),iVar11);
          }
          else if (uVar14 == 2) {
            iVar11 = atoi(pcVar7);
            snprintf(acStack_328,0x80,(char *)(DAT_0001575c + 0x155c0),iVar11);
          }
          else {
            if (uVar14 == 3) {
              snprintf(acStack_328,0x80,(char *)(DAT_00015760 + 0x15600),pcVar7);
              goto LAB_000154cc;
            }
            if (uVar14 == 4) {
              local_354 = (undefined1 *)puVar15;
              sVar8 = strlen(pcVar7);
              local_350 = (char *)(sVar8 + 1);
              local_358 = (undefined1 *)(sVar8 + 8 & 0xfffffff8);
              iVar11 = -(int)local_358;
              local_344 = (char *)((int)puVar15 + iVar11 + 8);
              memset(local_344,0,(size_t)local_350);
              if (*pcVar7 != '\0') {
                local_364 = (undefined1 *)((int)puVar15 + iVar11);
                sVar8 = strlen(pcVar7);
                iVar3 = -(sVar8 + 8 & 0xfffffff8);
                local_348 = (char *)((int)puVar15 + iVar3 + iVar11 + 8);
                memset(local_348,0,sVar8 + 1);
                FUN_00012730(pcVar7,local_348);
                sVar8 = strlen(local_348);
                local_360 = RK_encode_is_utf8(local_348,sVar8);
                local_35c = (undefined1 *)((int)puVar15 + ((iVar3 + iVar11) - (int)local_358) + 8);
                local_358 = (undefined1 *)((int)puVar15 + (int)local_358 * -2 + iVar3 + iVar11 + 8);
                memset(local_35c,0,(size_t)local_350);
                memset(local_358,0,(size_t)local_350);
                pcVar9 = local_348;
                if (local_360 == 0) {
                  local_350 = (char *)(DAT_00015768 + 0x1565c);
                  sVar8 = strlen(local_348);
                  RK_encode_gbk_to_utf8(local_348,sVar8,local_344);
                  FUN_00012684(local_348,local_358);
                  FUN_00012684(local_344,local_35c);
                  local_348 = local_350;
                  uVar5 = FUN_00014504(*(undefined4 *)(local_350 + 0xa8),local_358,local_35c);
                  *(undefined4 *)(local_348 + 0xa8) = uVar5;
                  sVar8 = strlen(local_344);
                  iVar11 = RK_encode_is_utf8(local_344,sVar8);
                  puVar15 = (undefined4 *)local_354;
                  if (iVar11 == 0) goto LAB_000152f0;
                }
                else {
                  sVar8 = strlen(local_348);
                  strncpy(local_344,pcVar9,sVar8);
                  FUN_00012684(pcVar9,local_358);
                  FUN_00012684(local_344,local_35c);
                }
                iVar11 = DAT_0001576c;
                if (bVar4) {
                  uVar5 = FUN_00014504(*(undefined4 *)(DAT_0001576c + 0x157fc),local_358,local_35c);
                  *(undefined4 *)(iVar11 + 0x157fc) = uVar5;
                }
              }
              snprintf(acStack_328,0x80,(char *)(DAT_00015750 + 0x154b4),local_344);
              puVar15 = (undefined4 *)local_354;
            }
          }
LAB_00015350:
          strcat(__s,acStack_328);
        }
        pcVar7 = strtok((char *)0x0,__delim);
        uVar14 = uVar14 + 1;
      } while (pcVar7 != (char *)0x0);
    }
    sVar8 = strlen(__s);
    if (acStack_1a9[sVar8] == ',') {
      acStack_1a9[sVar8] = '\0';
      sVar8 = strlen(__s);
    }
    cVar2 = *(char *)(DAT_00015754 + 0x15546);
    *(undefined2 *)(__s + sVar8) = *(undefined2 *)(DAT_00015754 + 0x15544);
    acStack_1a9[sVar8 + 3] = cVar2;
    sVar8 = strlen(pcVar12);
    sVar10 = strlen(__s);
    if (local_330 <= sVar8 + sVar10 + 3) {
      local_330 = local_330 + 0x200;
      pcVar12 = realloc(pcVar12,local_330);
    }
    strcat(pcVar12,__s);
  } while( true );
}



/* ===== wpa_wifi_scan_r @ 00015770 size=4 ===== */

char * wpa_wifi_scan_r(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  FILE *__stream;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  void *pvVar13;
  char *__s;
  char *__delim;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uStack_370;
  int iStack_36c;
  undefined1 *puStack_364;
  int iStack_360;
  undefined1 *puStack_35c;
  undefined1 *puStack_358;
  undefined1 *puStack_354;
  char *pcStack_350;
  char *pcStack_34c;
  char *pcStack_348;
  char *pcStack_344;
  char *pcStack_340;
  undefined2 *puStack_33c;
  char *pcStack_338;
  FILE *pFStack_334;
  size_t sStack_330;
  char *pcStack_32c;
  char acStack_328 [128];
  char acStack_2a8 [255];
  char acStack_1a9 [389];
  
  puVar15 = &uStack_370;
  uVar5 = FUN_00011fd0();
  iStack_36c = DAT_00015710 + 0x15358;
  uStack_370 = 0x499;
  pcVar12 = (char *)(DAT_00015714 + 0x15134);
  printf((char *)(DAT_0001571c + 0x15148),uVar5,DAT_00015718 + 0x1513c,DAT_00015710 + 0x15344);
  remove(pcVar12);
  exec_command_system(DAT_00015720 + 0x1515c);
  __stream = fopen(pcVar12,(char *)(DAT_00015724 + 0x1516c));
  if (__stream == (FILE *)0x0) {
    return (char *)0x0;
  }
  pFStack_334 = __stream;
  memset(acStack_2a8,0,0x100);
  fgets(acStack_2a8,0x100,__stream);
  pcVar12 = calloc(0x200,1);
  pvVar6 = *(void **)(DAT_00015728 + 0x15264);
  *(undefined2 *)pcVar12 = *(undefined2 *)(DAT_0001572c + 0x151c0);
  while (pvVar6 != (void *)0x0) {
    pvVar13 = *(void **)((int)pvVar6 + 0x100);
    free(pvVar6);
    pvVar6 = pvVar13;
  }
  puVar1 = (undefined4 *)(DAT_00015730 + 0x15300);
  *(undefined4 *)(DAT_00015730 + 0x1529c) = 0;
  pvVar6 = (void *)*puVar1;
  iVar11 = DAT_0001573c;
  while (DAT_0001573c = iVar11, pvVar6 != (void *)0x0) {
    pvVar13 = *(void **)((int)pvVar6 + 0x100);
    free(pvVar6);
    pvVar6 = pvVar13;
    iVar11 = DAT_0001573c;
  }
  sStack_330 = 0x200;
  __delim = (char *)(DAT_00015738 + 0x15234);
  *(undefined4 *)(DAT_00015734 + 0x15334) = 0;
  pcStack_338 = (char *)(iVar11 + 0x1523c);
  pcStack_34c = (char *)(DAT_00015740 + 0x15250);
  puStack_33c = (undefined2 *)(DAT_00015744 + 0x1525c);
  pcStack_32c = acStack_2a8;
  do {
    pcVar7 = fgets(pcStack_32c,0xff,pFStack_334);
    if (pcVar7 == (char *)0x0) {
      sVar8 = strlen(pcVar12);
      if (pcVar12[sVar8 - 1] == ',') {
        pcVar12[sVar8 - 1] = '\0';
        sVar8 = strlen(pcVar12);
      }
      *(undefined2 *)(pcVar12 + sVar8) = *(undefined2 *)(DAT_00015764 + 0x15638);
      fclose(pFStack_334);
      return pcVar12;
    }
    __s = acStack_1a9 + 1;
    pcVar7 = strtok(pcStack_32c,pcStack_338);
    memset(__s,0,0x180);
    sVar8 = strlen(__s);
    *(undefined2 *)(__s + sVar8) = *puStack_33c;
    if (pcVar7 != (char *)0x0) {
      bVar4 = false;
      uVar14 = 0;
      pcStack_340 = (char *)(DAT_00015748 + 0x152cc);
LAB_000152f0:
      do {
        sVar8 = strlen(pcVar7);
        if (pcVar7[sVar8 - 1] == '\n') {
          pcVar7[sVar8 - 1] = '\0';
        }
        if ((1 << (uVar14 & 0xff) & 0x1fU) == 0) {
          if (uVar14 == 3) {
            memset(acStack_328,0,0x80);
LAB_000154cc:
            pcVar9 = strstr(pcVar7,pcStack_34c);
            if ((pcVar9 == (char *)0x0) &&
               (pcVar7 = strstr(pcVar7,pcStack_340), pcVar7 == (char *)0x0)) {
              bVar4 = true;
            }
            goto LAB_00015350;
          }
        }
        else {
          memset(acStack_328,0,0x80);
          if (uVar14 == 0) {
            snprintf(acStack_328,0x80,(char *)(DAT_0001574c + 0x15350),pcVar7);
          }
          else if (uVar14 == 1) {
            iVar11 = atoi(pcVar7);
            snprintf(acStack_328,0x80,(char *)(DAT_00015758 + 0x1559c),iVar11);
          }
          else if (uVar14 == 2) {
            iVar11 = atoi(pcVar7);
            snprintf(acStack_328,0x80,(char *)(DAT_0001575c + 0x155c0),iVar11);
          }
          else {
            if (uVar14 == 3) {
              snprintf(acStack_328,0x80,(char *)(DAT_00015760 + 0x15600),pcVar7);
              goto LAB_000154cc;
            }
            if (uVar14 == 4) {
              puStack_354 = (undefined1 *)puVar15;
              sVar8 = strlen(pcVar7);
              pcStack_350 = (char *)(sVar8 + 1);
              puStack_358 = (undefined1 *)(sVar8 + 8 & 0xfffffff8);
              iVar11 = -(int)puStack_358;
              pcStack_344 = (char *)((int)puVar15 + iVar11 + 8);
              memset(pcStack_344,0,(size_t)pcStack_350);
              if (*pcVar7 != '\0') {
                puStack_364 = (undefined1 *)((int)puVar15 + iVar11);
                sVar8 = strlen(pcVar7);
                iVar3 = -(sVar8 + 8 & 0xfffffff8);
                pcStack_348 = (char *)((int)puVar15 + iVar3 + iVar11 + 8);
                memset(pcStack_348,0,sVar8 + 1);
                FUN_00012730(pcVar7,pcStack_348);
                sVar8 = strlen(pcStack_348);
                iStack_360 = RK_encode_is_utf8(pcStack_348,sVar8);
                puStack_35c = (undefined1 *)
                              ((int)puVar15 + ((iVar3 + iVar11) - (int)puStack_358) + 8);
                puStack_358 = (undefined1 *)
                              ((int)puVar15 + (int)puStack_358 * -2 + iVar3 + iVar11 + 8);
                memset(puStack_35c,0,(size_t)pcStack_350);
                memset(puStack_358,0,(size_t)pcStack_350);
                pcVar9 = pcStack_348;
                if (iStack_360 == 0) {
                  pcStack_350 = (char *)(DAT_00015768 + 0x1565c);
                  sVar8 = strlen(pcStack_348);
                  RK_encode_gbk_to_utf8(pcStack_348,sVar8,pcStack_344);
                  FUN_00012684(pcStack_348,puStack_358);
                  FUN_00012684(pcStack_344,puStack_35c);
                  pcStack_348 = pcStack_350;
                  uVar5 = FUN_00014504(*(undefined4 *)(pcStack_350 + 0xa8),puStack_358,puStack_35c);
                  *(undefined4 *)(pcStack_348 + 0xa8) = uVar5;
                  sVar8 = strlen(pcStack_344);
                  iVar11 = RK_encode_is_utf8(pcStack_344,sVar8);
                  puVar15 = (undefined4 *)puStack_354;
                  if (iVar11 == 0) goto LAB_000152f0;
                }
                else {
                  sVar8 = strlen(pcStack_348);
                  strncpy(pcStack_344,pcVar9,sVar8);
                  FUN_00012684(pcVar9,puStack_358);
                  FUN_00012684(pcStack_344,puStack_35c);
                }
                iVar11 = DAT_0001576c;
                if (bVar4) {
                  uVar5 = FUN_00014504(*(undefined4 *)(DAT_0001576c + 0x157fc),puStack_358,
                                       puStack_35c);
                  *(undefined4 *)(iVar11 + 0x157fc) = uVar5;
                }
              }
              snprintf(acStack_328,0x80,(char *)(DAT_00015750 + 0x154b4),pcStack_344);
              puVar15 = (undefined4 *)puStack_354;
            }
          }
LAB_00015350:
          strcat(__s,acStack_328);
        }
        pcVar7 = strtok((char *)0x0,__delim);
        uVar14 = uVar14 + 1;
      } while (pcVar7 != (char *)0x0);
    }
    sVar8 = strlen(__s);
    if (acStack_1a9[sVar8] == ',') {
      acStack_1a9[sVar8] = '\0';
      sVar8 = strlen(__s);
    }
    cVar2 = *(char *)(DAT_00015754 + 0x15546);
    *(undefined2 *)(__s + sVar8) = *(undefined2 *)(DAT_00015754 + 0x15544);
    acStack_1a9[sVar8 + 3] = cVar2;
    sVar8 = strlen(pcVar12);
    sVar10 = strlen(__s);
    if (sStack_330 <= sVar8 + sVar10 + 3) {
      sStack_330 = sStack_330 + 0x200;
      pcVar12 = realloc(pcVar12,sStack_330);
    }
    strcat(pcVar12,__s);
  } while( true );
}



/* ===== FUN_00015774 @ 00015774 size=208 ===== */

char * FUN_00015774(char *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *__format;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar5 = DAT_00015848 + 0x157a4;
    iVar4 = DAT_00015844 + 0x159e8;
    __format = (char *)(DAT_0001584c + 0x157ac);
    do {
      uVar1 = FUN_00011fd0();
      printf(__format,uVar1,iVar5,iVar4,0x66,param_1,param_1 + 0x80,param_2);
      iVar2 = strcmp(param_1 + 0x80,param_2);
      if (iVar2 == 0) {
        sVar3 = strlen(param_1);
        strncpy(param_3,param_1,sVar3);
        return param_3;
      }
      param_1 = *(char **)(param_1 + 0x100);
    } while (param_1 != (char *)0x0);
  }
  sVar3 = strlen(param_2);
  strncpy(param_3,param_2,sVar3);
  return param_3;
}



/* ===== FUN_000166ec @ 000166ec size=3988 ===== */

int FUN_000166ec(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  char acStack_a08 [256];
  char acStack_908 [256];
  char acStack_808 [256];
  int local_708;
  char local_704 [20];
  char local_6f0 [64];
  int local_6b0;
  char local_6a6;
  char local_692;
  char local_67e;
  char local_642;
  int local_62c;
  pollfd local_598;
  undefined2 uStack_590;
  undefined2 uStack_58e;
  undefined2 uStack_58c;
  short local_58a;
  char acStack_522 [20];
  char local_50e [230];
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined2 uStack_418;
  undefined1 local_416;
  int local_28;
  int local_24;
  char *local_20;
  
  uVar7 = FUN_00011fd0();
  iVar8 = DAT_0001695c;
  iVar14 = DAT_00016958 + 0x1670c;
  local_28 = 0x9c0;
  iVar11 = 10;
  pcVar12 = (char *)(DAT_0001695c + 0x16a6c);
  printf((char *)(DAT_00016960 + 0x16730),uVar7,iVar14,(int)&DAT_00016970 + DAT_0001695c);
  prctl(0xf,DAT_00016964 + 0x16740);
  *(undefined1 *)(DAT_00016968 + 0x167fd) = 0;
  uVar7 = FUN_00011fd0();
  local_28 = 0x9b0;
  local_24 = iVar8 + 0x16a50;
  printf((char *)(DAT_0001696c + 0x16778),uVar7,iVar14);
  do {
    iVar8 = access(pcVar12,0);
    if (iVar8 == 0) break;
    sleep(1);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  iVar8 = DAT_00016974;
  local_28 = DAT_00016970 + 0x167bc;
  snprintf((char *)(DAT_00016978 + 0x168dc),0x400,(char *)(DAT_0001697c + 0x167d0),
           (int)&DAT_00016b1c + DAT_00016974);
  iVar11 = get_ps_pid(DAT_00016980 + 0x167e0);
  if ((iVar11 < 1) && (iVar11 = FUN_00013d78(), iVar11 == 0)) {
    uVar7 = FUN_00011fd0();
    local_24 = (int)&DAT_00016b34 + iVar8;
    local_28 = 0x98a;
    printf((char *)(DAT_0001698c + 0x16888),uVar7,DAT_00016988 + 0x1687c);
  }
  else {
    iVar8 = DAT_00016984;
    iVar14 = DAT_00016984 + 0x16908;
    iVar11 = wpa_ctrl_open(iVar14);
    *(int *)(iVar8 + 0x1688c) = iVar11;
    if (iVar11 == 0) {
      uVar7 = FUN_00011fd0();
      piVar9 = __errno_location();
      local_20 = strerror(*piVar9);
      local_28 = 0x991;
      local_24 = iVar14;
      printf((char *)(DAT_000169a4 + 0x16938),uVar7,DAT_000169a0 + 0x16928,DAT_0001699c + 0x16c88);
    }
    else {
      iVar11 = wpa_ctrl_open(iVar14);
      *(int *)(iVar8 + 0x16890) = iVar11;
      if (iVar11 == 0) {
        wpa_ctrl_close(*(undefined4 *)(iVar8 + 0x1688c));
        *(undefined4 *)(iVar8 + 0x1688c) = 0;
      }
      else {
        iVar11 = wpa_ctrl_attach();
        if (iVar11 == 0) {
          iVar11 = socketpair(1,1,0,(int *)(iVar8 + 0x16894));
          if (iVar11 != -1) {
            pcVar12 = (char *)(DAT_00016578 + 0x15ae4);
            iVar11 = DAT_0001657c + 0x15b5c;
            iVar8 = DAT_00016580 + 0x15884;
            do {
              iVar14 = DAT_00016584;
              cVar1 = *(char *)(DAT_00016584 + 0x1593d);
              while( true ) {
                if (cVar1 != '\0') {
                  uVar7 = FUN_00011fd0();
                  printf((char *)(DAT_000165ec + 0x15b7c),uVar7,DAT_000165e8 + 0x15b6c,
                         DAT_000165e4 + 0x15dc4,0x9cc);
                  goto LAB_000159d8;
                }
                memset(&local_428,0,0x400);
                local_708 = 0x3ff;
                if (*(int *)(iVar14 + 0x1592c) == 0) {
                  snprintf((char *)&local_428,0x400,(char *)(DAT_00016650 + 0x15fa8),
                           DAT_00016648 + 0x15fa8,DAT_0001664c + 0x15fa0);
                  goto LAB_00015990;
                }
                uVar7 = wpa_ctrl_get_fd();
                local_598.revents = 0;
                local_58a = 0;
                local_598.fd._0_2_ = (undefined2)uVar7;
                local_598.fd._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
                local_598.events = 1;
                uStack_590 = (undefined2)*(undefined4 *)(iVar14 + 0x15934);
                uStack_58e = (undefined2)((uint)*(undefined4 *)(iVar14 + 0x15934) >> 0x10);
                uStack_58c = 9;
                iVar2 = poll(&local_598,2,1000);
                if (iVar2 < 0) break;
                if (((iVar2 == 0) && (iVar2 = get_ps_pid(DAT_000165c4 + 0x15a28), iVar2 < 1)) &&
                   (iVar2 = FUN_00013d78(), iVar2 == 0)) goto LAB_00015964;
                if (*(char *)(DAT_00016588 + 0x1591c) == '\0') {
                  uVar7 = FUN_00011fd0();
                  printf((char *)(DAT_00016594 + 0x15954),uVar7,DAT_00016590 + 0x15944,
                         DAT_0001658c + 0x15bb4,0x934);
                  *(undefined1 *)(DAT_00016598 + 0x15a11) = 1;
                  goto LAB_00015964;
                }
                if ((local_598.revents & 1U) == 0) {
                  if (local_58a != 0) {
                    uVar7 = FUN_00011fd0();
                    printf((char *)(DAT_000165dc + 0x15ac8),uVar7,DAT_000165d8 + 0x15abc,
                           DAT_000165d4 + 0x15d24,0x93f,(int)local_58a);
                  }
                  goto LAB_00015964;
                }
                iVar15 = wpa_ctrl_recv(*(undefined4 *)(DAT_000165e0 + 0x15b7c),&local_428,&local_708
                                      );
                iVar2 = local_708;
                if (iVar15 < 1) goto LAB_00015964;
                *(undefined1 *)((int)&local_428 + local_708) = 0;
                iVar15 = strncmp((char *)&local_428,pcVar12,7);
                if (iVar15 == 0) {
                  pcVar3 = strchr((char *)&local_428,0x20);
                  if (pcVar3 == (char *)0x0) {
                    local_428 = *(undefined4 *)(DAT_00016654 + 0x15ff8);
                    uStack_424 = *(undefined4 *)(DAT_00016654 + 0x15ffc);
                    uStack_420 = *(undefined4 *)(DAT_00016654 + 0x16000);
                    uStack_41c = *(undefined4 *)(DAT_00016654 + 0x16004);
                    uStack_418 = (undefined2)*(undefined4 *)(DAT_00016654 + 0x16008);
                    local_416 = (undefined1)((uint)*(undefined4 *)(DAT_00016654 + 0x16008) >> 0x10);
                    goto LAB_00015990;
                  }
                  if ((pcVar3[1] == '<') &&
                     (pcVar4 = strchr(pcVar3 + 2,0x3e), pcVar4 != (char *)0x0)) {
                    iVar2 = iVar2 - ((int)pcVar4 - (int)pcVar3);
                    memmove(pcVar3 + 1,pcVar4 + 1,(1 - ((int)pcVar3 - (int)&local_428)) + iVar2);
                  }
                }
                else if (((char)local_428 == '<') &&
                        (pcVar3 = strchr((char *)&local_428,0x3e), pcVar3 != (char *)0x0)) {
                  iVar2 = iVar2 - ((int)(pcVar3 + 1) - (int)&local_428);
                  memmove(&local_428,pcVar3 + 1,iVar2 + 1);
                }
                if (iVar2 != 0) goto LAB_00015990;
                cVar1 = *(char *)(iVar14 + 0x1593d);
              }
              uVar7 = FUN_00011fd0();
              printf((char *)(DAT_000165d0 + 0x15a78),uVar7,DAT_000165cc + 0x15a6c,
                     DAT_000165c8 + 0x15cd4,0x92a,iVar2);
LAB_00015964:
              snprintf((char *)&local_428,0x400,(char *)(DAT_000165a4 + 0x1598c),
                       DAT_0001659c + 0x1598c,DAT_000165a0 + 0x15984);
LAB_00015990:
              pcVar3 = strstr((char *)&local_428,(char *)(DAT_000165a8 + 0x159a0));
              if ((pcVar3 != (char *)0x0) ||
                 (pcVar3 = strstr((char *)&local_428,(char *)(DAT_000165f0 + 0x15bcc)),
                 pcVar3 != (char *)0x0)) goto LAB_000159a8;
              uVar7 = FUN_00011fd0();
              iVar14 = DAT_000165f4;
              iVar16 = DAT_000165f8 + 0x15bf4;
              iVar2 = DAT_000165f4 + 0x15e78;
              iVar15 = DAT_000165f4 + 0x15e88;
              pcVar3 = (char *)&local_428;
              printf((char *)(DAT_000165fc + 0x15c18),uVar7,iVar16,iVar2,0x8e0,iVar15,&local_428);
              pcVar4 = strstr((char *)&local_428,(char *)(DAT_00016600 + 0x15c28));
              if ((char *)&local_428 == pcVar4) {
                uVar7 = FUN_00011fd0();
                printf((char *)(DAT_00016658 + 0x1603c),uVar7,iVar16,iVar2,0x8e3,iVar2,pcVar3);
                exec_command_system(DAT_0001665c + 0x16048);
                memset(&local_708,0,0x170);
                FUN_00013908(&local_708);
                pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016660 + 0x16070));
                if (pcVar3 != (char *)0x0) {
                  strncpy(local_704,pcVar3 + 6,0x11);
                }
                pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016664 + 0x16098));
                if (pcVar3 != (char *)0x0) {
                  local_598.fd._0_2_ = 0;
                  local_598.fd._2_2_ = 0;
                  local_598.events = 0;
                  local_598.revents = 0;
                  uStack_590 = 0;
                  pcVar3 = strncpy((char *)&local_598,pcVar3 + 7,2);
                  local_62c = atoi(pcVar3);
                }
                FUN_00013d30(8,&local_708);
                if (*(char *)(DAT_00016668 + 0x161ec) == '\0') {
                  exec_command_system(DAT_0001666c + 0x160f8);
                  exec_command_system(DAT_00016670 + 0x16104);
                }
              }
              else {
                pcVar4 = strstr((char *)&local_428,(char *)(DAT_00016604 + 0x15c40));
                if ((char *)&local_428 == pcVar4) {
                  uVar7 = FUN_00011fd0();
                  iVar14 = 10;
                  iVar13 = DAT_00016674 + 0x16134;
                  printf((char *)(DAT_00016678 + 0x16140),uVar7,iVar16,iVar2,0x8ec,iVar15,pcVar3);
                  do {
                    FUN_00013908(&local_708);
                    if ((local_708 != 0 || local_6b0 != 0) ||
                       (((((local_6f0[0] != '\0' || local_704[0] != '\0') || local_6a6 != '\0') ||
                         local_67e != '\0') || local_642 != '\0') || local_692 != '\0')) break;
                    uVar7 = FUN_00011fd0();
                    printf((char *)(DAT_0001667c + 0x161b0),uVar7,iVar13,iVar11,0x8d1,iVar15);
                    usleep(100000);
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                  FUN_00013d30(7,&local_708);
                  iVar14 = DAT_00016680;
                  uVar7 = FUN_00011fd0();
                  iVar16 = DAT_00016684 + 0x16498;
                  iVar2 = DAT_00016684 + 0x164b4;
                  printf((char *)(DAT_00016688 + 0x16214),uVar7,iVar14 + 0x161e4,iVar16,0x651,iVar2)
                  ;
                  iVar15 = FUN_00013908(&local_598);
                  if (iVar15 != 0) {
                    memset(acStack_908,0,0x80);
                    exec_command(DAT_0001668c + 0x1624c,acStack_908,0x80);
                    iVar15 = atoi(acStack_908);
                    uVar7 = FUN_00011fd0();
                    iVar13 = iVar15 + -1;
                    iVar2 = iVar13;
                    pcVar3 = acStack_908;
                    printf((char *)(DAT_00016690 + 0x16288),uVar7,iVar14 + 0x161e4,iVar16,0x658,
                           iVar13,acStack_908);
                    if (0 < iVar13) {
                      iVar14 = 2;
                      pcVar4 = (char *)(DAT_00016694 + 0x162a8);
                      pcVar17 = (char *)(DAT_00016698 + 0x162b0);
                      do {
                        memset(acStack_808,0,0x80);
                        snprintf(acStack_808,0x80,pcVar17,iVar14);
                        exec_command(acStack_808,acStack_908,0x80);
                        iVar16 = atoi(acStack_908);
                        if (iVar16 != CONCAT22(local_598.fd._2_2_,(undefined2)local_598.fd)) {
                          memset(acStack_808,0,0x80);
                          snprintf(acStack_808,0x80,pcVar4,iVar16);
                          exec_command_system(acStack_808);
                        }
                        bVar18 = iVar15 != iVar14;
                        iVar14 = iVar14 + 1;
                      } while (bVar18);
                    }
                  }
                  if (*(char *)(DAT_0001669c + 0x16454) == '\0') {
                    uVar7 = FUN_00011fd0();
                    pcVar4 = (char *)(DAT_000166a8 + 0x16388);
                    pcVar17 = (char *)(DAT_000166ac + 0x1638c);
                    printf((char *)(DAT_000166b0 + 0x1639c),uVar7,DAT_000166a4 + 91000,
                           (int)&DAT_0001666c + DAT_000166a0,0x5ab,iVar2,pcVar3);
                    iVar14 = 0;
                    do {
                      usleep(500000);
                      memset(&local_598,0,0x170);
                      FUN_00013908(&local_598);
                      iVar2 = strncmp(acStack_522,pcVar4,9);
                      if (((iVar2 == 0) && (local_50e[0] != '\0')) &&
                         (iVar2 = strncmp(local_50e,pcVar17,9), iVar2 != 0)) {
                        uVar7 = FUN_00011fd0();
                        printf((char *)(DAT_000166e8 + 0x16568),uVar7,DAT_000166e4 + 0x16558,
                               DAT_000166e0 + 0x16850,0x5b4);
                        FUN_00013d30(0x12,&local_598);
                        break;
                      }
                      iVar2 = iVar14 + 1;
                      if (0xd < iVar14) {
                        exec_command_system(DAT_000166b4 + 0x1640c);
                        usleep(100000);
                        exec_command_system(DAT_000166b8 + 0x16428);
                      }
                      iVar14 = iVar2;
                    } while (iVar2 != 0x1e);
                    uVar7 = FUN_00011fd0();
                    printf((char *)(DAT_000166c4 + 0x16460),uVar7,DAT_000166c0 + 0x16450,
                           DAT_000166bc + 0x16748,0x5c2);
                  }
                }
                else {
                  pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016608 + 0x15c58));
                  if ((char *)&local_428 == pcVar3) {
                    uVar7 = FUN_00011fd0();
                    printf((char *)(DAT_000166d0 + 0x164d4),uVar7,iVar16,iVar2,0x8f4,iVar15);
                    exec_command_system(DAT_000166d4 + 0x164e0);
                    pcVar10 = (code *)**(undefined4 **)(iVar8 + DAT_000166d8);
                    if (pcVar10 != (code *)0x0) {
                      (*pcVar10)(0x10,0);
                    }
                  }
                  else {
                    pcVar3 = strstr((char *)&local_428,(char *)(DAT_0001660c + 0x15c70));
                    iVar13 = DAT_00016610;
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = strstr((char *)&local_428,(char *)(DAT_000166c8 + 0x16474));
                      if ((char *)&local_428 == pcVar3) {
                        uVar7 = FUN_00011fd0();
                        printf((char *)(DAT_000166cc + 0x164a4),uVar7,iVar16,iVar2,0x8fd,iVar15);
                        FUN_00012978();
LAB_000159a8:
                        uVar7 = FUN_00011fd0();
                        printf((char *)(DAT_000165b4 + 0x159d8),uVar7,DAT_000165b0 + 0x159c8,
                               DAT_000165ac + 0x15c20,0x9d5);
LAB_000159d8:
                        FUN_00012978();
                        uVar7 = FUN_00011fd0();
                        printf((char *)(DAT_000165c0 + 0x15a0c),uVar7,DAT_000165bc + 0x159fc,
                               DAT_000165b8 + 0x15c54,0x9da);
                        return 0;
                      }
                    }
                    else {
                      *(undefined1 *)(DAT_00016610 + 0x15d34) = 1;
                      uVar7 = FUN_00011fd0();
                      printf((char *)(DAT_00016614 + 0x15cbc),uVar7,iVar16,iVar2,0x8f9,iVar15);
                      memset(&local_708,0,0x170);
                      FUN_00013908(&local_708);
                      pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016618 + 0x15ce4));
                      if (pcVar3 == (char *)0x0) {
LAB_00015e50:
                        pcVar4 = strstr((char *)&local_428,(char *)(DAT_00016628 + 0x15e60));
                        if (pcVar4 != (char *)0x0) {
                          sVar5 = strlen(pcVar4);
                          sVar6 = strlen(pcVar3);
                          local_598.fd._0_2_ = 0;
                          local_598.fd._2_2_ = 0;
                          local_598.events = 0;
                          local_598.revents = 0;
                          uStack_590 = 0;
                          pcVar3 = strncpy((char *)&local_598,pcVar4 + 3,(sVar5 - 4) - sVar6);
                          local_708 = atoi(pcVar3);
                        }
                        strncpy(local_704,(char *)(DAT_0001662c + 0x15fac),0x14);
                      }
                      else {
                        pcVar4 = strstr((char *)&local_428,(char *)(DAT_0001661c + 0x15d00));
                        if (pcVar4 != (char *)0x0) {
                          sVar5 = strlen(pcVar3);
                          sVar6 = strlen(pcVar4);
                          memset(acStack_a08,0,0x100);
                          memset(acStack_908,0,0x100);
                          memset(acStack_808,0,0x100);
                          memset(&local_598,0,0x100);
                          strncpy(acStack_a08,pcVar3 + 6,(sVar5 - 6) - sVar6);
                          uVar7 = FUN_00011fd0();
                          sVar5 = strlen(acStack_a08);
                          printf((char *)(DAT_00016620 + 0x15dd8),uVar7,iVar16,iVar14 + 0x15ef8,
                                 0x8ad,iVar14 + 0x15f10,sVar5);
                          FUN_00012730(acStack_a08,acStack_908);
                          FUN_00012684(acStack_908,acStack_808);
                          FUN_00012a5c(*(undefined4 *)(iVar13 + 0x15d30),acStack_808,&local_598);
                          uVar7 = FUN_00011fd0();
                          printf((char *)(DAT_00016624 + 0x15e38),uVar7,iVar16,iVar14 + 0x15ef8,
                                 0x8b1,acStack_a08,acStack_808,&local_598);
                          sVar5 = strlen((char *)&local_598);
                          strncpy(local_6f0,(char *)&local_598,sVar5);
                          goto LAB_00015e50;
                        }
                        uVar7 = FUN_00011fd0();
                        printf((char *)(DAT_000166dc + 0x16534),uVar7,iVar16,iVar14 + 0x15ef8,0x8a1,
                               iVar14 + 0x15f10);
                      }
                      FUN_00013d30(4,&local_708);
                    }
                  }
                }
              }
              if (((*(char *)(DAT_00016630 + 0x15fe8) != '\0') &&
                  (pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016634 + 0x15ef0)),
                  pcVar3 != (char *)0x0)) &&
                 (pcVar3 = strstr((char *)&local_428,(char *)(DAT_00016638 + 0x15f08)),
                 iVar14 = DAT_0001663c, pcVar3 != (char *)0x0)) {
                memset(&local_598,0,0x80);
                snprintf((char *)&local_598,0x80,(char *)(DAT_00016640 + 0x15f40),
                         *(undefined4 *)(iVar14 + 0x15f34));
                exec_command_system(&local_598);
                memset(&local_598,0,0x80);
                snprintf((char *)&local_598,0x80,(char *)(DAT_00016644 + 0x15f70),
                         *(undefined4 *)(iVar14 + 0x15f34));
                exec_command_system(&local_598);
              }
            } while( true );
          }
          wpa_ctrl_close(*(undefined4 *)(iVar8 + 0x16890));
          wpa_ctrl_close(*(undefined4 *)(iVar8 + 0x1688c));
          *(undefined4 *)(iVar8 + 0x16890) = 0;
          *(undefined4 *)(iVar8 + 0x1688c) = 0;
        }
        else {
          wpa_ctrl_close(*(undefined4 *)(iVar8 + 0x16890));
          wpa_ctrl_close(*(undefined4 *)(iVar8 + 0x1688c));
          *(undefined4 *)(iVar8 + 0x16890) = 0;
          *(undefined4 *)(iVar8 + 0x1688c) = 0;
        }
      }
    }
  }
  uVar7 = FUN_00011fd0();
  local_24 = DAT_00016990 + 0x16afc;
  local_28 = 0x9c6;
  iVar8 = printf((char *)(DAT_00016998 + 0x168b8),uVar7,DAT_00016994 + 0x168ac);
  return iVar8;
}



/* ===== get_bssid_from_list_network @ 000169a8 size=368 ===== */

undefined4 get_bssid_from_list_network(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  char *__dest;
  int iVar5;
  char *pcVar6;
  char acStack_120 [128];
  char acStack_a0 [128];
  
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00016b20 + 0x169f4),uVar2,DAT_00016b1c + 0x169e8,DAT_00016b18 + 0x16d60,400,
         DAT_00016b18 + 0x16d7c);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    __dest = (char *)(param_1 + 4);
    __dest[0] = '\0';
    __dest[1] = '\0';
    __dest[2] = '\0';
    __dest[3] = '\0';
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    iVar1 = DAT_00016b24;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    memset(acStack_120,0,0x80);
    memset(acStack_a0,0,0x80);
    iVar4 = DAT_00016b2c;
    if (*(char *)(param_1 + 0x58) != '\0') {
      param_3 = param_3 + -1;
    }
    snprintf(acStack_120,0x80,(char *)(DAT_00016b28 + 0x16a60),param_3,param_2);
    exec_command(acStack_120,acStack_a0,0x80);
    uVar2 = FUN_00011fd0();
    iVar5 = iVar4 + 0x16e14;
    iVar4 = iVar4 + 0x16e30;
    pcVar6 = acStack_a0;
    printf((char *)(DAT_00016b30 + 0x16ac0),uVar2,iVar1 + 0x16a68,iVar5,0x19e,iVar4,param_2,param_3,
           acStack_a0);
    sVar3 = strlen(acStack_a0);
    sVar3 = sVar3 - 1;
    if (0x13 < sVar3) {
      sVar3 = 0x14;
    }
    strncpy(__dest,acStack_a0,sVar3);
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_00016b34 + 0x16b0c),uVar2,iVar1 + 0x16a68,iVar5,0x1a1,iVar4,__dest,param_3,
           pcVar6);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== get_id_from_list_network @ 00016b38 size=184 ===== */

int get_id_from_list_network(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_118 [128];
  char acStack_98 [132];
  
  memset(acStack_118,0,0x80);
  memset(acStack_98,0,0x80);
  snprintf(acStack_118,0x80,(char *)(DAT_00016bf0 + 0x16b88),param_1);
  exec_command(acStack_118,acStack_98,0x80);
  iVar1 = atoi(acStack_98);
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00016bfc + 0x16be4),uVar2,DAT_00016bf8 + 0x16bd8,DAT_00016bf4 + 0x16f80,0x1b1,
         DAT_00016bf4 + 0x16f9c,param_1,iVar1);
  return iVar1;
}



/* ===== get_columns_from_list_network @ 00016c00 size=184 ===== */

int get_columns_from_list_network(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_118 [128];
  char acStack_98 [132];
  
  memset(acStack_118,0,0x80);
  memset(acStack_98,0,0x80);
  snprintf(acStack_118,0x80,(char *)(DAT_00016cb8 + 0x16c50),param_1);
  exec_command(acStack_118,acStack_98,0x80);
  iVar1 = atoi(acStack_98);
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00016cc4 + 0x16cac),uVar2,DAT_00016cc0 + 0x16ca0,DAT_00016cbc + 0x17080,0x1c1,
         DAT_00016cbc + 0x170a0,param_1,iVar1);
  return iVar1;
}



/* ===== get_flags_from_list_network @ 00016cc8 size=388 ===== */

void get_flags_from_list_network(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  uint __n;
  char acStack_120 [128];
  char acStack_a0 [132];
  
  memset(param_1,0,param_2);
  memset(acStack_120,0,0x80);
  memset(acStack_a0,0,0x80);
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_00016e54 + 0x16d54),uVar1,DAT_00016e50 + 0x16d48,DAT_00016e4c + 0x17168,0x1cc,
         DAT_00016e4c + 0x17184);
  snprintf(acStack_120,0x80,(char *)(DAT_00016e58 + 0x16d68),param_4,param_3);
  exec_command(acStack_120,acStack_a0,0x80);
  iVar2 = strncmp(acStack_a0,(char *)(DAT_00016e5c + 0x16d94),9);
  if (((iVar2 != 0) && (iVar2 = strncmp(acStack_a0,(char *)(DAT_00016e60 + 0x16db0),10), iVar2 != 0)
      ) && (iVar2 = strncmp(acStack_a0,(char *)(DAT_00016e70 + 0x16e3c),0xf), iVar2 != 0)) {
    return;
  }
  sVar3 = strlen(acStack_a0);
  __n = sVar3 - 1;
  if (param_2 <= sVar3 - 1) {
    __n = param_2;
  }
  strncpy(param_1,acStack_a0,__n);
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_00016e6c + 0x16e20),uVar1,DAT_00016e68 + 0x16e14,DAT_00016e64 + 0x1722c,0x1d4,
         DAT_00016e64 + 0x17248,param_3,param_4,param_1);
  return;
}



/* ===== wpa_wifi_getSavedInfo @ 00016e74 size=1660 ===== */

undefined4 wpa_wifi_getSavedInfo(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  size_t sVar8;
  char *__format;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *__haystack;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *__dest;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int local_5ac;
  char acStack_5a8 [128];
  char acStack_528 [255];
  char acStack_429 [257];
  char acStack_328 [256];
  undefined1 auStack_228 [256];
  char acStack_128 [260];
  
  iVar11 = DAT_000174f0;
  uVar2 = FUN_00011fd0();
  iVar14 = DAT_000174f4 + 0x16eac;
  iVar12 = iVar11 + 0x17310;
  pcVar13 = (char *)(DAT_000174f8 + 0x16eb4);
  printf(pcVar13,uVar2,iVar14,iVar12,0x1de,iVar11 + 0x17328);
  exec_command_system(DAT_000174fc + 0x16ee4);
  usleep(1000);
  exec_command_system(DAT_00017500 + 0x16ef8);
  usleep(1000);
  memset(acStack_5a8,0,0x80);
  exec_command(DAT_00017504 + 0x16f24,acStack_5a8,0x80);
  local_5ac = atoi(acStack_5a8);
  local_5ac = local_5ac + -1;
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00017508 + 0x16f64),uVar2,iVar14,iVar12,0x1e9,param_2,&local_5ac);
  if (local_5ac < 1) {
    uVar2 = 0;
  }
  else {
    *param_2 = local_5ac;
    pvVar3 = malloc(local_5ac * 0x6c);
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_0001750c + 0x16fc0),uVar2,iVar14,iVar12,0x1f1,local_5ac,acStack_5a8,pvVar3);
    iVar12 = DAT_00017510;
    if (0 < local_5ac) {
      iVar9 = DAT_00017510 + 0x17488;
      pcVar10 = (char *)((int)pvVar3 + 0x58);
      __haystack = acStack_429 + 1;
      iVar18 = 0;
      do {
        iVar15 = iVar18 + 2;
        __dest = pcVar10 + -0x40;
        iVar7 = get_columns_from_list_network(iVar15);
        uVar2 = get_id_from_list_network(iVar15);
        *(undefined4 *)(pcVar10 + -0x58) = uVar2;
        get_flags_from_list_network(pcVar10,0x14,iVar15,iVar7);
        get_bssid_from_list_network(pcVar10 + -0x58,iVar15,iVar7);
        uVar2 = FUN_00011fd0();
        printf(pcVar13,uVar2,iVar14,iVar11 + 0x17340,0x151,iVar11 + 0x1735c);
        uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        __dest[0] = '\0';
        __dest[1] = '\0';
        __dest[2] = '\0';
        __dest[3] = '\0';
        *(undefined4 *)(pcVar10 + -0x3c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x38) = uVar19;
        *(undefined4 *)(pcVar10 + -0x34) = uVar1;
        pcVar10[-0xffffffff00000030] = '\0';
        pcVar10[-0xffffffff0000002f] = '\0';
        pcVar10[-0xffffffff0000002e] = '\0';
        pcVar10[-0xffffffff0000002d] = '\0';
        *(undefined4 *)(pcVar10 + -0x2c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x28) = uVar19;
        *(undefined4 *)(pcVar10 + -0x24) = uVar1;
        pcVar10[-0xffffffff00000020] = '\0';
        pcVar10[-0xffffffff0000001f] = '\0';
        pcVar10[-0xffffffff0000001e] = '\0';
        pcVar10[-0xffffffff0000001d] = '\0';
        *(undefined4 *)(pcVar10 + -0x1c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x18) = uVar19;
        *(undefined4 *)(pcVar10 + -0x14) = uVar1;
        pcVar10[-0xffffffff00000010] = '\0';
        pcVar10[-0xffffffff0000000f] = '\0';
        pcVar10[-0xffffffff0000000e] = '\0';
        pcVar10[-0xffffffff0000000d] = '\0';
        *(undefined4 *)(pcVar10 + -0xc) = uVar2;
        *(undefined4 *)(pcVar10 + -8) = uVar19;
        *(undefined4 *)(pcVar10 + -4) = uVar1;
        memset(acStack_528,0,0x100);
        memset(__haystack,0,0x100);
        iVar17 = DAT_00017534;
        iVar16 = DAT_00017518;
        if ((iVar7 < 4) || ((iVar7 == 4 && (*pcVar10 != '\0')))) {
          snprintf(acStack_528,0x100,(char *)(DAT_00017530 + 0x172c8),iVar15);
          exec_command(acStack_528,__haystack,0x100);
          iVar17 = iVar17 + 0x172e4;
          uVar2 = FUN_00011fd0();
          printf((char *)(DAT_00017538 + 0x1731c),uVar2,iVar17,iVar9,0x15d,iVar12 + 0x174a4,iVar15,
                 __haystack);
          uVar2 = FUN_00011fd0();
          sVar8 = strlen(__haystack);
          printf((char *)(DAT_0001753c + 0x17364),uVar2,iVar17,iVar9,0x15e,iVar12 + 0x174a4,sVar8);
          memset(auStack_228,0,0x100);
          memset(acStack_128,0,0x100);
          memset(acStack_328,0,0x100);
          sVar8 = strlen(__haystack);
          acStack_429[sVar8] = '\0';
          FUN_00012684(__haystack,acStack_328);
          FUN_00012730(acStack_328,auStack_228);
          FUN_00012a5c(*(undefined4 *)(DAT_00017540 + 0x17480),auStack_228,acStack_128);
          uVar2 = FUN_00011fd0();
          uVar19 = 0x168;
          __format = (char *)(DAT_00017544 + 0x1740c);
          iVar16 = iVar9;
          pcVar4 = acStack_328;
LAB_000171c8:
          printf(__format,uVar2,iVar17,iVar16,uVar19,pcVar4,auStack_228,acStack_128);
          sVar8 = strlen(acStack_128);
          strncpy(__dest,acStack_128,sVar8);
        }
        else {
          snprintf(acStack_528,0x100,(char *)(DAT_00017514 + 0x17034),iVar15);
          exec_command(acStack_528,__haystack,0x100);
          iVar17 = iVar16 + 0x17050;
          uVar2 = FUN_00011fd0();
          iVar16 = (int)&DAT_00017510 + DAT_0001751c;
          iVar7 = (int)&DAT_0001752c + DAT_0001751c;
          printf((char *)(DAT_00017520 + 0x17098),uVar2,iVar17,iVar16,0x170,iVar7,iVar15,__haystack)
          ;
          memset(acStack_528,0,0x100);
          sprintf(acStack_528,(char *)(DAT_00017524 + 0x170bc),*(undefined4 *)(pcVar10 + -0x58));
          sVar8 = strlen(acStack_528);
          pcVar4 = strstr(__haystack,pcVar10 + -0x54);
          if (pcVar4 != (char *)0x0) {
            sVar5 = strlen(__haystack);
            sVar6 = strlen(pcVar4);
            memset(acStack_328,0,0x100);
            strncpy(acStack_328,__haystack + sVar8,(sVar5 - sVar6) - sVar8);
            FUN_00011f48(acStack_328);
            FUN_000125d8();
            memset(__haystack,0,0x100);
            memset(auStack_228,0,0x100);
            memset(acStack_128,0,0x100);
            FUN_00012684(acStack_328,__haystack);
            FUN_00012730(__haystack,auStack_228);
            FUN_00012a5c(*(undefined4 *)(DAT_00017528 + 0x17240),auStack_228,acStack_128);
            uVar2 = FUN_00011fd0();
            uVar19 = 0x186;
            __format = (char *)(DAT_0001752c + 0x171cc);
            pcVar4 = __haystack;
            goto LAB_000171c8;
          }
          uVar2 = FUN_00011fd0();
          printf((char *)(DAT_00017554 + 0x174ec),uVar2,iVar17,iVar16,0x177,iVar7,__haystack,
                 pcVar10 + -0x54);
        }
        iVar18 = iVar18 + 1;
        pcVar10 = pcVar10 + 0x6c;
      } while (iVar18 < local_5ac);
      if (0 < local_5ac) {
        iVar12 = 0;
        iVar9 = DAT_0001754c + 0x1743c;
        pcVar13 = (char *)(DAT_00017550 + 0x17440);
        iVar14 = DAT_00017548 + 0x1789c;
        iVar11 = (int)pvVar3 + 0x18;
        do {
          uVar2 = FUN_00011fd0();
          iVar12 = iVar12 + 1;
          printf(pcVar13,uVar2,iVar9,iVar14,0x1ff,*(undefined4 *)(iVar11 + -0x18),iVar11,
                 iVar11 + -0x14,iVar11 + 0x40);
          iVar11 = iVar11 + 0x6c;
        } while (iVar12 < local_5ac);
      }
    }
    uVar2 = 1;
    *param_1 = pvVar3;
  }
  return uVar2;
}



/* ===== _get_bssid_from_list_network @ 00017558 size=328 ===== */

undefined4 _get_bssid_from_list_network(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  char *__dest;
  char acStack_120 [128];
  char acStack_a0 [132];
  
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_000176a8 + 0x175ac),uVar1,DAT_000176a4 + 0x175a0,DAT_000176a0 + 0x17a60,0x24c,
         DAT_000176a0 + 0x17a80);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    __dest = (char *)(param_1 + 4);
    __dest[0] = '\0';
    __dest[1] = '\0';
    __dest[2] = '\0';
    __dest[3] = '\0';
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    memset(acStack_120,0,0x80);
    memset(acStack_a0,0,0x80);
    if (*(char *)(param_1 + 0x58) != '\0') {
      param_3 = param_3 + -1;
    }
    snprintf(acStack_120,0x80,(char *)(DAT_000176ac + 0x17614),param_3,param_2);
    exec_command(acStack_120,acStack_a0,0x80);
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_000176b8 + 0x17674),uVar1,DAT_000176b4 + 0x17668,DAT_000176b0 + 0x17b20,
           0x25a,DAT_000176b0 + 0x17b40,param_2,param_3,acStack_a0);
    sVar2 = strlen(acStack_a0);
    sVar2 = sVar2 - 1;
    if (0x13 < sVar2) {
      sVar2 = 0x14;
    }
    strncpy(__dest,acStack_a0,sVar2);
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== _get_id_from_list_network @ 000176bc size=188 ===== */

int _get_id_from_list_network(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_118 [128];
  char acStack_98 [132];
  
  memset(acStack_118,0,0x80);
  memset(acStack_98,0,0x80);
  snprintf(acStack_118,0x80,(char *)(DAT_00017778 + 0x1770c),param_1);
  exec_command(acStack_118,acStack_98,0x80);
  iVar1 = atoi(acStack_98);
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00017784 + 0x1776c),uVar2,DAT_00017780 + 0x17760,DAT_0001777c + 0x17c5c,0x26b,
         DAT_0001777c + 0x17c78,param_1,iVar1);
  return iVar1;
}



/* ===== _get_columns_from_list_network @ 00017788 size=188 ===== */

int _get_columns_from_list_network(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_118 [128];
  char acStack_98 [132];
  
  memset(acStack_118,0,0x80);
  memset(acStack_98,0,0x80);
  snprintf(acStack_118,0x80,(char *)(DAT_00017844 + 0x177d8),param_1);
  exec_command(acStack_118,acStack_98,0x80);
  iVar1 = atoi(acStack_98);
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00017850 + 0x17838),uVar2,DAT_0001784c + 0x1782c,DAT_00017848 + 0x17d60,0x27b,
         DAT_00017848 + 0x17d80,param_1,iVar1);
  return iVar1;
}



/* ===== _get_flags_from_list_network @ 00017854 size=388 ===== */

void _get_flags_from_list_network(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  uint __n;
  char acStack_120 [128];
  char acStack_a0 [132];
  
  memset(param_1,0,param_2);
  memset(acStack_120,0,0x80);
  memset(acStack_a0,0,0x80);
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_000179e0 + 0x178e0),uVar1,DAT_000179dc + 0x178d4,DAT_000179d8 + 0x17e4c,0x286,
         DAT_000179d8 + 0x17e6c);
  snprintf(acStack_120,0x80,(char *)(DAT_000179e4 + 0x178f4),param_4,param_3);
  exec_command(acStack_120,acStack_a0,0x80);
  iVar2 = strncmp(acStack_a0,(char *)(DAT_000179e8 + 0x17920),9);
  if (((iVar2 != 0) && (iVar2 = strncmp(acStack_a0,(char *)(DAT_000179ec + 0x1793c),10), iVar2 != 0)
      ) && (iVar2 = strncmp(acStack_a0,(char *)(DAT_000179fc + 0x179c8),0xf), iVar2 != 0)) {
    return;
  }
  sVar3 = strlen(acStack_a0);
  __n = sVar3 - 1;
  if (param_2 <= sVar3 - 1) {
    __n = param_2;
  }
  strncpy(param_1,acStack_a0,__n);
  uVar1 = FUN_00011fd0();
  printf((char *)(DAT_000179f8 + 0x179ac),uVar1,DAT_000179f4 + 0x179a0,DAT_000179f0 + 0x17f10,0x28e,
         DAT_000179f0 + 0x17f30,param_3,param_4,param_1);
  return;
}



/* ===== FUN_00017a00 @ 00017a00 size=1660 ===== */

undefined4 FUN_00017a00(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  size_t sVar8;
  char *__format;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *__haystack;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *__dest;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int local_5ac;
  char acStack_5a8 [128];
  char acStack_528 [255];
  char acStack_429 [257];
  char acStack_328 [256];
  undefined1 auStack_228 [256];
  char acStack_128 [260];
  
  iVar11 = DAT_0001807c;
  uVar2 = FUN_00011fd0();
  iVar14 = DAT_00018080 + 0x17a38;
  iVar12 = iVar11 + 0x17ffc;
  pcVar13 = (char *)(DAT_00018084 + 0x17a40);
  printf(pcVar13,uVar2,iVar14,iVar12,0x298,iVar11 + 0x18014);
  exec_command_system(DAT_00018088 + 0x17a70);
  usleep(1000);
  exec_command_system(DAT_0001808c + 0x17a84);
  usleep(3000);
  memset(acStack_5a8,0,0x80);
  exec_command(DAT_00018090 + 0x17ab0,acStack_5a8,0x80);
  local_5ac = atoi(acStack_5a8);
  local_5ac = local_5ac + -1;
  uVar2 = FUN_00011fd0();
  printf((char *)(DAT_00018094 + 0x17af0),uVar2,iVar14,iVar12,0x2a3,param_2,&local_5ac);
  if (local_5ac < 1) {
    uVar2 = 0;
  }
  else {
    *param_2 = local_5ac;
    pvVar3 = malloc(local_5ac * 0x6c);
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_00018098 + 0x17b4c),uVar2,iVar14,iVar12,0x2ab,local_5ac,acStack_5a8,pvVar3);
    iVar12 = DAT_0001809c;
    if (0 < local_5ac) {
      iVar9 = DAT_0001809c + 0x18174;
      pcVar10 = (char *)((int)pvVar3 + 0x58);
      __haystack = acStack_429 + 1;
      iVar18 = 0;
      do {
        iVar15 = iVar18 + 2;
        __dest = pcVar10 + -0x40;
        iVar7 = _get_columns_from_list_network(iVar15);
        uVar2 = _get_id_from_list_network(iVar15);
        *(undefined4 *)(pcVar10 + -0x58) = uVar2;
        _get_flags_from_list_network(pcVar10,0x14,iVar15,iVar7);
        _get_bssid_from_list_network(pcVar10 + -0x58,iVar15,iVar7);
        uVar2 = FUN_00011fd0();
        printf(pcVar13,uVar2,iVar14,iVar11 + 0x1802c,0x20d,iVar11 + 0x18048);
        uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        __dest[0] = '\0';
        __dest[1] = '\0';
        __dest[2] = '\0';
        __dest[3] = '\0';
        *(undefined4 *)(pcVar10 + -0x3c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x38) = uVar19;
        *(undefined4 *)(pcVar10 + -0x34) = uVar1;
        pcVar10[-0xffffffff00000030] = '\0';
        pcVar10[-0xffffffff0000002f] = '\0';
        pcVar10[-0xffffffff0000002e] = '\0';
        pcVar10[-0xffffffff0000002d] = '\0';
        *(undefined4 *)(pcVar10 + -0x2c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x28) = uVar19;
        *(undefined4 *)(pcVar10 + -0x24) = uVar1;
        pcVar10[-0xffffffff00000020] = '\0';
        pcVar10[-0xffffffff0000001f] = '\0';
        pcVar10[-0xffffffff0000001e] = '\0';
        pcVar10[-0xffffffff0000001d] = '\0';
        *(undefined4 *)(pcVar10 + -0x1c) = uVar2;
        *(undefined4 *)(pcVar10 + -0x18) = uVar19;
        *(undefined4 *)(pcVar10 + -0x14) = uVar1;
        pcVar10[-0xffffffff00000010] = '\0';
        pcVar10[-0xffffffff0000000f] = '\0';
        pcVar10[-0xffffffff0000000e] = '\0';
        pcVar10[-0xffffffff0000000d] = '\0';
        *(undefined4 *)(pcVar10 + -0xc) = uVar2;
        *(undefined4 *)(pcVar10 + -8) = uVar19;
        *(undefined4 *)(pcVar10 + -4) = uVar1;
        memset(acStack_528,0,0x100);
        memset(__haystack,0,0x100);
        iVar17 = DAT_000180c0;
        iVar16 = DAT_000180a4;
        if ((iVar7 < 4) || ((iVar7 == 4 && (*pcVar10 != '\0')))) {
          snprintf(acStack_528,0x100,(char *)(DAT_000180bc + 0x17e54),iVar15);
          exec_command(acStack_528,__haystack,0x100);
          iVar17 = iVar17 + 0x17e70;
          uVar2 = FUN_00011fd0();
          printf((char *)(DAT_000180c4 + 0x17ea8),uVar2,iVar17,iVar9,0x219,iVar12 + 0x18190,iVar15,
                 __haystack);
          uVar2 = FUN_00011fd0();
          sVar8 = strlen(__haystack);
          printf((char *)(DAT_000180c8 + 0x17ef0),uVar2,iVar17,iVar9,0x21a,iVar12 + 0x18190,sVar8);
          memset(auStack_228,0,0x100);
          memset(acStack_128,0,0x100);
          memset(acStack_328,0,0x100);
          sVar8 = strlen(__haystack);
          acStack_429[sVar8] = '\0';
          FUN_00012684(__haystack,acStack_328);
          FUN_00012730(acStack_328,auStack_228);
          FUN_00012a5c(*(undefined4 *)(DAT_000180cc + 0x1800c),auStack_228,acStack_128);
          uVar2 = FUN_00011fd0();
          uVar19 = 0x224;
          __format = (char *)(DAT_000180d0 + 0x17f98);
          iVar16 = iVar9;
          pcVar4 = acStack_328;
LAB_00017d54:
          printf(__format,uVar2,iVar17,iVar16,uVar19,pcVar4,auStack_228,acStack_128);
          sVar8 = strlen(acStack_128);
          strncpy(__dest,acStack_128,sVar8);
        }
        else {
          snprintf(acStack_528,0x100,(char *)(DAT_000180a0 + 0x17bc0),iVar15);
          exec_command(acStack_528,__haystack,0x100);
          iVar17 = iVar16 + 0x17bdc;
          uVar2 = FUN_00011fd0();
          iVar16 = DAT_000180a8 + 0x181fc;
          iVar7 = DAT_000180a8 + 0x18218;
          printf((char *)(DAT_000180ac + 0x17c24),uVar2,iVar17,iVar16,0x22c,iVar7,iVar15,__haystack)
          ;
          memset(acStack_528,0,0x100);
          sprintf(acStack_528,(char *)(DAT_000180b0 + 0x17c48),*(undefined4 *)(pcVar10 + -0x58));
          sVar8 = strlen(acStack_528);
          pcVar4 = strstr(__haystack,pcVar10 + -0x54);
          if (pcVar4 != (char *)0x0) {
            sVar5 = strlen(__haystack);
            sVar6 = strlen(pcVar4);
            memset(acStack_328,0,0x100);
            strncpy(acStack_328,__haystack + sVar8,(sVar5 - sVar6) - sVar8);
            FUN_00011f48(acStack_328);
            FUN_000125d8();
            memset(__haystack,0,0x100);
            memset(auStack_228,0,0x100);
            memset(acStack_128,0,0x100);
            FUN_00012684(acStack_328,__haystack);
            FUN_00012730(__haystack,auStack_228);
            FUN_00012a5c(*(undefined4 *)(DAT_000180b4 + 0x17dcc),auStack_228,acStack_128);
            uVar2 = FUN_00011fd0();
            uVar19 = 0x242;
            __format = (char *)(DAT_000180b8 + 0x17d58);
            pcVar4 = __haystack;
            goto LAB_00017d54;
          }
          uVar2 = FUN_00011fd0();
          printf((char *)(DAT_000180e0 + 0x18078),uVar2,iVar17,iVar16,0x233,iVar7,__haystack,
                 pcVar10 + -0x54);
        }
        iVar18 = iVar18 + 1;
        pcVar10 = pcVar10 + 0x6c;
      } while (iVar18 < local_5ac);
      if (0 < local_5ac) {
        iVar12 = 0;
        iVar9 = DAT_000180d8 + 0x17fc8;
        pcVar13 = (char *)(DAT_000180dc + 0x17fcc);
        iVar14 = DAT_000180d4 + 0x18588;
        iVar11 = (int)pvVar3 + 0x18;
        do {
          uVar2 = FUN_00011fd0();
          iVar12 = iVar12 + 1;
          printf(pcVar13,uVar2,iVar9,iVar14,0x2b9,*(undefined4 *)(iVar11 + -0x18),iVar11,
                 iVar11 + -0x14,iVar11 + 0x40);
          iVar11 = iVar11 + 0x6c;
        } while (iVar12 < local_5ac);
      }
    }
    uVar2 = 1;
    *param_1 = pvVar3;
  }
  return uVar2;
}



/* ===== FUN_00018348 @ 00018348 size=432 ===== */

undefined4 FUN_00018348(char *param_1)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  void *local_30;
  int local_2c [2];
  
  local_30 = (void *)0x0;
  local_2c[0] = 0;
  uVar2 = FUN_00011fd0();
  iVar9 = (int)&DAT_000189ec + DAT_000184f8;
  printf((char *)(DAT_00018500 + 0x1839c),uVar2,DAT_000184fc + 0x1838c,iVar9,0xfe,
         wpa_wifi_connect1 + DAT_000184f8);
  FUN_00017a00(&local_30,local_2c);
  iVar1 = DAT_00018504;
  if (0 < local_2c[0]) {
    sVar3 = strlen(param_1);
    iVar5 = 0;
    do {
      if (0x40 < sVar3) {
        uVar2 = FUN_00011fd0();
        printf((char *)(DAT_00018514 + 0x184cc),uVar2,DAT_00018510 + 0x184c0,iVar1 + 0x18a3c,0x106);
      }
      uVar2 = FUN_00011fd0();
      pcVar7 = (char *)((int)local_30 + iVar5 * 0x6c + 0x18);
      sVar3 = strlen(pcVar7);
      sVar4 = strlen(param_1);
      iVar8 = iVar5 + 1;
      printf((char *)(DAT_0001850c + 0x18444),uVar2,DAT_00018508 + 0x18424,iVar9,0x108,iVar5,pcVar7,
             param_1,sVar3,sVar4,local_2c[0]);
      __ptr = local_30;
      puVar6 = (undefined4 *)((int)local_30 + iVar5 * 0x6c);
      pcVar7 = (char *)(puVar6 + 6);
      sVar4 = strlen(pcVar7);
      sVar3 = strlen(param_1);
      if (sVar4 < sVar3) {
        sVar4 = sVar3;
      }
      iVar5 = strncmp(pcVar7,param_1,sVar4);
      if (iVar5 == 0) {
        return *puVar6;
      }
      iVar5 = iVar8;
    } while (iVar8 < local_2c[0]);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
  return 0xffffffea;
}



/* ===== wpa_wifi_forget_with_ssid @ 00018518 size=332 ===== */

undefined4 wpa_wifi_forget_with_ssid(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_60 [8];
  char acStack_58 [68];
  
  uVar1 = FUN_00011fd0();
  iVar5 = DAT_00018668 + 0x18548;
  iVar4 = DAT_00018664 + 0x18be8;
  iVar3 = DAT_00018664 + 0x18c04;
  iVar2 = param_1;
  printf((char *)(DAT_0001866c + 0x18570),uVar1,iVar5,iVar4,0x789,iVar3,param_1);
  if (param_1 == 0) {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_0001867c + 0x18624),uVar1,iVar5,iVar4,0x78c,iVar3,iVar2);
    return 0;
  }
  iVar3 = FUN_00018348(param_1);
  if (iVar3 == -0x16) {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_00018680 + 0x18658),uVar1,iVar5,iVar4,0x792,param_1,iVar2);
    return 0;
  }
  snprintf(acStack_58,0x40,(char *)(DAT_00018670 + 0x185a0),iVar3);
  exec_command(acStack_58,local_60,8);
  uVar1 = 0;
  if (local_60[0] != '\0') {
    iVar2 = strncmp(local_60,(char *)(DAT_00018674 + 0x185d8),2);
    if (iVar2 == 0) {
      exec_command_system(DAT_00018678 + 0x185f0);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== wpa_wifi_scan_for_softap @ 00018684 size=1644 ===== */

/* WARNING: Removing unreachable block (ram,0x00014ca8) */

char * wpa_wifi_scan_for_softap(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FILE *__stream;
  void *pvVar9;
  char *pcVar10;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  int iVar14;
  undefined4 uVar15;
  char *pcVar16;
  void *pvVar17;
  char *__s;
  char *__delim;
  uint uVar18;
  undefined1 **ppuVar19;
  undefined1 *local_368;
  undefined1 *local_364;
  int local_360;
  undefined1 *local_35c;
  char *local_358;
  undefined1 *local_354;
  size_t local_350;
  char *local_34c;
  char *local_348;
  char *local_344;
  undefined2 *local_340;
  char *local_33c;
  int local_338;
  FILE *local_334;
  size_t local_330;
  char *local_32c;
  char acStack_328 [128];
  char acStack_2a8 [255];
  char acStack_1a9 [393];
  
  uVar15 = FUN_00011fd0();
  printf((char *)(DAT_00014cd8 + 0x14c90),uVar15,DAT_00014cd4 + 0x14c84,DAT_00014cd0 + 0x14e50);
  ppuVar19 = &local_368;
  pcVar16 = (char *)(DAT_00014bf8 + 0x14634);
  remove(pcVar16);
  exec_command_system(DAT_00014bfc + 0x14644);
  __stream = fopen(pcVar16,(char *)(DAT_00014c00 + 0x14654));
  if (__stream == (FILE *)0x0) {
    return (char *)0x0;
  }
  local_334 = __stream;
  local_32c = acStack_2a8;
  memset(acStack_2a8,0,0x100);
  fgets(acStack_2a8,0x100,__stream);
  pcVar16 = calloc(0x200,1);
  pvVar9 = *(void **)(DAT_00014c04 + 0x14750);
  *(undefined2 *)pcVar16 = *(undefined2 *)(DAT_00014c08 + 0x146ac);
  while (pvVar9 != (void *)0x0) {
    pvVar17 = *(void **)((int)pvVar9 + 0x100);
    free(pvVar9);
    pvVar9 = pvVar17;
  }
  puVar1 = (undefined4 *)(DAT_00014c0c + 0x147ec);
  *(undefined4 *)(DAT_00014c0c + 0x14788) = 0;
  pvVar9 = (void *)*puVar1;
  iVar14 = DAT_00014c18;
  while (DAT_00014c18 = iVar14, pvVar9 != (void *)0x0) {
    pvVar17 = *(void **)((int)pvVar9 + 0x100);
    free(pvVar9);
    pvVar9 = pvVar17;
    iVar14 = DAT_00014c18;
  }
  local_330 = 0x200;
  __delim = (char *)(DAT_00014c14 + 0x14720);
  *(undefined4 *)(DAT_00014c10 + 84000) = 0;
  local_33c = (char *)(iVar14 + 0x1472c);
  local_34c = (char *)(DAT_00014c1c + 0x14744);
  local_340 = (undefined2 *)(DAT_00014c20 + 0x1474c);
  do {
    pcVar10 = fgets(local_32c,0xff,local_334);
    if (pcVar10 == (char *)0x0) {
      sVar11 = strlen(pcVar16);
      if (pcVar16[sVar11 - 1] == ',') {
        pcVar16[sVar11 - 1] = '\0';
        sVar11 = strlen(pcVar16);
      }
      *(undefined2 *)(pcVar16 + sVar11) = *(undefined2 *)(DAT_00014c40 + 0x14b38);
      fclose(local_334);
      return pcVar16;
    }
    __s = acStack_1a9 + 1;
    pcVar10 = strtok(local_32c,local_33c);
    memset(__s,0,0x180);
    sVar11 = strlen(__s);
    *(undefined2 *)(__s + sVar11) = *local_340;
    if (pcVar10 != (char *)0x0) {
      local_344 = (char *)(DAT_00014c24 + 0x147b0);
      local_338 = 0;
      uVar18 = 0;
LAB_000147e0:
      do {
        sVar11 = strlen(pcVar10);
        if (pcVar10[sVar11 - 1] == '\n') {
          pcVar10[sVar11 - 1] = '\0';
        }
        if ((1 << (uVar18 & 0xff) & 0x1fU) == 0) {
          if (uVar18 == 3) {
            memset(acStack_328,0,0x80);
LAB_000149b4:
            pcVar12 = strstr(pcVar10,local_34c);
            if ((pcVar12 == (char *)0x0) &&
               (pcVar10 = strstr(pcVar10,local_344), pcVar10 == (char *)0x0)) {
              local_338 = 1;
            }
            goto LAB_0001483c;
          }
        }
        else {
          memset(acStack_328,0,0x80);
          if (uVar18 == 0) {
            snprintf(acStack_328,0x80,(char *)(DAT_00014c28 + 0x1483c),pcVar10);
          }
          else if (uVar18 == 1) {
            iVar14 = atoi(pcVar10);
            snprintf(acStack_328,0x80,(char *)(DAT_00014c34 + 0x14a8c),iVar14);
          }
          else if (uVar18 == 2) {
            iVar14 = atoi(pcVar10);
            snprintf(acStack_328,0x80,(char *)(DAT_00014c38 + 0x14ab0),iVar14);
          }
          else {
            if (uVar18 == 3) {
              snprintf(acStack_328,0x80,(char *)(DAT_00014c3c + 0x14af0),pcVar10);
              goto LAB_000149b4;
            }
            if (uVar18 == 4) {
              local_354 = (undefined1 *)ppuVar19;
              sVar11 = strlen(pcVar10);
              local_350 = sVar11 + 1;
              local_35c = (undefined1 *)(sVar11 + 8 & 0xfffffff8);
              iVar14 = -(int)local_35c;
              local_348 = (char *)((int)ppuVar19 + iVar14);
              memset((undefined1 *)((int)ppuVar19 + iVar14),0,local_350);
              if (*pcVar10 != '\0') {
                local_364 = (undefined1 *)((int)ppuVar19 + iVar14);
                sVar11 = strlen(pcVar10);
                iVar3 = -(sVar11 + 8 & 0xfffffff8);
                local_358 = (char *)((int)ppuVar19 + iVar3 + iVar14);
                memset((undefined1 *)((int)ppuVar19 + iVar3 + iVar14),0,sVar11 + 1);
                FUN_00012730(pcVar10,(undefined1 *)((int)ppuVar19 + iVar3 + iVar14));
                sVar11 = strlen((char *)((int)ppuVar19 + iVar3 + iVar14));
                local_360 = RK_encode_is_utf8((undefined1 *)((int)ppuVar19 + iVar3 + iVar14),sVar11)
                ;
                iVar4 = -(int)local_35c;
                local_368 = (undefined1 *)((int)ppuVar19 + (int)local_35c * -2 + iVar3 + iVar14);
                iVar5 = (int)local_35c * -2;
                iVar6 = (int)local_35c * -2;
                iVar7 = (int)local_35c * -2;
                iVar8 = (int)local_35c * -2;
                local_35c = (undefined1 *)((int)ppuVar19 + iVar4 + iVar3 + iVar14);
                memset((undefined1 *)((int)ppuVar19 + iVar4 + iVar3 + iVar14),0,local_350);
                memset((undefined1 *)((int)ppuVar19 + iVar5 + iVar3 + iVar14),0,local_350);
                pcVar12 = local_358;
                if (local_360 == 0) {
                  local_350 = DAT_00014c44 + 0x14b5c;
                  sVar11 = strlen(local_358);
                  RK_encode_gbk_to_utf8(local_358,sVar11,local_348);
                  FUN_00012684(local_358,(undefined1 *)((int)ppuVar19 + iVar6 + iVar3 + iVar14));
                  FUN_00012684(local_348,local_35c);
                  uVar15 = FUN_00014504(*(undefined4 *)(local_350 + 0xa8),
                                        (undefined1 *)((int)ppuVar19 + iVar7 + iVar3 + iVar14),
                                        local_35c);
                  *(undefined4 *)(local_350 + 0xa8) = uVar15;
                  sVar11 = strlen(local_348);
                  iVar14 = RK_encode_is_utf8(local_348,sVar11);
                  ppuVar19 = (undefined1 **)local_354;
                  if (iVar14 == 0) goto LAB_000147e0;
                }
                else {
                  sVar11 = strlen(local_358);
                  strncpy(local_348,pcVar12,sVar11);
                  FUN_00012684(pcVar12,(undefined1 *)((int)ppuVar19 + iVar8 + iVar3 + iVar14));
                  FUN_00012684(local_348,local_35c);
                }
                iVar14 = DAT_00014c48;
                if (local_338 != 0) {
                  uVar15 = FUN_00014504(*(undefined4 *)(FUN_00014ce0 + DAT_00014c48 + 4),local_368,
                                        local_35c);
                  *(undefined4 *)(FUN_00014ce0 + iVar14 + 4) = uVar15;
                }
              }
              snprintf(acStack_328,0x80,(char *)(DAT_00014c2c + 0x1499c),local_348);
              ppuVar19 = (undefined1 **)local_354;
            }
          }
LAB_0001483c:
          strcat(__s,acStack_328);
        }
        pcVar10 = strtok((char *)0x0,__delim);
        uVar18 = uVar18 + 1;
      } while (pcVar10 != (char *)0x0);
    }
    sVar11 = strlen(__s);
    if (acStack_1a9[sVar11] == ',') {
      acStack_1a9[sVar11] = '\0';
      sVar11 = strlen(__s);
    }
    cVar2 = *(char *)(DAT_00014c30 + 0x14a36);
    *(undefined2 *)(__s + sVar11) = *(undefined2 *)(DAT_00014c30 + 0x14a34);
    acStack_1a9[sVar11 + 3] = cVar2;
    sVar11 = strlen(pcVar16);
    sVar13 = strlen(__s);
    if (local_330 <= sVar11 + sVar13 + 3) {
      local_330 = local_330 + 0x200;
      pcVar16 = realloc(pcVar16,local_330);
    }
    strcat(pcVar16,__s);
  } while( true );
}



/* ===== save_connect_info @ 0001868c size=132 ===== */

void save_connect_info(char *param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  
  __dest = (char *)(DAT_00018710 + 0x1875c);
  memset(__dest,0,0x54);
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if (0x3f < sVar1) {
      sVar1 = 0x40;
    }
    strncpy(__dest,param_1,sVar1);
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  sVar1 = strlen(param_2);
  if (0x13 < sVar1) {
    sVar1 = 0x14;
  }
  strncpy((char *)(DAT_00018714 + 0x187ec),param_2,sVar1);
  return;
}



/* ===== wpa_wifi_connect_with_ssid @ 00018718 size=664 ===== */

undefined4 wpa_wifi_connect_with_ssid(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  pthread_t local_24;
  
  iVar2 = DAT_000189b0;
  iVar5 = DAT_000189b4 + 0x1873c;
  if (*(char *)(DAT_000189b0 + 0x18830) != '\0') {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_000189e8 + 0x188b0),uVar1,DAT_000189e4 + 0x188a0,
           (int)&DAT_00018f70 + DAT_000189e0,0x7bc,param_1);
    return 0;
  }
  *(undefined1 *)(DAT_000189b0 + 0x18830) = 1;
  *(undefined1 *)(iVar2 + 0x187d4) = 0;
  *(undefined1 *)(iVar2 + 0x187bc) = 1;
  uVar1 = FUN_00011fd0();
  iVar6 = DAT_000189bc + 0x18774;
  iVar7 = DAT_000189b8 + 0x18e4c;
  iVar3 = DAT_000189b8 + 0x18e68;
  iVar2 = param_1;
  printf((char *)(DAT_000189c0 + 0x18798),uVar1,iVar6,iVar7,0x7c4,iVar3,param_1);
  if (param_1 == 0) {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_00018a04 + 0x189a4),uVar1,iVar6,iVar7,0x7c7,iVar3,iVar2);
    piVar4 = *(int **)(iVar5 + DAT_000189c8);
  }
  else {
    iVar3 = FUN_00018348(param_1);
    if (iVar3 == -0x16) {
      uVar1 = FUN_00011fd0();
      printf((char *)(DAT_000189f8 + 0x1893c),uVar1,iVar6,iVar7,0x7cd,0xffffffea,iVar2);
      piVar4 = *(int **)(iVar5 + DAT_000189c8);
    }
    else {
      *(int *)(DAT_000189c4 + 0x187f4) = iVar3;
      save_connect_info(0,param_1);
      piVar4 = *(int **)(iVar5 + DAT_000189c8);
      if (*piVar4 != 0) {
        FUN_00013cb0(1);
      }
      exec_command_system(DAT_000189cc + 0x187f4);
      iVar2 = FUN_0001228c(iVar3);
      if (iVar2 == 1) {
        FUN_000121a4(iVar3);
        iVar2 = FUN_00012400(iVar3);
        if (iVar2 == 1) {
          pthread_create(&local_24,(pthread_attr_t *)0x0,(__start_routine *)(DAT_00018a00 + 0x18964)
                         ,(void *)(DAT_000189fc + 0x1898c));
          pthread_detach(local_24);
          return 1;
        }
        uVar1 = FUN_00011fd0();
        printf((char *)(DAT_000189f4 + 0x18910),uVar1,DAT_000189f0 + 0x18904,
               (int)&DAT_00018fd4 + DAT_000189ec,0x7e2,iVar3);
      }
      else {
        uVar1 = FUN_00011fd0();
        printf((char *)(DAT_000189d8 + 0x1883c),uVar1,DAT_000189d4 + 0x18830,DAT_000189d0 + 0x18f00,
               0x7da,iVar3);
      }
    }
  }
  if (*piVar4 != 0) {
    FUN_00013cb0(2);
  }
  iVar2 = DAT_000189dc;
  *(undefined1 *)(DAT_000189dc + 0x188f8) = 0;
  *(undefined1 *)(iVar2 + 0x1896c) = 0;
  return 0;
}



/* ===== wpa_wifi_connect1 @ 00018a08 size=1352 ===== */

undefined4 wpa_wifi_connect1(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  pthread_attr_t *ppVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  char *__s;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int aiStack_d0 [6];
  int local_b8;
  pthread_attr_t *local_b4;
  undefined8 local_b0;
  undefined8 local_a8 [16];
  
  sVar3 = strlen(param_1);
  iVar8 = DAT_00018f50 + 0x18a30;
  iVar1 = -(sVar3 + 8 & 0xfffffff8);
  uVar4 = FUN_00011fd0();
  *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x732;
  *(int *)((int)aiStack_d0 + iVar1 + 4) = DAT_00018f54 + 0x19184;
  *(int *)((int)aiStack_d0 + iVar1 + 0xc) = param_2;
  *(char **)((int)aiStack_d0 + iVar1 + 8) = param_1;
  __s = (char *)((int)&local_b8 + iVar1);
  printf((char *)(DAT_00018f5c + 0x18a84),uVar4,DAT_00018f58 + 0x18a68,DAT_00018f54 + 0x19170);
  save_connect_info(param_1,0);
  piVar9 = *(int **)(iVar8 + DAT_00018f60);
  if (*piVar9 != 0) {
    FUN_00013cb0(1);
  }
  exec_command_system(DAT_00018f64 + 0x18ab8);
  *(undefined1 *)(DAT_00018f68 + 0x18b78) = 0;
  usleep(60000);
  iVar8 = FUN_00018348(param_1);
  if (iVar8 == -0x16) {
    local_a8[0] = 0;
    exec_command(DAT_00018fb4 + 0x18dbc,local_a8,8);
    if (((char)local_a8[0] == '\0') || (unaff_r4 = atoi((char *)local_a8), unaff_r4 == -0x16)) {
      uVar4 = FUN_00011fd0();
      *(undefined4 *)((int)aiStack_d0 + iVar1 + 4) = 0xffffffea;
      *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x745;
      printf((char *)(DAT_00018fc0 + 0x18e1c),uVar4,DAT_00018fbc + 0x18e10,DAT_00018fb8 + 0x19518);
      goto LAB_00018d28;
    }
  }
  *(int *)(DAT_00018f6c + 0x18b24) = unaff_r4;
  memset(__s,0,sVar3 + 1);
  if (param_2 == 0) {
LAB_00018b3c:
    uVar4 = FUN_00011fd0();
    iVar6 = DAT_00018f74 + 0x18b4c;
    sVar3 = strlen(param_1);
    *(char **)((int)aiStack_d0 + iVar1 + 8) = param_1;
    iVar5 = DAT_00018f78 + 0x19298;
    iVar7 = DAT_00018f78 + 0x19284;
    *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar5;
    *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x74e;
    *(size_t *)((int)aiStack_d0 + iVar1 + 0xc) = sVar3;
    printf((char *)(DAT_00018f7c + 0x18b94),uVar4,iVar6,iVar7);
    FUN_00015774(*(undefined4 *)(DAT_00018f80 + 0x18cb4),param_1,__s);
    iVar8 = FUN_00014ce0(unaff_r4,__s,DAT_00018f84 + 0x18bc0,0);
    if (iVar8 != 1) {
      uVar4 = FUN_00011fd0();
      *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x753;
      *(char **)((int)aiStack_d0 + iVar1 + 8) = param_1;
      *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar5;
      printf((char *)(DAT_00018fa0 + 0x18d28),uVar4,iVar6,iVar7);
      goto LAB_00018d28;
    }
  }
  else {
    for (iVar8 = *(int *)(DAT_00018f70 + 0x18c1c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x100)) {
      iVar7 = strcmp((char *)(iVar8 + 0x80),param_1);
      if (iVar7 == 0) goto LAB_00018b3c;
    }
    uVar4 = FUN_00011fd0();
    local_b4 = (pthread_attr_t *)(DAT_00018fc4 + 0x18e30);
    sVar3 = strlen(param_1);
    ppVar2 = local_b4;
    *(undefined4 *)((int)aiStack_d0 + iVar1 + 0x14) = param_3;
    local_b8 = DAT_00018fc8 + 0x19580;
    iVar7 = DAT_00018fc8 + 0x1956c;
    *(int *)((int)aiStack_d0 + iVar1 + 4) = local_b8;
    *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x757;
    *(int *)((int)aiStack_d0 + iVar1 + 0x10) = param_2;
    *(char **)((int)aiStack_d0 + iVar1 + 8) = param_1;
    *(size_t *)((int)aiStack_d0 + iVar1 + 0xc) = sVar3;
    printf((char *)(DAT_00018fcc + 0x18e88),uVar4,ppVar2,iVar7);
    FUN_00015774(*(undefined4 *)(DAT_00018fd0 + 0x18f44),param_1,__s);
    iVar8 = FUN_00014ce0(unaff_r4,__s,param_2,param_3);
    if (iVar8 != 1) {
      uVar4 = FUN_00011fd0();
      iVar8 = local_b8;
      *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x75c;
      *(int *)((int)aiStack_d0 + iVar1 + 0xc) = param_2;
      *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar8;
      *(char **)((int)aiStack_d0 + iVar1 + 8) = param_1;
      printf((char *)(DAT_00018fd4 + 0x18ef0),uVar4,local_b4,iVar7);
      goto LAB_00018d28;
    }
  }
  uVar4 = FUN_00011fd0();
  iVar8 = DAT_00018f88;
  iVar6 = DAT_00018f8c + 0x18be8;
  sVar3 = strlen(__s);
  *(char **)((int)aiStack_d0 + iVar1 + 8) = __s;
  iVar7 = iVar8 + 0x19300;
  *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x760;
  iVar8 = iVar8 + 0x19314;
  *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar8;
  *(size_t *)((int)aiStack_d0 + iVar1 + 0xc) = sVar3;
  printf((char *)(DAT_00018f90 + 0x18c2c),uVar4,iVar6,iVar7);
  FUN_000121a4(unaff_r4);
  local_b0 = 0;
  memset(local_a8,0,0x80);
  *(undefined4 *)((int)aiStack_d0 + iVar1) = 1;
  snprintf((char *)local_a8,0x80,(char *)(DAT_00018f94 + 0x18c6c),unaff_r4);
  exec_command(local_a8,&local_b0,8);
  if (((char)local_b0 == '\0') ||
     (local_b4 = (pthread_attr_t *)strncmp((char *)&local_b0,(char *)(DAT_00018f98 + 0x18c9c),2),
     local_b4 != (pthread_attr_t *)0x0)) {
    uVar4 = FUN_00011fd0();
    *(int *)((int)aiStack_d0 + iVar1 + 8) = unaff_r4;
    *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x766;
    *(int *)((int)aiStack_d0 + iVar1 + 4) = DAT_00018fa8 + 0x194a8;
    printf((char *)(DAT_00018fb0 + 0x18d9c),uVar4,DAT_00018fac + 0x18d90,DAT_00018fa8 + 0x19494);
  }
  else {
    iVar5 = FUN_0001228c(unaff_r4);
    if (iVar5 == 1) {
      iVar5 = FUN_00012400(unaff_r4);
      if (iVar5 == 1) {
        pthread_create((pthread_t *)local_a8,local_b4,(__start_routine *)(DAT_00018fe0 + 0x18f40),
                       (void *)((int)&DAT_00018f64 + DAT_00018fdc));
        pthread_detach((pthread_t)local_a8[0]);
        return 1;
      }
      uVar4 = FUN_00011fd0();
      *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x772;
      *(int *)((int)aiStack_d0 + iVar1 + 8) = unaff_r4;
      *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar8;
      printf((char *)(DAT_00018f9c + 0x18cf8),uVar4,iVar6,iVar7);
    }
    else {
      uVar4 = FUN_00011fd0();
      *(undefined4 *)((int)aiStack_d0 + iVar1) = 0x76c;
      *(int *)((int)aiStack_d0 + iVar1 + 8) = unaff_r4;
      *(int *)((int)aiStack_d0 + iVar1 + 4) = iVar8;
      printf((char *)(DAT_00018fd8 + 0x18f20),uVar4,iVar6,iVar7);
    }
  }
LAB_00018d28:
  if (*piVar9 != 0) {
    FUN_00013cb0(2);
  }
  iVar1 = DAT_00018fa4;
  *(undefined1 *)(DAT_00018fa4 + 0x18e58) = 0;
  *(undefined1 *)(iVar1 + 0x18e60) = 0;
  return 0;
}



/* ===== wpa_wifi_connect_wep @ 00018fe4 size=200 ===== */

undefined4 wpa_wifi_connect_wep(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000190ac;
  if (param_1 == 0) {
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_000190c4 + 0x190a8),uVar2,DAT_000190c0 + 0x19098,DAT_000190bc + 0x197c4,
           0x705,DAT_000190bc + 0x197dc);
  }
  else {
    if (*(char *)(DAT_000190ac + 0x19108) == '\0') {
      *(undefined1 *)(DAT_000190ac + 0x19108) = 1;
      *(undefined1 *)(iVar1 + 0x19110) = 1;
                    /* WARNING: Could not recover jumptable at 0x00011d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_wpa_wifi_connect1_00044110)(param_1,param_2,2);
      return uVar2;
    }
    uVar2 = FUN_00011fd0();
    printf((char *)(DAT_000190b8 + 0x1905c),uVar2,DAT_000190b4 + 0x19050,DAT_000190b0 + 0x19780,
           0x70a,param_1);
  }
  return 0;
}



/* ===== wpa_wifi_connect @ 000190c8 size=208 ===== */

undefined4 wpa_wifi_connect(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_000191a4 + 0x19188),uVar1,DAT_000191a0 + 0x19178,DAT_0001919c + 0x198d4,
           0x71a,DAT_0001919c + 0x198e8);
  }
  else {
    if (*(char *)(DAT_0001918c + 0x191ec) == '\0') {
      *(undefined1 *)(DAT_0001918c + 0x191ec) = 1;
                    /* WARNING: Could not recover jumptable at 0x00011d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR_wpa_wifi_connect1_00044110)(param_1,param_2,1);
      return uVar1;
    }
    uVar1 = FUN_00011fd0();
    printf((char *)(DAT_00019198 + 0x1913c),uVar1,DAT_00019194 + 0x19130,DAT_00019190 + 0x19890,
           0x71f,param_1);
  }
  return 0;
}



/* ===== wpa_wifi_restart_network @ 000191a8 size=8 ===== */

undefined4 wpa_wifi_restart_network(void)

{
  return 1;
}



/* ===== wpa_wifi_get_mac @ 000191b0 size=492 ===== */

undefined4 wpa_wifi_get_mac(char *param_1)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char local_54 [4];
  uint uStack_50;
  undefined2 uStack_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  uint local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  uVar4 = 0;
  uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_54[0] = '\0';
  local_54[1] = '\0';
  local_54[2] = '\0';
  local_54[3] = '\0';
  uStack_4c = (undefined2)uVar3;
  local_4a = 0;
  uStack_48 = 0;
  uStack_46 = (undefined2)uStack_3c;
  uStack_44 = (undefined2)(uStack_3c >> 0x10);
  uStack_50 = uStack_3c;
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_00011fd0();
    printf((char *)(DAT_000193c4 + 0x19348),uVar3,DAT_000193c0 + 0x1933c,DAT_000193bc + 0x19ac0,
           0x820,DAT_000193bc + 0x19ad4);
    return 0;
  }
  __fd = socket(2,1,0);
  if (__fd != -1) {
    local_40 = uVar4;
    uStack_38 = uVar3;
    uStack_34 = uVar5;
    local_30 = uVar4;
    uStack_2c = uStack_3c;
    local_28 = uVar4;
    uStack_24 = uStack_3c;
    pcVar1 = strncpy((char *)&local_40,(char *)(DAT_0001939c + 0x1920c),0xf);
    iVar2 = ioctl(__fd,0x8927,pcVar1);
    if (-1 < iVar2) {
      sprintf(local_54,(char *)(DAT_000193a0 + 0x1925c),local_30 >> 0x10 & 0xff,local_30 >> 0x18,
              uStack_2c & 0xff,uStack_2c >> 8 & 0xff,uStack_2c >> 0x10 & 0xff,uStack_2c >> 0x18);
      close(__fd);
      strncpy(param_1,local_54,0x12);
      uVar3 = FUN_00011fd0();
      printf((char *)(DAT_000193ac + 0x192b8),uVar3,DAT_000193a8 + 0x192ac,
             (int)&DAT_00019a34 + DAT_000193a4,0x83d,param_1);
      return 1;
    }
    uVar3 = FUN_00011fd0();
    printf((char *)(DAT_000193b8 + 0x192fc),uVar3,DAT_000193b4 + 0x192ec,DAT_000193b0 + 0x19a80,
           0x82f);
    return 0;
  }
  uVar3 = FUN_00011fd0();
  printf((char *)(DAT_000193d0 + 0x1938c),uVar3,DAT_000193cc + 0x1937c,
         (int)&DAT_00019b10 + DAT_000193c8,0x827);
  return 0;
}



/* ===== wpa_wifi_ping @ 000193d4 size=8 ===== */

undefined4 wpa_wifi_ping(void)

{
  return 1;
}



/* ===== gbk_to_utf8 @ 000193dc size=304 ===== */

int gbk_to_utf8(int param_1,int param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  byte local_38;
  byte local_37;
  byte local_36 [18];
  
  if (param_2 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar6 = DAT_0001950c + 0x19404;
    iVar7 = 0;
    do {
      local_38 = *(byte *)(param_1 + iVar7);
      iVar2 = iVar7 + 1;
      if ((local_38 & 0x80) == 0) {
LAB_00019410:
        local_37 = 0;
      }
      else {
        iVar2 = iVar7 + 2;
        uVar5 = local_38 + 0x7f & 0xff;
        uVar3 = *(byte *)(param_1 + iVar7 + 1) - 0x40 & 0xff;
        bVar11 = 0x7c < uVar5;
        bVar10 = uVar5 == 0x7d;
        if (uVar5 < 0x7e) {
          bVar11 = 0xbd < uVar3;
          bVar10 = uVar3 == 0xbe;
        }
        if (bVar11 && !bVar10) {
          bVar4 = 0xbf;
          local_38 = 0xe1;
          local_37 = 0xbf;
LAB_000194d0:
          pbVar9 = local_36;
        }
        else {
          uVar5 = *(ushort *)(iVar6 + ((short)uVar5 * 0xbf + uVar3) * 2);
          uVar3 = (uint)uVar5;
          local_38 = (byte)uVar5;
          if (uVar3 < 0x80) goto LAB_00019410;
          bVar4 = local_38 & 0x3f | 0x80;
          if (0x7ff < uVar3) {
            local_38 = (byte)(uVar5 >> 0xc) | 0xe0;
            local_37 = (byte)((uVar3 << 0x12) >> 0x18) & 0x3f | 0x80;
            goto LAB_000194d0;
          }
          pbVar9 = &local_37;
          local_38 = ~((byte)~(byte)((((uVar3 & 0x3fff) >> 6) << 0x1a) >> 0x18) >> 2);
        }
        *pbVar9 = bVar4;
        pbVar9[1] = 0;
      }
      strcpy((char *)(param_3 + iVar8),(char *)&local_38);
      sVar1 = strlen((char *)&local_38);
      iVar8 = iVar8 + sVar1;
      iVar7 = iVar2;
    } while (iVar2 < param_2);
  }
  return iVar8;
}



/* ===== utf8_to_gbk @ 00019510 size=188 ===== */

int utf8_to_gbk(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  iVar5 = DAT_000195cc + 0x19524;
  if (param_2 < 1) {
    return 0;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + iVar4);
    if ((bVar1 & 0x80) == 0) {
      *(byte *)(param_3 + iVar3) = bVar1;
    }
    else {
      iVar6 = param_1 + iVar4;
      iVar4 = iVar4 + 2;
      if (((bVar1 & 0xf0) != 0xe0) || (param_2 <= iVar4)) {
        return -1;
      }
      uVar2 = *(undefined2 *)
               (*(int *)(iVar5 + DAT_000195d0) +
               ((*(byte *)(iVar6 + 2) & 0x3f | (bVar1 & 0xf) << 0xc |
                (*(byte *)(iVar6 + 1) & 0x3f) << 6) - 0x4e00) * 2);
      puVar7 = (undefined1 *)(param_3 + iVar3);
      *puVar7 = (char)((ushort)uVar2 >> 8);
      iVar3 = iVar3 + 1;
      puVar7[1] = (char)uVar2;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    if (param_2 <= iVar4) {
      return iVar3;
    }
  } while( true );
}



/* ===== RK_encode_is_utf8 @ 000195d4 size=196 ===== */

bool RK_encode_is_utf8(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return true;
  }
  uVar3 = (uint)*param_1;
  if ((uVar3 == 0) || (param_2 < 1)) {
    return true;
  }
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (uVar1 == 0) {
      while ((uVar3 & 0x80) == 0) {
        iVar2 = iVar2 + 1;
        if (param_2 <= iVar2) {
          return true;
        }
        uVar3 = (uint)param_1[iVar2];
      }
      uVar1 = 0;
      while ((uVar3 << (uVar1 & 0xff) & 0x80) != 0) {
        uVar1 = uVar1 + 1;
        if (uVar1 == 7) {
          return false;
        }
      }
      if ((int)uVar1 < 2) {
        return false;
      }
    }
    else if ((uVar3 & 0xc0) != 0x80) {
      return false;
    }
    uVar1 = uVar1 - 1;
    iVar2 = iVar2 + 1;
    if (param_2 <= iVar2) {
      return uVar1 == 0;
    }
    uVar3 = (uint)param_1[iVar2];
  } while( true );
}



/* ===== RK_encode_gbk_to_utf8 @ 00019698 size=4 ===== */

void RK_encode_gbk_to_utf8(void)

{
  (*(code *)PTR_gbk_to_utf8_00044060)();
  return;
}



/* ===== RK_encode_utf8_to_gbk @ 0001969c size=4 ===== */

void RK_encode_utf8_to_gbk(void)

{
  (*(code *)PTR_utf8_to_gbk_000440f8)();
  return;
}



/* ===== FUN_000196a0 @ 000196a0 size=64 ===== */

char * FUN_000196a0(void)

{
  int iVar1;
  timeval local_10;
  
  iVar1 = DAT_000196e0;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  sprintf((char *)(iVar1 + 0x196c0),(char *)(DAT_000196e4 + 0x196d4),local_10.tv_sec,
          local_10.tv_usec);
  return (char *)(iVar1 + 0x196c0);
}



/* ===== RK_wifi_register_callback @ 000196e8 size=28 ===== */

undefined4 RK_wifi_register_callback(undefined4 param_1)

{
  **(undefined4 **)(DAT_00019704 + 0x196f8 + DAT_00019708) = param_1;
  return 1;
}



/* ===== RK_wifi_enable @ 0001970c size=284 ===== */

int RK_wifi_enable(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_120 [65];
  
  uVar1 = FUN_000196a0();
  iVar2 = DAT_00019830 + 0x19740;
  printf((char *)(DAT_00019834 + 0x1974c),uVar1,DAT_0001982c + 0x1973c,DAT_00019828 + 0x19734,0x19);
  piVar4 = *(int **)(iVar2 + DAT_00019838);
  if (*piVar4 == 0) {
    puts((char *)(DAT_00019850 + 0x19818));
    *piVar4 = *(int *)(iVar2 + DAT_00019854);
  }
  iVar2 = 0xc9;
  iVar3 = DAT_0001983c + 0x19774;
  while( true ) {
    exec_command(iVar3,local_120,0x40);
    if (local_120[0] != 0) {
      if (*(code **)(*piVar4 + 0x10) != (code *)0x0) {
        local_120[0] = (**(code **)(*piVar4 + 0x10))(param_1);
      }
      uVar1 = FUN_000196a0();
      printf((char *)(DAT_00019848 + 0x197e8),uVar1,DAT_00019844 + 0x197dc,DAT_00019840 + 0x197d8,
             0x4d);
      return local_120[0];
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    usleep(10000);
  }
  puts((char *)(DAT_0001984c + 0x19800));
  return 0;
}



/* ===== RK_wifi_running_getConnectionInfo @ 00019858 size=68 ===== */

void RK_wifi_running_getConnectionInfo(void *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = DAT_0001989c;
  memset(param_1,0,0x170);
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(iVar1 + 0x1987c + DAT_000198a0) + 0xc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* ===== RK_wifi_scan @ 000198a4 size=36 ===== */

void RK_wifi_scan(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_000198c8 + 0x198b4 + DAT_000198cc) + 0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000198c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_scan_r @ 000198d0 size=44 ===== */

void RK_wifi_scan_r(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(DAT_000198fc + 0x198e0 + DAT_00019900) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*pcVar1)();
  return;
}



/* ===== RK_wifi_connect @ 00019904 size=36 ===== */

void RK_wifi_connect(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019928 + 0x19914 + DAT_0001992c) + 0x20);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_connect_wep @ 00019930 size=36 ===== */

void RK_wifi_connect_wep(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019954 + 0x19940 + DAT_00019958) + 0x24);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_disconnect_network @ 0001995c size=36 ===== */

void RK_wifi_disconnect_network(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019980 + 0x1996c + DAT_00019984) + 0x28);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001997c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_get_mac @ 00019988 size=36 ===== */

void RK_wifi_get_mac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_000199ac + 0x19998 + DAT_000199b0) + 0x34);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000199a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_recovery @ 000199b4 size=36 ===== */

void RK_wifi_recovery(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_000199d8 + 0x199c4 + DAT_000199dc) + 0x3c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000199d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_forget_with_ssid @ 000199e0 size=36 ===== */

void RK_wifi_forget_with_ssid(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019a04 + 0x199f0 + DAT_00019a08) + 0x40);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_cancel @ 00019a0c size=36 ===== */

void RK_wifi_cancel(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019a30 + 0x19a1c + DAT_00019a34) + 0x44);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_getSavedInfo @ 00019a38 size=36 ===== */

void RK_wifi_getSavedInfo(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019a5c + 0x19a48 + DAT_00019a60) + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_connect_with_ssid @ 00019a64 size=36 ===== */

void RK_wifi_connect_with_ssid(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019a88 + 0x19a74 + DAT_00019a8c) + 0x4c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_reset @ 00019a90 size=36 ===== */

void RK_wifi_reset(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019ab4 + 0x19aa0 + DAT_00019ab8) + 0x50);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_get_connected_ap_rssi @ 00019abc size=36 ===== */

void RK_wifi_get_connected_ap_rssi(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019ae0 + 0x19acc + DAT_00019ae4) + 0x54);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_get_ccode @ 00019ae8 size=36 ===== */

void RK_wifi_get_ccode(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019b0c + 0x19af8 + DAT_00019b10) + 0x58);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_set_ccode @ 00019b14 size=36 ===== */

void RK_wifi_set_ccode(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019b38 + 0x19b24 + DAT_00019b3c) + 0x5c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_enter_sleep @ 00019b40 size=36 ===== */

void RK_wifi_enter_sleep(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019b64 + 0x19b50 + DAT_00019b68) + 0x6c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_exit_sleep @ 00019b6c size=36 ===== */

void RK_wifi_exit_sleep(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019b90 + 0x19b7c + DAT_00019b94) + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_start_keepalive @ 00019b98 size=36 ===== */

void RK_wifi_start_keepalive(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019bbc + 0x19ba8 + DAT_00019bc0) + 0x74);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_stop_keepalive @ 00019bc4 size=36 ===== */

void RK_wifi_stop_keepalive(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019be8 + 0x19bd4 + DAT_00019bec) + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_set_BeaconListenInterval @ 00019bf0 size=36 ===== */

void RK_wifi_set_BeaconListenInterval(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019c14 + 0x19c00 + DAT_00019c18) + 0x7c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00019c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== RK_wifi_scan_for_softap @ 00019c1c size=44 ===== */

void RK_wifi_scan_for_softap(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(DAT_00019c48 + 0x19c2c + DAT_00019c4c) + 0x1c);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*pcVar1)();
  return;
}



/* ===== RK_wifi_set_pir @ 00019c50 size=44 ===== */

undefined4 RK_wifi_set_pir(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019c7c + 0x19c60 + DAT_00019c80) + 0x80);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* ===== RK_wifi_get_wkreason @ 00019c84 size=48 ===== */

void RK_wifi_get_wkreason(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019cb4 + 0x19c94 + DAT_00019cb8) + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puts((char *)((int)&DAT_00019cb4 + DAT_00019cbc));
  return;
}



/* ===== RK_wifi_get_batlevel @ 00019cc0 size=48 ===== */

void RK_wifi_get_batlevel(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019cf0 + 0x19cd0 + DAT_00019cf4) + 0x84);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puts((char *)((int)&DAT_00019cf0 + DAT_00019cf8));
  return;
}



/* ===== RK_wifi_get_utc @ 00019cfc size=48 ===== */

void RK_wifi_get_utc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019d2c + 0x19d0c + DAT_00019d30) + 0x8c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puts((char *)((int)&DAT_00019d2c + DAT_00019d34));
  return;
}



/* ===== Rk_wifi_ota @ 00019d38 size=80 ===== */

void Rk_wifi_ota(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  puts((char *)(DAT_00019d88 + 0x19d4c));
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019d8c + 0x19d5c + DAT_00019d90) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  puts((char *)((int)&DAT_00019d88 + DAT_00019d94));
  return;
}



/* ===== RK_wifi_reboot @ 00019d98 size=48 ===== */

void RK_wifi_reboot(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019dc8 + 0x19da8 + DAT_00019dcc) + 100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puts((char *)((int)&DAT_00019dc8 + DAT_00019dd0));
  return;
}



/* ===== RK_get_pirstate @ 00019dd4 size=48 ===== */

void RK_get_pirstate(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(DAT_00019e04 + 0x19de4 + DAT_00019e08) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puts((char *)((int)&DAT_00019e04 + DAT_00019e0c));
  return;
}



/* ===== FUN_00019e10 @ 00019e10 size=64 ===== */

char * FUN_00019e10(void)

{
  int iVar1;
  timeval local_10;
  
  iVar1 = DAT_00019e50;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  sprintf((char *)(iVar1 + 0x19e30),(char *)(DAT_00019e54 + 0x19e44),local_10.tv_sec,
          local_10.tv_usec);
  return (char *)(iVar1 + 0x19e30);
}



/* ===== exec_command_system @ 00019e58 size=16 ===== */

undefined4 exec_command_system(char *param_1)

{
  system(param_1);
  return 0;
}



/* ===== exec_command @ 00019e68 size=280 ===== */

void exec_command(char *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  FILE *__stream;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00019e10();
  iVar5 = DAT_00019f80 + 0x19e94;
  iVar4 = DAT_00019f84 + 0x19e9c;
  printf((char *)(DAT_00019f88 + 0x19eb4),uVar1,iVar4,iVar5,0x59,param_1);
  memset(param_2,0,param_3);
  __stream = popen(param_1,(char *)(DAT_00019f8c + 0x19ed4));
  __s = param_2;
  if (__stream == (FILE *)0x0) {
    uVar1 = FUN_00019e10();
    printf((char *)(DAT_00019f9c + 0x19f78),uVar1,iVar4,iVar5,0x6c,param_1);
    return;
  }
  do {
    pcVar3 = fgets(__s,param_3,__stream);
    if (pcVar3 == (char *)0x0) break;
    sVar2 = strlen(__s);
    __s = __s + sVar2;
  } while (1 < (int)param_3);
  uVar1 = FUN_00019e10();
  printf((char *)(DAT_00019f98 + 0x19f40),uVar1,DAT_00019f94 + 0x19f34,DAT_00019f90 + 0x19f2c,0x69,
         param_2);
  pclose(__stream);
  return;
}



/* ===== test_pthread @ 00019fa0 size=228 ===== */

int test_pthread(pthread_t param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_kill(param_1,0);
  if (iVar1 == 3) {
    uVar2 = FUN_00019e10();
    printf((char *)(DAT_0001a0a4 + 0x1a078),uVar2,DAT_0001a0a0 + 0x1a06c,DAT_0001a09c + 0x1a070,0x75
           ,param_1);
    return 3;
  }
  if (iVar1 != 0x16) {
    uVar2 = FUN_00019e10();
    printf((char *)(DAT_0001a08c + 0x19ffc),uVar2,DAT_0001a088 + 0x19ff0,DAT_0001a084 + 0x19ff4,0x79
           ,param_1);
    return iVar1;
  }
  uVar2 = FUN_00019e10();
  printf((char *)(DAT_0001a098 + 0x1a038),uVar2,DAT_0001a094 + 0x1a028,DAT_0001a090 + 0x1a034,0x77);
  return 0x16;
}



/* ===== get_ps_pid @ 0001a0a8 size=228 ===== */

char get_ps_pid(char *param_1)

{
  size_t __n;
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_190;
  uint uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  uint uStack_17c;
  undefined4 local_178;
  uint uStack_174;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  uint uStack_15c;
  undefined4 local_158;
  uint uStack_154;
  undefined4 local_150;
  uint uStack_14c;
  undefined4 local_148;
  uint uStack_144;
  undefined4 local_140;
  uint uStack_13c;
  undefined4 local_138;
  uint uStack_134;
  byte local_130 [272];
  
  uVar2 = 0;
  uVar3 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = 4;
  while( true ) {
    local_190 = uVar2;
    uStack_18c = uVar3;
    uStack_188 = uVar4;
    uStack_184 = uVar5;
    local_180 = uVar2;
    uStack_17c = uVar3;
    local_178 = uVar2;
    uStack_174 = uVar3;
    memset(local_130,0,0x100);
    local_170 = uVar2;
    uStack_16c = uVar3;
    uStack_168 = uVar4;
    uStack_164 = uVar5;
    local_160 = uVar2;
    uStack_15c = uVar3;
    local_158 = uVar2;
    uStack_154 = uVar3;
    local_150 = uVar2;
    uStack_14c = uVar3;
    local_148 = uVar2;
    uStack_144 = uVar3;
    local_140 = uVar2;
    uStack_13c = uVar3;
    local_138 = uVar2;
    uStack_134 = uVar3;
    __n = strlen(param_1);
    strncpy((char *)&local_190,param_1,__n);
    uStack_174 = uStack_174 & 0xffffff;
    sprintf((char *)&local_170,(char *)(DAT_0001a18c + 0x1a134),&local_190);
    __stream = popen((char *)&local_170,(char *)(DAT_0001a190 + 0x1a148));
    if (__stream != (FILE *)0x0) {
      fgets((char *)local_130,0x100,__stream);
      pclose(__stream);
    }
    if (local_130[0] != 0) break;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return '\0';
    }
  }
  return local_130[0];
}



/* ===== kill_task @ 0001a194 size=396 ===== */

undefined4 kill_task(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char acStack_90 [128];
  
  memset(acStack_90,0,0x80);
  iVar1 = get_ps_pid(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    memset(acStack_90,0,0x80);
    sprintf(acStack_90,(char *)(DAT_0001a320 + 0x1a1f4),param_1);
    exec_command_system(acStack_90);
    iVar1 = get_ps_pid(param_1);
    if (iVar1 == 0) {
      iVar1 = get_ps_pid(param_1);
    }
    else {
      usleep(600000);
      iVar1 = get_ps_pid(param_1);
    }
    if (iVar1 != 0) {
      memset(acStack_90,0,0x80);
      sprintf(acStack_90,(char *)(DAT_0001a330 + 0x1a2b4),param_1);
      exec_command_system(acStack_90);
      usleep(300000);
    }
    iVar1 = get_ps_pid(param_1);
    if (iVar1 == 0) {
      uVar2 = FUN_00019e10();
      printf((char *)(DAT_0001a32c + 0x1a268),uVar2,DAT_0001a328 + 0x1a25c,DAT_0001a324 + 0x1a264,
             0xc0,DAT_0001a324 + 0x1a270,param_1);
      return 0;
    }
    uVar3 = FUN_00019e10();
    uVar2 = 0xffffffff;
    uVar4 = get_ps_pid(param_1);
    printf((char *)(DAT_0001a33c + 0x1a31c),uVar3,DAT_0001a338 + 0x1a310,DAT_0001a334 + 0x1a314,0xbd
           ,(int)&DAT_0001a320 + DAT_0001a334,param_1,uVar4);
  }
  return uVar2;
}



/* ===== run_task @ 0001a340 size=200 ===== */

int run_task(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 3;
  do {
    iVar1 = exec_command_system(param_2);
    if (iVar1 == 0) {
      usleep(100000);
      iVar3 = 7;
      while ((iVar1 = get_ps_pid(param_1), iVar1 == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
        usleep(100000);
      }
      iVar3 = get_ps_pid(param_1);
      return -(uint)(iVar3 == 0);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar2 = FUN_00019e10();
  printf((char *)(DAT_0001a410 + 0x1a3a8),uVar2,DAT_0001a40c + 0x1a39c,DAT_0001a408 + 0x1a3bc,0xd0,
         DAT_0001a408 + 0x1a3c8,param_1);
  return -1;
}



/* ===== rk_addr2str @ 0001a414 size=72 ===== */

undefined4 rk_addr2str(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_0001a45c + 0x1a448),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== _fini @ 0001a460 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00045000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00045004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::popen @ 00045008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0004500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wpa_ctrl_close @ 00045010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wpa_ctrl_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00045014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00045018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pclose @ 00045020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00045024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0004502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00045030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 00045034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00045038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00045040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00045044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00045048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove @ 0004504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00045050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00045054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00045058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wpa_ctrl_attach @ 0004505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wpa_ctrl_attach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_detach @ 00045060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00045064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00045068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00045070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wpa_ctrl_open @ 00045074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wpa_ctrl_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00045078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_kill @ 0004507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_kill(pthread_t __threadid,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wpa_ctrl_get_fd @ 00045080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wpa_ctrl_get_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00045084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00045088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 00045090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00045094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00045098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0004509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000450a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000450a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000450a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000450ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000450b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socketpair @ 000450b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000450b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000450bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000450c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000450c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000450c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wpa_ctrl_recv @ 000450cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wpa_ctrl_recv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000450d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000450d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000450d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



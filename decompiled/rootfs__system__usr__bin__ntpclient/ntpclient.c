// ntpclient — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001084c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010870 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002400c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 0001087c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00024010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00024014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00024018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::connect @ 000108a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002401c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 000108ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00024020)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::perror @ 000108b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00024024)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 000108c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00024028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_settime @ 000108d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_settime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_settime_0002402c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::recvfrom @ 000108dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00024030)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::socket @ 000108e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00024034)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 000108f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00024038)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010900 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002403c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 0001090c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00024040)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 00010918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024044)();
  return;
}



/* ===== <EXTERNAL>::atof @ 00010924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_00024048)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::fprintf @ 00010930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002404c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 0001093c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00024050)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010948 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024054)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00010954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00024058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 0001096c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00024060)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00010978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_00024064)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::herror @ 00010984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void herror(char *__str)

{
  (*(code *)PTR_herror_00024068)(__str);
  return;
}



/* ===== <EXTERNAL>::gethostbyname @ 00010990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = (hostent *)(*(code *)PTR_gethostbyname_0002406c)(__name);
  return phVar1;
}



/* ===== <EXTERNAL>::fwrite @ 0001099c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024070)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000109a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024074)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000109b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00024078)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000109c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002407c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 000109cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::adjtimex @ 000109d8 size=12 ===== */

void adjtimex(void)

{
  (*(code *)PTR_adjtimex_00024084)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000109e4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024088)();
  return;
}



/* ===== <EXTERNAL>::close @ 000109f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002408c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000109fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00024090)(__sig);
  return iVar1;
}



/* ===== FUN_00010a08 @ 00010a08 size=4004 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011820 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00010a08(int param_1,char **param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint __fd;
  hostent *phVar10;
  ssize_t sVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  uint in_fpscr;
  undefined4 uVar30;
  double in_d0;
  undefined4 uVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  int local_200;
  int local_1e8;
  int local_1b8;
  int local_1b4;
  float local_1b0;
  timeval local_1ac;
  uint local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  in_addr local_198;
  uint local_18c;
  uint local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  fd_set local_168;
  sockaddr local_e4;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_c0 [4];
  uint uStack_bc;
  uint local_b8;
  
  uVar26 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_174 = 0;
  local_178 = 600;
  local_170 = 1;
  pcVar18 = (char *)0x0;
  while (iVar8 = getopt(param_1,param_2,"c:df:g:h:i:lp:q:rst"), iVar8 != -1) {
    switch(iVar8) {
    case 99:
      local_17c = atoi(optarg);
      break;
    case 100:
      DAT_000240d8 = DAT_000240d8 + 1;
      break;
    default:
      goto switchD_00010a80_caseD_65;
    case 0x66:
      iVar8 = atoi(optarg);
      if (DAT_000240d8 != 0) {
        printf("initial frequency %d\n",iVar8);
      }
      FUN_00011ba4(iVar8);
      break;
    case 0x67:
      local_174 = atoi(optarg);
      break;
    case 0x68:
      pcVar18 = optarg;
      break;
    case 0x69:
      local_178 = atoi(optarg);
      break;
    case 0x6c:
      local_184 = local_184 + 1;
      break;
    case 0x70:
      iVar8 = atoi(optarg);
      uVar26 = (uint)(short)iVar8;
      break;
    case 0x71:
      DAT_000240a0 = atof(optarg);
      in_d0 = DAT_000240a0;
      break;
    case 0x72:
      dVar34 = 0.0;
      iVar8 = 0;
      iVar16 = 0;
      while( true ) {
        pcVar18 = fgets((char *)&local_e4,100,stdin);
        iVar9 = 0;
        if (pcVar18 == (char *)0x0) break;
        iVar9 = sscanf((char *)&local_e4,"%d %f %f %f %lf %f %d",&local_1b8,&local_1b0);
        if (iVar9 != 7) {
          fwrite("Replay input error\n",1,0x13,stderr);
                    /* WARNING: Subroutine does not return */
          exit(2);
        }
        fputs((char *)&local_e4,stdout);
        fVar32 = (float)local_1ac.tv_sec + local_19c;
        iVar25 = local_1b8 * 0x15180 + (int)local_1b0;
        iVar9 = iVar25 - iVar16;
        if (DAT_000240d8 == 0) {
          dVar39 = (double)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
          if (iVar16 == 0) {
            dVar34 = dVar34 + dVar39 * 0.0 * DAT_00010d98;
            iVar8 = local_1b4;
          }
          else {
            dVar33 = (double)VectorSignedToFloat(local_1b4 - iVar8,(byte)(in_fpscr >> 0x16) & 3);
            dVar34 = dVar34 + dVar33 * dVar39 * DAT_00010d98;
          }
        }
        else {
          printf("contemplate %u %.1f %.1f %d\n",iVar25,local_168.fds_bits[0],local_168.fds_bits[1])
          ;
          if (iVar16 == 0) {
            dVar39 = (double)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
            dVar33 = DAT_00010da0;
            iVar8 = local_1b4;
          }
          else {
            dVar39 = (double)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
            dVar33 = (double)VectorSignedToFloat(local_1b4 - iVar8,(byte)(in_fpscr >> 0x16) & 3);
          }
          dVar34 = dVar34 + dVar33 * dVar39 * DAT_00010d98;
          if (DAT_000240d8 != 0) {
            printf("fake %f %d \n");
          }
        }
        local_168.fds_bits._0_8_ = dVar34 + (double)local_168.fds_bits._0_8_;
        uVar30 = (undefined4)((ulonglong)in_d0 >> 0x20);
        in_d0 = (double)CONCAT44(uVar30,(int)local_168.fds_bits._0_8_);
        local_1b4 = iVar8;
        iVar8 = FUN_00011e78((int)local_168.fds_bits._0_8_,uVar30,SUB84((double)fVar32,0),iVar25,
                             iVar8);
        iVar16 = iVar25;
      }
      goto LAB_00010d80;
    case 0x73:
      local_180 = local_180 + 1;
      break;
    case 0x74:
      local_170 = 0;
    }
  }
  if (pcVar18 == (char *)0x0) {
switchD_00010a80_caseD_65:
    fprintf(stderr,
            "Usage: %s [-c count] [-d] [-f frequency] [-g goodness] -h hostname\n\t[-i interval] [-l] [-p port] [-q min_delay] [-r] [-s] [-t]\n"
            ,*param_2);
    iVar9 = 1;
LAB_00010d80:
                    /* WARNING: Subroutine does not return */
    exit(iVar9);
  }
  if ((local_180 == 0) || ((local_17c != 0 || local_184 != 0) || local_174 != 0)) {
    if ((local_17c != 1) && (local_178 < 0xf)) {
      local_178 = 0xf;
    }
  }
  else {
    local_17c = 1;
  }
  if (DAT_000240d8 != 0) {
    printf("Configuration:\n  -c probe_count %d\n  -d (debug)     %d\n  -g goodness    %d\n  -h hostname    %s\n  -i interval    %d\n  -l live        %d\n  -p local_port  %d\n  -q min_delay   %f\n  -s set_clock   %d\n  -x cross_check %d\n"
           ,local_17c,DAT_000240d8,local_174);
  }
  __fd = socket(2,2,0x11);
  if (__fd == 0xffffffff) {
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_e4.sa_data[2] = '\0';
  local_e4.sa_data[3] = '\0';
  local_e4.sa_data[4] = '\0';
  local_e4.sa_data[5] = '\0';
  local_e4.sa_data._0_2_ = (ushort)((uVar26 & 0xff) << 8) | (ushort)(uVar26 >> 8) & 0xff;
  local_e4.sa_family = 2;
  local_e4.sa_data[6] = '\0';
  local_e4.sa_data[7] = '\0';
  local_e4.sa_data[8] = '\0';
  local_e4.sa_data[9] = '\0';
  local_e4.sa_data[10] = '\0';
  local_e4.sa_data[0xb] = '\0';
  local_e4.sa_data[0xc] = '\0';
  local_e4.sa_data[0xd] = '\0';
  iVar8 = bind(__fd,&local_e4,0x10);
  if (iVar8 == -1) {
    perror("bind");
    fprintf(stderr,"could not bind to udp port %d\n",uVar26);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_e4.sa_family = 2;
  local_e4.sa_data[0] = '\0';
  local_e4.sa_data[1] = '\0';
  local_e4.sa_data[2] = '\0';
  local_e4.sa_data[3] = '\0';
  local_e4.sa_data[4] = '\0';
  local_e4.sa_data[5] = '\0';
  local_e4.sa_data[6] = '\0';
  local_e4.sa_data[7] = '\0';
  local_e4.sa_data[8] = '\0';
  local_e4.sa_data[9] = '\0';
  local_e4.sa_data[10] = '\0';
  local_e4.sa_data[0xb] = '\0';
  local_e4.sa_data[0xc] = '\0';
  local_e4.sa_data[0xd] = '\0';
  phVar10 = gethostbyname(pcVar18);
  if (phVar10 == (hostent *)0x0) {
    herror(pcVar18);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (phVar10->h_length != 4) {
    fprintf(stderr,"oops %d\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_16c = *(int *)*phVar10->h_addr_list;
  local_e4.sa_data[0] = '\0';
  local_e4.sa_data[1] = '{';
  local_e4.sa_data._2_4_ = local_16c;
  iVar8 = connect(__fd,&local_e4,0x10);
  if (iVar8 == -1) {
    perror("connect");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (DAT_000240d8 != 0) {
    puts("Listening...");
  }
  dVar39 = DAT_00010db0;
  dVar34 = DAT_00010da8;
  uVar26 = __fd >> 5;
  local_200 = 0;
  local_1ac.tv_sec = 0;
  local_1ac.tv_usec = 0;
  local_1b0 = 2.24208e-44;
  uVar2 = 1 << (__fd & 0x1f);
LAB_00010f58:
  while( true ) {
    piVar17 = &local_16c;
    do {
      piVar17 = piVar17 + 1;
      *piVar17 = 0;
    } while (local_168.fds_bits + 0x1f != piVar17);
    local_168.fds_bits[uVar26] = local_168.fds_bits[uVar26] | uVar2;
    iVar8 = select(__fd + 1,&local_168,(fd_set *)0x0,(fd_set *)0x0,&local_1ac);
    if (iVar8 == 1) break;
    if (iVar8 < 0) {
      piVar17 = __errno_location();
      if (*piVar17 != 4) {
        perror("select");
      }
    }
    else {
LAB_00010fb0:
      if (local_1ac.tv_sec == 0) {
        if (local_17c != 0 && local_17c <= local_200) goto LAB_00010fe0;
        if (DAT_000240d8 != 0) {
          fwrite("Sending ...\n",1,0xc,stderr);
        }
        local_200 = local_200 + 1;
        local_c8 = 0;
        local_c0[0] = '\0';
        local_c0[1] = '\0';
        local_c0[2] = '\0';
        local_c0[3] = '\0';
        local_e4.sa_data[2] = '\0';
        local_e4.sa_data[3] = '\x01';
        local_e4.sa_data[4] = '\0';
        local_e4.sa_data[5] = '\0';
        local_e4.sa_family = 0x1b;
        local_e4.sa_data[0] = '\x04';
        local_e4.sa_data[1] = -6;
        uStack_d4 = 0;
        uStack_d0 = 0;
        local_e4.sa_data[6] = '\0';
        local_e4.sa_data[7] = '\x01';
        local_e4.sa_data[8] = '\0';
        local_e4.sa_data[9] = '\0';
        uStack_bc = 0;
        local_e4.sa_data._10_4_ = local_c0;
        local_b8 = uStack_d4;
        FUN_00011b3c(&local_18c,&local_188);
        uStack_bc = local_18c << 0x18 | (local_18c >> 8 & 0xff) << 0x10 |
                    (local_18c >> 0x10 & 0xff) << 8 | local_18c >> 0x18;
        local_b8 = local_188 << 0x18 | (local_188 >> 8 & 0xff) << 0x10 |
                   (local_188 >> 0x10 & 0xff) << 8 | local_188 >> 0x18;
        send(__fd,&local_e4,0x30,0);
        local_1ac.tv_sec = local_178;
        local_1ac.tv_usec = 0;
      }
    }
  }
  if ((uVar2 & local_168.fds_bits[uVar26]) == 0) goto LAB_00010fb0;
  sVar11 = recvfrom(__fd,DAT_00010db8,0x514,0,(sockaddr *)&local_19c,(socklen_t *)&local_1b0);
  local_1e8 = local_174;
  if (sVar11 < 0) {
    perror("recvfrom");
  }
  else if (sVar11 - 1U < 0x513) {
    iVar8 = ioctl(__fd,0x8906,&local_e4);
    if (iVar8 < 0) {
      perror("ioctl-SIOCGSTAMP");
      FUN_00011b3c(&local_1a4,&local_1a0);
    }
    else {
      local_1a4 = local_e4._0_4_ + 0x83aa7e80;
      local_1a0 = local_e4.sa_data._2_4_ * 0x10c6 + (local_e4.sa_data._2_4_ * 0x7bd >> 0xb);
    }
    if (DAT_000240d8 != 0) {
      printf("packet of length %d received\n",sVar11);
      if (((uint)local_19c & 0xffff) == 2) {
        uVar15 = (uint)local_19c._2_2_;
        uVar7 = local_19c._2_2_ >> 8;
        pcVar18 = inet_ntoa(local_198);
        printf("Source: INET Port %d host %s\n",(uVar15 & 0xff) << 8 | (uint)uVar7,pcVar18);
      }
      else {
        printf("Source: Address family %d\n");
      }
    }
    uVar15 = DAT_000240ec;
    if (local_19c._2_2_ != 0x7b00) goto LAB_00010f58;
    uVar3 = DAT_000240dc >> 8;
    uVar22 = (DAT_000240dc << 0x18 & 0x3fffffff) >> 0x1b;
    uVar1 = (DAT_000240dc & 0xff) >> 6;
    uVar23 = (DAT_000240dc << 0x18 & 0x7ffffff) >> 0x18;
    uVar27 = DAT_000240e0 << 0x18 | (DAT_000240e0 >> 8 & 0xff) << 0x10 |
             (DAT_000240e0 >> 0x10 & 0xff) << 8 | DAT_000240e0 >> 0x18;
    uVar12 = DAT_000240f4 << 0x18 | (DAT_000240f4 >> 8 & 0xff) << 0x10 |
             (DAT_000240f4 >> 0x10 & 0xff) << 8 | DAT_000240f4 >> 0x18;
    uVar19 = DAT_000240e4 << 0x18 | (DAT_000240e4 >> 8 & 0xff) << 0x10 |
             (DAT_000240e4 >> 0x10 & 0xff) << 8 | DAT_000240e4 >> 0x18;
    uVar24 = DAT_000240f8 << 0x18 | (DAT_000240f8 >> 8 & 0xff) << 0x10 |
             (DAT_000240f8 >> 0x10 & 0xff) << 8;
    uVar28 = uVar24 | DAT_000240f8 >> 0x18;
    uVar4 = DAT_00024100 << 0x18 | (DAT_00024100 >> 8 & 0xff) << 0x10 |
            (DAT_00024100 >> 0x10 & 0xff) << 8;
    uVar13 = uVar4 | DAT_00024100 >> 0x18;
    uVar20 = DAT_000240fc << 0x18 | (DAT_000240fc >> 8 & 0xff) << 0x10 |
             (DAT_000240fc >> 0x10 & 0xff) << 8 | DAT_000240fc >> 0x18;
    uVar14 = DAT_00024104 << 0x18 | (DAT_00024104 >> 8 & 0xff) << 0x10 |
             (DAT_00024104 >> 0x10 & 0xff) << 8 | DAT_00024104 >> 0x18;
    uVar5 = DAT_00024108 << 0x18 | (DAT_00024108 >> 8 & 0xff) << 0x10 |
            (DAT_00024108 >> 0x10 & 0xff) << 8;
    uVar21 = uVar5 | DAT_00024108 >> 0x18;
    if (DAT_000240d8 != 0) {
      uVar6 = DAT_000240f0 << 0x18 | (DAT_000240f0 >> 8 & 0xff) << 0x10 |
              (DAT_000240f0 >> 0x10 & 0xff) << 8;
      printf("LI=%d  VN=%d  Mode=%d  Stratum=%d  Poll=%d  Precision=%d\n",uVar1,uVar22,uVar23);
      VectorSignedToFloat(uVar19,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(uVar27,(byte)(in_fpscr >> 0x16) & 3);
      printf("Delay=%.1f  Dispersion=%.1f  Refid=%u.%u.%u.%u\n");
      printf("Reference %u.%.6u\n",
             uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18,(uVar6 >> 0xc) + ((uVar6 >> 10) + 0x8000 >> 0x10) * -0x2f7);
      printf("(sent)    %u.%.6u\n",local_18c,
             (local_188 >> 0xc) + ((local_188 >> 10) + 0x8000 >> 0x10) * -0x2f7);
      printf("Originate %u.%.6u\n",uVar12,
             (uVar24 >> 0xc) + ((uVar24 >> 10) + 0x8000 >> 0x10) * -0x2f7);
      printf("Receive   %u.%.6u\n",uVar20,(uVar4 >> 0xc) + ((uVar4 >> 10) + 0x8000 >> 0x10) * -0x2f7
            );
      printf("Transmit  %u.%.6u\n",uVar14,(uVar5 >> 0xc) + ((uVar5 >> 10) + 0x8000 >> 0x10) * -0x2f7
            );
      printf("Our recv  %u.%.6u\n",local_1a4,
             (local_1a0 >> 0xc) + ((local_1a0 >> 10) + 0x8000 >> 0x10) * -0x2f7);
    }
    uVar15 = uVar28;
    if (uVar28 <= local_1a0) {
      uVar15 = local_1a0 - uVar28;
    }
    iVar8 = local_1a4 - uVar12;
    if (local_1a0 < uVar28) {
      iVar8 = iVar8 + -1;
      uVar15 = ~(uVar15 - local_1a0);
    }
    uVar24 = uVar13;
    if (uVar13 <= uVar21) {
      uVar24 = uVar21 - uVar13;
    }
    dVar33 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    uVar15 = uVar13;
    if (uVar21 < uVar13) {
      uVar15 = uVar21;
    }
    iVar16 = uVar14 - uVar20;
    if (uVar21 < uVar13) {
      iVar16 = iVar16 + -1;
      uVar24 = ~(uVar24 - uVar15);
    }
    uVar15 = uVar28;
    if (uVar13 < uVar28) {
      uVar15 = uVar13;
    }
    iVar9 = uVar20 - uVar12;
    if (uVar13 < uVar28) {
      iVar9 = iVar9 + -1;
    }
    dVar40 = (double)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    if (uVar13 < uVar28) {
      uVar13 = ~(uVar28 - uVar15);
    }
    else {
      uVar13 = uVar13 - uVar15;
    }
    iVar8 = local_1a4 - uVar14;
    dVar33 = dVar33 * dVar39 + dVar40 * dVar34;
    dVar40 = (double)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
    if (local_1a0 < uVar21) {
      iVar8 = iVar8 + -1;
      uVar15 = local_1a0;
    }
    else {
      uVar15 = local_1a0 - uVar21;
    }
    dVar35 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
    if (local_1a0 < uVar21) {
      uVar15 = ~(uVar21 - uVar15);
    }
    dVar36 = (double)VectorUnsignedToFloat(uVar24,(byte)(in_fpscr >> 0x16) & 3);
    local_e4.sa_family = 0;
    local_e4.sa_data[0] = '\0';
    local_e4.sa_data[1] = '\0';
    dVar37 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    dVar42 = (double)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
    dVar41 = (double)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    uVar43 = adjtimex(&local_e4);
    if ((int)uVar43 < 0) {
      perror("adjtimex");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar8 = CONCAT22(local_e4.sa_data._8_2_,local_e4.sa_data._6_2_);
    if (DAT_000240d8 != 0) {
      printf("Total elapsed: %9.2f\nServer stall:  %9.2f\nSlop:          %9.2f\n",
             (int)((ulonglong)uVar43 >> 0x20),SUB84(dVar33,0),(int)((ulonglong)dVar33 >> 0x20));
      printf(
            "Skew:          %9.2f\nFrequency:     %9d\n day   second     elapsed    stall     skew  dispersion  freq\n"
            );
    }
    uVar15 = local_1a4;
    if ((local_170 != 0) &&
       ((((uVar1 == 3 || (uVar22 < 3)) || (uVar23 != 4)) ||
        ((((uVar12 != local_18c || (uVar28 != local_188)) ||
          ((uVar14 == 0 && uVar21 == 0 ||
           ((0x20000 < uVar27 + 0x10000 || (0x20000 < uVar19 + 0x10000)))))) ||
         ((uVar3 & 0xff) == 0)))))) {
      uVar1 = local_1a0 / 0x418937;
      FUN_00012910(local_1a4,0x15180,local_1a0 * 0x7d000091);
      printf("%d %.5d.%.3d  rejected packet: %s\n",uVar15 / 0x15180,extraout_r1_00,uVar1);
      goto LAB_00010f58;
    }
    if (local_180 != 0) {
      local_e4._0_4_ = uVar14 + 0x7c558180;
      local_e4.sa_data._2_4_ = ((uVar5 >> 0xc) + ((uVar5 >> 10) + 0x8000 >> 0x10) * -0x2f7) * 1000;
      iVar16 = clock_settime(0,(timespec *)&local_e4);
      if (iVar16 < 0) {
        perror("clock_settime");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (DAT_000240d8 != 0) {
        printf("set time to %lu.%.9lu\n",local_e4._0_4_,local_e4.sa_data._2_4_);
      }
    }
    dVar38 = (double)VectorSignedToFloat(uVar19,(byte)(in_fpscr >> 0x16) & 3);
    if (local_184 != 0) {
      uVar31 = (undefined4)((ulonglong)in_d0 >> 0x20);
      uVar30 = SUB84(((dVar35 * dVar39 + dVar42 * dVar34) - (dVar37 * dVar39 + dVar41 * dVar34)) *
                     0.5,0);
      in_d0 = (double)CONCAT44(uVar31,uVar30);
      iVar16 = FUN_00011e78(uVar30,uVar31,SUB84(dVar33 + dVar38 * DAT_000115e0,0),local_1a4,iVar8);
      if (DAT_000240d8 == 0 && iVar16 != iVar8) {
        FUN_00011ba4();
      }
    }
    uVar1 = local_1a4;
    uVar15 = local_1a0 / 0x418937;
    FUN_00012910(local_1a4,0x15180,local_1a0 * 0x7d000091);
    printf("%d %.5d.%.3d  %8.1f %8.1f  %8.1f %8.1f %9d\n",uVar1 / 0x15180,extraout_r1,uVar15);
    fflush(stdout);
    local_1e8 = (int)(longlong)(dVar33 - (dVar36 * dVar39 + dVar40 * dVar34));
  }
  else {
    printf("Ooops.  pack_len=%d\n",sVar11);
    fflush(stdout);
  }
  bVar29 = local_174 != 0;
  iVar8 = local_174;
  if (bVar29) {
    iVar8 = local_174 - local_1e8;
  }
  if ((((bVar29 && local_174 != local_1e8) && iVar8 < 0 == (bVar29 && SBORROW4(local_174,local_1e8))
       ) || (local_17c != 0 && local_17c <= local_200)) && (local_180 = 0, local_184 == 0)) {
LAB_00010fe0:
    close(__fd);
    return 0;
  }
  goto LAB_00010f58;
}



/* ===== entry @ 00011a24 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002405c)
            (DAT_00011a58,param_2,&stack0x00000004,DAT_00011a5c,DAT_00011a54,param_1);
  return;
}



/* ===== FUN_00011a60 @ 00011a60 size=32 ===== */

void FUN_00011a60(void)

{
  if (DAT_00011a84 == DAT_00011a80) {
    return;
  }
  if (DAT_00011a88 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011a88)();
  return;
}



/* ===== _FINI_0 @ 00011ac4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011b00;
  if (*DAT_00011b00 != '\0') {
    return;
  }
  FUN_00011a60();
  if (DAT_00011b04 != 0) {
    __deregister_frame_info(DAT_00011b08);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011b0c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011b30 != 0) {
    __register_frame_info(DAT_00011b38,DAT_00011b34);
  }
  if ((DAT_00011abc - DAT_00011ab8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011ac0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011ac0)();
  return;
}



/* ===== FUN_00011b3c @ 00011b3c size=104 ===== */

void FUN_00011b3c(int *param_1,int *param_2)

{
  timespec local_18;
  
  clock_gettime(0,&local_18);
  *param_1 = local_18.tv_sec + -0x7c558180;
  *param_2 = (local_18.tv_nsec / 1000) * 0x10c6 + ((local_18.tv_nsec / 1000) * 0x7bd >> 0xb);
  return;
}



/* ===== FUN_00011ba4 @ 00011ba4 size=68 ===== */

undefined4 FUN_00011ba4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8c [2];
  undefined4 local_84;
  
  local_8c[0] = 2;
  local_84 = param_1;
  iVar1 = adjtimex(local_8c);
  if (-1 < iVar1) {
    return local_84;
  }
  perror("adjtimex");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011be8 @ 00011be8 size=132 ===== */

undefined4 FUN_00011be8(void)

{
  double in_d0;
  double in_d1;
  double dVar1;
  double dVar2;
  
  dVar1 = in_d0 - in_d1 / DAT_00011c70;
  dVar2 = (in_d0 + DAT_00011c80) - in_d1 / DAT_00011c78;
  if (dVar2 < dVar1) {
    dVar1 = dVar2;
  }
  if (DAT_000240d8 != 0) {
    printf("find_shift %f %f -> %f\n");
  }
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return SUB84(dVar2,0);
}



/* ===== FUN_00011c88 @ 00011c88 size=252 ===== */

int FUN_00011c88(int param_1,int param_2,int param_3,int param_4,uint param_5,double *param_6,
                double *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  int local_2c;
  
  iVar5 = param_2 + 1;
  iVar4 = param_1 + 1;
  if (0xf < iVar5) {
    iVar5 = 0;
  }
  if (0xf < iVar4) {
    iVar4 = 0;
  }
  local_2c = 0;
  bVar1 = true;
  while (iVar5 != iVar4) {
    dVar8 = *(double *)(&DAT_00024610 + (iVar5 * 6 + param_3) * 8);
    iVar2 = (&DAT_000245f0)[iVar5 * 0xc];
    dVar6 = (double)VectorUnsignedToFloat
                              (iVar2 - (&DAT_000245f0)[param_2 * 0xc],(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar8 - *(double *)(&DAT_000245f0 + (param_2 * 6 + param_4 + 4) * 2)) / dVar6;
    if ((bVar1) || (in_fpscr = in_fpscr & 0xfffffff, dVar6 < *param_6 != param_5)) {
      iVar3 = (&DAT_000245f0)[param_1 * 0xc];
      *param_6 = dVar6;
      dVar7 = (double)VectorUnsignedToFloat(iVar3 - iVar2,(byte)(in_fpscr >> 0x16) & 3);
      *param_7 = dVar8 + dVar7 * dVar6;
      local_2c = iVar5;
    }
    iVar5 = iVar5 + 1;
    bVar1 = false;
    if (0xf < iVar5) {
      iVar5 = 0;
    }
  }
  return local_2c;
}



/* ===== FUN_00011d84 @ 00011d84 size=244 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011dc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00011d84(double *param_1,double *param_2)

{
  undefined4 extraout_r1;
  double dVar1;
  undefined4 uVar3;
  double dVar2;
  undefined4 uVar4;
  
  dVar1 = *param_1;
  uVar4 = SUB84(*param_2,0);
  if (DAT_000240d8 != 0) {
    printf("loop %f %f\n",param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = *param_1;
    uVar4 = SUB84(*param_2,0);
  }
  dVar1 = -dVar1;
  uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  FUN_00011be8(SUB84(dVar1,0),uVar3,uVar4);
  dVar2 = *param_1;
  FUN_00011be8(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(-*param_2,0));
  if (dVar1 < DAT_000248f0) {
    DAT_000248f0 = dVar1;
  }
  if (dVar2 < DAT_000248f8) {
    DAT_000248f8 = dVar2;
  }
  if (DAT_000240d8 == 0) {
    return;
  }
  printf("constraint left:  %f %f \n",extraout_r1,SUB84(dVar1,0),uVar3);
  printf("constraint right: %f %f \n");
  return;
}



/* ===== FUN_00011e78 @ 00011e78 size=2436 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00011e78(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  double *pdVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  double in_d1;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double in_stack_ffffff68;
  int local_84;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  int iStack_44;
  
  if (DAT_000240d8 != 0) {
    in_stack_ffffff68 = (double)CONCAT44((int)((ulonglong)in_stack_ffffff68 >> 0x20),param_4);
    printf("xontemplate %u %.1f %.1f %d\n",param_3,param_1,param_2);
  }
  uVar10 = DAT_00024900;
  dVar16 = in_d1 - DAT_000240a0;
  iVar4 = DAT_00024900 * 0x30;
  if (DAT_00024904 < 0x10) {
    DAT_00024904 = DAT_00024904 + 1;
  }
  bVar14 = DAT_00024904 != 0x10;
  (&DAT_000245f0)[DAT_00024900 * 0xc] = param_3;
  *(ulonglong *)(&DAT_000245f8 + iVar4) = CONCAT44(param_2,param_1);
  *(int *)(&DAT_00024608 + iVar4) = param_4;
  *(double *)(&DAT_00024600 + iVar4) = dVar16;
  local_84 = param_4;
  if (bVar14) goto LAB_00011efc;
  if (DAT_000240d8 != 0) {
    putchar(10);
    uVar10 = DAT_00024900;
  }
  dVar16 = DAT_00012310;
  dVar17 = 0.0;
  while( true ) {
    iVar4 = uVar10 * 0x30;
    bVar14 = DAT_000240d8 != 0;
    dVar20 = (*(double *)(&DAT_000245f8 + iVar4) - dVar17) + *(double *)(&DAT_00024600 + iVar4);
    dVar18 = (*(double *)(&DAT_000245f8 + iVar4) - dVar17) - *(double *)(&DAT_00024600 + iVar4);
    *(double *)(&DAT_00024618 + iVar4) = dVar20;
    *(double *)(&DAT_00024610 + iVar4) = dVar18;
    if (bVar14) {
      printf("hist %d %d %f %f %f\n",uVar10,(&DAT_000245f0)[uVar10 * 0xc] - param_3,
             &DAT_000245f0 + uVar10 * 0xc,dVar17,dVar18,dVar20);
      in_stack_ffffff68 = dVar18;
    }
    uVar6 = uVar10 - 1;
    if ((int)uVar6 < 0) {
      uVar6 = 0xf;
    }
    if (DAT_00024900 == uVar6) break;
    dVar18 = (double)VectorUnsignedToFloat
                               ((&DAT_000245f0)[uVar10 * 0xc] - (&DAT_000245f0)[uVar6 * 0xc],
                                (byte)(in_fpscr >> 0x16) & 3);
    dVar20 = (double)VectorSignedToFloat(*(int *)(&DAT_00024608 + uVar10 * 0x30) - param_4,
                                         (byte)(in_fpscr >> 0x16) & 3);
    dVar17 = dVar17 + dVar18 * dVar20 * dVar16;
    uVar10 = uVar6;
  }
  uVar10 = uVar6 + 1;
  if (0xf < (int)uVar10) {
    uVar10 = 0;
  }
  bVar14 = true;
  puVar8 = DAT_00012328;
  iVar4 = 1;
  dVar16 = DAT_00012318;
  while( true ) {
    uVar3 = (undefined4)((ulonglong)in_stack_ffffff68 >> 0x20);
    uVar2 = FUN_00011c88(uVar6,uVar10,1,1,0,puVar8 + -1,puVar8);
    in_stack_ffffff68 = (double)CONCAT44(uVar3,&uStack_68);
    iVar13 = iVar4 + 1;
    FUN_00011c88(uVar6,uVar10,0);
    dVar18 = (double)puVar8[-1];
    dVar17 = (double)CONCAT44(uStack_6c,local_70);
    if (((dVar17 < dVar18) && (dVar16 < dVar17)) &&
       ((bVar14 || (dVar17 < (double)CONCAT44(uStack_5c,local_60))))) {
      bVar14 = false;
      local_60 = local_70;
      uStack_5c = uStack_6c;
      local_58 = uStack_68;
      iStack_54 = iStack_64;
    }
    dVar16 = dVar18;
    if (DAT_000240d8 != 0) {
      printf("maxseg[%d] = %f *x+ %f\n",iVar4,SUB84(dVar18,0),(int)((ulonglong)dVar18 >> 0x20),
             *puVar8,in_stack_ffffff68);
      dVar16 = (double)puVar8[-1];
      uVar6 = DAT_00024900;
    }
    if (uVar2 == uVar6) break;
    puVar8 = puVar8 + 2;
    uVar10 = uVar2;
    iVar4 = iVar13;
  }
  bVar15 = (bool)(bVar14 ^ 1);
  if (DAT_000240d8 == 0) {
    bVar15 = false;
  }
  if (bVar15) {
    printf("mincross %f *x+ %f\n");
    uVar6 = DAT_00024900;
  }
  uVar10 = uVar6 + 1;
  bVar15 = true;
  if (0xf < (int)uVar10) {
    uVar10 = 0;
  }
  puVar8 = DAT_0001232c;
  iVar11 = 1;
  dVar16 = DAT_00012320;
  while( true ) {
    uVar2 = FUN_00011c88(uVar6,uVar10,0,0,1,puVar8 + -1,puVar8);
    iVar12 = iVar11 + 1;
    FUN_00011c88(uVar6,uVar10,1,0,0,&local_70,&uStack_68);
    dVar18 = (double)puVar8[-1];
    dVar17 = (double)CONCAT44(uStack_6c,local_70);
    if (((dVar18 < dVar17) && (dVar17 < dVar16)) &&
       ((bVar15 || (dVar17 < (double)CONCAT44(uStack_4c,local_50))))) {
      bVar15 = false;
      local_50 = local_70;
      uStack_4c = uStack_6c;
      local_48 = uStack_68;
      iStack_44 = iStack_64;
    }
    dVar16 = dVar18;
    if (DAT_000240d8 != 0) {
      printf("minseg[%d] = %f *x+ %f\n",iVar11,SUB84(dVar18,0),(int)((ulonglong)dVar18 >> 0x20),
             *puVar8);
      dVar16 = (double)puVar8[-1];
      uVar6 = DAT_00024900;
    }
    if (uVar2 == uVar6) break;
    puVar8 = puVar8 + 2;
    uVar10 = uVar2;
    iVar11 = iVar12;
  }
  if (!bVar15) {
    if (DAT_000240d8 != 0) {
      printf("maxcross %f *x+ %f\n");
    }
    if (!bVar14) {
      iVar7 = 1;
      DAT_000248f0._0_4_ = 0;
      DAT_000248f0._4_4_ = 0x40340000;
      DAT_000248f8._0_4_ = 0;
      DAT_000248f8._4_4_ = 0x40340000;
      FUN_00011d84(&local_60,&local_58);
      pdVar9 = DAT_00012330;
      pdVar5 = DAT_00012330;
      do {
        pdVar5 = pdVar5 + 2;
        if ((double)CONCAT44(uStack_5c,local_60) < *pdVar5) {
          *(undefined4 *)(&DAT_000248f8 + iVar7 * 2) = local_60;
          *(undefined4 *)((int)&DAT_000248f8 + iVar7 * 0x10 + 4) = uStack_5c;
          (&DAT_00024900)[iVar7 * 4] = local_58;
          (&DAT_00024904)[iVar7 * 4] = iStack_54;
          if ((double)CONCAT44(uStack_4c,local_50) < *(double *)(&DAT_00024908 + iVar7 * 4))
          goto LAB_00012434;
          pdVar9 = pdVar9 + iVar7 * 2;
          iVar13 = iVar7;
          goto LAB_000123c8;
        }
        iVar1 = iVar7;
      } while ((*pdVar5 <= (double)CONCAT44(uStack_4c,local_50)) &&
              (iVar7 = iVar7 + 1, iVar1 = iVar13, iVar7 != iVar13));
      iVar7 = iVar1;
      if (DAT_000240d8 == 0) {
        bVar14 = true;
      }
      else {
        puts("found maxseg vs. save_min inconsistency");
        bVar14 = true;
      }
      goto LAB_00012434;
    }
  }
  goto LAB_000122d8;
  while (pdVar5 = pdVar9 + 2, pdVar9 = pdVar9 + 2, iVar13 = iVar7,
        *pdVar5 <= (double)CONCAT44(uStack_4c,local_50)) {
LAB_000123c8:
    FUN_00011d84(pdVar9,pdVar9 + 1);
    iVar7 = iVar13 + 1;
    if (iVar4 <= iVar13) break;
  }
LAB_00012434:
  iVar4 = 1;
  (&DAT_00024908)[iVar7 * 4] = local_50;
  (&DAT_0002490c)[iVar7 * 4] = uStack_4c;
  (&DAT_00024910)[iVar7 * 4] = local_48;
  (&DAT_00024914)[iVar7 * 4] = iStack_44;
  FUN_00011d84(&local_50,&local_48);
  pdVar9 = DAT_00012334;
  pdVar5 = DAT_00012334;
  do {
    pdVar5 = pdVar5 + 2;
    if (*pdVar5 < (double)CONCAT44(uStack_4c,local_50)) {
      iVar13 = DAT_00012338 + iVar4 * 0x10;
      *(undefined4 *)DAT_00012334 = local_50;
      *(undefined4 *)((int)pdVar9 + 4) = uStack_4c;
      *(uint *)(pdVar9 + 1) = local_48;
      *(int *)((int)pdVar9 + 0xc) = iStack_44;
      if (*(double *)(iVar13 + -8) < (double)CONCAT44(uStack_5c,local_60)) goto LAB_000124e0;
      pdVar9 = pdVar9 + iVar4 * 2;
      iVar13 = iVar4;
      goto LAB_000124a8;
    }
    iVar13 = iVar4;
  } while (((double)CONCAT44(uStack_5c,local_60) <= *pdVar5) &&
          (iVar4 = iVar4 + 1, iVar13 = iVar12, iVar4 != iVar12));
  if (DAT_000240d8 == 0) {
    (&DAT_00024a18)[iVar13 * 4] = local_50;
    (&DAT_00024a1c)[iVar13 * 4] = uStack_4c;
    (&DAT_00024a20)[iVar13 * 4] = local_48;
    (&DAT_00024a24)[iVar13 * 4] = iStack_44;
  }
  else {
    puts("found minseg vs. save_max inconsistency");
    bVar14 = DAT_000240d8 != 0;
    (&DAT_00024a18)[iVar13 * 4] = local_50;
    (&DAT_00024a1c)[iVar13 * 4] = uStack_4c;
    (&DAT_00024a20)[iVar13 * 4] = local_48;
    (&DAT_00024a24)[iVar13 * 4] = iStack_44;
    if (bVar14) {
      FUN_00011d84(&local_60,&local_58);
    }
  }
  goto LAB_000122d8;
  while (pdVar5 = pdVar9 + 2, pdVar9 = pdVar9 + 2, iVar13 = iVar4,
        (double)CONCAT44(uStack_5c,local_60) <= *pdVar5) {
LAB_000124a8:
    FUN_00011d84(pdVar9,pdVar9 + 1);
    iVar4 = iVar13 + 1;
    if (iVar11 <= iVar13) break;
  }
LAB_000124e0:
  bVar15 = DAT_000240d8 != 0;
  (&DAT_00024a18)[iVar4 * 4] = local_50;
  (&DAT_00024a1c)[iVar4 * 4] = uStack_4c;
  (&DAT_00024a20)[iVar4 * 4] = local_48;
  (&DAT_00024a24)[iVar4 * 4] = iStack_44;
  uVar3 = uStack_4c;
  if (bVar15) {
    FUN_00011d84(&local_60,&local_58);
    uVar3 = extraout_r1;
  }
  if (!bVar14) {
    dVar16 = (double)CONCAT44(DAT_000248f8._4_4_,(undefined4)DAT_000248f8);
    if ((double)CONCAT44(DAT_000248f0._4_4_,(undefined4)DAT_000248f0) == 0.0) {
      dVar17 = DAT_00012830;
      if (dVar16 != 0.0) {
        dVar17 = -dVar16;
      }
    }
    else {
      dVar17 = (double)CONCAT44(DAT_000248f0._4_4_,(undefined4)DAT_000248f0);
      if (dVar16 != 0.0) {
        dVar17 = 0.0;
      }
    }
    if (DAT_000240d8 != 0) {
      printf("find_df() = %e\n",uVar3,SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20));
    }
    dVar18 = (double)CONCAT44(iStack_44,local_48);
    dVar16 = (double)CONCAT44(iStack_54,local_58);
    dVar19 = (dVar18 + dVar16) * 0.5;
    dVar22 = dVar17 + ((double)CONCAT44(uStack_4c,local_50) + (double)CONCAT44(uStack_5c,local_60))
                      * 0.5;
    dVar21 = -dVar19 / DAT_00012838 - dVar22;
    dVar22 = -dVar19 / DAT_00012840 - dVar22;
    dVar20 = 0.0;
    if (dVar19 < 0.0) {
      if (0.0 < dVar22) {
        dVar20 = dVar22;
      }
      if (dVar21 < 0.0) {
        dVar20 = dVar21;
      }
    }
    if (0.0 <= dVar19) {
      if (0.0 < dVar21) {
        dVar20 = dVar21;
      }
      if (dVar22 < 0.0) {
        dVar20 = dVar22;
      }
    }
    if ((dVar18 < DAT_00012848) || (DAT_00012850 < dVar16)) {
      dVar16 = 0.0;
LAB_00012724:
      iVar4 = (int)(longlong)((dVar17 + dVar16) * DAT_00012860 + 0.5);
      if (DAT_000240d8 != 0) {
        printf("delta_f %f  delta_freq %d  bsn %d\n");
      }
    }
    else {
      dVar16 = DAT_00012850 /
               ((dVar18 - dVar16) + DAT_00012850 +
               ((double)CONCAT44(uStack_4c,local_50) - (double)CONCAT44(uStack_5c,local_60)) *
               DAT_00012858);
      if (DAT_000240d8 != 0) {
        printf("find_df_center %f %f\n");
        dVar16 = dVar16 * dVar20;
        goto LAB_00012724;
      }
      iVar4 = (int)(longlong)((dVar17 + dVar16 * dVar20) * DAT_00012860 + 0.5);
    }
    param_4 = param_4 - iVar4;
    printf("# box [( %.3f , %.1f ) ");
    printf(" ( %.3f , %.1f )] ");
    printf(" delta_f %.3f  computed_freq %d\n");
    if (0xf9ffff < param_4) {
      param_4 = 0xfa0000;
    }
    uVar10 = DAT_00024900;
    local_84 = -0xfa0000;
    if (-0xfa0001 < param_4) {
      local_84 = param_4;
    }
    goto LAB_00011efc;
  }
LAB_000122d8:
  puts("# inconsistent");
  uVar10 = DAT_00024900;
  local_84 = param_4;
LAB_00011efc:
  uVar6 = -(uVar10 + 1);
  DAT_00024900 = uVar10 + 1 & 0xf;
  if (-1 < (int)uVar6) {
    DAT_00024900 = -(uVar6 & 0xf);
  }
  return local_84;
}



/* ===== FUN_00012868 @ 00012868 size=168 ===== */

ulonglong FUN_00012868(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_00012910 @ 00012910 size=48 ===== */

void FUN_00012910(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00012868();
    return;
  }
  raise(8);
  return;
}



/* ===== _DT_FINI @ 00012940 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::adjtimex @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void adjtimex(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::herror @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void herror(char *__str)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

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



/* ===== <EXTERNAL>::gethostbyname @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_settime @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_settime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// librkaudio.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000148d4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== SRCFilter @ 000148f8 size=12 ===== */

void SRCFilter(void)

{
  (*(code *)PTR_SRCFilter_0004800c)();
  return;
}



/* ===== xmp3_IMDCT @ 00014904 size=12 ===== */

void xmp3_IMDCT(void)

{
  (*(code *)PTR_xmp3_IMDCT_00048010)();
  return;
}



/* ===== MP3FindSyncWord @ 00014910 size=12 ===== */

void MP3FindSyncWord(void)

{
  (*(code *)PTR_MP3FindSyncWord_00048014)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001491c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00048018)(__dest);
  return pcVar1;
}



/* ===== PolyphaseStereoHalfBuffer @ 00014928 size=12 ===== */

void PolyphaseStereoHalfBuffer(void)

{
  (*(code *)PTR_PolyphaseStereoHalfBuffer_0004801c)();
  return;
}



/* ===== AudioDecMP3Open @ 00014934 size=12 ===== */

void AudioDecMP3Open(void)

{
  (*(code *)PTR_AudioDecMP3Open_00048020)();
  return;
}



/* ===== xmp3_GetBits @ 00014940 size=12 ===== */

void xmp3_GetBits(void)

{
  (*(code *)PTR_xmp3_GetBits_00048024)();
  return;
}



/* ===== <EXTERNAL>::printf @ 0001494c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00048028)(__format);
  return iVar1;
}



/* ===== audio_queue_destroy @ 00014958 size=12 ===== */

void audio_queue_destroy(void)

{
  (*(code *)PTR_audio_queue_destroy_0004802c)();
  return;
}



/* ===== audio_stream_reset @ 00014964 size=12 ===== */

void audio_stream_reset(void)

{
  (*(code *)PTR_audio_stream_reset_00048030)();
  return;
}



/* ===== Mp3EncodeVariableInit @ 00014970 size=12 ===== */

void Mp3EncodeVariableInit(void)

{
  (*(code *)PTR_Mp3EncodeVariableInit_00048034)();
  return;
}



/* ===== audio_thread_exit @ 0001497c size=12 ===== */

void audio_thread_exit(void)

{
  (*(code *)PTR_audio_thread_exit_00048038)();
  return;
}



/* ===== xmp3_MidSideProc @ 00014988 size=12 ===== */

void xmp3_MidSideProc(void)

{
  (*(code *)PTR_xmp3_MidSideProc_0004803c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00014994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00048040)(__newthread);
  return iVar1;
}



/* ===== SRCFilterStereo @ 000149a0 size=12 ===== */

void SRCFilterStereo(void)

{
  (*(code *)PTR_SRCFilterStereo_00048044)();
  return;
}



/* ===== audio_stream_read @ 000149ac size=12 ===== */

void audio_stream_read(void)

{
  (*(code *)PTR_audio_stream_read_00048048)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000149b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004804c)(__dest);
  return pvVar1;
}



/* ===== audio_mutex_create @ 000149c4 size=12 ===== */

void audio_mutex_create(void)

{
  (*(code *)PTR_audio_mutex_create_00048050)();
  return;
}



/* ===== new_choose_table @ 000149d0 size=12 ===== */

void new_choose_table(void)

{
  (*(code *)PTR_new_choose_table_00048054)();
  return;
}



/* ===== wav_header_complete @ 000149dc size=12 ===== */

void wav_header_complete(void)

{
  (*(code *)PTR_wav_header_complete_00048058)();
  return;
}



/* ===== MP3InitDecoder @ 000149e8 size=12 ===== */

void MP3InitDecoder(void)

{
  (*(code *)PTR_MP3InitDecoder_0004805c)();
  return;
}



/* ===== check_native_audio_type @ 00014a00 size=12 ===== */

void check_native_audio_type(void)

{
  (*(code *)PTR_check_native_audio_type_00048064)();
  return;
}



/* ===== audio_free @ 00014a0c size=12 ===== */

void audio_free(void)

{
  (*(code *)PTR_audio_free_00048068)();
  return;
}



/* ===== mulr @ 00014a18 size=12 ===== */

void mulr(void)

{
  (*(code *)PTR_mulr_0004806c)();
  return;
}



/* ===== Mp3EncodeDeinit @ 00014a24 size=12 ===== */

void Mp3EncodeDeinit(void)

{
  (*(code *)PTR_Mp3EncodeDeinit_00048070)();
  return;
}



/* ===== count_bit @ 00014a30 size=12 ===== */

void count_bit(void)

{
  (*(code *)PTR_count_bit_00048074)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00014a3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00048078)(__dest);
  return pvVar1;
}



/* ===== xmp3_IntensityProcMPEG2 @ 00014a48 size=12 ===== */

void xmp3_IntensityProcMPEG2(void)

{
  (*(code *)PTR_xmp3_IntensityProcMPEG2_0004807c)();
  return;
}



/* ===== audio_fseek @ 00014a54 size=12 ===== */

void audio_fseek(void)

{
  (*(code *)PTR_audio_fseek_00048080)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00014a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00048088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00014a78 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004808c)();
  return;
}



/* ===== recorder_stop @ 00014a84 size=12 ===== */

void recorder_stop(void)

{
  (*(code *)PTR_recorder_stop_00048090)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00014a90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00048094)(__size);
  return pvVar1;
}



/* ===== FDCT32HalfBuffer @ 00014a9c size=12 ===== */

void FDCT32HalfBuffer(void)

{
  (*(code *)PTR_FDCT32HalfBuffer_00048098)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 00014aa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_0004809c)(__sem);
  return iVar1;
}



/* ===== audio_sleep @ 00014ab4 size=12 ===== */

void audio_sleep(void)

{
  (*(code *)PTR_audio_sleep_000480a0)();
  return;
}



/* ===== <EXTERNAL>::sem_post @ 00014ac0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_000480a4)(__sem);
  return iVar1;
}



/* ===== audio_semaphore_create @ 00014acc size=12 ===== */

void audio_semaphore_create(void)

{
  (*(code *)PTR_audio_semaphore_create_000480a8)();
  return;
}



/* ===== L3_window_filter_subband @ 00014ad8 size=12 ===== */

void L3_window_filter_subband(void)

{
  (*(code *)PTR_L3_window_filter_subband_000480ac)();
  return;
}



/* ===== player_preprocess_seek @ 00014ae4 size=12 ===== */

void player_preprocess_seek(void)

{
  (*(code *)PTR_player_preprocess_seek_000480b0)();
  return;
}



/* ===== audio_semaphore_take @ 00014af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_take(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_audio_semaphore_take_000480b4)(__sem);
  return iVar1;
}



/* ===== xmp3_UnpackFrameHeader @ 00014afc size=12 ===== */

void xmp3_UnpackFrameHeader(void)

{
  (*(code *)PTR_xmp3_UnpackFrameHeader_000480b8)();
  return;
}



/* ===== audio_fwrite @ 00014b08 size=12 ===== */

void audio_fwrite(void)

{
  (*(code *)PTR_audio_fwrite_000480bc)();
  return;
}



/* ===== AudioDecMP3Process @ 00014b14 size=12 ===== */

void AudioDecMP3Process(void)

{
  (*(code *)PTR_AudioDecMP3Process_000480c0)();
  return;
}



/* ===== player_audio_resample_deinit @ 00014b20 size=12 ===== */

void player_audio_resample_deinit(void)

{
  (*(code *)PTR_player_audio_resample_deinit_000480c4)();
  return;
}



/* ===== audio_stream_create @ 00014b2c size=12 ===== */

void audio_stream_create(void)

{
  (*(code *)PTR_audio_stream_create_000480c8)();
  return;
}



/* ===== audio_stream_write @ 00014b38 size=12 ===== */

void audio_stream_write(void)

{
  (*(code *)PTR_audio_stream_write_000480cc)();
  return;
}



/* ===== audio_fstat @ 00014b44 size=12 ===== */

void audio_fstat(void)

{
  (*(code *)PTR_audio_fstat_000480d0)();
  return;
}



/* ===== bigv_tab_select @ 00014b50 size=12 ===== */

void bigv_tab_select(void)

{
  (*(code *)PTR_bigv_tab_select_000480d4)();
  return;
}



/* ===== player_audio_resample_init @ 00014b5c size=12 ===== */

void player_audio_resample_init(void)

{
  (*(code *)PTR_player_audio_resample_init_000480d8)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00014b68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_000480dc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00014b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_000480e0)(__nmemb);
  return pvVar1;
}



/* ===== player_get_file_length @ 00014b80 size=12 ===== */

void player_get_file_length(void)

{
  (*(code *)PTR_player_get_file_length_000480e4)();
  return;
}



/* ===== AudioMp3EncodeOpen @ 00014b8c size=12 ===== */

void AudioMp3EncodeOpen(void)

{
  (*(code *)PTR_AudioMp3EncodeOpen_000480e8)();
  return;
}



/* ===== audio_semaphore_try_take @ 00014b98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_try_take(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_audio_semaphore_try_take_000480ec)(__sem);
  return iVar1;
}



/* ===== audio_semaphore_give @ 00014ba4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_give(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_audio_semaphore_give_000480f0)(__sem);
  return iVar1;
}



/* ===== xmp3_SetBitstreamPointer @ 00014bb0 size=12 ===== */

void xmp3_SetBitstreamPointer(void)

{
  (*(code *)PTR_xmp3_SetBitstreamPointer_000480f4)();
  return;
}



/* ===== xmp3_UnpackSideInfo @ 00014bbc size=12 ===== */

void xmp3_UnpackSideInfo(void)

{
  (*(code *)PTR_xmp3_UnpackSideInfo_000480f8)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00014bc8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000480fc)();
  return;
}



/* ===== xmp3_DecodeHuffman @ 00014bd4 size=12 ===== */

void xmp3_DecodeHuffman(void)

{
  (*(code *)PTR_xmp3_DecodeHuffman_00048100)();
  return;
}



/* ===== audio_queue_receive @ 00014be0 size=12 ===== */

void audio_queue_receive(void)

{
  (*(code *)PTR_audio_queue_receive_00048104)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00014bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00048108)(__stream);
  return iVar1;
}



/* ===== player_get_cur_time @ 00014c10 size=12 ===== */

void player_get_cur_time(void)

{
  (*(code *)PTR_player_get_cur_time_00048114)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00014c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00048118)(__sem);
  return iVar1;
}



/* ===== AudioMp3EncodeClose @ 00014c28 size=12 ===== */

void AudioMp3EncodeClose(void)

{
  (*(code *)PTR_AudioMp3EncodeClose_0004811c)();
  return;
}



/* ===== audio_stream_stop @ 00014c34 size=12 ===== */

void audio_stream_stop(void)

{
  (*(code *)PTR_audio_stream_stop_00048120)();
  return;
}



/* ===== calc_runlen @ 00014c40 size=12 ===== */

void calc_runlen(void)

{
  (*(code *)PTR_calc_runlen_00048124)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00014c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00048128)(__s1);
  return iVar1;
}



/* ===== MP3FreeDecoder @ 00014c58 size=12 ===== */

void MP3FreeDecoder(void)

{
  (*(code *)PTR_MP3FreeDecoder_0004812c)();
  return;
}



/* ===== <EXTERNAL>::strcasecmp @ 00014c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00048130)(__s1);
  return iVar1;
}



/* ===== check_ID3V2_tag @ 00014c70 size=12 ===== */

void check_ID3V2_tag(void)

{
  (*(code *)PTR_check_ID3V2_tag_00048134)();
  return;
}



/* ===== play_mp3_destroy_impl @ 00014c7c size=12 ===== */

void play_mp3_destroy_impl(void)

{
  (*(code *)PTR_play_mp3_destroy_impl_00048138)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00014c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004813c)(__ptr);
  return pvVar1;
}



/* ===== audio_thread_create @ 00014c94 size=12 ===== */

void audio_thread_create(void)

{
  (*(code *)PTR_audio_thread_create_00048140)();
  return;
}



/* ===== L3_format_bitstream @ 00014ca0 size=12 ===== */

void L3_format_bitstream(void)

{
  (*(code *)PTR_L3_format_bitstream_00048144)();
  return;
}



/* ===== <EXTERNAL>::sem_trywait @ 00014cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_trywait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_trywait_0004814c)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00014cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00048150)(__ptr);
  return sVar1;
}



/* ===== mul @ 00014cd0 size=12 ===== */

void mul(void)

{
  (*(code *)PTR_mul_00048154)();
  return;
}



/* ===== audio_stream_start @ 00014cdc size=12 ===== */

void audio_stream_start(void)

{
  (*(code *)PTR_audio_stream_start_00048158)();
  return;
}



/* ===== close_bit_stream @ 00014ce8 size=12 ===== */

void close_bit_stream(void)

{
  (*(code *)PTR_close_bit_stream_0004815c)();
  return;
}



/* ===== xmp3_AllocateBuffers @ 00014cf4 size=12 ===== */

void xmp3_AllocateBuffers(void)

{
  (*(code *)PTR_xmp3_AllocateBuffers_00048160)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00014d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00048164)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00014d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00048168)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00014d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0004816c)(__stream);
  return lVar1;
}



/* ===== abs_and_sign @ 00014d24 size=12 ===== */

void abs_and_sign(void)

{
  (*(code *)PTR_abs_and_sign_00048170)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00014d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00048174)(__stream);
  return iVar1;
}



/* ===== xmp3_IntensityProcMPEG1 @ 00014d3c size=12 ===== */

void xmp3_IntensityProcMPEG1(void)

{
  (*(code *)PTR_xmp3_IntensityProcMPEG1_00048178)();
  return;
}



/* ===== count1_bitcount @ 00014d48 size=12 ===== */

void count1_bitcount(void)

{
  (*(code *)PTR_count1_bitcount_0004817c)();
  return;
}



/* ===== L3_mdct_sub @ 00014d54 size=12 ===== */

void L3_mdct_sub(void)

{
  (*(code *)PTR_L3_mdct_sub_00048180)();
  return;
}



/* ===== bigv_bitcount @ 00014d60 size=12 ===== */

void bigv_bitcount(void)

{
  (*(code *)PTR_bigv_bitcount_00048184)();
  return;
}



/* ===== audio_mutex_destroy @ 00014d6c size=12 ===== */

void audio_mutex_destroy(void)

{
  (*(code *)PTR_audio_mutex_destroy_00048188)();
  return;
}



/* ===== player_stop @ 00014d78 size=12 ===== */

void player_stop(void)

{
  (*(code *)PTR_player_stop_0004818c)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00014d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00048190)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00014d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00048194)(__mutex);
  return iVar1;
}



/* ===== audio_fopen @ 00014d9c size=12 ===== */

void audio_fopen(void)

{
  (*(code *)PTR_audio_fopen_00048198)();
  return;
}



/* ===== recorder_register_encoder @ 00014da8 size=12 ===== */

void recorder_register_encoder(void)

{
  (*(code *)PTR_recorder_register_encoder_0004819c)();
  return;
}



/* ===== audio_malloc @ 00014db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_audio_malloc_000481a0)(__size);
  return pvVar1;
}



/* ===== xmp3_Subband @ 00014dc0 size=12 ===== */

void xmp3_Subband(void)

{
  (*(code *)PTR_xmp3_Subband_000481a4)();
  return;
}



/* ===== AudioDecMP3Close @ 00014dcc size=12 ===== */

void AudioDecMP3Close(void)

{
  (*(code *)PTR_AudioDecMP3Close_000481a8)();
  return;
}



/* ===== putbits @ 00014dd8 size=12 ===== */

void putbits(void)

{
  (*(code *)PTR_putbits_000481ac)();
  return;
}



/* ===== audio_queue_create @ 00014de4 size=12 ===== */

void audio_queue_create(void)

{
  (*(code *)PTR_audio_queue_create_000481b0)();
  return;
}



/* ===== audio_calloc @ 00014df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_audio_calloc_000481b4)(__nmemb);
  return pvVar1;
}



/* ===== wav_header_init @ 00014dfc size=12 ===== */

void wav_header_init(void)

{
  (*(code *)PTR_wav_header_init_000481b8)();
  return;
}



/* ===== xmp3_CheckPadBit @ 00014e08 size=12 ===== */

void xmp3_CheckPadBit(void)

{
  (*(code *)PTR_xmp3_CheckPadBit_000481bc)();
  return;
}



/* ===== http_preprocessor_destroy_impl @ 00014e14 size=12 ===== */

void http_preprocessor_destroy_impl(void)

{
  (*(code *)PTR_http_preprocessor_destroy_impl_000481c0)();
  return;
}



/* ===== muls @ 00014e20 size=12 ===== */

void muls(void)

{
  (*(code *)PTR_muls_000481c4)();
  return;
}



/* ===== L3_iteration_loop @ 00014e2c size=12 ===== */

void L3_iteration_loop(void)

{
  (*(code *)PTR_L3_iteration_loop_000481c8)();
  return;
}



/* ===== quantize @ 00014e38 size=12 ===== */

void quantize(void)

{
  (*(code *)PTR_quantize_000481cc)();
  return;
}



/* ===== MP3GetLastFrameInfo @ 00014e44 size=12 ===== */

void MP3GetLastFrameInfo(void)

{
  (*(code *)PTR_MP3GetLastFrameInfo_000481d0)();
  return;
}



/* ===== xmp3_Dequantize @ 00014e50 size=12 ===== */

void xmp3_Dequantize(void)

{
  (*(code *)PTR_xmp3_Dequantize_000481d4)();
  return;
}



/* ===== audio_queue_send @ 00014e5c size=12 ===== */

void audio_queue_send(void)

{
  (*(code *)PTR_audio_queue_send_000481d8)();
  return;
}



/* ===== <EXTERNAL>::stat @ 00014e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_000481dc)(__file);
  return iVar1;
}



/* ===== PolyphaseMonoHalfBuffer @ 00014e74 size=12 ===== */

void PolyphaseMonoHalfBuffer(void)

{
  (*(code *)PTR_PolyphaseMonoHalfBuffer_000481e0)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00014e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000481e4)(__ptr);
  return sVar1;
}



/* ===== ix_max @ 00014e8c size=12 ===== */

void ix_max(void)

{
  (*(code *)PTR_ix_max_000481e8)();
  return;
}



/* ===== AudioMp3Encode @ 00014e98 size=12 ===== */

void AudioMp3Encode(void)

{
  (*(code *)PTR_AudioMp3Encode_000481ec)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00014ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000481f0)(__mutex);
  return iVar1;
}



/* ===== player_register_decoder @ 00014eb0 size=12 ===== */

void player_register_decoder(void)

{
  (*(code *)PTR_player_register_decoder_000481f4)();
  return;
}



/* ===== MP3Decode @ 00014ebc size=12 ===== */

void MP3Decode(void)

{
  (*(code *)PTR_MP3Decode_000481f8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00014ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000481fc)(__mutex);
  return iVar1;
}



/* ===== decoder_input @ 00014ed4 size=12 ===== */

void decoder_input(void)

{
  (*(code *)PTR_decoder_input_00048200)();
  return;
}



/* ===== audio_stream_destroy @ 00014ee0 size=12 ===== */

void audio_stream_destroy(void)

{
  (*(code *)PTR_audio_stream_destroy_00048204)();
  return;
}



/* ===== audio_mutex_unlock @ 00014eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_audio_mutex_unlock_00048208)(__mutex);
  return iVar1;
}



/* ===== audio_stream_resume @ 00014ef8 size=12 ===== */

void audio_stream_resume(void)

{
  (*(code *)PTR_audio_stream_resume_0004820c)();
  return;
}



/* ===== audio_mutex_lock @ 00014f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_audio_mutex_lock_00048210)(__mutex);
  return iVar1;
}



/* ===== subdivide @ 00014f10 size=12 ===== */

void subdivide(void)

{
  (*(code *)PTR_subdivide_00048214)();
  return;
}



/* ===== xmp3_CalcBitsUsed @ 00014f1c size=12 ===== */

void xmp3_CalcBitsUsed(void)

{
  (*(code *)PTR_xmp3_CalcBitsUsed_00048218)();
  return;
}



/* ===== player_audio_resample @ 00014f28 size=12 ===== */

void player_audio_resample(void)

{
  (*(code *)PTR_player_audio_resample_0004821c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00014f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00048220)(__mutex);
  return iVar1;
}



/* ===== audio_cache_ops @ 00014f40 size=12 ===== */

void audio_cache_ops(void)

{
  (*(code *)PTR_audio_cache_ops_00048224)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00014f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00048228)(__s);
  return sVar1;
}



/* ===== player_set_total_time @ 00014f58 size=12 ===== */

void player_set_total_time(void)

{
  (*(code *)PTR_player_set_total_time_0004822c)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00014f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00048234)(__s);
  return pcVar1;
}



/* ===== xmp3_UnpackScaleFactors @ 00014f7c size=12 ===== */

void xmp3_UnpackScaleFactors(void)

{
  (*(code *)PTR_xmp3_UnpackScaleFactors_00048238)();
  return;
}



/* ===== xmp3_DequantChannel @ 00014f88 size=12 ===== */

void xmp3_DequantChannel(void)

{
  (*(code *)PTR_xmp3_DequantChannel_0004823c)();
  return;
}



/* ===== audio_stream_finish @ 00014f94 size=12 ===== */

void audio_stream_finish(void)

{
  (*(code *)PTR_audio_stream_finish_00048240)();
  return;
}



/* ===== SRCInit @ 00014fa0 size=12 ===== */

void SRCInit(void)

{
  (*(code *)PTR_SRCInit_00048244)();
  return;
}



/* ===== open_bit_stream @ 00014fac size=12 ===== */

void open_bit_stream(void)

{
  (*(code *)PTR_open_bit_stream_00048248)();
  return;
}



/* ===== audio_queue_is_empty @ 00014fb8 size=12 ===== */

void audio_queue_is_empty(void)

{
  (*(code *)PTR_audio_queue_is_empty_0004824c)();
  return;
}



/* ===== audio_fsync @ 00014fd0 size=12 ===== */

void audio_fsync(void)

{
  (*(code *)PTR_audio_fsync_00048254)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00014fdc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00048258)();
  return;
}



/* ===== audio_semaphore_destroy @ 00014fe8 size=12 ===== */

void audio_semaphore_destroy(void)

{
  (*(code *)PTR_audio_semaphore_destroy_0004825c)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00014ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00048260)(__sig);
  return iVar1;
}



/* ===== beTol @ 00015000 size=12 ===== */

void beTol(void)

{
  (*(code *)PTR_beTol_00048264)();
  return;
}



/* ===== <EXTERNAL>::free @ 0001500c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00048268)(__ptr);
  return;
}



/* ===== entry @ 00015018 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00015064 + 0x15030 == DAT_00015060 + 0x15028) {
    return;
  }
  pcVar1 = *(code **)(DAT_00015068 + 0x15038 + DAT_0001506c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000150d4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00015148 + 0x150f0;
  if (*(char *)(DAT_00015144 + 0x150e4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001514c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00015150 + 0x15110));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00015154) != 0) {
    __deregister_frame_info(DAT_00015158 + 0x15130);
  }
  *(undefined1 *)(DAT_0001515c + 0x15140) = 1;
  return;
}



/* ===== _INIT_0 @ 00015160 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00015198 + 0x15170 + DAT_0001519c) != 0) {
    __register_frame_info(DAT_000151a4 + 0x15190,DAT_000151a0 + 0x1518c);
  }
  if (((DAT_000150c8 + 0x15088) - (DAT_000150c4 + 0x15080) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000150cc + 0x15090 + DAT_000150d0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== file_writer_init_impl @ 000151a8 size=204 ===== */

undefined4 file_writer_init_impl(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2 + 3;
  *puVar4 = 0;
  param_2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[7] = 0;
  param_2[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = check_native_audio_type(*param_2,puVar4);
  if (iVar1 == 0) {
    iVar2 = audio_fopen(*param_2,DAT_00015274 + 0x151f0);
    iVar1 = DAT_00015278;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      printf((char *)(DAT_00015284 + 0x15270),DAT_00015280 + 0x1526c,0x15,param_2[1],*param_2);
    }
    else {
      uVar3 = *param_2;
      param_2[2] = 0x1000;
      *(int *)(param_1 + 0x10) = iVar2;
      iVar2 = DAT_0001527c;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      printf((char *)(iVar2 + 0x1522c),iVar1 + 0x1521c,0x1e,param_2[1],uVar3,puVar4);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== file_writer_write_impl @ 00015288 size=164 ===== */

int file_writer_write_impl(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    audio_fseek(uVar3,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = audio_fwrite(param_2,1,param_3,uVar3);
  if (iVar1 == param_3) {
    uVar2 = param_3 + *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = uVar2;
    if (uVar2 % 0x19000 == 0) {
      audio_fsync(uVar3,uVar2 * 0x51eb851f);
      return iVar1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== file_writer_destroy_impl @ 0001532c size=28 ===== */

void file_writer_destroy_impl(int param_1)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_audio_fclose_00048148)(*(undefined4 *)(param_1 + 0x10));
  return;
}



/* ===== record_pcm_init @ 0001533c size=88 ===== */

undefined4 record_pcm_init(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = audio_calloc(1,0x414);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0x404) = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar1 + 0x40c) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(puVar1 + 0x410) = uVar2;
    *(undefined1 **)(param_1 + 0x18) = puVar1;
    return 0;
  }
  return 0xffffffff;
}



/* ===== record_pcm_process @ 00015394 size=176 ===== */

undefined4 record_pcm_process(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  while( true ) {
    iVar1 = (**(code **)(iVar2 + 0x404))(*(undefined4 *)(iVar2 + 0x410),iVar2 + 1,0x400);
    if (iVar1 == 0) {
      printf((char *)(DAT_00015448 + 0x153fc),DAT_00015444 + 0x153f8,0x2b);
      return 0;
    }
    if (iVar1 == -1) break;
    iVar1 = (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x410),iVar2 + 1,iVar1);
    if (iVar1 == -1) {
      printf((char *)(DAT_00015458 + 0x1543c),DAT_00015454 + 0x15438,0x36);
      return 2;
    }
  }
  printf((char *)(DAT_00015450 + 0x1541c),DAT_0001544c + 0x15418,0x30);
  return 1;
}



/* ===== record_pcm_get_post_state @ 0001545c size=12 ===== */

undefined1 record_pcm_get_post_state(int param_1)

{
  return **(undefined1 **)(param_1 + 0x18);
}



/* ===== record_pcm_destroy @ 00015468 size=16 ===== */

void record_pcm_destroy(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  audio_free();
  return;
}



/* ===== record_wav_init @ 00015478 size=120 ===== */

undefined4 record_wav_init(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = audio_calloc(1,0x444);
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  uVar5 = puVar4[2];
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0x404) = *param_2;
    uVar6 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar1 + 0x43c) = 0;
    *(undefined4 *)(puVar1 + 0x40c) = uVar6;
    *(undefined4 *)(puVar1 + 0x440) = uVar7;
    *(undefined4 *)((int)param_2 + 0xc) = 0x2c;
    wav_header_init(puVar1 + 0x410,uVar2,uVar3,uVar5);
    *(undefined1 **)(param_1 + 0x18) = puVar1;
    return 0;
  }
  return 0xffffffff;
}



/* ===== record_wav_process @ 000154f0 size=276 ===== */

undefined4 record_wav_process(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = iVar2 + 0x410;
  (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x440),iVar3,0x2c);
  while( true ) {
    iVar1 = (**(code **)(iVar2 + 0x404))(*(undefined4 *)(iVar2 + 0x440),iVar2 + 1,0x400);
    if (iVar1 == 0) {
      printf((char *)(DAT_00015608 + 0x1557c),DAT_00015604 + 0x15578,0x33);
      wav_header_complete(iVar3,*(undefined4 *)(iVar2 + 0x43c));
      (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x440),iVar3,0x2c);
      return 0;
    }
    if (iVar1 == -1) break;
    iVar1 = (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x440),iVar2 + 1,iVar1);
    *(int *)(iVar2 + 0x43c) = *(int *)(iVar2 + 0x43c) + iVar1;
    if (iVar1 == -1) {
      printf((char *)(DAT_00015618 + 0x155fc),DAT_00015614 + 0x155f8,0x43);
      return 2;
    }
  }
  printf((char *)(DAT_00015610 + 0x155bc),DAT_0001560c + 0x155b8,0x3a);
  wav_header_complete(iVar3,*(undefined4 *)(iVar2 + 0x43c));
  (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x440),iVar3,0x2c);
  return 1;
}



/* ===== record_wav_get_post_state @ 0001561c size=12 ===== */

undefined1 record_wav_get_post_state(int param_1)

{
  return **(undefined1 **)(param_1 + 0x18);
}



/* ===== record_wav_destroy @ 00015628 size=16 ===== */

void record_wav_destroy(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  audio_free();
  return;
}



/* ===== encoder_post @ 00015638 size=8 ===== */

undefined4 encoder_post(void)

{
  return 0;
}



/* ===== write_run @ 00015640 size=1452 ===== */

void write_run(undefined4 *param_1)

{
  bool bVar1;
  char *__s1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint __n;
  int iVar5;
  char *__s2;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  void *__src;
  size_t __n_00;
  void *__src_00;
  void *pvVar9;
  size_t sVar10;
  void *local_c0;
  void *local_bc;
  int local_a8;
  code *local_a4;
  code *local_a0;
  code *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  void *local_90;
  char *local_8c;
  undefined4 local_88;
  size_t local_84;
  undefined1 auStack_60 [8];
  char *local_58;
  char local_50;
  int local_4c;
  code *pcStack_48;
  code *pcStack_44;
  code *pcStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  
  pvVar9 = (void *)0x0;
  local_bc = (void *)0x0;
  iVar5 = DAT_00015bec + 0x15660;
  local_c0 = (void *)0x0;
  __s2 = (char *)(DAT_00015bf0 + 0x15670);
  iVar6 = DAT_00015bf4 + 0x15684;
LAB_00015684:
  do {
    while( true ) {
      iVar2 = audio_queue_receive(*param_1,auStack_60);
      if (iVar2 == -1) {
        printf((char *)(DAT_00015c14 + 0x15ad4),DAT_00015c10 + 0x15ad0,0xd9);
        return;
      }
      local_a8 = local_4c;
      local_a4 = pcStack_48;
      local_a0 = pcStack_44;
      local_9c = pcStack_40;
      local_98 = local_3c;
      uStack_94 = uStack_38;
      local_90 = pvStack_34;
      iVar2 = local_4c;
      if (local_4c == 0) {
        iVar2 = iVar5;
      }
      if (local_4c == 0) {
        local_a8 = iVar2;
      }
      if (param_1[0x23] != 0) {
        local_c0 = audio_malloc(param_1[0x23]);
        memset(local_c0,0,param_1[0x23]);
      }
      __s1 = local_58;
      local_88 = param_1[0x13];
      local_8c = local_58;
      iVar2 = strncmp(local_58,__s2,2);
      if ((iVar2 == 0) || (iVar2 = strncmp(__s1,(char *)(DAT_00015bf8 + 0x1570c),2), iVar2 == 0)) {
        bVar1 = true;
        printf((char *)(DAT_00015bfc + 0x15734),iVar6,0xed);
      }
      else {
        bVar1 = false;
      }
      pvVar3 = (void *)(*local_a4)(&local_a8,&local_8c);
      if (local_50 == '\0') break;
      audio_free(local_58);
      if (pvVar3 == (void *)0x0) goto LAB_00015760;
LAB_00015858:
      printf((char *)(DAT_00015c0c + 0x15870),DAT_00015c08 + 0x1586c,0xfa);
      audio_stream_stop(param_1[4]);
      audio_stream_stop(param_1[3]);
      audio_mutex_lock((pthread_mutex_t *)param_1[5]);
      pcVar7 = (code *)param_1[0x14];
      param_1[0x12] = 0;
joined_r0x00015bc8:
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(param_1,1,param_1[0x15]);
      }
      audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
    }
    if (pvVar3 != (void *)0x0) goto LAB_00015858;
LAB_00015760:
    __n_00 = local_84;
    pvVar4 = audio_malloc(local_84 << 1);
    if (pvVar4 == (void *)0x0) {
      printf((char *)(DAT_00015c28 + 0x15ba4),DAT_00015c24 + 0x15ba0,0x10d);
      audio_stream_stop(param_1[4]);
      audio_stream_stop(param_1[3]);
      audio_mutex_lock((pthread_mutex_t *)param_1[5]);
      pcVar7 = (code *)param_1[0x14];
      param_1[0x12] = pvVar3;
      goto joined_r0x00015bc8;
    }
    if (!bVar1) {
      pvVar3 = pvVar4;
      __src_00 = (void *)0x0;
      while (__src = pvVar3, __n = audio_stream_read(param_1[3],__src,__n_00), __n - 1 < 0xfffffffe)
      {
        pvVar3 = pvVar9;
        if (__n_00 != __n) goto LAB_00015a28;
        if ((__src_00 != (void *)0x0) &&
           (iVar2 = (*local_a0)(&local_a8,__src_00,__n_00), iVar2 == -1)) {
          uVar8 = 1;
          printf((char *)(DAT_00015c20 + 0x15b78),DAT_00015c1c + 0x15b74,0x163);
          audio_stream_stop(param_1[4]);
          audio_stream_stop(param_1[3]);
          goto LAB_0001599c;
        }
        pvVar3 = pvVar4;
        __src_00 = __src;
        if (__src == pvVar4) {
          pvVar3 = (void *)((int)__src + __n_00);
        }
      }
LAB_00015944:
      sVar10 = param_1[0x23];
      if (sVar10 != 0) {
        __n_00 = __n_00 - sVar10;
        memcpy(local_c0,(void *)((int)__src_00 + __n_00),sVar10);
      }
      (*local_a0)(&local_a8,__src_00,__n_00);
      goto LAB_00015968;
    }
    iVar2 = DAT_00015c00 + 0x157ac;
    sVar10 = ((int)param_1[0x1f] >> 3) * param_1[0x20] * param_1[0x21] * param_1[0x1e];
    printf((char *)(DAT_00015c04 + 0x157b0),iVar2,0x11c,sVar10);
    local_bc = audio_malloc(sVar10);
    if (local_bc != (void *)0x0) {
      pvVar9 = pvVar4;
      __src_00 = pvVar3;
      while (__src = pvVar9, __n = audio_stream_read(param_1[3],__src,__n_00), pvVar9 = pvVar3,
            __n - 1 < 0xfffffffe) {
        if (__n_00 != __n) goto LAB_00015a28;
        if ((__src_00 != (void *)0x0) && (pvVar3 < (void *)(sVar10 - __n_00))) {
          pvVar9 = (void *)((int)local_bc + (int)pvVar3);
          pvVar3 = (void *)((int)pvVar3 + __n_00);
          memcpy(pvVar9,__src_00,__n_00);
        }
        pvVar9 = pvVar4;
        __src_00 = __src;
        if (__src == pvVar4) {
          pvVar9 = (void *)((int)__src + __n_00);
        }
      }
      goto LAB_00015944;
    }
    printf((char *)(DAT_00015c18 + 0x15b08),iVar2,0x121,sVar10);
    audio_free(pvVar4);
    audio_stream_stop(param_1[4]);
    audio_stream_stop(param_1[3]);
    audio_mutex_lock((pthread_mutex_t *)param_1[5]);
    param_1[0x12] = 0;
    if ((code *)param_1[0x14] != (code *)0x0) {
      (*(code *)param_1[0x14])(param_1,1,param_1[0x15]);
    }
    pvVar9 = (void *)0x0;
    audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
  } while( true );
LAB_00015a28:
  sVar10 = param_1[0x23];
  if (sVar10 != 0) {
    if (__n < sVar10) {
      __n_00 = (__n_00 - sVar10) + __n;
      memcpy(local_c0,(void *)((int)__src_00 + __n_00),sVar10 - __n);
      memcpy((void *)((int)local_c0 + (param_1[0x23] - __n)),__src,__n);
    }
    else {
      memcpy(local_c0,(void *)((int)__src + (__n - sVar10)),sVar10);
    }
  }
  (*local_a0)(&local_a8,__src_00,__n_00);
  pvVar9 = pvVar3;
  if ((uint)param_1[0x23] < __n) {
    (*local_a0)(&local_a8,__src,__n - param_1[0x23]);
  }
LAB_00015968:
  if (bVar1) {
    (*local_a0)(&local_a8,local_bc,pvVar9);
    audio_free(local_bc);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
  }
LAB_0001599c:
  if (param_1[0x23] != 0) {
    local_90 = local_c0;
    (*local_a0)(&local_a8,local_c0);
    audio_free(local_c0);
    local_c0 = (void *)0x0;
    param_1[0x23] = 0;
  }
  audio_mutex_lock((pthread_mutex_t *)param_1[5]);
  param_1[0x12] = 0;
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,uVar8,param_1[0x15]);
  }
  audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
  audio_free(pvVar4);
  (*local_9c)(&local_a8);
  goto LAB_00015684;
}



/* ===== encoder_input @ 00015c2c size=8 ===== */

void encoder_input(int param_1)

{
  audio_stream_read(*(undefined4 *)(param_1 + 0x10));
  return;
}



/* ===== encoder_output @ 00015c34 size=8 ===== */

void encoder_output(int param_1)

{
  audio_stream_write(*(undefined4 *)(param_1 + 0xc));
  return;
}



/* ===== encoder_run @ 00015c3c size=816 ===== */

void encoder_run(undefined4 *param_1)

{
  undefined8 uVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *__format;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  code *local_b4;
  code *local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined4 *local_a4;
  undefined1 auStack_a0 [12];
  char *pcStack_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68 [2];
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  
  uVar1 = DAT_00015f70;
  iVar3 = DAT_00015f7c + 0x15c74;
  __format = (char *)(DAT_00015f80 + 0x15c74);
  iVar6 = DAT_00015f78 + 0x15c68;
  iVar5 = DAT_00015f84 + 0x15c84;
LAB_00015c80:
  do {
    iVar2 = audio_queue_receive(param_1[1],auStack_a0);
    __s1 = pcStack_94;
    if (iVar2 == -1) {
      printf((char *)(DAT_00015fb4 + 0x15ee8),DAT_00015fb0 + 0x15eec,0x1aa);
      return;
    }
    printf(__format,iVar6,0x1ae,pcStack_94);
    for (piVar4 = *(int **)(DAT_00015f88 + 0x15cb8); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4)
    {
      iVar2 = strcasecmp(__s1,(char *)piVar4[1]);
      if (iVar2 == 0) {
        local_bc = *piVar4;
        uStack_b8 = piVar4[1];
        local_b4 = (code *)piVar4[2];
        local_b0 = (code *)piVar4[3];
        local_e0 = param_1[0x1e];
        local_ac = piVar4[4];
        local_a8 = (code *)piVar4[5];
        local_a4 = (undefined4 *)piVar4[6];
        local_d8 = param_1[0x20];
        local_dc = param_1[0x1f];
        audio_cache_ops(1,param_1,0x90);
        local_a4 = &local_e0;
        local_d0 = *(undefined4 *)(iVar5 + DAT_00015f8c);
        local_cc = *(undefined4 *)(iVar5 + DAT_00015f90);
        local_c8 = *(undefined4 *)(iVar5 + DAT_00015f94);
        local_c4 = iVar2;
        local_c0 = param_1;
        iVar2 = (*local_b4)(&local_bc,&local_d0);
        if (iVar2 == 0) {
          audio_stream_start(param_1[3]);
          param_1[0x23] = local_c4;
          local_54 = local_8c;
          uStack_50 = uStack_88;
          uStack_4c = uStack_84;
          uStack_48 = uStack_80;
          local_68[0] = uVar1;
          local_58 = 0;
          local_38 = 0;
          local_44 = local_7c;
          uStack_40 = uStack_78;
          uStack_3c = uStack_74;
          audio_queue_send(*param_1,local_68);
          iVar2 = (*local_b0)(&local_bc);
          if (iVar2 == 2) {
            printf((char *)(DAT_00015fb8 + 0x15f08),iVar3,500);
            audio_stream_stop(param_1[4]);
          }
          else if (iVar2 == 3) {
            printf((char *)(DAT_00015fc8 + 0x15f58),DAT_00015fc4 + 0x15f5c,0x1f8);
            audio_stream_stop(param_1[4]);
            audio_stream_stop(param_1[3]);
          }
          else if (iVar2 == 1) {
            printf((char *)(DAT_00015fc0 + 0x15f30),DAT_00015fbc + 0x15f34,0x1f0);
            audio_stream_finish(param_1[3]);
          }
          else {
            printf((char *)(DAT_00015f9c + 0x15df8),DAT_00015f98 + 0x15dfc,0x1fd);
            audio_stream_stop(param_1[4]);
            audio_stream_finish(param_1[3]);
          }
          (*local_a8)(&local_bc);
        }
        else {
          printf((char *)(DAT_00015fac + 0x15e90),DAT_00015fa8 + 0x15e94,0x1d4);
          audio_stream_stop(param_1[4]);
          audio_mutex_lock((pthread_mutex_t *)param_1[5]);
          param_1[0x12] = 0;
          if ((code *)param_1[0x14] != (code *)0x0) {
            (*(code *)param_1[0x14])(param_1,2,param_1[0x15]);
          }
          audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        }
        goto LAB_00015c80;
      }
    }
    printf((char *)(DAT_00015fa4 + 0x15e34),DAT_00015fa0 + 0x15e38,0x1bd);
    audio_stream_stop(param_1[4]);
    audio_mutex_lock((pthread_mutex_t *)param_1[5]);
    if ((code *)param_1[0x14] != (code *)0x0) {
      (*(code *)param_1[0x14])(param_1,2,param_1[0x15]);
    }
    param_1[0x12] = 0;
    audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
  } while( true );
}



/* ===== capture_run @ 00015fcc size=840 ===== */

void capture_run(int param_1)

{
  size_t __size;
  int iVar1;
  void *__s;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  size_t local_b8;
  code *local_b4;
  code *local_b0;
  code *local_ac;
  code *local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined4 uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  int local_2c;
  
  local_b4 = *(code **)(param_1 + 0x5c);
  local_b0 = *(code **)(param_1 + 0x60);
  local_ac = *(code **)(param_1 + 100);
  local_a8 = *(code **)(param_1 + 0x68);
  iVar6 = DAT_00016314 + 0x16010;
  local_a4 = *(undefined4 *)(param_1 + 0x6c);
  local_a0 = *(code **)(param_1 + 0x70);
  uStack_9c = *(undefined4 *)(param_1 + 0x74);
  iVar7 = DAT_00016318 + 0x16038;
  iVar4 = DAT_0001631c + 0x1602c;
  do {
    while( true ) {
      while( true ) {
        iVar1 = audio_queue_receive(*(undefined4 *)(param_1 + 8),local_98);
        if (iVar1 == -1) {
          printf((char *)(DAT_00016344 + 0x162e8),DAT_00016340 + 0x162f8,0x21a);
          return;
        }
        if (local_98[0] == 0) break;
        if ((int)local_60 == 1) {
          return;
        }
      }
      local_c4 = *(undefined4 *)(param_1 + 0x7c);
      local_c8 = *(undefined4 *)(param_1 + 0x78);
      local_c0 = *(undefined4 *)(param_1 + 0x80);
      local_bc = *(undefined4 *)(param_1 + 0x58);
      local_b8 = 0x1000;
      iVar1 = (*local_b4)(&local_b4,&local_c8);
      if (iVar1 == 0) break;
      printf((char *)(DAT_00016324 + 0x160b0),DAT_00016320 + 0x160c0,0x229);
      audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        (**(code **)(param_1 + 0x50))(param_1,6,*(undefined4 *)(param_1 + 0x54));
      }
      audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
    }
    audio_stream_start(*(undefined4 *)(param_1 + 0x10));
    local_60 = (ulonglong)local_98[0];
    local_4c = local_84;
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    uStack_40 = uStack_78;
    local_50 = local_88;
    local_3c = local_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    local_30 = local_68;
    local_58 = local_90;
    local_2c = iVar4;
    audio_queue_send(*(undefined4 *)(param_1 + 4),&local_60);
    __size = local_b8;
    (*local_b0)(&local_b4);
    __s = audio_malloc(__size);
    if (__s == (void *)0x0) {
      printf((char *)(DAT_0001634c + 0x1630c),(int)&DAT_0001631c + DAT_00016348,0x244);
      return;
    }
    memset(__s,0,__size);
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar5 = *(int *)(param_1 + 0x80);
    iVar8 = *(int *)(param_1 + 0x78);
    uVar9 = 0;
    iVar10 = 0;
    do {
      iVar2 = (*local_ac)(&local_b4,__s,__size);
      if (iVar2 == -1) {
        printf((char *)(DAT_00016330 + 0x16258),DAT_0001632c + 0x1626c,0x250);
        audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
        goto LAB_00016264;
      }
      if (iVar2 == 0) {
        printf((char *)(DAT_00016338 + 0x162a8),DAT_00016334 + 0x162b8,0x256);
        audio_stream_finish(*(undefined4 *)(param_1 + 0x10));
        goto LAB_00016264;
      }
      uVar3 = audio_stream_write(*(undefined4 *)(param_1 + 0x10),__s,iVar2);
      if ((int)uVar3 < iVar2) {
        printf((char *)(DAT_0001633c + 0x162c8),iVar7,0x25d,0);
        goto LAB_00016264;
      }
      bVar11 = CARRY4(uVar9,uVar3);
      uVar9 = uVar9 + uVar3;
      iVar10 = iVar10 + ((int)uVar3 >> 0x1f) + (uint)bVar11;
      uVar3 = FUN_0002bd88(uVar9,iVar10,(uint)(iVar8 * iVar5 * (iVar1 >> 3)) / 1000);
      *(uint *)(param_1 + 0x88) = uVar3;
    } while ((*(int *)(param_1 + 0x84) == 0) || (uVar3 < (uint)(*(int *)(param_1 + 0x84) * 1000)));
    printf((char *)(DAT_00016328 + 0x16234),iVar6,0x264,uVar3);
    audio_stream_finish(*(undefined4 *)(param_1 + 0x10));
LAB_00016264:
    audio_free(__s);
    (*local_a8)(&local_b4);
    (*local_a0)(&local_b4);
  } while( true );
}



/* ===== recorder_register_amrenc @ 00016350 size=40 ===== */

undefined4 recorder_register_amrenc(void)

{
  printf((char *)(DAT_0001637c + 0x16370),DAT_00016378 + 0x16388,0x4e);
  return 0xffffffff;
}



/* ===== recorder_list_encoder @ 00016380 size=140 ===== */

undefined4 recorder_list_encoder(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *__format;
  
  piVar2 = *(int **)(DAT_0001640c + 0x16394);
  if (piVar2 == (int *)0x0) {
    printf((char *)(DAT_0001641c + 0x16400),DAT_00016418 + 0x1643c,0x57);
    uVar1 = 0xffffffff;
  }
  else {
    __format = (char *)(DAT_00016414 + 0x163b0);
    iVar4 = DAT_00016410 + 0x163ec;
    iVar3 = 0;
    do {
      printf(__format,iVar4,0x5f,iVar3,piVar2[1]);
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== recorder_register_encoder @ 00016420 size=420 ===== */

undefined4 recorder_register_encoder(char *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *__s;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  for (piVar6 = *(int **)(DAT_000165c4 + 0x16430); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
    iVar1 = strcmp(param_1,(char *)piVar6[1]);
    if (iVar1 == 0) {
      printf((char *)(DAT_000165cc + 0x16480),DAT_000165c8 + 0x164d4,0x70,param_1);
      return 0;
    }
  }
  puVar2 = audio_malloc(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    printf((char *)(DAT_000165e8 + 0x165c0),DAT_000165e4 + 0x16610,0x79,0x1c);
  }
  else {
    sVar3 = strlen(param_1);
    __s = audio_malloc(sVar3 + 1);
    puVar2[1] = __s;
    if (__s != (void *)0x0) {
      sVar3 = strlen(param_1);
      memset(__s,0,sVar3 + 1);
      sVar3 = strlen(param_1);
      memcpy((void *)puVar2[1],param_1,sVar3);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      puVar4 = (undefined4 *)(DAT_000165d0 + 0x16504);
      puVar5 = (undefined4 *)*puVar4;
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar2 + 4) = uVar7;
      *puVar2 = 0;
      puVar2[6] = 0;
      if (puVar5 == (undefined4 *)0x0) {
        *puVar4 = puVar2;
        return 0;
      }
      for (puVar4 = (undefined4 *)*puVar5; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        puVar5 = puVar4;
      }
      *puVar5 = puVar2;
      return 0;
    }
    sVar3 = strlen(param_1);
    printf((char *)(DAT_000165d8 + 0x16570),DAT_000165d4 + 0x165b8,0x7f,sVar3);
    audio_free(puVar2);
  }
  printf((char *)(DAT_000165e0 + 0x1659c),(int)&DAT_000165e8 + DAT_000165dc,0x99,param_1);
  return 0xffffffff;
}



/* ===== recorder_init @ 000165ec size=244 ===== */

undefined4 recorder_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uVar6 = 0;
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = DAT_000166e0 + 0x16608;
  uVar2 = *(undefined4 *)(iVar1 + DAT_000166e4);
  uVar3 = *(undefined4 *)(iVar1 + DAT_000166e8);
  iStack_64 = DAT_000166f4 + 0x16638;
  uVar4 = *(undefined4 *)(iVar1 + DAT_000166ec);
  uVar5 = *(undefined4 *)(iVar1 + DAT_000166f0);
  local_68 = 0;
  uStack_60 = CONCAT44(*(undefined4 *)(iVar1 + DAT_000166fc),*(undefined4 *)(iVar1 + DAT_000166f8));
  uStack_58 = CONCAT44(*(undefined4 *)(iVar1 + DAT_00016704),*(undefined4 *)(iVar1 + DAT_00016700));
  uStack_50 = uVar7;
  recorder_register_encoder(iStack_64,&local_68);
  iStack_44 = DAT_00016708 + 0x166b0;
  local_48 = uVar6;
  uStack_40 = CONCAT44(uVar3,uVar2);
  uStack_38 = CONCAT44(uVar5,uVar4);
  uStack_30 = uVar7;
  recorder_register_encoder(iStack_44,&local_48);
  return 0;
}



/* ===== recorder_register_mp3enc @ 0001670c size=124 ===== */

void recorder_register_mp3enc(void)

{
  int iVar1;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = DAT_00016788 + 0x1672c;
  local_28 = 0;
  iStack_24 = DAT_00016790 + 0x16740;
  uStack_20 = *(undefined4 *)(iVar1 + DAT_0001678c);
  local_1c = *(undefined4 *)(iVar1 + DAT_00016794);
  uStack_18 = *(undefined4 *)(iVar1 + DAT_00016798);
  uStack_14 = *(undefined4 *)(iVar1 + DAT_0001679c);
  recorder_register_encoder(iStack_24,&local_28);
  return;
}



/* ===== recorder_unregister_encoder @ 000167a0 size=192 ===== */

undefined4 recorder_unregister_encoder(char *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  piVar4 = (int *)(DAT_00016860 + 0x167b4);
  piVar5 = (int *)*piVar4;
  pcVar6 = (char *)piVar5[1];
  iVar3 = strcmp(param_1,pcVar6);
  piVar2 = (int *)*piVar5;
  if (iVar3 == 0) {
    *piVar4 = *piVar5;
    audio_free(pcVar6);
    audio_free(piVar5);
    return 0;
  }
  do {
    piVar1 = piVar2;
    piVar4 = piVar5;
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00016868 + 0x1685c),DAT_00016864 + 0x168c4,0xbb,param_1);
      return 0xffffffff;
    }
    pcVar6 = (char *)piVar1[1];
    iVar3 = strcmp(param_1,pcVar6);
    piVar5 = piVar1;
    piVar2 = (int *)*piVar1;
  } while (iVar3 != 0);
  *piVar4 = *piVar1;
  audio_free(pcVar6);
  audio_free(piVar1);
  return 0;
}



/* ===== recorder_create @ 0001686c size=452 ===== */

undefined4 * recorder_create(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_28;
  undefined4 *local_24;
  
  iVar10 = DAT_00016a30;
  puVar2 = audio_calloc(1,0x90);
  iVar10 = iVar10 + 0x16890;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = audio_queue_create(1,0x38);
    *puVar2 = uVar3;
    uVar3 = audio_queue_create(1,0x38);
    puVar2[1] = uVar3;
    uVar3 = audio_queue_create(1,0x38);
    puVar2[2] = uVar3;
    uVar3 = audio_stream_create(param_1[9]);
    puVar2[4] = uVar3;
    uVar3 = audio_stream_create(param_1[10]);
    puVar2[3] = uVar3;
    uVar3 = audio_mutex_create();
    puVar2[5] = uVar3;
    uVar3 = audio_semaphore_create();
    uVar4 = param_1[0xe];
    uVar5 = param_1[0xf];
    puVar2[0x13] = *param_1;
    uVar6 = param_1[1];
    iVar8 = param_1[0xb];
    iVar9 = param_1[0xc];
    puVar2[0x15] = uVar5;
    puVar2[0x16] = uVar6;
    iVar7 = param_1[0xd];
    puVar2[0x14] = uVar4;
    iVar1 = DAT_00016a34;
    if (iVar8 == 0) {
      iVar8 = 0x800;
    }
    if (iVar9 == 0) {
      iVar9 = 0x14000;
    }
    if (iVar7 == 0) {
      iVar7 = 0x800;
    }
    puVar2[6] = uVar3;
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    puVar2[0x17] = param_1[2];
    puVar2[0x18] = uVar3;
    puVar2[0x19] = uVar4;
    puVar2[0x1a] = uVar5;
    uVar3 = param_1[7];
    uVar4 = param_1[8];
    puVar2[0x1b] = param_1[6];
    puVar2[0x1c] = uVar3;
    puVar2[0x1d] = uVar4;
    puVar2[0x12] = 0;
    local_28 = *(undefined4 *)(iVar10 + iVar1);
    local_24 = puVar2;
    uVar3 = audio_thread_create(DAT_00016a38 + 0x16974,iVar8,0xe,&local_28);
    iVar1 = DAT_00016a3c;
    puVar2[7] = uVar3;
    local_28 = *(undefined4 *)(iVar10 + iVar1);
    local_24 = puVar2;
    uVar3 = audio_thread_create(DAT_00016a40 + 0x1699c,iVar9,0xe,&local_28);
    iVar1 = DAT_00016a44;
    puVar2[8] = uVar3;
    local_28 = *(undefined4 *)(iVar10 + iVar1);
    local_24 = puVar2;
    uVar3 = audio_thread_create(DAT_00016a48 + 0x169c8,iVar7,0xe,&local_28);
    iVar10 = DAT_00016a4c + 0x16a74;
    puVar2[9] = uVar3;
    printf((char *)(DAT_00016a50 + 0x169fc),iVar10,0x2a7,puVar2[0x16],iVar8,iVar9,iVar7);
    return puVar2;
  }
  printf((char *)(DAT_00016a58 + 0x16a24),DAT_00016a54 + 0x16aac,0x2b0);
  return (undefined4 *)0x0;
}



/* ===== recorder_record @ 00016a5c size=276 ===== */

undefined4 recorder_record(int param_1,undefined4 *param_2)

{
  size_t sVar1;
  void *__dest;
  char *__s;
  undefined4 uVar2;
  bool bVar3;
  undefined8 local_50;
  void *local_48;
  undefined4 local_44;
  byte local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x48) = 1;
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  uVar2 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x78) = param_2[10];
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0xb);
  local_50 = DAT_00016b70;
  local_3c = param_2[3];
  uStack_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  local_40 = *(byte *)(param_2 + 2);
  local_48 = (void *)(uint)local_40;
  local_2c = param_2[7];
  uStack_28 = param_2[8];
  uStack_24 = param_2[9];
  bVar3 = local_48 == (void *)0x0;
  local_44 = param_2[1];
  if (bVar3) {
    local_48 = (void *)*param_2;
  }
  if (!bVar3) {
    sVar1 = strlen((char *)*param_2);
    __dest = audio_malloc(sVar1 + 1);
    local_48 = __dest;
    if (__dest == (void *)0x0) {
      printf((char *)(DAT_00016b7c + 0x16b64),DAT_00016b78 + 0x16c00,0x2cf);
      return 0xffffffff;
    }
    __s = (char *)*param_2;
    sVar1 = strlen(__s);
    memcpy(__dest,__s,sVar1 + 1);
  }
  local_20 = 0;
  audio_queue_send(*(undefined4 *)(param_1 + 8),&local_50);
  return 0;
}



/* ===== recorder_get_state @ 00016b80 size=36 ===== */

undefined4 recorder_get_state(int param_1)

{
  undefined4 uVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return uVar1;
}



/* ===== recorder_get_cur_time @ 00016ba4 size=8 ===== */

undefined4 recorder_get_cur_time(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



/* ===== recorder_stop @ 00016bac size=216 ===== */

undefined4 recorder_stop(int param_1)

{
  int iVar1;
  undefined4 local_48 [15];
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x48) == 0) {
    audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
    printf((char *)(DAT_00016c90 + 0x16c6c),DAT_00016c8c + 0x16d14,0x30b);
    return 0;
  }
  audio_stream_finish(*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x48) == 2) {
    audio_semaphore_give(*(sem_t **)(param_1 + 0x18));
  }
  iVar1 = 0x1f;
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  local_48[0] = 1;
  audio_queue_send(*(undefined4 *)(param_1 + 8),local_48);
  do {
    if (*(int *)(param_1 + 0x48) == 0) break;
    audio_sleep(100);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  printf((char *)(DAT_00016c88 + 0x16c3c),DAT_00016c84 + 0x16ce4,0x306);
  return 0;
}



/* ===== recorder_pause @ 00016c94 size=8 ===== */

undefined4 recorder_pause(void)

{
  return 0;
}



/* ===== recorder_resume @ 00016c9c size=8 ===== */

undefined4 recorder_resume(void)

{
  return 0;
}



/* ===== recorder_wait_idle @ 00016ca4 size=56 ===== */

undefined4 recorder_wait_idle(int param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  do {
    audio_sleep(10);
  } while (*(int *)(param_1 + 0x48) != 0);
  return 0;
}



/* ===== recorder_close @ 00016cdc size=72 ===== */

undefined4 recorder_close(int param_1)

{
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  code *local_18;
  undefined4 local_14;
  code *local_10;
  undefined4 uStack_c;
  
  local_24 = *(undefined4 *)(param_1 + 0x5c);
  uStack_20 = *(undefined4 *)(param_1 + 0x60);
  uStack_1c = *(undefined4 *)(param_1 + 100);
  local_18 = *(code **)(param_1 + 0x68);
  local_14 = *(undefined4 *)(param_1 + 0x6c);
  local_10 = *(code **)(param_1 + 0x70);
  uStack_c = *(undefined4 *)(param_1 + 0x74);
  (*local_18)(&local_24);
  (*local_10)(&local_24);
  return 0;
}



/* ===== recorder_destroy @ 00016d24 size=108 ===== */

void recorder_destroy(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  recorder_stop();
  audio_queue_destroy(*param_1);
  audio_queue_destroy(param_1[1]);
  audio_queue_destroy(param_1[2]);
  audio_stream_destroy(param_1[4]);
  audio_stream_destroy(param_1[3]);
  audio_mutex_destroy(param_1[5]);
  audio_semaphore_destroy(param_1[6]);
  audio_thread_exit(param_1[7]);
  audio_thread_exit(param_1[8]);
  audio_thread_exit(param_1[9]);
  audio_free(param_1);
  return;
}



/* ===== recorder_deinit @ 00016d90 size=128 ===== */

void recorder_deinit(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *__format;
  int iVar5;
  
  piVar3 = (int *)(DAT_00016e10 + 0x16da4);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    __format = (char *)(DAT_00016e18 + 0x16dc4);
    iVar4 = DAT_00016e14 + 0x16e80;
    iVar2 = 0;
    do {
      iVar5 = piVar1[1];
      *piVar3 = *piVar1;
      printf(__format,iVar4,0x34d,iVar2,iVar5);
      audio_free(piVar1[1]);
      audio_free(piVar1);
      piVar1 = (int *)*piVar3;
      iVar2 = iVar2 + 1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



/* ===== file_preprocessor_init_impl @ 00016e1c size=252 ===== */

undefined4 file_preprocessor_init_impl(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  puVar7 = param_2 + 3;
  *puVar7 = 0;
  param_2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[7] = 0;
  param_2[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = check_native_audio_type(*param_2,puVar7);
  if (iVar2 == 0) {
    iVar2 = audio_fopen(*param_2,DAT_00016f18 + 0x16e64);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      printf((char *)(DAT_00016f28 + 0x16f14),DAT_00016f24 + 0x16f10,0x19,param_2[1],*param_2);
    }
    else {
      param_2[2] = 0x400;
      uVar3 = audio_fstat(*param_2,iVar2);
      uVar4 = *param_2;
      uVar6 = param_2[1];
      iVar5 = DAT_00016f1c + 0x16ea0;
      param_2[0xd] = uVar3;
      iVar1 = DAT_00016f20;
      *(int *)(param_1 + 0x14) = iVar2;
      printf((char *)(iVar1 + 0x16eb0),iVar5,0x24,uVar6,uVar4,puVar7);
      uVar3 = 0;
      if (param_2[0xc] != 0) {
        audio_fseek(iVar2,param_2[0xc],0);
        param_2[0xc] = 0;
        return 0;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== file_preprocessor_read_impl @ 00016f2c size=32 ===== */

void file_preprocessor_read_impl(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_audio_fread_00048084)(param_2,1,param_3,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* ===== file_preprocessor_seek_impl @ 00016f40 size=16 ===== */

void file_preprocessor_seek_impl(int param_1,int param_2)

{
  audio_fseek(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x30),0);
  return;
}



/* ===== file_preprocessor_destroy_impl @ 00016f50 size=16 ===== */

void file_preprocessor_destroy_impl(int param_1)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_audio_fclose_00048148)(*(undefined4 *)(param_1 + 0x14));
  return;
}



/* ===== http_preprocessor_init_impl @ 00016f60 size=8 ===== */

undefined4 http_preprocessor_init_impl(void)

{
  return 0xffffffff;
}



/* ===== http_preprocessor_read_impl @ 00016f68 size=8 ===== */

undefined4 http_preprocessor_read_impl(void)

{
  return 0xffffffff;
}



/* ===== http_preprocessor_destroy_impl @ 00016f70 size=4 ===== */

void http_preprocessor_destroy_impl(void)

{
  return;
}



/* ===== http_preprocessor_seek_impl @ 00016f74 size=44 ===== */

void http_preprocessor_seek_impl(undefined4 param_1,undefined4 param_2)

{
  http_preprocessor_destroy_impl();
                    /* WARNING: Could not recover jumptable at 0x00014f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_http_preprocessor_init_impl_00048230)(param_1,param_2);
  return;
}



/* ===== play_mp3_check_impl @ 00016f98 size=208 ===== */

int play_mp3_check_impl(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = check_ID3V2_tag();
  if (iVar1 != 0) {
    if (param_2 <= iVar1 + 0xb) {
      printf((char *)(DAT_00017074 + 0x17060),DAT_00017070 + 0x1705c,0x20);
      return -1;
    }
    param_1 = param_1 + iVar1 + 10;
  }
  if ((*param_1 == -1) && (uVar2 = (uint)(byte)param_1[1], (uVar2 & 0xe0) == 0xe0)) {
    uVar3 = (uVar2 & 0x1f) >> 3;
    iVar1 = 4 - ((uVar2 & 7) >> 1);
    if (iVar1 != 4) {
      printf((char *)(DAT_0001706c + 0x1701c),DAT_00017068 + 0x17010,0x2d,
             uVar3 * 0x14 + DAT_00017068 + 0x17028,iVar1);
      uVar2 = (uint)(uVar3 != 1);
      if (iVar1 != 3) {
        uVar2 = 0;
      }
      return uVar2 - 1;
    }
  }
  return -1;
}



/* ===== play_mp3_process_impl @ 00017078 size=1552 ===== */

undefined4 play_mp3_process_impl(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t __n;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  int iVar13;
  undefined1 *__src;
  undefined1 *__dest;
  size_t sVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  double dVar20;
  int iVar21;
  int *local_50;
  int local_4c;
  
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  __dest = puVar9 + 1;
  iVar6 = DAT_00017698 + 0x17098;
  iVar1 = (**(code **)(puVar9 + 0xf30))(*(undefined4 *)(puVar9 + 0xf3c),__dest,10);
  if (iVar1 != 10) {
    printf((char *)(DAT_000176a0 + 0x170c8),DAT_0001769c + 0x1712c,0x78);
    return 1;
  }
  uVar2 = check_ID3V2_tag(__dest);
  uVar5 = uVar2;
  if (uVar2 == 0) {
    uVar10 = 0xf1e;
    sVar12 = 10;
    __n = 0;
    __src = (undefined1 *)0x0;
  }
  else {
    while( true ) {
      uVar10 = (**(code **)(puVar9 + 0xf30))(*(undefined4 *)(puVar9 + 0xf3c),__dest,0xf28);
      if ((int)uVar10 < 1) {
        printf((char *)(DAT_000176d4 + 0x17480),DAT_000176d0 + 0x174e0,0x8b);
        return 1;
      }
      if (uVar5 <= uVar10) break;
      uVar5 = uVar5 - uVar10;
    }
    __n = uVar10 - uVar5;
    uVar10 = (uVar5 - uVar10) + 0xf28;
    __src = puVar9 + uVar5 + 1;
    sVar12 = 0;
  }
  iVar1 = DAT_000176a8;
  sVar14 = 1;
  iVar7 = DAT_000176a4 + 0x17178;
  iVar15 = DAT_000176a8 + 0x17124;
LAB_000173c0:
  if (__n != 0) {
    memmove(__dest,__src,__n);
  }
  iVar8 = DAT_000176c4 + 0x1744c;
  do {
    iVar13 = sVar12 + __n;
    if (uVar10 == 0) {
      uVar5 = (**(code **)(puVar9 + 0xf30))(*(undefined4 *)(puVar9 + 0xf3c),__dest + iVar13,0);
    }
    else {
      uVar10 = 0xf28 - iVar13;
      uVar5 = (**(code **)(puVar9 + 0xf30))(*(undefined4 *)(puVar9 + 0xf3c),__dest + iVar13,uVar10);
      if (uVar5 < uVar10) {
        uVar10 = 0;
      }
    }
    if (__n == 0 && uVar5 == 0) {
      printf((char *)(DAT_000176cc + 0x17430),DAT_000176c8 + 0x17490,0xba);
      return 0;
    }
    if (uVar5 == 0xffffffff) {
      printf((char *)(DAT_000176e8 + 0x17600),DAT_000176e4 + 0x17660,0xbf);
      return 1;
    }
    *(undefined1 **)(iVar1 + 0x17128) = __dest;
    *(uint *)(iVar1 + 0x1712c) = iVar13 + uVar5;
    uVar5 = AudioDecMP3Process(iVar15);
    __n = *(uint *)(iVar1 + 0x1712c);
    __src = *(undefined1 **)(iVar1 + 0x17128);
    if (((uint)(__n == 0xffffffff) & uVar5 >> 0x1f) != 0) {
      printf((char *)(DAT_000176f0 + 0x1762c),DAT_000176ec + 0x1768c,0xd6,uVar5);
      return 0xffffffff;
    }
    if (__src < __dest) {
LAB_000171a4:
      printf((char *)(DAT_000176ac + 0x171c0),iVar7,0xdf,__src,__n);
      __n = 0;
      __src = __dest;
    }
    else {
      bVar18 = puVar9 + 0xf29 <= __src;
      bVar17 = __src == puVar9 + 0xf29;
      if (!bVar18 || bVar17) {
        bVar18 = 0xf27 < __n;
        bVar17 = __n == 0xf28;
      }
      if (bVar18 && !bVar17) goto LAB_000171a4;
    }
    if (sVar14 == 0) {
      local_50 = *(int **)(iVar6 + DAT_000176b0);
      iVar13 = *local_50;
      iVar8 = *(int *)(iVar13 + 0x14);
      sVar14 = 0;
      if (uVar5 == 0 && 0 < iVar8) goto LAB_0001734c;
      goto LAB_000173bc;
    }
    if (uVar5 != 0) goto LAB_000173bc;
    local_50 = *(int **)(iVar6 + DAT_000176b0);
    iVar13 = *local_50;
    if (*(int *)(iVar13 + 0x18) != 3) {
      printf((char *)(DAT_000176f8 + 0x1765c),(int)&DAT_000176b4 + DAT_000176f4,0xec,
             *(undefined4 *)(iVar13 + 0x1c),*(int *)(iVar13 + 0x18));
      return 3;
    }
    uVar3 = *(undefined4 *)(iVar13 + 4);
    iVar16 = *(int *)(iVar13 + 0x10);
    iVar11 = *(int *)(iVar13 + 8);
    local_4c = *(int *)(iVar13 + 0xc);
    uVar4 = *(undefined4 *)(iVar13 + 0x14);
    iVar13 = iVar11;
    iVar21 = iVar16;
    printf((char *)(DAT_000176b4 + 0x17234),iVar8,0xf8,local_4c,iVar11,iVar16,uVar4,uVar3);
    if (1 < iVar11 - 1U) {
      printf((char *)(DAT_000176d8 + 0x174dc),iVar8,0xfc,iVar11,iVar13,iVar21,uVar4,uVar3);
      goto LAB_000173bc;
    }
    if (40000 < local_4c - 8000U) {
      printf((char *)(DAT_000176e0 + 0x175c0),iVar8,0x102,local_4c,iVar13,iVar21,uVar4,uVar3);
      goto LAB_000173bc;
    }
    if (iVar16 != 0x10) {
      printf((char *)(DAT_000176dc + 0x175a4),iVar8,0x107,iVar16,iVar13,iVar21,uVar4,uVar3);
      goto LAB_000173bc;
    }
    uVar3 = *(undefined4 *)(puVar9 + 0xf3c);
    iVar13 = *local_50;
    if (*(int *)(iVar13 + 0x20) == 1) {
      uVar4 = FUN_0002bbc4(*(int *)(iVar13 + 0x14) * *(int *)(iVar13 + 0x28),iVar11);
      uVar4 = FUN_0002bbc4(uVar4,local_4c / 1000,local_4c * 0x10624dd3);
      dVar20 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar19 = (double)VectorUnsignedToFloat
                                 (*(undefined4 *)(puVar9 + 0xf2c),(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = *(int *)(iVar13 + 0x24) *
              (uint)*(byte *)(iVar13 + (int)(longlong)
                                            (((dVar19 * DAT_00017688) / dVar20) * DAT_00017690) +
                             0x2c) >> 8;
      player_set_total_time(uVar3,uVar4);
      (**(code **)(puVar9 + 0xf38))(*(undefined4 *)(puVar9 + 0xf3c),local_4c,0x10,iVar11);
      iVar13 = *(int *)(puVar9 + 0xf2c);
      *puVar9 = 1;
    }
    else {
      iVar13 = player_get_file_length(uVar3);
      uVar5 = uVar2 + ((uint)(*(int *)(puVar9 + 0xf2c) * *(int *)(*local_50 + 4)) >> 3) + 10;
      uVar3 = FUN_0002bbc4((iVar13 - uVar2) + -10,*(int *)(*local_50 + 4) / 8000);
      player_set_total_time(*(undefined4 *)(puVar9 + 0xf3c),uVar3);
      (**(code **)(puVar9 + 0xf38))(*(undefined4 *)(puVar9 + 0xf3c),local_4c,0x10,iVar11);
      iVar13 = *(int *)(puVar9 + 0xf2c);
      *puVar9 = 1;
    }
    if (iVar13 == 0) break;
    player_preprocess_seek(*(undefined4 *)(puVar9 + 0xf3c),uVar5);
    iVar13 = *local_50;
    __n = 0;
    *(undefined4 *)(puVar9 + 0xf2c) = 0;
    *(undefined4 *)(iVar13 + 0x14) = 0;
    sVar12 = __n;
    sVar14 = __n;
  } while( true );
  iVar13 = *local_50;
  iVar8 = *(int *)(iVar13 + 0x14);
  if (iVar8 < 1) {
    sVar14 = 0;
  }
  else {
LAB_0001734c:
    if (*(int *)(iVar13 + 0xc) != local_4c) {
      printf((char *)(DAT_000176bc + 0x17374),DAT_000176b8 + 0x173d8,0x12d);
      iVar8 = *(int *)(*local_50 + 0x14);
    }
    iVar8 = (**(code **)(puVar9 + 0xf34))
                      (*(undefined4 *)(puVar9 + 0xf3c),*(undefined4 *)(DAT_000176c0 + 0x173a4),
                       iVar8 << 1);
    if (iVar8 == -1) {
      printf((char *)(DAT_00017700 + 0x1767c),(int)&DAT_000176e0 + DAT_000176fc,0x133);
      return 0;
    }
    sVar14 = 0;
    *(undefined4 *)(*local_50 + 0x14) = 0;
  }
LAB_000173bc:
  sVar12 = 0;
  goto LAB_000173c0;
}



/* ===== play_mp3_get_post_state_impl @ 00017704 size=12 ===== */

undefined1 play_mp3_get_post_state_impl(int param_1)

{
  return **(undefined1 **)(param_1 + 0x20);
}



/* ===== play_mp3_destroy_impl @ 00017710 size=68 ===== */

void play_mp3_destroy_impl(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    audio_free();
  }
  if (*(int *)(DAT_00017754 + 0x1773c) != 0) {
    audio_free();
  }
  AudioDecMP3Close();
  *(undefined4 *)(DAT_00017758 + 0x17750) = 4;
  return;
}



/* ===== play_mp3_init_impl @ 0001775c size=284 ===== */

undefined4 play_mp3_init_impl(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  char *__format;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = DAT_00017878;
  puVar1 = audio_calloc(1,0xf40);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *puVar1 = 0;
  uVar5 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(puVar1 + 0xf30) = *param_2;
  uVar7 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(puVar1 + 0xf38) = uVar5;
  iVar6 = DAT_0001787c;
  *(undefined4 *)(puVar1 + 0xf3c) = uVar7;
  *(undefined1 **)(param_1 + 0x20) = puVar1;
  pvVar2 = audio_malloc(0x1200);
  *(void **)(iVar6 + 0x177c8) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0x49;
    iVar4 = DAT_0001788c + 0x17848;
    __format = (char *)(DAT_00017890 + 0x1784c);
  }
  else {
    *(void **)(iVar6 + 0x177c0) = pvVar2;
    *(undefined4 *)(iVar6 + 0x177bc) = 0;
    iVar3 = AudioDecMP3Open((undefined4 *)(iVar6 + 0x177bc));
    if (iVar3 < 0) goto LAB_00017850;
    iVar6 = *(int *)(iVar6 + 0x177c4);
    **(int **)(iVar4 + 0x17780 + DAT_00017880) = iVar6;
    if (iVar6 != -0x21520304) {
      printf((char *)(DAT_00017888 + 0x17820),(int)&DAT_00017898 + DAT_00017884,0x5e);
      if (*(int *)((int)param_2 + 0xc) != 0) {
        *(int *)(puVar1 + 0xf2c) = *(int *)((int)param_2 + 0xc);
      }
      return 0;
    }
    uVar5 = 0x5a;
    iVar4 = DAT_00017894 + 0x17874;
    __format = (char *)((int)&DAT_00017878 + DAT_00017898);
  }
  printf(__format,iVar4 + 0x80,uVar5);
LAB_00017850:
  play_mp3_destroy_impl(param_1);
  return 0xffffffff;
}



/* ===== play_pcm_init @ 0001789c size=124 ===== */

undefined4 play_pcm_init(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = audio_calloc(1,0x414);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *puVar1 = 0;
  iVar3 = *(int *)((int)param_2 + 0xc);
  *(undefined8 *)(puVar1 + 0x404) = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(puVar1 + 0x40c) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(puVar1 + 0x410) = uVar2;
  *(undefined1 **)(param_1 + 0x20) = puVar1;
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = player_preprocess_seek(uVar2,iVar3 * 0x2ee00);
  return uVar2;
}



/* ===== play_pcm_process @ 00017918 size=120 ===== */

undefined4 play_pcm_process(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  (**(code **)(puVar2 + 0x40c))(*(undefined4 *)(puVar2 + 0x410),48000,0x10,2);
  *puVar2 = 1;
  do {
    iVar1 = (**(code **)(puVar2 + 0x404))(*(undefined4 *)(puVar2 + 0x410),puVar2 + 1,0x200);
    if (iVar1 == 0) {
      return 0;
    }
  } while ((iVar1 != -1) &&
          (iVar1 = (**(code **)(puVar2 + 0x408))(*(undefined4 *)(puVar2 + 0x410),puVar2 + 1,iVar1),
          iVar1 != -1));
  return 0xffffffff;
}



/* ===== play_pcm_get_post_state @ 00017990 size=12 ===== */

undefined1 play_pcm_get_post_state(int param_1)

{
  return **(undefined1 **)(param_1 + 0x20);
}



/* ===== play_pcm_destroy @ 0001799c size=16 ===== */

void play_pcm_destroy(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  audio_free();
  return;
}



/* ===== play_wav_check_impl @ 000179ac size=116 ===== */

undefined4 play_wav_check_impl(char *param_1)

{
  if (((((*param_1 == 'R') && (param_1[1] == 'I')) && (param_1[2] == 'F')) &&
      ((param_1[3] == 'F' && (param_1[8] == 'W')))) &&
     ((param_1[9] == 'A' && ((param_1[10] == 'V' && (param_1[0xb] == 'E')))))) {
    return 0;
  }
  return 1;
}



/* ===== play_wav_init_impl @ 00017a20 size=348 ===== */

undefined4 play_wav_init_impl(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int local_44 [2];
  int local_3c;
  ushort local_2e;
  int local_2c;
  ushort local_22;
  
  puVar1 = audio_calloc(1,0x414);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 1);
    pcVar7 = *(code **)param_2;
    *(undefined8 *)(puVar1 + 0x404) = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar1 + 0x40c) = uVar4;
    iVar5 = *(int *)((int)param_2 + 0xc);
    *(undefined4 *)(puVar1 + 0x410) = uVar2;
    *(undefined1 **)(param_1 + 0x20) = puVar1;
    iVar3 = (*pcVar7)(uVar2,local_44,0x2c);
    if (iVar3 == 0x2c) {
      if ((local_44[0] != 0x46464952) || (local_3c != 0x45564157)) {
        return 3;
      }
      uVar6 = (uint)(local_22 >> 3) * local_2c * (uint)local_2e;
      iVar3 = player_get_file_length(*(undefined4 *)(puVar1 + 0x410));
      uVar2 = FUN_0002bbc4(iVar3 + -0x2c,uVar6 / 1000);
      player_set_total_time(*(undefined4 *)(puVar1 + 0x410),uVar2);
      printf((char *)(DAT_00017b7c + 0x17b1c),DAT_00017b80 + 0x17b20,0x33,local_2c,(uint)local_2e,
             (uint)local_22);
      (**(code **)(puVar1 + 0x40c))(*(undefined4 *)(puVar1 + 0x410),local_2c,local_22,local_2e);
      *puVar1 = 1;
      if (iVar5 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = player_preprocess_seek(*(undefined4 *)(puVar1 + 0x410),uVar6 * iVar5 + 0x2c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== play_wav_process_impl @ 00017b84 size=92 ===== */

undefined4 play_wav_process_impl(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  do {
    iVar1 = (**(code **)(iVar2 + 0x404))(*(undefined4 *)(iVar2 + 0x410),iVar2 + 1,0x200);
    if (iVar1 + 1U < 2) {
      return 0;
    }
    iVar1 = (**(code **)(iVar2 + 0x408))(*(undefined4 *)(iVar2 + 0x410),iVar2 + 1,iVar1);
  } while (iVar1 != -1);
  return 2;
}



/* ===== play_wav_get_post_state_impl @ 00017be0 size=12 ===== */

undefined1 play_wav_get_post_state_impl(int param_1)

{
  return **(undefined1 **)(param_1 + 0x20);
}



/* ===== play_wav_destroy_impl @ 00017bec size=16 ===== */

void play_wav_destroy_impl(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  audio_free(*(undefined4 *)(param_1 + 0x20));
  return;
}



/* ===== preprocess_run @ 00017c00 size=1004 ===== */

void preprocess_run(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *extraout_r1;
  void *extraout_r1_00;
  int iVar6;
  char *__format;
  int iVar7;
  undefined4 uVar8;
  size_t __size;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_b0;
  code *local_ac;
  code *local_a8;
  code *local_a4;
  code *local_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined4 local_90;
  byte local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_60 [8];
  undefined8 local_58;
  byte local_50;
  undefined1 local_48;
  
  piVar9 = *(int **)(DAT_00017fec + 0x17c10 + DAT_00017ff0);
  if (*piVar9 == 0) {
    pvVar2 = audio_malloc(0x38);
    *piVar9 = (int)pvVar2;
  }
  iVar6 = DAT_00017ff4 + 0x17c40;
  __format = (char *)(DAT_00017ff8 + 0x17c4c);
  iVar7 = DAT_00017ffc + 0x17c58;
LAB_00017c70:
  do {
    while( true ) {
      while( true ) {
        while (iVar1 = audio_queue_receive(*param_1,local_98), iVar1 == -1) {
          printf((char *)(DAT_0001800c + 0x17e88),DAT_00018008 + 0x17e84,0x114);
        }
        local_b0 = param_1[0x18];
        local_ac = (code *)param_1[0x19];
        local_a8 = (code *)param_1[0x1a];
        local_a4 = (code *)param_1[0x1b];
        local_a0 = (code *)param_1[0x1c];
        uStack_9c = param_1[0x1d];
        if (local_b0 != 0) break;
        local_b0 = DAT_0001802c + 0x17f54;
        printf((char *)(DAT_00018028 + 0x17f50),DAT_00018024 + 0x17f4c,0x11d);
      }
      uVar8 = param_1[0x1e];
      uVar10 = param_1[0xd];
      puVar4 = (undefined4 *)*piVar9;
      *(undefined1 *)(puVar4 + 0xb) = 0;
      iVar1 = param_1[0x23];
      *puVar4 = uVar8;
      puVar4[1] = uVar10;
      uVar8 = 0;
      if (local_98[0] == 3) {
        uVar8 = local_84;
      }
      puVar4[0xc] = uVar8;
      if ((iVar1 != 0) && (local_a4 == (code *)0x0)) {
        param_1[0x23] = 0;
      }
      iVar1 = (*local_ac)(&local_b0);
      if (iVar1 == 0) break;
      printf((char *)(DAT_00018014 + 0x17ea4),DAT_00018010 + 0x17ea0,0x12f);
      param_1[0xc] = 3;
      if ((code *)param_1[0xe] != (code *)0x0) {
        (*(code *)param_1[0xe])(param_1,1,param_1[0xf]);
      }
    }
    __size = *(size_t *)(*piVar9 + 8);
    param_1[0x26] = *(undefined4 *)(*piVar9 + 0x34);
    pvVar2 = audio_malloc(__size);
    if (pvVar2 == (void *)0x0) {
      printf((char *)(DAT_0001801c + 0x17ee8),DAT_00018018 + 0x17ee4,0x13d,__size);
      param_1[0xc] = 3;
      if ((code *)param_1[0xe] != (code *)0x0) {
        (*(code *)param_1[0xe])(param_1,1,param_1[0xf]);
      }
    }
    else {
      pvVar5 = (void *)(uint)local_88;
      local_50 = local_88;
      local_58 = CONCAT44(*piVar9 + 0xc,local_90);
      local_48 = local_80;
      if (local_98[0] == 2) {
        audio_stream_start(param_1[3]);
        audio_queue_send(param_1[1],local_60);
        pvVar5 = extraout_r1;
      }
      else if (local_98[0] == 3) {
        audio_stream_resume(param_1[3]);
        pvVar5 = extraout_r1_00;
      }
      iVar1 = 0;
      do {
        while( true ) {
          iVar3 = audio_queue_is_empty(*param_1,pvVar5);
          if (iVar3 == 0) {
            iVar3 = audio_queue_receive(*param_1,local_98);
            if (iVar3 == -1) {
              printf((char *)(DAT_0001803c + 0x17fbc),DAT_00018038 + 0x17fb8,0x15f);
              audio_stream_stop(param_1[3]);
              audio_free(pvVar2);
              (*local_a0)(&local_b0);
              goto LAB_00017c70;
            }
            if (local_98[0] == 3) {
              *(undefined4 *)(*piVar9 + 0x30) = local_84;
              (*local_a4)(&local_b0);
              audio_stream_resume(param_1[3]);
            }
          }
          iVar3 = (*local_a8)(&local_b0,pvVar2,__size);
          if (iVar3 == -0x65) break;
          iVar1 = 0;
          if (iVar3 == 0) {
            printf((char *)(DAT_00018020 + 0x17f28),iVar7,0x182,0);
            audio_stream_finish(param_1[3]);
            goto LAB_00017dc4;
          }
          uVar11 = audio_stream_write(param_1[3],pvVar2,iVar3);
          pvVar5 = (void *)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == -1) goto LAB_00017dc4;
        }
        iVar1 = iVar1 + 1;
        if (param_1[0xc] == 3 || param_1[0xc] == 0) {
          printf((char *)(DAT_00018034 + 0x17f98),DAT_00018030 + 0x17f94,0x171);
          audio_stream_finish(param_1[3]);
          goto LAB_00017dc4;
        }
        pvVar5 = pvVar2;
      } while (iVar1 < 0x15);
      printf((char *)(DAT_00018004 + 0x17e20),DAT_00018000 + 0x17e1c,0x179);
      audio_stream_stop(param_1[3]);
LAB_00017dc4:
      audio_free(pvVar2);
    }
    (*local_a0)(&local_b0);
    printf(__format,iVar6,0x18c);
  } while( true );
}



/* ===== decoder_input @ 00018040 size=8 ===== */

void decoder_input(int param_1)

{
  audio_stream_read(*(undefined4 *)(param_1 + 0xc));
  return;
}



/* ===== playback_run @ 00018048 size=1888 ===== */

undefined4 playback_run(int param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  uint __n;
  int iVar5;
  void *__s;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  undefined2 *__s_00;
  uint uVar20;
  int iVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  uint local_94;
  code *local_8c;
  code *local_88;
  code *local_84;
  code *local_80;
  undefined4 local_7c;
  code *local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  char local_60;
  char local_58;
  
  local_8c = *(code **)(param_1 + 0x44);
  local_88 = *(code **)(param_1 + 0x48);
  local_84 = *(code **)(param_1 + 0x4c);
  local_80 = *(code **)(param_1 + 0x50);
  uVar20 = 0;
  iVar18 = DAT_00018488 + 0x18084;
  local_7c = *(undefined4 *)(param_1 + 0x54);
  local_78 = *(code **)(param_1 + 0x58);
  uStack_74 = *(undefined4 *)(param_1 + 0x5c);
  piVar19 = (int *)(DAT_0001848c + 0x18094);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar5 = audio_queue_receive(*(undefined4 *)(param_1 + 8),auStack_70);
              if (iVar5 == -1) {
                printf((char *)(DAT_000184a8 + 0x18418),DAT_000184a4 + 0x18420,0x3be);
                return 0;
              }
              if (local_58 == '\0') break;
              if (local_60 != '\0') {
                audio_semaphore_give(*(sem_t **)(param_1 + 0x20));
              }
            }
            puVar10 = (undefined8 *)(param_1 + 0x80);
            local_a0 = *(int *)(param_1 + 0x88);
            local_9c = *(undefined4 *)(param_1 + 0x40);
            bVar22 = *(int *)(param_1 + 0xa0) == 0;
            local_a8 = *puVar10;
            if (bVar22) {
              puVar10 = (undefined8 *)0x1;
            }
            local_94 = 0x1000;
            if (!bVar22) break;
            *(undefined8 **)(param_1 + 0x30) = puVar10;
          }
          printf((char *)(DAT_00018490 + 0x18118),iVar18,0x3d2);
          iVar5 = (*local_8c)(&local_8c,&local_a8);
          __n = local_94;
          if (iVar5 == 0) break;
          audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
          audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
          audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
          *(undefined4 *)(param_1 + 0x30) = 3;
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_1,6,*(undefined4 *)(param_1 + 0x3c));
          }
          audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
          printf((char *)(DAT_000184d4 + 0x1877c),DAT_000184d0 + 0x18784,0x3de);
        }
        iVar5 = (*local_88)(&local_8c);
        if (iVar5 == 0) break;
        printf((char *)(DAT_000184ac + 0x1843c),iVar18,999);
        audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
        audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
        audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x30) = 3;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(param_1,6,*(undefined4 *)(param_1 + 0x3c));
        }
        audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
      }
      __s = audio_malloc(__n << 1);
      fVar4 = DAT_00018484;
      if (__s != (void *)0x0) break;
      printf((char *)(DAT_000184d8 + 0x18794),iVar18,0x3f6);
      audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
      audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
      audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x30) = 3;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1,6,*(undefined4 *)(param_1 + 0x3c));
      }
      audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
      (*local_80)(&local_8c);
      (*local_78)(&local_8c);
    }
    uVar1 = __n >> 2;
    uVar11 = uVar1;
    if (0x3fff < __n) {
      uVar11 = 0x1000;
    }
    do {
      memset(__s,0,__n << 1);
      iVar5 = (*(int *)(param_1 + 0x80) * (local_a8._4_4_ >> 3)) / 500;
      if (*(int *)(param_1 + 0x8c) == 0) {
        uVar27 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x8c) * 1000;
        uVar27 = VectorShiftRight(CONCAT44(iVar8 * iVar5,iVar8 * iVar5),0x20);
      }
      bVar22 = true;
      *(int *)(param_1 + 0x90) = iVar8;
      iVar8 = (int)local_a8 * (local_a8._4_4_ >> 3);
      uVar26 = VectorShiftRight(CONCAT44(iVar5,iVar5),0x20);
      iVar5 = FUN_0002bc8c(local_a0 * iVar8 * 2,local_94,iVar8,iVar5,uVar27);
      puVar12 = (uint *)(DAT_00018494 + 0x1820c);
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar13 = *puVar12;
      while( true ) {
        pvVar6 = memset((void *)((int)__s + uVar13),0,__n);
        uVar13 = audio_stream_read(*(undefined4 *)(param_1 + 0x10),pvVar6,__n);
        if (uVar13 == 0xffffffff) break;
        if (uVar13 == 0) {
          uVar7 = 5;
          printf((char *)(DAT_000184cc + 0x18704),DAT_000184c8 + 0x18708,0x43c);
          audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
          goto LAB_000185e0;
        }
        if (bVar22) {
          uVar20 = 0x1000;
LAB_00018340:
          iVar8 = (int)__s + *piVar19;
          uVar17 = uVar1;
          if (uVar20 <= uVar1) {
            uVar17 = uVar20;
          }
          if (uVar17 != 0) {
            iVar14 = iVar8 + 2;
            iVar15 = iVar8;
            iVar21 = 0x1001 - uVar20;
            do {
              iVar16 = iVar15 + 4;
              fVar23 = (float)VectorSignedToFloat(iVar21,(byte)(in_fpscr >> 0x16) & 3);
              fVar23 = fVar23 * fVar4;
              fVar23 = fVar23 * fVar23;
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + -2),
                                                  (byte)(in_fpscr >> 0x16) & 3);
              *(short *)(iVar14 + -2) = (short)(int)(fVar24 * fVar23);
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 2),
                                                  (byte)(in_fpscr >> 0x16) & 3);
              *(short *)(iVar15 + 2) = (short)(int)(fVar24 * fVar23);
              iVar14 = iVar14 + 4;
              iVar15 = iVar16;
              iVar21 = iVar21 + 1;
            } while (iVar8 + uVar17 * 4 != iVar16);
          }
          uVar20 = uVar20 - uVar17;
        }
        else if (0 < (int)uVar20) goto LAB_00018340;
        if (*(int *)(param_1 + 0x30) == 1) {
LAB_000182cc:
          iVar8 = (uint)uVar27 + uVar13;
          iVar14 = (int)((ulonglong)uVar27 >> 0x20) + ((int)uVar13 >> 0x1f) +
                   (uint)CARRY4((uint)uVar27,uVar13);
          uVar27 = CONCAT44(iVar14,iVar8);
          uVar7 = FUN_0002bd88(iVar8,iVar14,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20),iVar8);
          iVar8 = *(int *)(DAT_0001849c + 0x18300);
          *(undefined4 *)(param_1 + 0x90) = uVar7;
          (*local_84)(&local_8c,(int)__s + iVar8,uVar13);
        }
        else if (*(int *)(param_1 + 0x30) == 2) {
          pvVar6 = __s;
          if (*(int *)(DAT_00018498 + 0x18284) == 0) {
            pvVar6 = (void *)((int)__s + __n);
          }
          memset(pvVar6,0,__n);
          while (iVar8 = audio_semaphore_try_take(*(sem_t **)(param_1 + 0x1c)), iVar8 != 0) {
            (*local_84)(&local_8c,pvVar6,__n);
          }
          if (*(int *)(param_1 + 0x30) != 4) goto LAB_000182cc;
          uVar7 = 6;
          goto LAB_000185e0;
        }
        if (uVar13 < __n) {
          uVar7 = 5;
          goto LAB_000185e0;
        }
        bVar22 = false;
        uVar13 = __n;
        if (*(uint *)(DAT_000184a0 + 0x18328) != 0) {
          uVar13 = 0;
        }
        *(uint *)(DAT_000184a0 + 0x18328) = uVar13;
      }
      uVar20 = 0x1000;
      printf((char *)(DAT_000184b4 + 0x184fc),DAT_000184b0 + 0x18504,0x420);
      uVar28 = ZEXT48(__s);
      __s_00 = (undefined2 *)((int)__s + *(int *)(DAT_000184b8 + 0x18510));
      if (*(int *)(DAT_000184b8 + 0x18510) == 0) {
        __s = (void *)((int)__s_00 + __n);
      }
      sVar2 = *(short *)((int)__s + ((__n & 0xfffffffe) - 4));
      sVar3 = *(short *)((int)__s + ((__n & 0xfffffffe) - 2));
      do {
        if ((0x3fff < __n) || (uVar13 = uVar1, uVar1 != 0)) {
          fVar23 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x16) & 3);
          uVar17 = 0;
          fVar24 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x16) & 3);
          puVar9 = __s_00;
          do {
            iVar8 = uVar20 - uVar17;
            uVar17 = uVar17 + 1;
            fVar25 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
            fVar25 = fVar25 * fVar4;
            fVar25 = fVar25 * fVar25;
            *puVar9 = (short)(int)(fVar25 * fVar23);
            puVar9[1] = (short)(int)(fVar25 * fVar24);
            puVar9 = puVar9 + 2;
            uVar13 = uVar11;
          } while (uVar17 < uVar11);
        }
        uVar20 = uVar20 - uVar13;
        (*local_84)(&local_8c,__s_00,__n);
        memset(__s_00,0,__n);
      } while (0 < (int)uVar20);
      __s = (void *)uVar28;
      uVar7 = 6;
LAB_000185e0:
      audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1,uVar7,*(undefined4 *)(param_1 + 0x3c));
      }
      audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
      pvVar6 = __s;
      if (*(int *)(DAT_000184bc + 0x18628) == 0) {
        pvVar6 = (void *)((int)__s + __n);
      }
      memset(pvVar6,0,__n);
      do {
        bVar22 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar22) goto LAB_00018670;
        (*local_84)(&local_8c,pvVar6,__n);
        iVar8 = audio_queue_is_empty(*(undefined4 *)(param_1 + 8));
      } while (iVar8 != 0);
      audio_queue_receive(*(undefined4 *)(param_1 + 8),auStack_70);
    } while (local_58 == '\0');
    if (local_60 != '\0') {
      audio_semaphore_give(*(sem_t **)(param_1 + 0x20));
    }
LAB_00018670:
    (*local_80)(&local_8c);
    (*local_78)(&local_8c);
    audio_free(__s);
    printf((char *)(DAT_000184c4 + 0x186ac),DAT_000184c0 + 0x186b4,0x4a3);
  } while( true );
}



/* ===== player_register_amrdec @ 00018800 size=40 ===== */

undefined4 player_register_amrdec(void)

{
  printf((char *)(DAT_0001882c + 0x18820),DAT_00018828 + 0x18834,0x6d);
  return 0xffffffff;
}



/* ===== player_register_apedec @ 00018830 size=8 ===== */

undefined4 player_register_apedec(void)

{
  return 0;
}



/* ===== player_register_diffdec @ 00018838 size=8 ===== */

undefined4 player_register_diffdec(void)

{
  return 0;
}



/* ===== player_register_dsfdec @ 00018840 size=8 ===== */

undefined4 player_register_dsfdec(void)

{
  return 0;
}



/* ===== player_list_decoder @ 00018848 size=152 ===== */

undefined4 player_list_decoder(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *__format;
  
  piVar2 = (int *)**(int **)(DAT_000188e0 + 0x18858 + DAT_000188e4);
  if (piVar2 == (int *)0x0) {
    printf((char *)(DAT_000188f4 + 0x188d4),DAT_000188f0 + 0x18908,0x94);
    uVar1 = 0xffffffff;
  }
  else {
    __format = (char *)(DAT_000188ec + 0x18884);
    iVar4 = DAT_000188e8 + 0x188b8;
    iVar3 = 0;
    do {
      printf(__format,iVar4,0x9c,iVar3,piVar2[2]);
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== player_register_decoder @ 000188f8 size=436 ===== */

void * player_register_decoder(char *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  void *__s;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  
  piVar8 = *(int **)(DAT_00018aac + 0x18908 + DAT_00018ab0);
  for (piVar7 = (int *)*piVar8; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
    iVar3 = strcmp(param_1,(char *)piVar7[2]);
    if (iVar3 == 0) {
      printf((char *)(DAT_00018ab8 + 0x18960),DAT_00018ab4 + 0x189a8,0xad,param_1);
      return (void *)0x0;
    }
  }
  puVar4 = audio_malloc(0x24);
  if (puVar4 == (undefined4 *)0x0) {
    printf((char *)(DAT_00018ad0 + 0x18aa8),DAT_00018acc + 0x18aec,0xb6,0x24);
  }
  else {
    sVar5 = strlen(param_1);
    __s = audio_malloc(sVar5 + 1);
    puVar4[2] = __s;
    if (__s != (void *)0x0) {
      sVar5 = strlen(param_1);
      memset(__s,0,sVar5 + 1);
      sVar5 = strlen(param_1);
      memcpy((void *)puVar4[2],param_1,sVar5);
      puVar6 = (undefined4 *)*piVar8;
      uVar9 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(puVar4 + 3) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(puVar4 + 5) = uVar9;
      if (puVar6 == (undefined4 *)0x0) {
        __s = (void *)0x0;
      }
      puVar4[7] = *(undefined4 *)(param_2 + 0x1c);
      uVar1 = *(undefined1 *)(param_2 + 4);
      *puVar4 = 0;
      puVar4[8] = 0;
      *(undefined1 *)(puVar4 + 1) = uVar1;
      if (puVar6 == (undefined4 *)0x0) {
        *piVar8 = (int)puVar4;
        return __s;
      }
      for (puVar2 = (undefined4 *)*puVar6; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        puVar6 = puVar2;
      }
      *puVar6 = puVar4;
      return (void *)0x0;
    }
    sVar5 = strlen(param_1);
    printf((char *)(DAT_00018ac0 + 0x18a58),DAT_00018abc + 0x18a94,0xbc,sVar5);
    audio_free(puVar4);
  }
  printf((char *)(DAT_00018ac8 + 0x18a84),(int)&DAT_00018ac4 + DAT_00018ac4,0xd8,param_1);
  return (void *)0xffffffff;
}



/* ===== player_init @ 00018ad4 size=252 ===== */

undefined4 player_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined1 uStack_4c;
  undefined3 uStack_4b;
  int local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uVar6 = 0;
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = DAT_00018bd0 + 0x18af0;
  uVar2 = *(undefined4 *)(iVar1 + DAT_00018bd4);
  uVar3 = *(undefined4 *)(iVar1 + DAT_00018bd8);
  uVar4 = *(undefined4 *)(iVar1 + DAT_00018bdc);
  local_70 = DAT_00018be4 + 0x18b28;
  uVar5 = *(undefined4 *)(iVar1 + DAT_00018be0);
  local_78 = 0;
  local_6c = CONCAT44(*(undefined4 *)(iVar1 + DAT_00018bec),*(undefined4 *)(iVar1 + DAT_00018be8));
  uStack_64 = CONCAT44(*(undefined4 *)(iVar1 + DAT_00018bf4),*(undefined4 *)(iVar1 + DAT_00018bf0));
  local_5c = *(undefined4 *)(iVar1 + DAT_00018bf8);
  uStack_74 = uVar7;
  uStack_58 = uVar7;
  player_register_decoder(local_70,&local_78);
  local_48 = DAT_00018bfc + 0x18ba4;
  _uStack_4c = CONCAT31((int3)((uint)uVar7 >> 8),1);
  local_50 = uVar6;
  uStack_44 = uVar8;
  local_40 = CONCAT44(uVar3,uVar2);
  uStack_38 = CONCAT44(uVar5,uVar4);
  uStack_30 = uVar7;
  player_register_decoder(local_48,&local_50);
  return 0;
}



/* ===== player_register_mp3dec @ 00018c00 size=136 ===== */

void player_register_mp3dec(void)

{
  player_register_decoder();
  return;
}



/* ===== player_unregister_decoder @ 00018ca4 size=200 ===== */

undefined4 player_unregister_decoder(char *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  piVar4 = *(int **)(DAT_00018d6c + 0x18cb4 + DAT_00018d70);
  piVar5 = (int *)*piVar4;
  pcVar6 = (char *)piVar5[2];
  iVar3 = strcmp(param_1,pcVar6);
  piVar2 = (int *)*piVar5;
  if (iVar3 == 0) {
    *piVar4 = *piVar5;
    audio_free(pcVar6);
    audio_free(piVar5);
    return 0;
  }
  do {
    piVar1 = piVar2;
    piVar4 = piVar5;
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00018d78 + 0x18d68),DAT_00018d74 + 0x18dc0,0xfa,param_1);
      return 0xffffffff;
    }
    pcVar6 = (char *)piVar1[2];
    iVar3 = strcmp(param_1,pcVar6);
    piVar5 = piVar1;
    piVar2 = (int *)*piVar1;
  } while (iVar3 != 0);
  *piVar4 = *piVar1;
  audio_free(pcVar6);
  audio_free(piVar1);
  return 0;
}



/* ===== player_audio_resample_init @ 00018d7c size=260 ===== */

void player_audio_resample_init(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = audio_malloc(0x200);
  iVar1 = DAT_00018e80;
  *(void **)(DAT_00018e80 + 0x18da8) = pvVar2;
  iVar3 = FUN_0002bc8c(param_2,param_1);
  pvVar2 = audio_malloc((iVar3 + 1) * 0x100);
  *(void **)(iVar1 + 0x18dac) = pvVar2;
  pvVar2 = audio_malloc(0x7cc);
  *(void **)(iVar1 + 0x18db0) = pvVar2;
  if ((*(void **)(iVar1 + 0x18da8) != (void *)0x0) &&
     (*(int *)(iVar1 + 0x18dac) != 0 && pvVar2 != (void *)0x0)) {
    memset(*(void **)(iVar1 + 0x18da8),0,0x100);
    iVar3 = SRCInit(pvVar2,param_1,param_2);
    if (iVar3 != 1) {
      printf((char *)(DAT_00018e90 + 0x18e6c),DAT_00018e8c + 0x18ee0,0x1b1,param_1,param_2);
      audio_free(*(undefined4 *)(iVar1 + 0x18db0));
      *(undefined4 *)(iVar1 + 0x18db0) = 0;
      return;
    }
    return;
  }
  printf((char *)(DAT_00018e88 + 0x18e10),(int)&DAT_00018e8c + DAT_00018e84,0x1a8);
  return;
}



/* ===== decoder_post @ 00018e94 size=168 ===== */

undefined4 decoder_post(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(int *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  if (iVar1 != 0 && iVar1 != param_2) {
    printf((char *)(DAT_00018f44 + 0x18f0c),DAT_00018f40 + 0x18f94,699,param_2,iVar1);
    player_audio_resample_init(param_2,*(undefined4 *)(param_1 + 0x9c));
    iVar1 = DAT_00018f48;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)((int)&DAT_00018f3c + iVar1) = 1;
    return 0;
  }
  *(undefined4 *)(DAT_00018f3c + 0x18ee8) = 0;
  return 0;
}



/* ===== player_audio_resample @ 00018f4c size=208 ===== */

uint player_audio_resample(int param_1,int param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = DAT_0001901c;
  iVar5 = *(int *)(DAT_0001901c + 0x18f70);
  if (((iVar5 != 0) && (iVar7 = *(int *)(DAT_0001901c + 0x18f74), iVar7 != 0)) &&
     (iVar8 = *(int *)(DAT_0001901c + 0x18f78), iVar8 != 0)) {
    uVar6 = 0;
    uVar4 = uVar6;
    while( true ) {
      __n = param_3;
      if (0xff < param_3) {
        __n = 0x100;
      }
      pvVar2 = memcpy((void *)(iVar5 + 0x100),(void *)(param_2 + uVar6),__n);
      uVar6 = uVar6 + __n;
      iVar5 = SRCFilter(iVar8,pvVar2,iVar7,(int)__n >> 1);
      uVar3 = audio_stream_write(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x18f74),
                                 iVar5 << 1);
      param_3 = param_3 - __n;
      uVar4 = uVar4 | uVar3;
      if (param_3 == 0) break;
      iVar5 = *(int *)(iVar1 + 0x18f70);
      iVar7 = *(int *)(iVar1 + 0x18f74);
      iVar8 = *(int *)(iVar1 + 0x18f78);
    }
    return uVar4;
  }
  uVar4 = audio_stream_write(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  return uVar4;
}



/* ===== decoder_output @ 00019020 size=752 ===== */

uint decoder_output(int param_1,void *param_2,uint param_3)

{
  size_t __n;
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  size_t __size;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_60;
  int local_58;
  undefined1 local_50;
  undefined1 local_48;
  
  iVar13 = *(int *)(param_1 + 0x84);
  iVar14 = *(int *)(param_1 + 0x88);
  fVar4 = DAT_00019318;
  fVar5 = DAT_0001931c;
  if (*(int *)(param_1 + 0xa4) == 0) {
    local_60 = DAT_00019310;
    local_50 = 0;
    local_48 = 0;
    local_58 = *(int *)(param_1 + 0xa4);
    audio_queue_send(*(undefined4 *)(param_1 + 8),&local_60);
    iVar7 = DAT_00019328;
    iVar6 = DAT_00019324;
    *(undefined4 *)(param_1 + 0xa4) = 1;
    printf((char *)(iVar7 + 0x1910c),iVar6 + 0x191ac,0x210);
    fVar4 = DAT_00019318;
    fVar5 = DAT_0001931c;
  }
  DAT_00019318 = fVar4;
  DAT_0001931c = fVar5;
  if (iVar14 == 1) {
    __size = param_3 * 2;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 7;
    }
    pvVar9 = audio_malloc(__size);
    __n = iVar13 >> 3;
    iVar13 = __size + __n * -2;
    if (*(int *)(param_1 + 0xac) == 0) {
      if (-1 < iVar13) {
        param_2 = (void *)((int)param_2 + (param_3 - __n));
        do {
          memcpy((void *)((int)pvVar9 + iVar13),param_2,__n);
          memcpy((void *)((int)pvVar9 + iVar13 + __n),param_2,__n);
          iVar13 = iVar13 + __n * -2;
          param_2 = (void *)((int)param_2 - __n);
        } while (-1 < iVar13);
      }
    }
    else if (-1 < iVar13) {
      psVar12 = (short *)((int)param_2 + (param_3 - __n));
      do {
        sVar3 = *psVar12;
        psVar12 = (short *)((int)psVar12 - __n);
        *(short *)((int)pvVar9 + iVar13) = sVar3;
        *(short *)((int)pvVar9 + iVar13 + __n) = -sVar3;
        iVar13 = iVar13 + __n * -2;
      } while (-1 < iVar13);
    }
  }
  else {
    pvVar9 = param_2;
    __size = param_3;
    if ((*(int *)(param_1 + 0xa8) == 1) && (param_3 >> 1 != 0)) {
      uVar8 = (param_3 >> 1) - 1;
      if (*(int *)(param_1 + 0xac) == 0) {
        iVar13 = (int)param_2 + 2;
        pvVar11 = param_2;
        do {
          uVar1 = *(ushort *)(iVar13 + -2);
          uVar2 = *(ushort *)((int)pvVar11 + 2);
          fVar16 = (float)VectorSignedToFloat((int)(short)uVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar15 = (float)VectorSignedToFloat((int)(short)uVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar17 = fVar16 + fVar15;
          if ((short)uVar1 < 1) {
            if ((short)(uVar2 & uVar1) < 0) {
              fVar17 = fVar17 + fVar16 * fVar15 * fVar4;
            }
          }
          else if (0 < (short)uVar2) {
            fVar17 = fVar17 - (fVar16 * fVar15) / fVar5;
          }
          pvVar10 = (void *)((int)pvVar11 + 4);
          *(short *)(iVar13 + -2) = (short)(int)fVar17;
          *(short *)((int)pvVar11 + 2) = (short)(int)fVar17;
          iVar13 = iVar13 + 4;
          pvVar11 = pvVar10;
        } while (pvVar10 != (void *)((int)param_2 + (uVar8 >> 1) * 4 + 4));
      }
      else {
        iVar13 = (int)param_2 + 2;
        pvVar11 = param_2;
        do {
          uVar1 = *(ushort *)(iVar13 + -2);
          uVar2 = *(ushort *)((int)pvVar11 + 2);
          fVar15 = (float)VectorSignedToFloat((int)(short)uVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar16 = (float)VectorSignedToFloat((int)(short)uVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar17 = fVar16 + fVar15;
          if ((short)uVar1 < 1) {
            if ((short)(uVar1 & uVar2) < 0) {
              fVar17 = fVar17 + fVar16 * fVar15 * fVar4;
            }
          }
          else if (0 < (short)uVar2) {
            fVar17 = fVar17 - (fVar16 * fVar15) / fVar5;
          }
          pvVar10 = (void *)((int)pvVar11 + 4);
          *(short *)(iVar13 + -2) = (short)(int)fVar17;
          *(short *)((int)pvVar11 + 2) = -(short)(int)fVar17;
          iVar13 = iVar13 + 4;
          pvVar11 = pvVar10;
        } while ((void *)((int)param_2 + (uVar8 >> 1) * 4 + 4) != pvVar10);
      }
    }
  }
  if (*(int *)(DAT_00019320 + 0x19080) == 0) {
    uVar8 = audio_stream_write(*(undefined4 *)(param_1 + 0x10),pvVar9);
  }
  else {
    uVar8 = player_audio_resample(param_1,pvVar9,__size);
  }
  if (iVar14 == 1) {
    audio_free(pvVar9);
  }
  if (-1 < (int)uVar8) {
    uVar8 = param_3;
  }
  return uVar8;
}



/* ===== player_audio_resample_deinit @ 0001932c size=104 ===== */

void player_audio_resample_deinit(void)

{
  int iVar1;
  
  iVar1 = DAT_00019394;
  if (*(int *)(DAT_00019394 + 0x19340) != 0) {
    audio_free();
    *(undefined4 *)(iVar1 + 0x19340) = 0;
  }
  iVar1 = DAT_00019398;
  if (*(int *)(DAT_00019398 + 0x19364) != 0) {
    audio_free();
    *(undefined4 *)(iVar1 + 0x19364) = 0;
  }
  iVar1 = DAT_0001939c;
  if (*(int *)(DAT_0001939c + 0x19388) == 0) {
    return;
  }
  audio_free();
  *(undefined4 *)(iVar1 + 0x19388) = 0;
  return;
}



/* ===== player_get_target_and_seek @ 000193a0 size=40 ===== */

undefined4 player_get_target_and_seek(void)

{
  printf((char *)(DAT_000193cc + 0x193c0),DAT_000193c8 + 0x19470,0x289);
  return 0;
}



/* ===== player_set_seek @ 000193d0 size=28 ===== */

void player_set_seek(void)

{
  printf((char *)(DAT_000193f0 + 0x193e8),DAT_000193ec + 0x194bc,0x299);
  return;
}



/* ===== player_create @ 000193f4 size=564 ===== */

undefined4 * player_create(undefined4 *param_1)

{
  int iVar1;
  undefined4 *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_28;
  undefined4 *local_24;
  
  iVar11 = DAT_00019628;
  __s = audio_calloc(1,0xb0);
  iVar11 = iVar11 + 0x19418;
  if (__s != (undefined4 *)0x0) {
    memset(__s,0,0xb0);
    uVar2 = audio_queue_create(1,0x38);
    *__s = uVar2;
    uVar2 = audio_queue_create(1,0x38);
    __s[1] = uVar2;
    uVar2 = audio_queue_create(1,0x38);
    __s[2] = uVar2;
    uVar2 = audio_stream_create(param_1[9]);
    __s[3] = uVar2;
    uVar2 = audio_stream_create(param_1[10]);
    __s[4] = uVar2;
    uVar2 = audio_mutex_create();
    __s[6] = uVar2;
    uVar2 = audio_mutex_create();
    __s[5] = uVar2;
    uVar2 = audio_semaphore_create();
    __s[7] = uVar2;
    uVar2 = audio_semaphore_create();
    uVar3 = param_1[0xe];
    uVar5 = param_1[0x12];
    __s[0xd] = *param_1;
    uVar6 = param_1[1];
    iVar12 = param_1[0xf];
    __s[0xe] = uVar3;
    __s[0xf] = uVar5;
    __s[0x10] = uVar6;
    bVar13 = iVar12 != 0;
    if (!bVar13) {
      iVar12 = 48000;
    }
    __s[8] = uVar2;
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    uVar5 = param_1[5];
    __s[0x11] = param_1[2];
    __s[0x12] = uVar2;
    __s[0x13] = uVar3;
    __s[0x14] = uVar5;
    uVar2 = param_1[7];
    uVar3 = param_1[8];
    __s[0x15] = param_1[6];
    __s[0x16] = uVar2;
    __s[0x17] = uVar3;
    iVar1 = DAT_0001962c;
    if ((bVar13) && (iVar12 == -1)) {
      iVar12 = 0;
    }
    iVar7 = param_1[0x11];
    iVar9 = param_1[0xb];
    iVar10 = param_1[0xc];
    iVar8 = param_1[0xd];
    uVar4 = (uint)(iVar7 == 1);
    if (param_1[0x10] == 1) {
      uVar4 = 1;
    }
    __s[0x27] = iVar12;
    __s[0x2b] = (uint)(iVar7 == 1);
    __s[0xc] = 0;
    if (uVar4 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    __s[0x2a] = uVar2;
    local_28 = *(undefined4 *)(iVar11 + iVar1);
    if (iVar9 == 0) {
      iVar9 = 0x1000;
    }
    if (iVar10 == 0) {
      iVar10 = 0x3000;
    }
    if (iVar8 == 0) {
      iVar8 = 0x800;
    }
    local_24 = __s;
    uVar2 = audio_thread_create(DAT_00019630 + 0x19560,iVar9,0xe,&local_28);
    iVar12 = DAT_00019634;
    __s[9] = uVar2;
    local_28 = *(undefined4 *)(iVar11 + iVar12);
    local_24 = __s;
    uVar2 = audio_thread_create(DAT_00019638 + 0x19588,iVar10,0xe,&local_28);
    iVar12 = DAT_0001963c;
    __s[10] = uVar2;
    local_28 = *(undefined4 *)(iVar11 + iVar12);
    local_24 = __s;
    uVar2 = audio_thread_create(DAT_00019640 + 0x195b4,iVar8,0xe,&local_28);
    iVar11 = DAT_00019644 + 0x196b8;
    __s[0xb] = uVar2;
    printf((char *)(DAT_00019648 + 0x195e8),iVar11,0x4ed,__s[0x10],iVar9,iVar10,iVar8);
    return __s;
  }
  printf((char *)(DAT_00019650 + 0x1961c),DAT_0001964c + 0x196fc,0x4f1);
  return (undefined4 *)0x0;
}



/* ===== player_set_speed @ 00019654 size=28 ===== */

void player_set_speed(void)

{
  printf((char *)(DAT_00019674 + 0x1966c),DAT_00019670 + 0x19760,0x506);
  return;
}



/* ===== player_preprocess_seek @ 00019678 size=88 ===== */

undefined4 player_preprocess_seek(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_48 [5];
  undefined4 local_34;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    local_48[0] = 3;
    local_34 = param_2;
    iVar1 = audio_queue_send(*param_1,local_48);
    if (iVar1 == 0) {
      audio_stream_reset(param_1[3]);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== decoder_run @ 000196d0 size=1328 ===== */

undefined4 decoder_run(int param_1)

{
  int iVar1;
  int iVar2;
  void *__dest;
  char *pcVar3;
  int iVar4;
  char *__format;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 local_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  code *local_74;
  code *local_70;
  code *local_6c;
  code *local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  char *local_54;
  
  iVar12 = DAT_00019c00 + 0x196ec;
  piVar13 = *(int **)(iVar12 + DAT_00019c04);
  if (*piVar13 == 0) {
    puVar10 = audio_calloc(1,0x14);
    iVar5 = DAT_00019c64;
    iVar1 = DAT_00019c60;
    *piVar13 = (int)puVar10;
    iVar7 = DAT_00019c68;
    *puVar10 = *(undefined4 *)(iVar12 + iVar1);
    puVar10[1] = *(undefined4 *)(iVar12 + iVar5);
    uVar6 = *(undefined4 *)(iVar12 + iVar7);
    puVar10[4] = param_1;
    puVar10[2] = uVar6;
  }
  iVar1 = DAT_00019c08;
  iVar5 = DAT_00019c0c + 0x19824;
  __format = (char *)(DAT_00019c14 + 0x19724);
  iVar7 = DAT_00019c10 + 0x19828;
  do {
    while( true ) {
      while( true ) {
        iVar2 = audio_queue_receive(*(undefined4 *)(param_1 + 4),auStack_60);
        if (iVar2 == -1) {
          printf((char *)(DAT_00019c48 + 0x1999c),DAT_00019c44 + 0x19aa0,0x2e9);
          return 0;
        }
        __dest = audio_malloc(0x400);
        if (__dest != (void *)0x0) break;
        printf((char *)(DAT_00019c30 + 0x198ec),DAT_00019c2c + 0x199f0,0x2f0,0x400);
      }
      iVar2 = decoder_input(param_1,__dest,0x400);
      if (iVar2 == 0x400) break;
      uVar6 = 0x2f5;
      iVar2 = DAT_00019c18 + 0x19780;
      pcVar3 = (char *)(DAT_00019c1c + 0x19784);
LAB_00019780:
      printf(pcVar3,iVar2 + 0x10c,uVar6);
      audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
      audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x30) = 3;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1,2,*(undefined4 *)(param_1 + 0x3c));
      }
      audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
      audio_free(__dest);
    }
    iVar2 = check_ID3V2_tag(__dest);
    if (iVar2 != 0) {
      iVar8 = iVar2 + 10;
      if (iVar8 < 0x400) {
        memcpy(__dest,(void *)((int)__dest + iVar8),0x400 - iVar8);
        if (iVar8 == 0) goto LAB_00019808;
      }
      else {
        for (iVar2 = iVar2 + -0x3f6; iVar2 != 0; iVar2 = iVar2 - iVar4) {
          iVar8 = iVar2;
          if (0x3ff < iVar2) {
            iVar8 = 0x400;
          }
          iVar4 = decoder_input(param_1,__dest,iVar8);
          if (iVar4 != iVar8) {
            uVar6 = 0x30c;
            iVar2 = DAT_00019c3c + 0x1997c;
            pcVar3 = (char *)(DAT_00019c40 + 0x19980);
            goto LAB_00019780;
          }
        }
        iVar8 = 0x400;
      }
      iVar2 = decoder_input(param_1,__dest,iVar8);
      if (iVar2 != iVar8) {
        uVar6 = 0x31c;
        iVar2 = DAT_00019c34 + 0x19924;
        pcVar3 = (char *)(DAT_00019c38 + 0x19928);
        goto LAB_00019780;
      }
    }
LAB_00019808:
    piVar11 = *(int **)(iVar12 + DAT_00019c20);
    for (piVar9 = (int *)*piVar11; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
      if (((code *)piVar9[3] != (code *)0x0) &&
         (iVar2 = (*(code *)piVar9[3])(__dest,0x400), iVar2 == 0)) {
        local_84 = *piVar9;
        local_80 = piVar9[1];
        uStack_7c = piVar9[2];
        uStack_78 = piVar9[3];
        local_74 = (code *)piVar9[4];
        local_70 = (code *)piVar9[5];
        local_6c = (code *)piVar9[6];
        local_68 = (code *)piVar9[7];
        local_64 = piVar9[8];
        printf(__format,iVar5,0x32c,piVar9[2]);
        audio_free(__dest);
        goto LAB_000199e8;
      }
    }
    audio_free(__dest);
    pcVar3 = local_54;
    puVar10 = (undefined4 *)*piVar11;
    if (puVar10 == (undefined4 *)0x0) {
LAB_00019af0:
      uVar6 = 0x347;
      iVar2 = DAT_00019c50 + 0x19b04;
      pcVar3 = (char *)(DAT_00019c54 + 0x19b08);
LAB_00019b04:
      printf(pcVar3,iVar2 + 0x10c,uVar6);
      audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
      audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x30) = 3;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1,2,*(undefined4 *)(param_1 + 0x3c));
      }
      audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
    }
    else {
LAB_00019870:
      iVar2 = strcasecmp(pcVar3,(char *)puVar10[2]);
      if (iVar2 != 0) break;
      local_84 = *puVar10;
      local_80 = puVar10[1];
      uStack_7c = puVar10[2];
      uStack_78 = puVar10[3];
      local_74 = (code *)puVar10[4];
      local_70 = (code *)puVar10[5];
      local_6c = (code *)puVar10[6];
      local_68 = (code *)puVar10[7];
      local_64 = puVar10[8];
      printf((char *)(DAT_00019c28 + 0x198c4),DAT_00019c24 + 0x199ac,0x33e,puVar10[2]);
LAB_000199e8:
      if ((*(int *)(param_1 + 0x8c) != 0) && ((local_80 & 0xff) == 0)) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      player_preprocess_seek(param_1,0);
      *(undefined4 *)(*piVar13 + 0xc) = *(undefined4 *)(param_1 + 0x8c);
      iVar2 = (*local_74)(&local_84);
      if (iVar2 != 0) {
        uVar6 = 0x35b;
        iVar2 = DAT_00019c58 + 0x19bc0;
        pcVar3 = (char *)(DAT_00019c5c + 0x19bc4);
        goto LAB_00019b04;
      }
      audio_stream_start(*(undefined4 *)(param_1 + 0x10));
      iVar2 = (*local_70)(&local_84);
      if (iVar2 - 1U < 3) {
        printf((char *)(DAT_00019c4c + 0x19a64),iVar7,0x36c,iVar2);
        audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
        audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
        iVar2 = (*local_6c)(&local_84);
        if ((iVar2 == 0) || (*(int *)(param_1 + 0xa4) == 0)) {
          audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
          *(undefined4 *)(param_1 + 0x30) = 3;
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_1,2,*(undefined4 *)(param_1 + 0x3c));
          }
LAB_00019ac0:
          audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
        }
      }
      else {
        audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
        audio_stream_finish(*(undefined4 *)(param_1 + 0x10));
        iVar2 = (*local_6c)(&local_84);
        if ((iVar2 == 0) || (*(int *)(param_1 + 0xa4) == 0)) {
          audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
          *(undefined4 *)(param_1 + 0x30) = 3;
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_1,5,*(undefined4 *)(param_1 + 0x3c));
          }
          goto LAB_00019ac0;
        }
      }
      (*local_68)(&local_84);
      if (*(int *)(iVar1 + 0x19720) != 0) {
        *(undefined4 *)(iVar1 + 0x19720) = 0;
        player_audio_resample_deinit();
      }
    }
  } while( true );
  puVar10 = (undefined4 *)*puVar10;
  if (puVar10 == (undefined4 *)0x0) goto LAB_00019af0;
  goto LAB_00019870;
}



/* ===== player_get_state @ 00019c6c size=36 ===== */

undefined4 player_get_state(int param_1)

{
  undefined4 uVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
  return uVar1;
}



/* ===== player_get_cur_time @ 00019c90 size=24 ===== */

uint player_get_cur_time(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x94);
  if (uVar1 == 0 || *(uint *)(param_1 + 0x90) <= uVar1) {
    uVar1 = *(uint *)(param_1 + 0x90);
  }
  return uVar1;
}



/* ===== player_get_target @ 00019ca8 size=84 ===== */

int player_get_target(int param_1,void *param_2)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  
  __s = *(char **)(param_1 + 0x78);
  if (__s != (char *)0x0 && param_2 != (void *)0x0) {
    sVar1 = strlen(__s);
    memcpy(param_2,__s,sVar1 + 1);
  }
  iVar2 = player_get_cur_time(param_1);
  return iVar2 / 1000;
}



/* ===== player_get_file_length @ 00019cfc size=8 ===== */

undefined4 player_get_file_length(int param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



/* ===== player_set_total_time @ 00019d04 size=8 ===== */

void player_set_total_time(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}



/* ===== player_get_total_time @ 00019d0c size=8 ===== */

undefined4 player_get_total_time(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}



/* ===== player_stop @ 00019d14 size=232 ===== */

undefined4 player_stop(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    audio_stream_stop(*(undefined4 *)(param_1 + 0xc));
    audio_stream_stop(*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x30) == 2) {
      *(undefined4 *)(param_1 + 0x30) = 4;
      audio_semaphore_give(*(sem_t **)(param_1 + 0x1c));
    }
    audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
    iVar3 = *(int *)(param_1 + 0xa0);
    iVar1 = DAT_00019dfc;
    iVar2 = DAT_00019e00;
    while ((DAT_00019dfc = iVar1, DAT_00019e00 = iVar2, iVar3 != 0 &&
           (*(int *)(param_1 + 0x30) != 3 && *(int *)(param_1 + 0x30) != 0))) {
      audio_sleep(10);
      iVar3 = *(int *)(param_1 + 0xa0);
      iVar1 = DAT_00019dfc;
      iVar2 = DAT_00019e00;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    printf((char *)(iVar2 + 0x19d8c),iVar1 + 0x19e98,0x597);
    return 0;
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
  printf((char *)(DAT_00019e08 + 0x19de0),DAT_00019e04 + 0x19ef0,0x59d);
  return 0;
}



/* ===== player_play @ 00019e0c size=472 ===== */

undefined4 player_play(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  size_t sVar2;
  void *__dest;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_40;
  undefined1 local_38;
  
  audio_mutex_lock((pthread_mutex_t *)param_1[5]);
  if (param_1[0xc] == 1) {
    player_stop(param_1);
  }
  iVar8 = param_2[0xf];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar9 = param_2[8];
  param_1[0x18] = param_2[2];
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  uVar3 = param_2[7];
  uVar4 = param_2[0xb];
  uVar5 = param_2[9];
  param_1[0x1c] = param_2[6];
  param_1[0x1d] = uVar3;
  uVar3 = param_2[10];
  local_4c = 0;
  param_1[0x20] = uVar9;
  param_1[0x21] = uVar5;
  param_1[0x22] = uVar3;
  param_1[0x28] = (uint)(iVar8 == 0);
  param_1[0x23] = uVar4;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 2;
  if ((param_1[0x1f] != 0) && (param_1[0x1e] != 0)) {
    audio_free();
    param_1[0x1e] = 0;
  }
  bVar1 = *(byte *)(param_2 + 1);
  pcVar6 = (char *)*param_2;
  param_1[0x1f] = (uint)bVar1;
  if (bVar1 == 0) {
    param_1[0x1e] = pcVar6;
  }
  else {
    sVar2 = strlen(pcVar6);
    __dest = audio_malloc(sVar2 + 1);
    param_1[0x1e] = __dest;
    if (__dest == (void *)0x0) {
      printf((char *)(DAT_00019ff0 + 0x19fd8),DAT_00019fec + 0x1a0f8,0x52f);
      return 0xffffffff;
    }
    pcVar6 = (char *)*param_2;
    sVar2 = strlen(pcVar6);
    memcpy(__dest,pcVar6,sVar2 + 1);
    pcVar6 = (char *)param_1[0x1e];
  }
  iVar8 = 2000;
  printf((char *)(DAT_00019fe8 + 0x19efc),DAT_00019fe4 + 0x1a014,0x539,pcVar6,param_1[0x23]);
  audio_queue_send(*param_1,&local_50);
  do {
    uVar7 = param_1[0xc];
    if ((uVar7 & 0xfffffffd) == 1) goto LAB_00019f2c;
    audio_sleep(10);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar7 = param_1[0xc];
LAB_00019f2c:
  if ((uVar7 == 1) && (param_1[0x28] == 0)) {
    audio_stream_resume(param_1[3]);
    player_stop(param_1);
  }
  audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
  return 0;
}



/* ===== player_device_stop @ 00019ff4 size=120 ===== */

undefined4 player_device_stop(int param_1,int param_2)

{
  undefined1 auStack_48 [16];
  undefined1 local_38;
  undefined1 local_30;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x30) == 1) {
    player_stop(param_1);
  }
  local_30 = 1;
  if (param_2 == 0) {
    local_38 = 0;
    audio_queue_send(*(undefined4 *)(param_1 + 8),auStack_48);
  }
  else {
    local_38 = 1;
    audio_queue_send(*(undefined4 *)(param_1 + 8),auStack_48);
    audio_semaphore_take(*(sem_t **)(param_1 + 0x20));
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== player_pause @ 0001a06c size=48 ===== */

undefined4 player_pause(int param_1)

{
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x30) == 1) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
  return 0;
}



/* ===== player_resume @ 0001a09c size=64 ===== */

undefined4 player_resume(int param_1)

{
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x30) == 2) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    audio_semaphore_give(*(sem_t **)(param_1 + 0x1c));
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
  return 0;
}



/* ===== player_wait_idle @ 0001a0dc size=72 ===== */

undefined4 player_wait_idle(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x18));
    (**(code **)(param_1 + 0x38))
              (param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c));
    audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x18));
    return 0;
  }
  return 0;
}



/* ===== player_close @ 0001a124 size=100 ===== */

undefined4 player_close(int param_1)

{
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  code *local_20;
  undefined4 local_1c;
  code *local_18;
  undefined4 uStack_14;
  
  local_2c = *(undefined4 *)(param_1 + 0x44);
  uStack_28 = *(undefined4 *)(param_1 + 0x48);
  uStack_24 = *(undefined4 *)(param_1 + 0x4c);
  local_20 = *(code **)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(code **)(param_1 + 0x58);
  uStack_14 = *(undefined4 *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x30) != 0) {
    player_stop(param_1);
  }
  (*local_20)(&local_2c);
  (*local_18)(&local_2c);
  return 0;
}



/* ===== player_destroy @ 0001a188 size=308 ===== */

void player_destroy(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  code *local_20;
  undefined4 local_1c;
  code *local_18;
  undefined4 uStack_14;
  
  local_2c = param_1[0x11];
  uStack_28 = param_1[0x12];
  uStack_24 = param_1[0x13];
  local_20 = (code *)param_1[0x14];
  iVar1 = DAT_0001a2bc + 0x1a1bc;
  local_1c = param_1[0x15];
  local_18 = (code *)param_1[0x16];
  uStack_14 = param_1[0x17];
  if (param_1[0xc] != 0) {
    player_stop(param_1);
  }
  (*local_20)(&local_2c);
  (*local_18)(&local_2c);
  audio_queue_destroy(*param_1);
  audio_queue_destroy(param_1[1]);
  audio_queue_destroy(param_1[2]);
  audio_stream_destroy(param_1[3]);
  audio_stream_destroy(param_1[4]);
  audio_mutex_destroy(param_1[6]);
  audio_mutex_destroy(param_1[5]);
  audio_semaphore_destroy(param_1[7]);
  audio_semaphore_destroy(param_1[8]);
  audio_thread_exit(param_1[9]);
  audio_thread_exit(param_1[10]);
  audio_thread_exit(param_1[0xb]);
  if ((param_1[0x1f] != 0) && (param_1[0x1e] != 0)) {
    audio_free();
    param_1[0x1e] = 0;
  }
  piVar2 = *(int **)(iVar1 + DAT_0001a2c0);
  if (*piVar2 != 0) {
    audio_free();
    *piVar2 = 0;
  }
  piVar2 = *(int **)(iVar1 + DAT_0001a2c4);
  if (*piVar2 != 0) {
    audio_free();
    *piVar2 = 0;
  }
  audio_free(param_1);
  return;
}



/* ===== player_deinit @ 0001a2c8 size=72 ===== */

void player_deinit(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(DAT_0001a310 + 0x1a2d8 + DAT_0001a314);
  puVar2 = (undefined4 *)*puVar3;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  do {
    uVar1 = puVar2[2];
    *puVar3 = *puVar2;
    audio_free(uVar1);
    audio_free(puVar2);
    puVar2 = (undefined4 *)*puVar3;
  } while (puVar2 != (undefined4 *)0x0);
  return;
}



/* ===== check_ID3V2_tag @ 0001a318 size=112 ===== */

uint check_ID3V2_tag(char *param_1)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,(char *)(DAT_0001a388 + 0x1a32c),3);
  if (iVar1 != 0) {
    return 0;
  }
  if (3 < (byte)param_1[4]) {
    return 0;
  }
  return ((byte)param_1[6] & 0x7f) << 0x15 | ((byte)param_1[7] & 0x7f) << 0xe |
         (byte)param_1[9] & 0x7f | ((byte)param_1[8] & 0x7f) << 7;
}



/* ===== check_native_audio_type @ 0001a38c size=76 ===== */

undefined4 check_native_audio_type(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    strcpy(param_2,pcVar1 + 1);
    return 0;
  }
  printf((char *)(DAT_0001a3dc + 0x1a3d0),DAT_0001a3d8 + 0x1a3cc,0xd);
  return 0xffffffff;
}



/* ===== wav_header_init @ 0001a3e0 size=160 ===== */

undefined4 wav_header_init(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar4 = (undefined4 *)(DAT_0001a480 + 0x1a3f8);
  *(short *)((int)param_1 + 0x16) = (short)param_4;
  iVar3 = param_3 * param_4;
  puVar5 = (undefined4 *)(DAT_0001a484 + 0x1a40c);
  *param_1 = *puVar4;
  iVar6 = param_3 * param_2 * param_4;
  puVar4 = (undefined4 *)(DAT_0001a488 + 0x1a420);
  param_1[2] = *puVar5;
  iVar1 = DAT_0001a48c;
  uVar2 = *puVar4;
  param_1[6] = param_2;
  param_1[3] = uVar2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 7;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1a43c);
  *(short *)((int)param_1 + 0x22) = (short)param_3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  param_1[9] = uVar2;
  param_1[4] = 0x10;
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[7] = iVar6 >> 3;
  *(short *)(param_1 + 8) = (short)(iVar3 >> 3);
  return 0;
}



/* ===== wav_header_complete @ 0001a490 size=56 ===== */

void wav_header_complete(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x22) * param_2 * (uint)*(ushort *)(param_1 + 0x16);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *(int *)(param_1 + 0x28) = iVar1 >> 3;
  *(int *)(param_1 + 4) = (iVar1 >> 3) + 0x24;
  return;
}



/* ===== audio_queue_create @ 0001a4c8 size=516 ===== */

int * audio_queue_create(int param_1,size_t param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = audio_calloc(1,0x2c);
  if (piVar2 != (int *)0x0) {
    iVar4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piVar6 = piVar2 + 1;
    iVar5 = 0;
    *piVar6 = 0;
    piVar2[2] = iVar4;
    piVar2[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar2[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar2[5] = 0;
    piVar2[6] = iVar4;
    piVar2[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar2[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar2[8] = 0;
    piVar2[9] = iVar4;
    *piVar2 = (int)piVar6;
    piVar2[3] = param_1;
    piVar2[2] = param_2;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[10] = 0;
    if (param_1 == 0) {
      iVar4 = audio_mutex_create();
      piVar2[7] = iVar4;
      if (iVar4 == 0) {
        printf((char *)(DAT_0001a6f8 + 0x1a6c8),DAT_0001a6f4 + 0x1a6c4,0x2a);
      }
      else {
        iVar4 = audio_semaphore_create();
        piVar2[8] = iVar4;
        if (iVar4 == 0) {
          printf((char *)(DAT_0001a6e0 + 0x1a664),DAT_0001a6dc + 0x1a660,0x2a);
        }
        else {
          iVar4 = audio_semaphore_create();
          piVar2[9] = iVar4;
          if (iVar4 != 0) {
            return piVar2;
          }
          printf((char *)(DAT_0001a6f0 + 0x1a6ac),DAT_0001a6ec + 0x1a6a8,0x2a);
        }
      }
    }
    else {
      do {
        pvVar3 = audio_calloc(1,param_2);
        piVar6[iVar5] = (int)pvVar3;
        piVar6 = (int *)*piVar2;
        piVar1 = piVar6 + iVar5;
        iVar5 = iVar5 + 1;
        if (*piVar1 == 0) goto LAB_0001a560;
      } while (iVar5 != param_1);
      iVar4 = audio_mutex_create();
      piVar2[7] = iVar4;
      if (iVar4 == 0) {
LAB_0001a560:
        printf((char *)(DAT_0001a6d0 + 0x1a578),DAT_0001a6cc + 0x1a574,0x2a);
      }
      else {
        iVar4 = audio_semaphore_create();
        piVar2[8] = iVar4;
        if (iVar4 == 0) {
          printf((char *)(DAT_0001a6e8 + 0x1a680),DAT_0001a6e4 + 0x1a67c,0x2a);
        }
        else {
          iVar4 = audio_semaphore_create();
          piVar2[9] = iVar4;
          if (iVar4 != 0) {
            return piVar2;
          }
          printf((char *)(DAT_0001a6d8 + 0x1a628),DAT_0001a6d4 + 0x1a624,0x2a);
        }
      }
      iVar4 = 0;
      do {
        iVar5 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        if (*(int *)(*piVar2 + iVar5) != 0) {
          audio_free();
        }
      } while (iVar4 != param_1);
    }
    if (piVar2[7] != 0) {
      audio_mutex_destroy();
    }
    if (piVar2[8] != 0) {
      audio_semaphore_destroy();
    }
    if (piVar2[9] != 0) {
      audio_semaphore_destroy();
    }
    audio_free(piVar2);
  }
  return (int *)0x0;
}



/* ===== audio_queue_send @ 0001a6fc size=196 ===== */

undefined4 audio_queue_send(int *param_1,void *param_2)

{
  int extraout_r1;
  
  while( true ) {
    audio_mutex_lock((pthread_mutex_t *)param_1[7]);
    if ((param_1[10] & 4U) != 0) {
      audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
      return 0xffffffff;
    }
    if (param_1[4] != param_1[3]) break;
    param_1[10] = param_1[10] | 2;
    audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
    audio_semaphore_take((sem_t *)param_1[9]);
  }
  memcpy(*(void **)(*param_1 + param_1[5] * 4),param_2,param_1[2]);
  param_1[4] = param_1[4] + 1;
  FUN_0002bc6c(param_1[5] + 1,param_1[3]);
  param_1[5] = extraout_r1;
  if ((param_1[10] & 1U) != 0) {
    param_1[10] = param_1[10] & 0xfffffffe;
    audio_semaphore_give((sem_t *)param_1[8]);
  }
  audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
  return 0;
}



/* ===== audio_queue_send_font @ 0001a7c0 size=8 ===== */

undefined4 audio_queue_send_font(void)

{
  return 0;
}



/* ===== audio_queue_receive @ 0001a7c8 size=280 ===== */

undefined4 audio_queue_receive(int *param_1,void *param_2)

{
  int extraout_r1;
  uint uVar1;
  int iVar2;
  
  while( true ) {
    audio_mutex_lock((pthread_mutex_t *)param_1[7]);
    uVar1 = param_1[10];
    if ((uVar1 & 4) != 0) {
      printf((char *)(DAT_0001a8e4 + 0x1a834),DAT_0001a8e0 + 0x1a840,0x6a);
      audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
      return 0xffffffff;
    }
    if (param_1[4] != 0) break;
    if ((uVar1 & 8) != 0) {
      param_1[10] = uVar1 & 0xfffffff7;
      audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
      printf((char *)(DAT_0001a8ec + 0x1a8c4),DAT_0001a8e8 + 0x1a8d0,0x76);
      return 0;
    }
    param_1[10] = uVar1 | 1;
    audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
    audio_semaphore_take((sem_t *)param_1[8]);
  }
  iVar2 = param_1[6];
  param_1[6] = iVar2 + 1;
  memcpy(param_2,*(void **)(*param_1 + iVar2 * 4),param_1[2]);
  param_1[4] = param_1[4] + -1;
  FUN_0002bc6c(param_1[6],param_1[3]);
  param_1[6] = extraout_r1;
  if ((param_1[10] & 2U) != 0) {
    param_1[10] = param_1[10] & 0xfffffffd;
    audio_semaphore_give((sem_t *)param_1[9]);
  }
  audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
  return 0;
}



/* ===== audio_queue_receive_back @ 0001a8f0 size=8 ===== */

undefined4 audio_queue_receive_back(void)

{
  return 0;
}



/* ===== audio_queue_stop @ 0001a8f8 size=32 ===== */

undefined4 audio_queue_stop(int param_1)

{
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x1c));
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x1c));
  return 0;
}



/* ===== audio_queue_is_full @ 0001a918 size=48 ===== */

bool audio_queue_is_full(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x1c));
  return uVar1 <= uVar2;
}



/* ===== audio_queue_is_empty @ 0001a948 size=44 ===== */

bool audio_queue_is_empty(int param_1)

{
  int iVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x1c));
  iVar1 = *(int *)(param_1 + 0x10);
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x1c));
  return iVar1 == 0;
}



/* ===== audio_queue_finish @ 0001a974 size=76 ===== */

undefined4 audio_queue_finish(int param_1)

{
  uint uVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x28) = uVar1 | 8;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar1 & 0xfffffffe | 8;
    audio_semaphore_give(*(sem_t **)(param_1 + 0x20));
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x1c));
  return 0;
}



/* ===== audio_queue_peek @ 0001a9c0 size=76 ===== */

undefined4 audio_queue_peek(int *param_1,void *param_2)

{
  audio_mutex_lock((pthread_mutex_t *)param_1[7]);
  if (param_1[4] != 0) {
    memcpy(param_2,*(void **)(*param_1 + param_1[6] * 4),param_1[2]);
  }
  audio_mutex_unlock((pthread_mutex_t *)param_1[7]);
  return 0;
}



/* ===== audio_queue_destroy @ 0001aa0c size=84 ===== */

void audio_queue_destroy(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  audio_mutex_destroy(param_1[7]);
  audio_semaphore_destroy(param_1[8]);
  audio_semaphore_destroy(param_1[9]);
  while( true ) {
    iVar1 = param_1[3];
    iVar2 = iVar1 + -1;
    param_1[3] = iVar2;
    if (iVar1 == 0) break;
    audio_free(*(undefined4 *)(*param_1 + iVar2 * 4));
  }
  audio_free(param_1);
  return;
}



/* ===== audio_stream_create @ 0001aa60 size=244 ===== */

int * audio_stream_create(size_t param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = audio_calloc(1,0x24);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *piVar1 = 0;
  piVar1[1] = iVar3;
  piVar1[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar1[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar1[4] = 0;
  piVar1[5] = iVar3;
  piVar1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar1[7] = 0;
  piVar1[8] = iVar3;
  piVar1[1] = param_1;
  pvVar2 = audio_calloc(1,param_1);
  *piVar1 = (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    iVar3 = audio_mutex_create();
    piVar1[5] = iVar3;
    if (iVar3 != 0) {
      iVar3 = audio_semaphore_create();
      piVar1[6] = iVar3;
      if (iVar3 != 0) {
        iVar3 = audio_semaphore_create();
        piVar1[7] = iVar3;
        if (iVar3 != 0) {
          return piVar1;
        }
      }
    }
  }
  printf((char *)(DAT_0001ab58 + 0x1ab00),DAT_0001ab54 + 0x1aafc,0x1e);
  if (*piVar1 != 0) {
    audio_free();
  }
  if (piVar1[5] != 0) {
    audio_mutex_destroy();
  }
  if (piVar1[6] != 0) {
    audio_semaphore_destroy();
  }
  if (piVar1[7] != 0) {
    audio_semaphore_destroy();
  }
  audio_free(piVar1);
  return (int *)0x0;
}



/* ===== audio_stream_start @ 0001ab5c size=60 ===== */

undefined4 audio_stream_start(int param_1)

{
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== audio_stream_read @ 0001ab98 size=356 ===== */

int audio_stream_read(int *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar2;
  uint __n;
  uint uVar3;
  int iVar4;
  uint __n_00;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  do {
    while( true ) {
      audio_mutex_lock((pthread_mutex_t *)param_1[5]);
      uVar2 = param_1[8];
      if ((uVar2 & 8) != 0) {
        audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        return -1;
      }
      uVar3 = param_1[1];
      iVar1 = param_1[3];
      __n_00 = param_1[2];
      __n = uVar3 - iVar1;
      if (uVar3 < uVar3 - iVar1) {
        __n = uVar3;
      }
      if (param_3 <= __n) {
        __n = param_3;
      }
      if (__n <= __n_00) break;
      if ((uVar2 & 0x10) != 0) {
        if (__n_00 != 0) {
          memcpy(param_2,(void *)(*param_1 + iVar1),__n_00);
          param_1[2] = param_1[2] - __n_00;
          FUN_0002bc6c(__n_00 + param_1[3],uVar3);
          param_1[3] = extraout_r1_00;
          audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
          return iVar4 + __n_00;
        }
        audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        return iVar4;
      }
      param_1[8] = uVar2 | 2;
      audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
      audio_semaphore_take((sem_t *)param_1[6]);
    }
    param_3 = param_3 - __n;
    iVar4 = iVar4 + __n;
    memcpy(param_2,(void *)(*param_1 + iVar1),__n);
    param_1[2] = param_1[2] - __n;
    param_2 = (void *)((int)param_2 + __n);
    FUN_0002bc6c(__n + param_1[3],uVar3);
    param_1[3] = extraout_r1;
    if ((param_1[8] & 4U) != 0) {
      param_1[8] = param_1[8] & 0xfffffffb;
      audio_semaphore_give((sem_t *)param_1[7]);
    }
    audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
  } while (param_3 != 0);
  return iVar4;
}



/* ===== audio_stream_read2 @ 0001acfc size=8 ===== */

undefined4 audio_stream_read2(void)

{
  return 0;
}



/* ===== audio_stream_write @ 0001ad04 size=308 ===== */

uint audio_stream_write(int *param_1,void *param_2,uint param_3)

{
  int extraout_r1;
  uint uVar1;
  uint __n;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar3 = 0;
    uVar2 = param_3;
LAB_0001ad20:
    do {
      audio_mutex_lock((pthread_mutex_t *)param_1[5]);
      uVar1 = param_1[8];
      if ((uVar1 & 0x21) != 1) {
LAB_0001ae18:
        audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        return 0;
      }
      if ((uVar1 & 8) != 0) {
        audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        return 0xffffffff;
      }
      if ((uVar1 & 0x10) != 0) goto LAB_0001ae18;
      uVar4 = param_1[1];
      __n = uVar4 - param_1[4];
      if (uVar4 < __n) {
        __n = uVar4;
      }
      if (uVar2 < __n) {
        __n = uVar2;
      }
      if (__n <= uVar4 - param_1[2]) {
        uVar2 = uVar2 - __n;
        uVar3 = uVar3 + __n;
        memcpy((void *)(*param_1 + param_1[4]),param_2,__n);
        param_1[2] = param_1[2] + __n;
        FUN_0002bc6c(__n + param_1[4],uVar4);
        param_1[4] = extraout_r1;
        if ((param_1[8] & 2U) != 0) {
          param_1[8] = param_1[8] & 0xfffffffd;
          audio_semaphore_give((sem_t *)param_1[6]);
        }
        audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
        param_2 = (void *)((int)param_2 + __n);
        if (uVar2 == 0) {
          return uVar3;
        }
        goto LAB_0001ad20;
      }
      param_1[8] = uVar1 | 4;
      audio_mutex_unlock((pthread_mutex_t *)param_1[5]);
      audio_semaphore_take((sem_t *)param_1[7]);
    } while ((param_1[8] & 0x20U) == 0);
  }
  return param_3;
}



/* ===== audio_stream_write2 @ 0001ae38 size=8 ===== */

undefined4 audio_stream_write2(void)

{
  return 0;
}



/* ===== audio_stream_finish @ 0001ae40 size=76 ===== */

undefined4 audio_stream_finish(int param_1)

{
  uint uVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 2) == 0) {
    *(uint *)(param_1 + 0x20) = uVar1 | 0x10;
  }
  else {
    *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffffd | 0x10;
    audio_semaphore_give(*(sem_t **)(param_1 + 0x18));
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== audio_stream_stop @ 0001ae8c size=124 ===== */

undefined4 audio_stream_stop(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) == 0) {
      uVar2 = uVar1 | 8;
      *(uint *)(param_1 + 0x20) = uVar2;
    }
    else {
      *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffffb | 8;
      audio_semaphore_give(*(sem_t **)(param_1 + 0x1c));
      uVar2 = *(uint *)(param_1 + 0x20);
      uVar1 = uVar2;
    }
    if ((uVar1 & 2) != 0) {
      *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffffd;
      audio_semaphore_give(*(sem_t **)(param_1 + 0x18));
    }
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== audio_stream_stop2 @ 0001af08 size=8 ===== */

undefined4 audio_stream_stop2(void)

{
  return 0;
}



/* ===== audio_stream_resume @ 0001af10 size=48 ===== */

undefined4 audio_stream_resume(int param_1)

{
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  if ((*(uint *)(param_1 + 0x20) & 0x20) != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== audio_stream_reset @ 0001af40 size=100 ===== */

undefined4 audio_stream_reset(int param_1)

{
  uint uVar1;
  
  audio_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x14));
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 0x10) != 0) {
    uVar1 = uVar1 & 0xffffffef;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0x20) = uVar1 | 0x20;
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffffb | 0x20;
    audio_semaphore_give(*(sem_t **)(param_1 + 0x1c));
  }
  audio_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x14));
  return 0;
}



/* ===== audio_stream_destroy @ 0001afa4 size=56 ===== */

void audio_stream_destroy(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  audio_mutex_destroy(param_1[5]);
  audio_semaphore_destroy(param_1[6]);
  audio_semaphore_destroy(param_1[7]);
  audio_free(*param_1);
  audio_free(param_1);
  return;
}



/* ===== pcmout_open_impl @ 0001afdc size=120 ===== */

int pcmout_open_impl(undefined4 param_1,int param_2)

{
  FILE *pFVar1;
  char *__filename;
  int *piVar2;
  
  __filename = *(char **)(param_2 + 0xc);
  piVar2 = (int *)(DAT_0001b054 + 0x1aff4);
  pFVar1 = (FILE *)*piVar2;
  if (pFVar1 == (FILE *)0x0) {
    pFVar1 = fopen(__filename,(char *)(DAT_0001b064 + 0x1b048));
    __filename = *(char **)(param_2 + 0xc);
    *piVar2 = (int)pFVar1;
  }
  printf((char *)(DAT_0001b05c + 0x1b018),DAT_0001b058 + 0x1b014,0x11,__filename,pFVar1);
  return -(uint)(*(int *)(DAT_0001b060 + 0x1b024) == 0);
}



/* ===== pcmout_start_impl @ 0001b068 size=8 ===== */

undefined4 pcmout_start_impl(void)

{
  return 0;
}



/* ===== pcmout_write_impl @ 0001b070 size=48 ===== */

size_t pcmout_write_impl(undefined4 param_1,void *param_2,size_t param_3)

{
  if (*(FILE **)(DAT_0001b0a0 + 0x1b080) != (FILE *)0x0) {
    fwrite(param_2,1,param_3,*(FILE **)(DAT_0001b0a0 + 0x1b080));
  }
  return param_3;
}



/* ===== pcmout_stop_impl @ 0001b0a4 size=8 ===== */

undefined4 pcmout_stop_impl(void)

{
  return 0;
}



/* ===== pcmout_abort_impl @ 0001b0ac size=8 ===== */

undefined4 pcmout_abort_impl(void)

{
  return 0;
}



/* ===== pcmout_close_impl @ 0001b0b4 size=72 ===== */

void pcmout_close_impl(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_0001b0fc + 0x1b0c4);
  if (*piVar1 == 0) {
    return;
  }
  printf((char *)(DAT_0001b104 + 0x1b0e8),DAT_0001b100 + 0x1b0f4,0x34);
  fclose((FILE *)*piVar1);
  *piVar1 = 0;
  return;
}



/* ===== audio_thread_create @ 0001b108 size=92 ===== */

pthread_t audio_thread_create(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                             undefined4 *param_4)

{
  int iVar1;
  pthread_t local_c;
  
  iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,(__start_routine *)*param_4,
                         (void *)param_4[1]);
  if (iVar1 != 0) {
    printf((char *)(DAT_0001b168 + 0x1b15c),DAT_0001b164 + 0x1b158,0xf,param_1);
    local_c = 0;
  }
  return local_c;
}



/* ===== audio_thread_exit @ 0001b16c size=20 ===== */

void audio_thread_exit(undefined4 param_1)

{
  (*(code *)PTR_pthread_join_00048250)(param_1,0);
  return;
}



/* ===== audio_semaphore_create @ 0001b174 size=72 ===== */

sem_t * audio_semaphore_create(void)

{
  sem_t *__sem;
  
  __sem = malloc(0x10);
  if (__sem == (sem_t *)0x0) {
    printf((char *)(DAT_0001b1c0 + 0x1b1b8),audio_semaphore_take + DAT_0001b1bc,0x21);
  }
  else {
    sem_init(__sem,0,1);
  }
  return __sem;
}



/* ===== audio_semaphore_take @ 0001b1c4 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_take(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_0004809c)(__sem);
  return iVar1;
}



/* ===== audio_semaphore_try_take @ 0001b1c8 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_try_take(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_trywait_0004814c)(__sem);
  return iVar1;
}



/* ===== audio_semaphore_give @ 0001b1cc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_semaphore_give(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_000480a4)(__sem);
  return iVar1;
}



/* ===== audio_semaphore_destroy @ 0001b1d0 size=4 ===== */

void audio_semaphore_destroy(void)

{
  (*(code *)PTR_free_00048268)();
  return;
}



/* ===== audio_mutex_create @ 0001b1d4 size=68 ===== */

pthread_mutex_t * audio_mutex_create(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = malloc(0x18);
  if (__mutex == (pthread_mutex_t *)0x0) {
    printf((char *)(DAT_0001b21c + 0x1b214),DAT_0001b218 + 0x1b238,0x42);
  }
  else {
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  }
  return __mutex;
}



/* ===== audio_mutex_lock @ 0001b220 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000481fc)(__mutex);
  return iVar1;
}



/* ===== audio_mutex_unlock @ 0001b224 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00048194)(__mutex);
  return iVar1;
}



/* ===== audio_mutex_destroy @ 0001b228 size=24 ===== */

void audio_mutex_destroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}



/* ===== audio_timer_create @ 0001b240 size=8 ===== */

undefined4 audio_timer_create(void)

{
  return 0;
}



/* ===== audio_timer_control @ 0001b248 size=8 ===== */

undefined4 audio_timer_control(void)

{
  return 0;
}



/* ===== audio_timer_start @ 0001b250 size=8 ===== */

undefined4 audio_timer_start(void)

{
  return 0;
}



/* ===== audio_timer_stop @ 0001b258 size=8 ===== */

undefined4 audio_timer_stop(void)

{
  return 0;
}



/* ===== audio_timer_delete @ 0001b260 size=8 ===== */

undefined4 audio_timer_delete(void)

{
  return 0;
}



/* ===== audio_malloc @ 0001b268 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00048094)(__size);
  return pvVar1;
}



/* ===== audio_free @ 0001b26c size=4 ===== */

void audio_free(void)

{
  (*(code *)PTR_free_00048268)();
  return;
}



/* ===== audio_free_uncache @ 0001b270 size=4 ===== */

void audio_free_uncache(void)

{
  (*(code *)PTR_free_00048268)();
  return;
}



/* ===== audio_calloc @ 0001b274 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_000480e0)(__nmemb);
  return pvVar1;
}



/* ===== audio_realloc @ 0001b278 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004813c)(__ptr);
  return pvVar1;
}



/* ===== audio_malloc_uncache @ 0001b27c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * audio_malloc_uncache(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00048094)(__size);
  return pvVar1;
}



/* ===== audio_device_open @ 0001b280 size=8 ===== */

undefined4 audio_device_open(void)

{
  return 0;
}



/* ===== audio_device_control @ 0001b288 size=8 ===== */

undefined4 audio_device_control(void)

{
  return 0;
}



/* ===== audio_device_close @ 0001b290 size=8 ===== */

undefined4 audio_device_close(void)

{
  return 0;
}



/* ===== audio_device_write @ 0001b298 size=8 ===== */

undefined4 audio_device_write(void)

{
  return 0;
}



/* ===== audio_device_read @ 0001b2a0 size=8 ===== */

undefined4 audio_device_read(void)

{
  return 0;
}



/* ===== audio_device_set_vol @ 0001b2a8 size=8 ===== */

undefined4 audio_device_set_vol(void)

{
  return 0;
}



/* ===== audio_device_get_vol @ 0001b2b0 size=8 ===== */

undefined4 audio_device_get_vol(void)

{
  return 0;
}



/* ===== audio_device_set_gain @ 0001b2b8 size=4 ===== */

void audio_device_set_gain(void)

{
  return;
}



/* ===== audio_device_get_gain @ 0001b2bc size=8 ===== */

undefined4 audio_device_get_gain(void)

{
  return 0;
}



/* ===== audio_open_dsp @ 0001b2c4 size=4 ===== */

void audio_open_dsp(void)

{
  return;
}



/* ===== audio_ctrl_dsp @ 0001b2c8 size=8 ===== */

undefined4 audio_ctrl_dsp(void)

{
  return 0xffffffff;
}



/* ===== audio_close_dsp @ 0001b2d0 size=4 ===== */

void audio_close_dsp(void)

{
  return;
}



/* ===== audio_sleep @ 0001b2d4 size=24 ===== */

void audio_sleep(int param_1)

{
  (*(code *)PTR_usleep_00048060)(param_1 * 1000);
  return;
}



/* ===== audio_cache_ops @ 0001b2e0 size=4 ===== */

void audio_cache_ops(void)

{
  return;
}



/* ===== audio_fopen @ 0001b2e4 size=260 ===== */

FILE * audio_fopen(char *param_1,char *param_2)

{
  char *pcVar1;
  FILE *pFVar2;
  
  pcVar1 = strchr(param_2,0x2b);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strchr(param_2,0x72);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strchr(param_2,0x77);
      if (pcVar1 == (char *)0x0) {
        return (FILE *)0x0;
      }
      pFVar2 = fopen(param_1,(char *)(DAT_0001b3f8 + 0x1b398));
      if (pFVar2 == (FILE *)0x0) {
        printf((char *)(DAT_0001b400 + 0x1b3bc),(int)&DAT_0001b3f4 + DAT_0001b3fc,0xf3);
        return (FILE *)0x0;
      }
    }
    else {
      pFVar2 = fopen(param_1,(char *)(DAT_0001b3ec + 0x1b348));
      if (pFVar2 == (FILE *)0x0) {
        printf((char *)(DAT_0001b3f4 + 0x1b36c),DAT_0001b3f0 + 0x1b3a4,0xea);
        return (FILE *)0x0;
      }
    }
  }
  else {
    pFVar2 = fopen(param_1,(char *)(DAT_0001b3e8 + 0x1b314));
    if (pFVar2 == (FILE *)0x0) {
      printf((char *)(DAT_0001b408 + 0x1b3e0),DAT_0001b404 + 0x1b418,0xe1);
      return (FILE *)0x0;
    }
  }
  return pFVar2;
}



/* ===== audio_fread @ 0001b40c size=88 ===== */

size_t audio_fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  if (param_1 == (void *)0x0 || (param_2 == 0 || param_3 == 0)) {
    printf((char *)(DAT_0001b468 + 0x1b44c),DAT_0001b464 + 0x1b490,0x100);
    return 0;
  }
  sVar1 = fread(param_1,param_2,param_3,param_4);
  if (sVar1 == 0xffffffff) {
    sVar1 = 0;
  }
  return sVar1;
}



/* ===== audio_fwrite @ 0001b46c size=96 ===== */

size_t audio_fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  if (param_1 != (void *)0x0 && (param_2 != 0 && param_3 != 0)) {
    sVar1 = fwrite(param_1,param_2,param_3,param_4);
    if (sVar1 != param_3) {
      param_3 = 0;
    }
    return param_3;
  }
  printf((char *)(DAT_0001b4d0 + 0x1b4ac),DAT_0001b4cc + 0x1b4fc,0x111);
  return 0;
}



/* ===== audio_fclose @ 0001b4d4 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int audio_fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00048174)(__stream);
  return iVar1;
}



/* ===== audio_fsync @ 0001b4d8 size=8 ===== */

undefined4 audio_fsync(void)

{
  return 0;
}



/* ===== audio_fstat @ 0001b4e0 size=36 ===== */

__off_t audio_fstat(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  if (iVar1 != 0) {
    sStack_60.st_size = 0;
  }
  return sStack_60.st_size;
}



/* ===== audio_ftell @ 0001b504 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long audio_ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0004816c)(__stream);
  return lVar1;
}



/* ===== audio_fseek @ 0001b508 size=16 ===== */

uint audio_fseek(FILE *param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = fseek(param_1,param_2,param_3);
  return uVar1 | (int)uVar1 >> 0x1f;
}



/* ===== capture_device_open_impl @ 0001b518 size=8 ===== */

undefined4 capture_device_open_impl(void)

{
  return 0;
}



/* ===== capture_device_start_impl @ 0001b520 size=8 ===== */

undefined4 capture_device_start_impl(void)

{
  return 0;
}



/* ===== capture_set_volume @ 0001b528 size=8 ===== */

undefined4 capture_set_volume(void)

{
  return 0;
}



/* ===== capture_device_read_impl @ 0001b530 size=8 ===== */

undefined4 capture_device_read_impl(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



/* ===== capture_device_stop_impl @ 0001b538 size=8 ===== */

undefined4 capture_device_stop_impl(void)

{
  return 0;
}



/* ===== capture_device_abort_impl @ 0001b540 size=8 ===== */

undefined4 capture_device_abort_impl(void)

{
  return 0;
}



/* ===== capture_device_close_impl @ 0001b548 size=8 ===== */

undefined4 capture_device_close_impl(void)

{
  return 0;
}



/* ===== playback_device_open_impl @ 0001b550 size=8 ===== */

undefined4 playback_device_open_impl(void)

{
  return 0;
}



/* ===== playback_device_start_impl @ 0001b558 size=8 ===== */

undefined4 playback_device_start_impl(void)

{
  return 0;
}



/* ===== playback_set_volume @ 0001b560 size=8 ===== */

undefined4 playback_set_volume(void)

{
  return 0;
}



/* ===== playback_device_write_impl @ 0001b568 size=8 ===== */

undefined4 playback_device_write_impl(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



/* ===== playback_device_stop_impl @ 0001b570 size=8 ===== */

undefined4 playback_device_stop_impl(void)

{
  return 0;
}



/* ===== playback_device_abort_impl @ 0001b578 size=8 ===== */

undefined4 playback_device_abort_impl(void)

{
  return 0;
}



/* ===== playback_device_close_impl @ 0001b580 size=4 ===== */

void playback_device_close_impl(void)

{
  return;
}



/* ===== SRCInit @ 0001b588 size=1144 ===== */

undefined4 SRCInit(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  
  uVar4 = DAT_0001b958;
  *(undefined2 *)(param_1 + 0x7c6) = 0;
  *(undefined2 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7bc) = uVar4;
  puVar5 = (undefined *)FUN_0002bbc4(param_3 << 0x10);
  iVar8 = DAT_0001b97c;
  if (puVar5 == (undefined *)0x17384) {
    psVar13 = (short *)(DAT_0001b97c + 0x1b84c);
    uVar1 = *(ushort *)(DAT_0001b97c + 0x1b850);
    iVar10 = (int)(short)uVar1;
    *(int *)(param_1 + 0xc) = DAT_0001b97c + 0x1b852;
    sVar2 = *psVar13;
    *(ushort *)(param_1 + 0x7c4) = uVar1;
    sVar3 = *(short *)(iVar8 + 0x1b84e);
    puVar6 = memset((void *)(param_1 + 0x1c),0,0x200);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x18) = sVar2 * iVar10;
    *(int *)(param_1 + 0x10) = iVar10 * sVar3;
    if (iVar10 < 1) {
      return 1;
    }
    uVar9 = (uint)uVar1;
    if (iVar10 == 1) {
      iVar8 = 0;
      goto LAB_0001b694;
    }
  }
  else {
    if (puVar5 < (undefined *)0x17385) {
      if (puVar5 == (undefined *)0xaaaa) {
        uVar11 = 0x1a;
        uVar9 = 0xd;
        uVar12 = 0x27;
        *(int *)(param_1 + 0xc) = DAT_0001b9a0 + 0x1c09a;
      }
      else if (puVar5 < (undefined *)0xaaab) {
        if (puVar5 == (undefined *)0x5ce1) {
          uVar11 = 0x215;
          uVar9 = 0xd;
          uVar12 = 0x5bd;
          *(int *)(param_1 + 0xc) = DAT_0001b994 + 0x1b9e6;
        }
        else if (puVar5 == (undefined *)0x8000) {
          uVar9 = 0xd;
          uVar12 = 0x1a;
          *(int *)(param_1 + 0xc) = DAT_0001b998 + 0x1b9e6;
          uVar11 = uVar9;
        }
        else {
          if (puVar5 != (undefined *)0x5555) {
            return 0;
          }
          uVar9 = 0xd;
          uVar12 = 0x186;
          *(int *)(param_1 + 0xc) = DAT_0001b978 + 0x1bc7e;
          uVar11 = 0x82;
        }
      }
      else if (puVar5 == (undefined *)0xeb33) {
        uVar9 = 0xd;
        uVar12 = 0x145;
        *(int *)(param_1 + 0xc) = DAT_0001b98c + 0x1b502;
        uVar11 = 299;
      }
      else if (puVar5 < (undefined *)0xeb34) {
        if (puVar5 != (undefined *)0xb9c2) {
          return 0;
        }
        uVar9 = 0xd;
        uVar12 = 0x8f;
        *(int *)(param_1 + 0xc) = DAT_0001b974 + 0x1bda2;
        uVar11 = 0x68;
      }
      else if (puVar5 == (undefined *)0x116a3) {
        uVar9 = 0xd;
        uVar12 = 0x249;
        *(int *)(param_1 + 0xc) = DAT_0001b990 + 0x1c622;
        uVar11 = 0x27d;
      }
      else {
        if (puVar5 != (undefined *)0x160cc) {
          return 0;
        }
        uVar9 = 0xd;
        uVar12 = 0x111;
        *(int *)(param_1 + 0xc) = DAT_0001b96c + 0x1b08e;
        uVar11 = 0x179;
      }
    }
    else if (puVar5 == (undefined *)0x30000) {
      uVar9 = 0xd;
      uVar12 = 0xd;
      *(int *)(param_1 + 0xc) = DAT_0001b980 + 0x1bdce;
      uVar11 = 0x27;
    }
    else if (puVar5 < (undefined *)0x30001) {
      if (puVar5 == (undefined *)0x20000) {
        uVar9 = 0xd;
        *(int *)(param_1 + 0xc) = DAT_0001b984 + 0x1be3e;
        uVar11 = 0x1a;
        uVar12 = uVar9;
      }
      else if (puVar5 < (undefined *)0x20001) {
        if (puVar5 != (undefined *)0x18000) {
          return 0;
        }
        uVar9 = 0x33;
        *(int *)(param_1 + 0xc) = DAT_0001b964 + 0x1c296;
        uVar11 = 0x99;
        uVar12 = 0x66;
      }
      else if (puVar5 == (undefined *)0x22d47) {
        uVar9 = 0xd;
        *(int *)(param_1 + 0xc) = DAT_0001b988 + 0x1be6a;
        uVar11 = 0x319;
        uVar12 = 0x16c;
      }
      else {
        if (puVar5 != &UNK_0002c199) {
          return 0;
        }
        uVar9 = 0xd;
        *(int *)(param_1 + 0xc) = DAT_0001b960 + 0x1a91a;
        uVar11 = 0x2f2;
        uVar12 = 0x111;
      }
    }
    else if (puVar5 == (undefined *)0x45a8e) {
      uVar9 = 0xd;
      uVar12 = 0xb6;
      *(int *)(param_1 + 0xc) = DAT_0001b9a4 + 0x1b926;
      uVar11 = 0x319;
    }
    else if (puVar5 < (undefined *)0x45a8f) {
      if (puVar5 != (undefined *)0x40000) {
        return 0;
      }
      uVar9 = 0xd;
      uVar12 = 0xd;
      *(int *)(param_1 + 0xc) = DAT_0001b970 + 0x1aa5e;
      uVar11 = 0x34;
    }
    else if (puVar5 == (undefined *)0x58333) {
      uVar9 = 0xd;
      uVar12 = 0x111;
      *(int *)(param_1 + 0xc) = DAT_0001b99c + 0x1c0b2;
      uVar11 = 0x5e4;
    }
    else {
      if (puVar5 != (undefined *)0x60000) {
        return 0;
      }
      uVar9 = 0xd;
      uVar12 = 0xd;
      *(int *)(param_1 + 0xc) = DAT_0001b968 + 0x1b57e;
      uVar11 = 0x4e;
    }
    *(short *)(param_1 + 0x7c4) = (short)uVar9;
    puVar6 = memset((void *)(param_1 + 0x1c),0,0x200);
    *(uint *)(param_1 + 0x10) = uVar12;
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    *(uint *)(param_1 + 0x18) = uVar11;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  puVar7 = puVar6 + (uVar9 >> 1) * 4;
  do {
    *puVar6 = 0;
    puVar6[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar6[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puVar6[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar6 = puVar6 + 4;
  } while (puVar7 != puVar6);
  iVar8 = (int)(short)((ushort)uVar9 & 0xfffe);
  if ((uVar9 & 0xfffe) == uVar9) {
    return 1;
  }
LAB_0001b694:
  *(undefined8 *)(param_1 + iVar8 * 8 + 0x1c) = 0;
  return 1;
}



/* ===== SRCFilterStereo @ 0001ba54 size=616 ===== */

void SRCFilterStereo(int param_1,int param_2,int param_3,undefined2 *param_4,undefined2 *param_5,
                    int param_6,int *param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  short *psVar16;
  short sVar17;
  short *psVar18;
  bool bVar19;
  int local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
  
  memcpy((void *)(param_2 + *(short *)(param_1 + 0x7c4) * -4),(void *)(param_1 + 0x1c),
         *(short *)(param_1 + 0x7c4) * 4);
  iVar5 = 1;
  iVar7 = -4;
  while( true ) {
    sVar17 = *(short *)(param_2 + iVar7);
    iVar5 = iVar5 + 1;
    psVar10 = (short *)(param_2 + iVar7);
    if ((sVar17 == *(short *)(param_1 + 0x7c6)) &&
       (psVar16 = (short *)(param_3 + iVar7),
       *(short *)(param_3 + iVar7) == *(short *)(param_1 + 0x7c8))) break;
    iVar7 = iVar7 + -4;
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  iVar15 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar5 = FUN_0002bc8c(iVar15 * (iVar5 + param_6 + -1) + ~uVar9);
  local_50 = iVar5 + -1;
  *param_7 = iVar5;
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    do {
      local_48 = param_4 + 2;
      local_4c = param_5 + 2;
      for (uVar9 = uVar9 + iVar7; iVar15 <= (int)uVar9; uVar9 = uVar9 - iVar15) {
        psVar10 = psVar10 + 2;
        psVar16 = psVar16 + 2;
      }
      iVar6 = (int)*(short *)(param_1 + 0x7c4);
      sVar17 = *(short *)(iVar5 + uVar9 * 2);
      if (iVar6 < 1) {
        uVar1 = 0;
        uVar3 = uVar1;
      }
      else {
        sVar14 = *psVar10;
        iVar8 = 0;
        sVar13 = *psVar16;
        iVar4 = 0;
        iVar2 = 0;
        psVar11 = psVar16;
        psVar12 = (short *)(iVar5 + uVar9 * 2 + 2);
        psVar18 = psVar10;
        do {
          while( true ) {
            iVar2 = (int)sVar17 * (int)sVar14 + iVar2;
            bVar19 = iVar8 == iVar6 + -1;
            iVar4 = (int)sVar17 * (int)sVar13 + iVar4;
            iVar8 = iVar8 + 1;
            if (bVar19) break;
            psVar18 = psVar18 + -2;
            psVar11 = psVar11 + -2;
            sVar17 = *psVar12;
            if (iVar8 == iVar6) goto LAB_0001bc14;
            sVar14 = *psVar18;
            sVar13 = *psVar11;
            psVar12 = psVar12 + 1;
          }
        } while (iVar8 != iVar6);
LAB_0001bc14:
        if (iVar2 < -0x40000000) {
          iVar2 = -0x40000000;
        }
        uVar1 = (undefined2)((uint)(iVar2 << 1) >> 0x10);
        if (iVar4 < -0x40000000) {
          iVar4 = -0x40000000;
        }
        uVar3 = (short)((uint)(iVar4 << 1) >> 0x10);
      }
      local_50 = local_50 + -1;
      *param_4 = uVar1;
      *param_5 = uVar3;
      param_5 = local_4c;
      param_4 = local_48;
    } while (local_50 != -1);
    sVar17 = *psVar10;
    *(uint *)(param_1 + 0x14) = uVar9;
  }
  *(short *)(param_1 + 0x7c6) = sVar17;
  *(short *)(param_1 + 0x7c8) = *psVar16;
  memcpy((void *)(param_1 + 0x1c),(void *)(param_2 + (param_6 - *(short *)(param_1 + 0x7c4)) * 4),
         (int)*(short *)(param_1 + 0x7c4) << 2);
  return;
}



/* ===== SRCFilter @ 0001bcbc size=60 ===== */

int SRCFilter(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int local_c [2];
  
  SRCFilterStereo(param_1,param_2,param_2 + 2,param_3,param_3 + 2,param_4 >> 1,local_c);
  return local_c[0] << 1;
}



/* ===== resample_48to16_4ch_init @ 0001bcf8 size=848 ===== */

undefined4 resample_48to16_4ch_init(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  memset((void *)(param_1 + 0x24),0,0x200);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined *)FUN_0002bbc4(param_3 << 0x10,param_2);
  iVar2 = DAT_0001c06c;
  if (puVar1 == (undefined *)0x17384) {
    psVar4 = (short *)(DAT_0001c06c + 0x1bf4c);
    *(int *)(param_1 + 0xc) = DAT_0001c06c + 0x1bf52;
    if (*(short *)(iVar2 + 0x1bf50) == 0x40) {
      iVar3 = (int)*psVar4 << 6;
      iVar2 = (int)*(short *)(iVar2 + 0x1bf4e) << 6;
LAB_0001bef0:
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 0;
    }
  }
  else if (puVar1 < (undefined *)0x17385) {
    if (puVar1 == (undefined *)0xaaaa) {
      *(int *)(param_1 + 0xc) = DAT_0001c07c + 0x1c5c6;
      return 0xffffffff;
    }
    if (puVar1 < (undefined *)0xaaab) {
      if (puVar1 == (undefined *)0x5ce1) {
        *(int *)(param_1 + 0xc) = DAT_0001c088 + 0x1c04e;
        return 0xffffffff;
      }
      if (puVar1 == (undefined *)0x8000) {
        *(int *)(param_1 + 0xc) = DAT_0001c08c + 0x1c046;
        return 0xffffffff;
      }
      if (puVar1 == (undefined *)0x5555) {
        iVar3 = 0x40;
        iVar2 = 0xc0;
        *(int *)(param_1 + 0xc) = DAT_0001c060 + 0x1c33e;
        goto LAB_0001bef0;
      }
    }
    else {
      if (puVar1 == (undefined *)0xeb33) {
        *(int *)(param_1 + 0xc) = DAT_0001c080 + 0x1bb4a;
        return 0xffffffff;
      }
      if (puVar1 < (undefined *)0xeb34) {
        if (puVar1 == (undefined *)0xb9c2) {
          *(int *)(param_1 + 0xc) = DAT_0001c050 + 0x1c352;
          return 0xffffffff;
        }
      }
      else {
        if (puVar1 == (undefined *)0x116a3) {
          *(int *)(param_1 + 0xc) = DAT_0001c084 + 0x1cc62;
          return 0xffffffff;
        }
        if (puVar1 == (undefined *)0x160cc) {
          *(int *)(param_1 + 0xc) = DAT_0001c04c + 0x1b64a;
          return 0xffffffff;
        }
      }
    }
  }
  else {
    if (puVar1 == (undefined *)0x30000) {
      *(int *)(param_1 + 0xc) = DAT_0001c070 + 0x1c412;
      return 0xffffffff;
    }
    if (puVar1 < (undefined *)0x30001) {
      if (puVar1 == (undefined *)0x20000) {
        *(int *)(param_1 + 0xc) = DAT_0001c074 + 0x1c47a;
        return 0xffffffff;
      }
      if (puVar1 < (undefined *)0x20001) {
        if (puVar1 == (undefined *)0x18000) {
          *(int *)(param_1 + 0xc) = DAT_0001c054 + 0x1c97a;
          return 0xffffffff;
        }
      }
      else {
        if (puVar1 == (undefined *)0x22d47) {
          *(int *)(param_1 + 0xc) = DAT_0001c078 + 0x1c49e;
          return 0xffffffff;
        }
        if (puVar1 == &UNK_0002c199) {
          *(int *)(param_1 + 0xc) = DAT_0001c048 + 0x1b002;
          return 0xffffffff;
        }
      }
    }
    else {
      if (puVar1 == (undefined *)0x45a8e) {
        *(int *)(param_1 + 0xc) = DAT_0001c064 + 0x1bd72;
        return 0xffffffff;
      }
      if (puVar1 < (undefined *)0x45a8f) {
        if (puVar1 == (undefined *)0x40000) {
          *(int *)(param_1 + 0xc) = DAT_0001c05c + 0x1b0ce;
          return 0xffffffff;
        }
      }
      else {
        if (puVar1 == (undefined *)0x58333) {
          *(int *)(param_1 + 0xc) = DAT_0001c068 + 0x1c562;
          return 0xffffffff;
        }
        if (puVar1 == (undefined *)0x60000) {
          *(int *)(param_1 + 0xc) = DAT_0001c058 + 0x1bc5a;
          return 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== resample_48to16_4ch_process @ 0001c090 size=748 ===== */

void resample_48to16_4ch_process
               (int param_1,int param_2,undefined2 *param_3,int param_4,int *param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  short *psVar17;
  bool bVar18;
  short *local_60;
  undefined2 *local_5c;
  uint local_58;
  int local_54;
  undefined2 *local_50;
  
  memcpy((void *)(param_2 + -0x200),(void *)(param_1 + 0x24),0x200);
  iVar9 = 0;
  psVar17 = (short *)(param_2 + 4);
  do {
    local_60 = psVar17;
    iVar7 = iVar9;
    sVar8 = local_60[-2];
    psVar15 = local_60 + -2;
    iVar9 = iVar7 + 1;
    psVar14 = local_60 + -1;
    if (((sVar8 == *(short *)(param_1 + 0x1c)) && (local_60[-1] == *(short *)(param_1 + 0x1e))) &&
       (*local_60 == *(short *)(param_1 + 0x20))) break;
    psVar17 = local_60 + -4;
  } while (iVar9 != 0x40);
  local_58 = *(uint *)(param_1 + 0x18);
  iVar16 = *(int *)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0x14);
  local_5c = (undefined2 *)(param_2 + iVar7 * -8 + 6);
  iVar9 = FUN_0002bc8c(iVar10 * (iVar9 + param_4 + -1) + ~local_58,iVar16);
  *param_5 = iVar9;
  if (iVar9 != 0) {
    iVar7 = *(int *)(param_1 + 0xc);
    iVar11 = *(int *)(DAT_0001c37c + 0x1c19c);
    local_54 = iVar9 + -1;
    do {
      local_50 = param_3 + 4;
      for (local_58 = local_58 + iVar16; iVar10 <= (int)local_58; local_58 = local_58 - iVar10) {
        psVar15 = psVar15 + 4;
        psVar14 = psVar14 + 4;
        local_60 = local_60 + 4;
        local_5c = local_5c + 4;
      }
      uVar13 = 0;
      uVar5 = 0;
      psVar17 = (short *)(iVar7 + local_58 * 2);
      sVar8 = *(short *)(iVar7 + local_58 * 2);
      iVar12 = 0;
      uVar6 = 0;
      uVar4 = 0;
      while( true ) {
        psVar17 = psVar17 + 1;
        bVar18 = iVar12 == -0x1f8;
        psVar1 = (short *)((int)local_60 + iVar12);
        uVar4 = uVar4 + (int)sVar8 * (int)*(short *)((int)psVar15 + iVar12);
        psVar2 = (short *)((int)local_5c + iVar12);
        psVar3 = (short *)((int)psVar14 + iVar12);
        iVar12 = iVar12 + -8;
        uVar13 = uVar13 + (int)sVar8 * (int)*psVar2;
        uVar5 = uVar5 + (int)sVar8 * (int)*psVar3;
        uVar6 = uVar6 + (int)sVar8 * (int)*psVar1;
        if (bVar18) break;
        sVar8 = *psVar17;
      }
      local_54 = local_54 + -1;
      *param_3 = (short)(uVar4 >> 0xf);
      param_3[1] = (short)(uVar5 >> 0xf);
      param_3[2] = (short)(uVar6 >> 0xf);
      param_3[3] = (short)(uVar13 >> 0xf);
      param_3 = local_50;
    } while (local_54 != -1);
    sVar8 = *psVar15;
    *(int *)(DAT_0001c380 + 0x1c324) = iVar11 + 1 + iVar9 + -1;
    *(uint *)(param_1 + 0x18) = local_58;
  }
  *(short *)(param_1 + 0x1c) = sVar8;
  *(short *)(param_1 + 0x1e) = *psVar14;
  *(short *)(param_1 + 0x20) = *local_60;
  *(undefined2 *)(param_1 + 0x22) = *local_5c;
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + (param_4 + 0x1fffffc0) * 8),0x200);
  return;
}



/* ===== xmp3_SetBitstreamPointer @ 0001c384 size=24 ===== */

void xmp3_SetBitstreamPointer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[3] = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== xmp3_GetBits @ 0001c39c size=312 ===== */

uint xmp3_GetBits(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = param_1[1];
  param_2 = param_2 & 0x1f;
  iVar10 = param_1[2];
  iVar8 = iVar10 - param_2;
  param_1[1] = uVar4 << param_2;
  param_1[2] = iVar8;
  uVar4 = (uVar4 >> (0x1f - param_2 & 0xff)) >> 1;
  if (-1 < iVar8) {
    return uVar4;
  }
  iVar5 = param_1[3];
  param_2 = param_2 - iVar10;
  uVar6 = iVar8 + 0x20;
  if (3 < iVar5) {
    pbVar7 = (byte *)*param_1;
    *param_1 = pbVar7 + 1;
    bVar1 = *pbVar7;
    *param_1 = pbVar7 + 2;
    param_1[1] = (uint)bVar1 << 0x18;
    bVar2 = pbVar7[1];
    *param_1 = pbVar7 + 3;
    uVar9 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10;
    param_1[1] = uVar9;
    bVar1 = pbVar7[2];
    *param_1 = pbVar7 + 4;
    uVar9 = uVar9 | (uint)bVar1 << 8;
    param_1[1] = uVar9;
    bVar1 = pbVar7[3];
    param_1[3] = iVar5 + -4;
    uVar9 = bVar1 | uVar9;
    param_1[1] = uVar9 << (param_2 & 0xff);
    param_1[2] = uVar6;
    return uVar4 | uVar9 >> (uVar6 & 0xff);
  }
  param_1[1] = 0;
  if (iVar5 == 0) {
    iVar10 = 0;
  }
  else {
    pbVar7 = (byte *)*param_1;
    *param_1 = pbVar7 + 1;
    bVar1 = *pbVar7;
    iVar10 = (uint)bVar1 << 8;
    param_1[1] = iVar10;
    if (iVar5 != 1) {
      *param_1 = pbVar7 + 2;
      uVar3 = CONCAT11(bVar1,pbVar7[1]);
      if (iVar5 != 2) {
        *param_1 = pbVar7 + 3;
      }
      iVar10 = (uint)uVar3 << 8;
      param_1[1] = iVar10;
      if (iVar5 != 2) {
        iVar10 = (uint)CONCAT21(uVar3,pbVar7[2]) << 8;
      }
    }
    uVar9 = iVar10 << ((3 - iVar5) * 8 & 0xffU);
    iVar10 = uVar9 << (param_2 & 0xff);
    uVar4 = uVar4 | uVar9 >> (uVar6 & 0xff);
  }
  param_1[1] = iVar10;
  param_1[2] = iVar8 + iVar5 * 8;
  param_1[3] = 0;
  return uVar4;
}



/* ===== xmp3_CalcBitsUsed @ 0001c4d4 size=24 ===== */

int xmp3_CalcBitsUsed(int *param_1,int param_2,int param_3)

{
  return ((*param_1 - param_2) * 8 - param_1[2]) - param_3;
}



/* ===== xmp3_CheckPadBit @ 0001c4ec size=44 ===== */

uint xmp3_CheckPadBit(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return (uint)(*(int *)(*param_1 + 0x14) != 0);
  }
  return 0xffffffff;
}



/* ===== xmp3_UnpackFrameHeader @ 0001c518 size=664 ===== */

undefined4 xmp3_UnpackFrameHeader(int *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint in_r12;
  int iVar16;
  
  iVar13 = DAT_0001c7b0 + 0x1c530;
  if ((((param_1 != (int *)0x0) && (puVar10 = (uint *)*param_1, puVar10 != (uint *)0x0)) &&
      (*param_2 == -1)) && ((param_2[1] & 0xe0U) == 0xe0)) {
    bVar3 = (byte)param_2[1] >> 3;
    if ((bVar3 & 3) == 0) {
      uVar11 = 2;
    }
    else {
      uVar11 = ~(uint)bVar3 & 1;
    }
    *puVar10 = uVar11;
    uVar7 = ((byte)param_2[1] & 7) >> 1;
    uVar15 = 4 - uVar7;
    puVar10[1] = uVar15;
    bVar3 = param_2[1];
    puVar10[2] = ~(uint)bVar3 & 1;
    uVar1 = (uint)((byte)param_2[2] >> 4);
    puVar10[3] = uVar1;
    bVar4 = param_2[2];
    uVar12 = (bVar4 & 0xf) >> 2;
    puVar10[4] = uVar12;
    uVar6 = ((byte)param_2[2] & 3) >> 1;
    puVar10[5] = uVar6;
    if (uVar12 == 3 || uVar1 == 0xf) {
      in_r12 = 1;
    }
    if (uVar12 != 3 && uVar1 != 0xf) {
      in_r12 = 0;
    }
    if (uVar15 == 4) {
      in_r12 = in_r12 | 1;
    }
    puVar10[6] = (byte)param_2[2] & 1;
    uVar2 = (uint)((byte)param_2[3] >> 6);
    puVar10[7] = uVar2;
    puVar10[8] = ((byte)param_2[3] & 0x3f) >> 4;
    puVar10[9] = ((byte)param_2[3] & 0xf) >> 3;
    puVar10[10] = ((byte)param_2[3] & 7) >> 2;
    puVar10[0xb] = (byte)param_2[3] & 3;
    if (in_r12 == 0) {
      puVar10[0xd] = uVar11 * 0xde + (short)(ushort)(((uint)bVar4 << 0x1c) >> 0x1e) * 0x4a +
                     *(int *)(iVar13 + DAT_0001c7b4);
      if ((uVar2 == 1) || (puVar10[8] = 0, uVar2 != 3)) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
      iVar9 = DAT_0001c7b8;
      iVar14 = uVar11 * 2;
      param_1[0x1ef] = iVar5;
      iVar5 = DAT_0001c7bc;
      iVar8 = 3 - uVar7;
      iVar9 = *(int *)(*(int *)(iVar13 + iVar9) + (uVar11 * 3 + uVar12) * 4);
      if (uVar11 == 0) {
        iVar16 = 2;
      }
      else {
        iVar16 = 1;
      }
      param_1[0x1f1] = iVar16;
      param_1[0x1f0] = iVar9;
      iVar5 = FUN_0002bc8c((int)*(short *)(*(int *)(iVar13 + iVar5) + (uVar11 * 3 + iVar8) * 2),
                           iVar16);
      param_1[500] = uVar15;
      param_1[0x211] = uVar11;
      param_1[0x1f2] = iVar5;
      iVar9 = DAT_0001c7c8;
      iVar5 = DAT_0001c7c4;
      if (uVar1 != 0) {
        if (uVar2 != 3) {
          iVar14 = iVar14 + 1;
        }
        param_1[0x1ee] =
             *(short *)(*(int *)(iVar13 + DAT_0001c7c0) + (iVar8 * 0xf + uVar11 * 0x2d + uVar1) * 2)
             * 1000;
        iVar8 = -4;
        if ((bVar3 & 1) == 0) {
          iVar8 = -6;
        }
        param_1[499] = uVar6 + ((int)*(short *)(*(int *)(iVar13 + iVar9) +
                                               (uVar12 * 0xf + uVar11 * 0x2d + uVar1) * 2) -
                               (int)*(short *)(*(int *)(iVar13 + iVar5) + iVar14 * 2)) + iVar8;
      }
      if ((bVar3 & 1) != 0) {
        puVar10[0xc] = 0;
        return 4;
      }
      puVar10[0xc] = (*(ushort *)(param_2 + 4) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 4) >> 8);
      return 6;
    }
  }
  return 0xffffffff;
}



/* ===== beTol @ 0001c7cc size=48 ===== */

undefined4 beTol(undefined1 *param_1)

{
  undefined4 local_4;
  
  local_4 = CONCAT13(*param_1,CONCAT12(param_1[1],CONCAT11(param_1[2],param_1[3])));
  return local_4;
}



/* ===== xmp3_UnpackSideInfo @ 0001c7fc size=1196 ===== */

int xmp3_UnpackSideInfo(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_3c;
  undefined1 auStack_38 [20];
  
  if (((param_1 == (undefined4 *)0x0) || (piVar8 = (int *)*param_1, piVar8 == (int *)0x0)) ||
     (puVar11 = (undefined4 *)param_1[1], puVar11 == (undefined4 *)0x0)) {
    return -1;
  }
  if (*piVar8 == 0) {
    if (piVar8[7] == 3) {
      local_3c = 0x11;
    }
    else {
      local_3c = 0x20;
    }
    xmp3_SetBitstreamPointer(auStack_38,local_3c,param_2);
    uVar1 = xmp3_GetBits(auStack_38,9);
    if (piVar8[7] == 3) {
      uVar3 = 5;
    }
    else {
      uVar3 = 3;
    }
    *puVar11 = uVar1;
    uVar1 = xmp3_GetBits(auStack_38,uVar3);
    iVar4 = param_1[0x1ef];
    puVar11[1] = uVar1;
    if (0 < iVar4) {
      puVar7 = puVar11 + 6;
      iVar4 = 0;
      do {
        puVar6 = puVar7 + -4;
        do {
          uVar1 = xmp3_GetBits(auStack_38,1);
          puVar10 = puVar6 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar10;
        } while (puVar10 != puVar7);
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 4;
      } while (iVar4 < (int)param_1[0x1ef]);
      iVar4 = param_1[0x1f5];
      goto joined_r0x0001cac8;
    }
  }
  else {
    if (piVar8[7] == 3) {
      local_3c = 9;
    }
    else {
      local_3c = 0x11;
    }
    xmp3_SetBitstreamPointer(auStack_38,local_3c,param_2);
    uVar1 = xmp3_GetBits(auStack_38,8);
    if (piVar8[7] == 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    *puVar11 = uVar1;
    uVar1 = xmp3_GetBits(auStack_38,uVar3);
    puVar11[1] = uVar1;
  }
  iVar4 = param_1[0x1f5];
joined_r0x0001cac8:
  if (iVar4 == -1) {
    iVar4 = strncmp((char *)(param_2 + local_3c),(char *)(DAT_0001cca8 + 0x1cae4),4);
    if ((iVar4 == 0) ||
       (iVar4 = strncmp((char *)(param_2 + local_3c),(char *)(DAT_0001ccac + 0x1cb04),4), iVar4 == 0
       )) {
      param_1[0x1f5] = 1;
      uVar2 = beTol(param_2 + local_3c + 4);
      if ((uVar2 & 1) != 0) {
        uVar1 = beTol(param_2 + local_3c + 8);
        param_1[0x1f7] = uVar1;
      }
      if ((uVar2 & 2) != 0) {
        uVar1 = beTol(param_2 + (uVar2 & 1) * 4 + local_3c + 8);
        param_1[0x1f6] = uVar1;
      }
      if ((uVar2 & 4) != 0) {
        memcpy(param_1 + 0x1f8,(void *)(param_2 + (uVar2 & 1) * 4 + (uVar2 & 2) * 2 + local_3c + 8),
               100);
      }
    }
    else {
      param_1[0x1f5] = 0;
    }
  }
  iVar4 = param_1[0x1f1];
  if (0 < iVar4) {
    iVar5 = param_1[0x1ef];
    iVar9 = 0;
    puVar7 = puVar11;
    do {
      if (0 < iVar5) {
        iVar4 = 0;
        puVar6 = puVar7;
        do {
          while( true ) {
            uVar1 = xmp3_GetBits(auStack_38,0xc);
            puVar6[10] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,9);
            puVar6[0xb] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,8);
            if (*piVar8 == 0) {
              uVar3 = 4;
            }
            else {
              uVar3 = 9;
            }
            puVar6[0xc] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,uVar3);
            puVar6[0xd] = uVar1;
            iVar5 = xmp3_GetBits(auStack_38,1);
            puVar6[0xe] = iVar5;
            if (iVar5 != 0) break;
            *(undefined8 *)(puVar6 + 0xf) = 0;
            uVar1 = xmp3_GetBits(auStack_38,5);
            puVar6[0x11] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,5);
            puVar6[0x12] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,5);
            puVar6[0x13] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,4);
            puVar6[0x17] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38,3);
            iVar5 = *piVar8;
            puVar6[0x18] = uVar1;
            if (iVar5 == 0) goto LAB_0001cbe4;
LAB_0001c9cc:
            puVar6[0x19] = 0;
            uVar1 = xmp3_GetBits(auStack_38,1);
            iVar4 = iVar4 + 1;
            puVar6[0x1a] = uVar1;
            uVar1 = xmp3_GetBits(auStack_38);
            iVar5 = param_1[0x1ef];
            puVar6[0x1b] = uVar1;
            puVar6 = puVar6 + 0x12;
            if (iVar5 <= iVar4) goto LAB_0001ca08;
          }
          uVar1 = xmp3_GetBits(auStack_38,2);
          puVar6[0xf] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,1);
          puVar6[0x10] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,5);
          puVar6[0x11] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,5);
          puVar6[0x13] = 0;
          puVar6[0x12] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,3);
          puVar6[0x14] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,3);
          puVar6[0x15] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,3);
          puVar6[0x16] = uVar1;
          if (puVar6[0xf] == 0) {
            *(undefined8 *)(puVar6 + 10) = 0;
            puVar6[0xd] = 0;
            iVar5 = 0x14 - puVar6[0x17];
          }
          else if ((puVar6[0xf] == 2) && (puVar6[0x10] == 0)) {
            puVar6[0x17] = 8;
            iVar5 = 0xc;
          }
          else {
            iVar5 = 0xd;
            puVar6[0x17] = 7;
          }
          puVar6[0x18] = iVar5;
          if (*piVar8 != 0) goto LAB_0001c9cc;
LAB_0001cbe4:
          uVar1 = xmp3_GetBits(auStack_38,1);
          iVar4 = iVar4 + 1;
          puVar6[0x19] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38);
          puVar6[0x1a] = uVar1;
          uVar1 = xmp3_GetBits(auStack_38,1);
          iVar5 = param_1[0x1ef];
          puVar6[0x1b] = uVar1;
          puVar6 = puVar6 + 0x12;
        } while (iVar4 < iVar5);
LAB_0001ca08:
        iVar4 = param_1[0x1f1];
      }
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 0x24;
    } while (iVar9 < iVar4);
  }
  param_1[0x212] = *puVar11;
  return local_3c;
}



/* ===== xmp3_AllocateBuffers @ 0001ccb0 size=284 ===== */

undefined8 * xmp3_AllocateBuffers(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *__s;
  undefined4 *puVar5;
  int iVar6;
  void *__s_00;
  undefined8 *__s_01;
  void *__s_02;
  void *__s_03;
  void *__s_04;
  void *__s_05;
  
  iVar3 = DAT_0001cdd8;
  iVar2 = DAT_0001cdd4;
  iVar6 = DAT_0001cdcc + 0x1ccd0;
  __s_01 = *(undefined8 **)(iVar6 + DAT_0001cdd0);
  memset(__s_01,0,0x860);
  iVar4 = DAT_0001cdec;
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar5 = *(undefined4 **)(iVar6 + DAT_0001cddc);
  __s = *(void **)(iVar6 + DAT_0001cde0);
  __s_05 = *(void **)(iVar6 + DAT_0001cde4);
  __s_04 = *(void **)(iVar6 + DAT_0001cde8);
  *__s_01 = CONCAT44(__s,puVar5);
  __s_01[1] = CONCAT44(__s_04,__s_05);
  __s_03 = *(void **)(iVar6 + iVar2);
  *(void **)(__s_01 + 2) = __s_03;
  __s_02 = *(void **)(iVar6 + iVar3);
  *(void **)((int)__s_01 + 0x14) = __s_02;
  __s_00 = *(void **)(iVar6 + iVar4);
  *puVar5 = 0;
  puVar5[1] = uVar1;
  puVar5[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar5[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)__s_01 + 0x7d4) = 0xffffffff;
  puVar5[4] = 0;
  puVar5[5] = uVar1;
  *(undefined4 *)((int)__s_01 + 0x7dc) = 0xffffffff;
  puVar5[6] = 0;
  puVar5[7] = uVar1;
  *(undefined4 *)(__s_01 + 0xfb) = 0xffffffff;
  puVar5[8] = 0;
  puVar5[9] = uVar1;
  *(undefined1 *)(__s_01 + 0xfc) = 0xff;
  puVar5[10] = 0;
  puVar5[0xb] = uVar1;
  *(void **)(__s_01 + 3) = __s_00;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar1;
  memset(__s,0,0x148);
  memset(__s_05,0,0x11c);
  memset(__s_04,0,0x1210);
  memset(__s_03,0,0x348);
  memset(__s_02,0,0x1b20);
  memset(__s_00,0,0x1104);
  return __s_01;
}



/* ===== xmp3_FreeBuffers @ 0001cdf0 size=4 ===== */

void xmp3_FreeBuffers(void)

{
  return;
}



/* ===== FDCT32HalfBuffer @ 0001cdf4 size=3796 ===== */

void FDCT32HalfBuffer(undefined1 (*param_1) [16],int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint local_13c;
  int local_12c;
  int local_124;
  int local_fc;
  int local_f4;
  int local_ec;
  int local_e4;
  int local_c4;
  
  if (param_5 < 6) {
    local_13c = 6 - param_5;
    auVar56._8_8_ = CONCAT44(local_13c,local_13c);
    auVar56._0_8_ = CONCAT44(local_13c,local_13c);
    auVar56 = FloatVectorNeg(auVar56,1,4);
    auVar57 = VectorShiftLeft(*param_1,auVar56,4,0);
    *(longlong *)*param_1 = auVar57._0_8_;
    *(longlong *)(*param_1 + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[1],auVar56,4,0);
    *(longlong *)param_1[1] = auVar57._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[2],auVar56,4,0);
    *(longlong *)param_1[2] = auVar57._0_8_;
    *(longlong *)(param_1[2] + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[3],auVar56,4,0);
    *(longlong *)param_1[3] = auVar57._0_8_;
    *(longlong *)(param_1[3] + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[4],auVar56,4,0);
    *(longlong *)param_1[4] = auVar57._0_8_;
    *(longlong *)(param_1[4] + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[5],auVar56,4,0);
    *(longlong *)param_1[5] = auVar57._0_8_;
    *(longlong *)(param_1[5] + 8) = auVar57._8_8_;
    auVar57 = VectorShiftLeft(param_1[6],auVar56,4,0);
    *(longlong *)param_1[6] = auVar57._0_8_;
    *(longlong *)(param_1[6] + 8) = auVar57._8_8_;
    auVar56 = VectorShiftLeft(param_1[7],auVar56,4,0);
    *(longlong *)param_1[7] = auVar56._0_8_;
    *(longlong *)(param_1[7] + 8) = auVar56._8_8_;
  }
  else {
    local_13c = 0;
  }
  iVar18 = *(int *)(param_1[7] + 0xc);
  iVar1 = *(int *)(param_1[3] + 0xc);
  iVar9 = *(int *)param_1[4];
  iVar4 = *(int *)*param_1;
  iVar28 = *(int *)(param_1[4] + 4);
  iVar48 = iVar1 + iVar9;
  iVar52 = iVar4 + iVar18;
  iVar2 = *(int *)(param_1[3] + 8) + iVar28;
  iVar19 = *(int *)(param_1[7] + 8);
  iVar23 = *(int *)(param_1[3] + 8);
  iVar14 = *(int *)(*param_1 + 4);
  iVar10 = *(int *)(param_1[4] + 8);
  iVar38 = *(int *)(*param_1 + 8) + *(int *)(param_1[7] + 4);
  iVar45 = *(int *)param_1[3];
  iVar5 = iVar14 + iVar19;
  iVar20 = *(int *)(param_1[3] + 4) + iVar10;
  iVar11 = *(int *)(param_1[7] + 4);
  iVar29 = iVar45 + *(int *)(param_1[4] + 0xc);
  iVar24 = *(int *)(*param_1 + 8);
  iVar12 = *(int *)(param_1[3] + 4);
  iVar32 = *(int *)param_1[7];
  iVar13 = *(int *)(param_1[1] + 4);
  iVar15 = *(int *)(*param_1 + 0xc) + iVar32;
  iVar25 = *(int *)(*param_1 + 0xc);
  iVar33 = *(int *)(param_1[4] + 0xc);
  iVar26 = *(int *)param_1[1] + *(int *)(param_1[6] + 0xc);
  *(int *)(*param_1 + 4) = iVar5 + iVar2;
  iVar34 = *(int *)(param_1[2] + 0xc) + *(int *)param_1[5];
  *(int *)(*param_1 + 8) = iVar38 + iVar20;
  iVar42 = *(int *)(param_1[6] + 0xc);
  iVar39 = *(int *)param_1[1];
  iVar46 = *(int *)(param_1[2] + 8);
  iVar49 = *(int *)(param_1[5] + 4);
  iVar3 = iVar13 + *(int *)(param_1[6] + 8);
  *(int *)*param_1 = iVar52 + iVar48;
  iVar43 = *(int *)(param_1[2] + 0xc);
  iVar53 = iVar46 + iVar49;
  iVar6 = *(int *)param_1[5];
  *(int *)(*param_1 + 0xc) = iVar15 + iVar29;
  *(int *)param_1[1] = iVar26 + iVar34;
  *(int *)(param_1[1] + 4) = iVar3 + iVar53;
  iVar7 = *(int *)(param_1[6] + 8);
  iVar47 = *(int *)(param_1[2] + 4);
  iVar44 = *(int *)(param_1[6] + 4);
  iVar50 = *(int *)(param_1[5] + 8);
  iVar16 = *(int *)param_1[6];
  iVar8 = *(int *)(param_1[1] + 0xc);
  iVar40 = *(int *)(param_1[1] + 8);
  iVar35 = *(int *)(param_1[5] + 0xc);
  iVar54 = *(int *)(param_1[1] + 8) + iVar44;
  iVar51 = iVar47 + iVar50;
  iVar41 = iVar8 + iVar16;
  iVar4 = (int)((ulonglong)((longlong)(iVar4 - iVar18) * 0x4013c251) >> 0x20) * 2;
  pauVar36 = param_1 + 2;
  iVar30 = *(int *)*pauVar36;
  iVar31 = iVar30 + iVar35;
  iVar18 = (int)((ulonglong)((longlong)(iVar23 - iVar28) * 0x6d0b20cf) >> 0x20);
  iVar12 = (int)((ulonglong)((longlong)(iVar12 - iVar10) * 0x41d95790) >> 0x20);
  iVar23 = (int)((ulonglong)((longlong)(iVar1 - iVar9) * 0x518522fb) >> 0x20);
  iVar1 = (int)((ulonglong)((longlong)(iVar14 - iVar19) * 0x40b345bd) >> 0x20) * 2;
  iVar9 = (int)((ulonglong)((longlong)(iVar24 - iVar11) * 0x41fa2d6d) >> 0x20) * 2;
  *(int *)(param_1[1] + 8) = iVar54 + iVar51;
  iVar24 = (int)((ulonglong)((longlong)(iVar45 - iVar33) * 0x5efc8d96) >> 0x20);
  iVar10 = (int)((ulonglong)((longlong)(iVar25 - iVar32) * 0x43f93421) >> 0x20) * 2;
  iVar14 = (int)((ulonglong)((longlong)(iVar43 - iVar6) * 0x4ad81a97) >> 0x20);
  iVar6 = (int)((ulonglong)((longlong)(iVar39 - iVar42) * 0x46cc1bc4) >> 0x20) * 2;
  iVar25 = (int)((ulonglong)((longlong)(iVar46 - iVar49) * 0x7c7d1db3) >> 0x20);
  iVar19 = (int)((ulonglong)((longlong)(iVar47 - iVar50) * 0x6b6fcf26) >> 0x20);
  iVar7 = (int)((ulonglong)((longlong)(iVar13 - iVar7) * 0x4a9d9cf0) >> 0x20) * 2;
  iVar11 = (int)((ulonglong)((longlong)(iVar40 - iVar44) * 0x4fae3711) >> 0x20) * 2;
  iVar8 = (int)((ulonglong)((longlong)(iVar8 - iVar16) * 0x56601ea7) >> 0x20) * 2;
  iVar13 = (int)((ulonglong)((longlong)(iVar30 - iVar35) * 0x5f4cf6eb) >> 0x20);
  local_e4 = (int)((ulonglong)((longlong)(iVar5 - iVar2) * 0x42e13c10) >> 0x20);
  *(int *)(param_1[1] + 0xc) = iVar41 + iVar31;
  local_c4 = (int)((ulonglong)((longlong)(iVar4 + iVar23 * -0x20) * 0x404f4672) >> 0x20);
  *(ulonglong *)*pauVar36 =
       CONCAT44((int)((ulonglong)((longlong)(iVar54 - iVar51) * 0x6e3c92c1) >> 0x20) << 2,
                (int)((ulonglong)((longlong)(iVar41 - iVar31) * 0x519e4e04) >> 0x20) << 4);
  *(ulonglong *)(param_1[2] + 8) =
       CONCAT44((int)((ulonglong)((longlong)(iVar26 - iVar34) * 0x64e2402e) >> 0x20) << 1,
                (int)((ulonglong)((longlong)(iVar3 - iVar53) * 0x43e224a9) >> 0x20) << 2);
  iVar2 = DAT_0001dcc8;
  *(ulonglong *)param_1[3] =
       CONCAT44((int)((ulonglong)((longlong)(iVar38 - iVar20) * 0x48919f44) >> 0x20) << 1,
                (int)((ulonglong)((longlong)(iVar15 - iVar29) * 0x52cb0e63) >> 0x20) << 1);
  *(ulonglong *)(param_1[3] + 8) =
       CONCAT44((int)((ulonglong)((longlong)(iVar52 - iVar48) * 0x404f4672) >> 0x20) << 1,
                local_e4 << 1);
  local_e4 = (int)((ulonglong)((longlong)(iVar9 + iVar12 * -8) * 0x48919f44) >> 0x20);
  local_ec = (int)((ulonglong)((longlong)(iVar10 + iVar24 * -4) * 0x52cb0e63) >> 0x20);
  *(int *)param_1[4] = iVar4 + iVar23 * 0x20;
  *(int *)(param_1[4] + 4) = iVar1 + iVar18 * 8;
  *(int *)(param_1[4] + 8) = iVar9 + iVar12 * 8;
  *(int *)(param_1[4] + 0xc) = iVar10 + iVar24 * 4;
  local_f4 = (int)((ulonglong)((longlong)(iVar7 + iVar25 * -2) * 0x43e224a9) >> 0x20);
  local_fc = (int)((ulonglong)((longlong)(iVar11 + iVar19 * -2) * 0x6e3c92c1) >> 0x20);
  *(int *)param_1[5] = iVar6 + iVar14 * 4;
  *(int *)(param_1[5] + 4) = iVar7 + iVar25 * 2;
  *(int *)(param_1[5] + 8) = iVar11 + iVar19 * 2;
  *(int *)(param_1[5] + 0xc) = iVar8 + iVar13 * 2;
  *(int *)param_1[6] = (int)((ulonglong)((longlong)(iVar8 + iVar13 * -2) * 0x519e4e04) >> 0x20) << 4
  ;
  *(int *)(param_1[6] + 4) = local_fc << 2;
  *(int *)(param_1[6] + 8) = local_f4 << 2;
  *(int *)(param_1[6] + 0xc) =
       (int)((ulonglong)((longlong)(iVar6 + iVar14 * -4) * 0x64e2402e) >> 0x20) << 1;
  *(int *)param_1[7] = local_ec << 1;
  *(int *)(param_1[7] + 4) = local_e4 << 1;
  *(int *)(param_1[7] + 8) =
       (int)((ulonglong)((longlong)(iVar1 + iVar18 * -8) * 0x42e13c10) >> 0x20) << 1;
  *(int *)(param_1[7] + 0xc) = local_c4 << 1;
  iVar4 = iVar2 + 0x1d488;
  do {
    pauVar37 = pauVar36 + 2;
    iVar7 = *(int *)pauVar36[-2] + *(int *)(pauVar36[-1] + 0xc);
    iVar6 = *(int *)(pauVar36[-2] + 4) + *(int *)(pauVar36[-1] + 8);
    iVar3 = *(int *)(pauVar36[-2] + 0xc) + *(int *)pauVar36[-1];
    iVar11 = *(int *)(pauVar36[-2] + 8) + *(int *)(pauVar36[-1] + 4);
    iVar2 = (int)((ulonglong)
                  ((longlong)(*(int *)(pauVar36[-2] + 0xc) - *(int *)pauVar36[-1]) *
                  (longlong)*(int *)(iVar4 + 100)) >> 0x20);
    iVar1 = (int)((ulonglong)
                  ((longlong)(*(int *)pauVar36[-2] - *(int *)(pauVar36[-1] + 0xc)) *
                  (longlong)*(int *)(iVar4 + 0x60)) >> 0x20) * 2;
    iVar18 = iVar1 + iVar2 * 8;
    iVar10 = (int)((ulonglong)
                   ((longlong)(*(int *)(pauVar36[-2] + 8) - *(int *)(pauVar36[-1] + 4)) *
                   (longlong)*(int *)(iVar4 + 0x70)) >> 0x20);
    iVar9 = (int)((ulonglong)
                  ((longlong)(*(int *)(pauVar36[-2] + 4) - *(int *)(pauVar36[-1] + 8)) *
                  (longlong)*(int *)(iVar4 + 0x6c)) >> 0x20) * 2;
    iVar5 = iVar7 + iVar3;
    iVar8 = iVar9 + iVar10 * 2;
    iVar10 = (int)((ulonglong)((longlong)(iVar9 + iVar10 * -2) * (longlong)*(int *)(iVar4 + 0x74))
                  >> 0x20);
    local_124 = (int)((ulonglong)((longlong)(iVar1 + iVar2 * -8) * (longlong)*(int *)(iVar4 + 0x68))
                     >> 0x20);
    iVar1 = local_124 * 2;
    local_12c = (int)((ulonglong)((longlong)(iVar7 - iVar3) * (longlong)*(int *)(iVar4 + 0x68)) >>
                     0x20);
    iVar7 = iVar11 + iVar6;
    local_124 = (int)((ulonglong)((longlong)(iVar6 - iVar11) * (longlong)*(int *)(iVar4 + 0x74)) >>
                     0x20);
    *(int *)pauVar36[-2] = iVar5 + iVar7;
    iVar9 = (int)((ulonglong)((longlong)(iVar1 + iVar10 * -4) * 0x5a82799a) >> 0x20) * 2;
    iVar6 = iVar1 + iVar10 * 4 + iVar9;
    iVar1 = (int)((ulonglong)((longlong)(iVar18 - iVar8) * 0x5a82799a) >> 0x20) * 2;
    *(int *)(pauVar36[-1] + 0xc) = iVar9;
    iVar10 = (int)((ulonglong)((longlong)(local_12c * 2 + local_124 * -4) * 0x5a82799a) >> 0x20) * 2
    ;
    *(int *)pauVar36[-1] = iVar18 + iVar8 + iVar6;
    *(int *)(pauVar36[-1] + 4) = iVar1 + iVar9;
    *(int *)(pauVar36[-1] + 8) = iVar1 + iVar6;
    *(int *)(pauVar36[-2] + 8) = local_12c * 2 + local_124 * 4 + iVar10;
    *(int *)(pauVar36[-2] + 4) =
         (int)((ulonglong)((longlong)(iVar5 - iVar7) * 0x5a82799a) >> 0x20) << 1;
    *(int *)(pauVar36[-2] + 0xc) = iVar10;
    pauVar36 = pauVar37;
    iVar4 = iVar4 + 0x18;
  } while (param_1 + 10 != pauVar37);
  iVar4 = param_3 * 4;
  iVar9 = (param_3 - param_4 & 7U) + 0x200;
  iVar1 = iVar9 * 4;
  if (param_4 == 0) {
    iVar9 = iVar1 + 0x880;
    iVar10 = 0x880;
    *(undefined4 *)(param_2 + iVar9) = *(undefined4 *)*param_1;
  }
  else {
    iVar4 = iVar4 + 0x880;
    iVar10 = 0;
    *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)*param_1;
    iVar9 = iVar1;
  }
  puVar17 = (uint *)(param_2 + iVar4);
  iVar6 = iVar1 + -0x7e0 + iVar10;
  *(undefined4 *)(param_2 + iVar4) = *(undefined4 *)(*param_1 + 4);
  iVar7 = param_2 + iVar6;
  iVar4 = *(int *)(param_1[6] + 4) + *(int *)(param_1[7] + 4);
  puVar17[0x20] = *(int *)(param_1[4] + 4) + iVar4;
  puVar17[0x40] = *(int *)(param_1[2] + 4) + *(int *)(param_1[3] + 4);
  puVar17[0x60] = *(int *)(param_1[5] + 4) + iVar4;
  iVar11 = *(int *)(param_1[7] + 4);
  iVar4 = *(int *)(param_1[6] + 0xc);
  puVar17[0x80] = *(uint *)(param_1[1] + 4);
  iVar11 = iVar11 + iVar4;
  puVar17[0xa0] = *(int *)(param_1[5] + 4) + iVar11;
  puVar17[0xc0] = *(int *)(param_1[3] + 4) + *(int *)(param_1[2] + 0xc);
  puVar17[0xe0] = *(int *)(param_1[4] + 0xc) + iVar11;
  iVar11 = *(int *)(param_1[6] + 0xc);
  iVar4 = *(int *)(param_1[7] + 0xc);
  puVar17[0x100] = *(uint *)(*param_1 + 0xc);
  iVar11 = iVar11 + iVar4;
  puVar17[0x120] = *(int *)(param_1[4] + 0xc) + iVar11;
  puVar17[0x140] = *(int *)(param_1[2] + 0xc) + *(int *)(param_1[3] + 0xc);
  puVar17[0x160] = *(int *)(param_1[5] + 0xc) + iVar11;
  uVar27 = *(uint *)(param_1[7] + 0xc);
  puVar17[0x180] = *(uint *)(param_1[1] + 0xc);
  puVar17[0x1a0] = *(int *)(param_1[5] + 0xc) + uVar27;
  uVar21 = *(uint *)(param_1[3] + 0xc);
  puVar17[0x1e0] = uVar27;
  puVar17[0x1c0] = uVar21;
  *(undefined4 *)(param_2 + iVar6) = *(undefined4 *)(*param_1 + 4);
  iVar4 = *(int *)(param_1[7] + 8) + *(int *)(param_1[6] + 4);
  *(int *)(iVar7 + 0x80) = *(int *)(param_1[4] + 4) + iVar4;
  *(int *)(iVar7 + 0x100) = *(int *)(param_1[3] + 8) + *(int *)(param_1[2] + 4);
  *(int *)(iVar7 + 0x180) = *(int *)(param_1[5] + 8) + iVar4;
  *(undefined4 *)(iVar7 + 0x200) = *(undefined4 *)(param_1[1] + 8);
  iVar4 = *(int *)(param_1[6] + 8) + *(int *)(param_1[7] + 8);
  *(int *)(iVar7 + 0x280) = *(int *)(param_1[5] + 8) + iVar4;
  *(int *)(iVar7 + 0x300) = *(int *)(param_1[2] + 8) + *(int *)(param_1[3] + 8);
  *(int *)(iVar7 + 0x380) = *(int *)(param_1[4] + 8) + iVar4;
  *(undefined4 *)(iVar7 + 0x400) = *(undefined4 *)(*param_1 + 8);
  iVar4 = *(int *)param_1[7] + *(int *)(param_1[6] + 8);
  *(int *)(iVar7 + 0x480) = *(int *)(param_1[4] + 8) + iVar4;
  *(int *)(iVar7 + 0x500) = *(int *)param_1[3] + *(int *)(param_1[2] + 8);
  *(int *)(iVar7 + 0x580) = *(int *)param_1[5] + iVar4;
  *(undefined4 *)(iVar7 + 0x600) = *(undefined4 *)param_1[1];
  iVar4 = *(int *)param_1[6] + *(int *)param_1[7];
  *(int *)(iVar7 + 0x680) = *(int *)param_1[5] + iVar4;
  *(int *)(iVar7 + 0x700) = *(int *)param_1[2] + *(int *)param_1[3];
  *(int *)(iVar7 + 0x780) = *(int *)param_1[4] + iVar4;
  if (local_13c != 0) {
    uVar22 = *(uint *)(param_2 + iVar9);
    uVar27 = 0x1f - local_13c;
    uVar21 = (0x80000000U >> (local_13c & 0xff)) - 1;
    iVar10 = iVar1 + -0x7c0 + iVar10;
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    *(uint *)(param_2 + iVar9) = uVar22 << (local_13c & 0xff);
    uVar22 = *puVar17;
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x20];
    *puVar17 = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x40];
    puVar17[0x20] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x60];
    puVar17[0x40] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x80];
    puVar17[0x60] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0xa0];
    puVar17[0x80] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0xc0];
    puVar17[0xa0] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0xe0];
    puVar17[0xc0] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x100];
    puVar17[0xe0] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x120];
    puVar17[0x100] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x140];
    puVar17[0x120] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x160];
    puVar17[0x140] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x180];
    puVar17[0x160] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x1a0];
    puVar17[0x180] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = puVar17[0x1c0];
    puVar17[0x1a0] = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = puVar17[0x1e0];
    puVar17[0x1c0] = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    puVar17[0x1e0] = uVar55 << (local_13c & 0xff);
    uVar22 = *(uint *)(param_2 + iVar10);
    iVar4 = param_2 + iVar10;
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    *(uint *)(param_2 + iVar10) = uVar22 << (local_13c & 0xff);
    uVar22 = *(uint *)(iVar4 + 0x80);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x100);
    *(uint *)(iVar4 + 0x80) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x180);
    *(uint *)(iVar4 + 0x100) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x200);
    *(uint *)(iVar4 + 0x180) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x280);
    *(uint *)(iVar4 + 0x200) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x300);
    *(uint *)(iVar4 + 0x280) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x380);
    *(uint *)(iVar4 + 0x300) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x400);
    *(uint *)(iVar4 + 0x380) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x480);
    *(uint *)(iVar4 + 0x400) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x500);
    *(uint *)(iVar4 + 0x480) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x580);
    *(uint *)(iVar4 + 0x500) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x600);
    *(uint *)(iVar4 + 0x580) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x680);
    *(uint *)(iVar4 + 0x600) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    uVar55 = *(uint *)(iVar4 + 0x700);
    *(uint *)(iVar4 + 0x680) = uVar22 << (local_13c & 0xff);
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> (uVar27 & 0xff)) {
      uVar55 = uVar21 ^ (int)uVar55 >> 0x1f;
    }
    uVar22 = *(uint *)(iVar4 + 0x780);
    *(uint *)(iVar4 + 0x700) = uVar55 << (local_13c & 0xff);
    if ((int)uVar22 >> 0x1f != (int)uVar22 >> (uVar27 & 0xff)) {
      uVar22 = uVar21 ^ (int)uVar22 >> 0x1f;
    }
    *(uint *)(iVar4 + 0x780) = uVar22 << (local_13c & 0xff);
  }
  return;
}



/* ===== xmp3_Dequantize @ 0001dccc size=1080 ===== */

undefined4 xmp3_Dequantize(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 local_30;
  
  if (((((param_1 == (int *)0x0) || (piVar9 = (int *)*param_1, piVar9 == (int *)0x0)) ||
       (iVar13 = param_1[1], iVar13 == 0)) ||
      ((iVar11 = param_1[2], iVar11 == 0 || (piVar8 = (int *)param_1[3], piVar8 == (int *)0x0)))) ||
     (iVar10 = param_1[4], iVar10 == 0)) {
    return 0xffffffff;
  }
  local_30 = 0;
  if (0 < param_1[0x1ef]) {
    iVar14 = param_2 * 0x90;
    iVar12 = param_2 * 0x7c;
    iVar1 = xmp3_DequantChannel(piVar8,iVar10,piVar8 + 0x480,piVar9,iVar13 + iVar14 + 0x28,
                                iVar11 + iVar12,iVar10 + 0x318);
    iVar5 = param_1[0x1ef];
    piVar8[0x482] = iVar1;
    if (1 < iVar5) {
      iVar1 = xmp3_DequantChannel(piVar8 + 0x240,iVar10,piVar8 + 0x481,piVar9,iVar13 + iVar14 + 0x70
                                  ,iVar11 + iVar12 + 0x3e,iVar10 + 0x330);
      iVar5 = param_1[0x1ef];
      piVar8[0x483] = iVar1;
      if (2 < iVar5) {
        iVar1 = xmp3_DequantChannel(piVar8 + 0x480,iVar10,piVar8 + 0x482,piVar9,
                                    iVar13 + iVar14 + 0xb8,iVar11 + iVar12 + 0x7c,iVar10 + 0x348);
        piVar8[0x484] = iVar1;
        if (3 < param_1[0x1ef]) {
          piVar7 = piVar8 + 0x6c0;
          iVar1 = iVar10 + 0x360;
          iVar14 = iVar13 + iVar14 + 0x100;
          iVar12 = iVar11 + iVar12 + 0xba;
          iVar5 = 3;
          piVar6 = piVar8 + 0x485;
          do {
            iVar5 = iVar5 + 1;
            iVar2 = xmp3_DequantChannel(piVar7,iVar10,piVar6 + -2,piVar9,iVar14,iVar12,iVar1);
            iVar14 = iVar14 + 0x48;
            iVar12 = iVar12 + 0x3e;
            iVar1 = iVar1 + 0x18;
            piVar7 = piVar7 + 0x240;
            *piVar6 = iVar2;
            piVar6 = piVar6 + 1;
          } while (iVar5 < param_1[0x1ef]);
        }
      }
    }
  }
  uVar3 = piVar9[8];
  if (uVar3 == 0) {
    return 0;
  }
  if ((piVar8[0x482] < 1) || (piVar8[0x483] < 1)) {
    iVar1 = piVar8[0x480];
    if (0 < iVar1) {
      piVar6 = piVar8;
      do {
        piVar7 = piVar6 + 1;
        if (*piVar6 < -0x3fffffff) {
          *piVar6 = -0x3fffffff;
        }
        else if (0x3fffffff < *piVar6) {
          *piVar6 = 0x3fffffff;
        }
        piVar6 = piVar7;
      } while (piVar7 != piVar8 + iVar1);
    }
    if (0 < piVar8[0x481]) {
      piVar7 = piVar8 + 0x23f;
      piVar6 = piVar7 + piVar8[0x481];
      do {
        piVar7 = piVar7 + 1;
        if (*piVar7 < -0x3fffffff) {
          *piVar7 = -0x3fffffff;
        }
        else if (0x3fffffff < *piVar7) {
          *piVar7 = 0x3fffffff;
        }
      } while (piVar6 != piVar7);
    }
  }
  if (uVar3 >> 1 == 0) {
    uVar3 = 1;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar1 = piVar8[0x481];
      if (piVar8[0x481] < piVar8[0x480]) {
        iVar1 = piVar8[0x480];
      }
    }
    else if (*(int *)(iVar10 + 0x330) == 0) {
      iVar1 = (int)*(short *)(piVar9[0xd] + *(int *)(iVar10 + 0x344) * 2 + 2);
    }
    else {
      iVar1 = *(short *)(piVar9[0xd] + *(int *)(iVar10 + 0x340) * 2 + 0x30) * 3;
    }
    xmp3_MidSideProc(piVar8,iVar1,&local_30);
    uVar3 = piVar9[8];
    if ((uVar3 & 1) == 0) goto LAB_0001df9c;
  }
  uVar4 = *(undefined4 *)(param_2 * 0x90 + iVar13 + 0x88);
  iVar13 = param_2 * 0x7c + iVar11 + 0x3e;
  if (*piVar9 == 0) {
    xmp3_IntensityProcMPEG1
              (piVar8,piVar8[0x480],piVar9,iVar13,iVar10 + 0x318,(int)uVar3 >> 1,uVar4,&local_30);
    uVar3 = piVar9[8];
  }
  else {
    xmp3_IntensityProcMPEG2
              (piVar8,piVar8[0x480],piVar9,iVar13,iVar10 + 0x318,iVar11 + 0xf8,(int)uVar3 >> 1,uVar4
               ,&local_30);
    uVar3 = piVar9[8];
  }
LAB_0001df9c:
  if (uVar3 != 0) {
    if ((int)local_30 == 0) {
      iVar13 = 0x1f;
    }
    else if ((int)local_30 < 0) {
      iVar13 = -1;
    }
    else {
      iVar10 = 0;
      iVar11 = (int)local_30;
      do {
        iVar13 = iVar10;
        iVar11 = iVar11 << 1;
        iVar10 = iVar13 + 1;
      } while (-1 < iVar11);
    }
    piVar8[0x482] = iVar13;
    if (local_30._4_4_ == 0) {
      iVar13 = 0x1f;
    }
    else if (local_30 < 0) {
      iVar13 = -1;
    }
    else {
      iVar11 = 0;
      do {
        iVar13 = iVar11;
        local_30._4_4_ = local_30._4_4_ << 1;
        iVar11 = iVar13 + 1;
      } while (-1 < local_30._4_4_);
    }
    piVar8[0x483] = iVar13;
    iVar13 = piVar8[0x481];
    if (piVar8[0x481] < piVar8[0x480]) {
      iVar13 = piVar8[0x480];
    }
    piVar8[0x480] = iVar13;
    piVar8[0x481] = iVar13;
  }
  return 0;
}



/* ===== FUN_0001e104 @ 0001e104 size=696 ===== */

uint FUN_0001e104(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  int iStack_64;
  uint local_38 [5];
  uint *puVar3;
  
  uVar1 = (int)param_4 >> 2;
  iVar15 = DAT_0001e3bc + 0x1e11c + (param_4 & 3) * 0x40;
  uVar16 = uVar1;
  if (0x1e < (int)uVar1) {
    uVar16 = 0x1f;
  }
  iVar6 = *(int *)(DAT_0001e3bc + 0x1e11c + (param_4 & 3) * 4 + 0x100);
  uVar4 = uVar1;
  if (0x1b < (int)uVar1) {
    uVar4 = 0x1c;
  }
  uVar4 = uVar4 + 3 & ~((int)(uVar4 + 3) >> 0x1f);
  local_38[3] = *(int *)(iVar15 + 0xc) >> (uVar4 & 0xff);
  uVar5 = 0;
  local_38[1] = *(int *)(iVar15 + 4) >> (uVar4 & 0xff);
  local_38[2] = *(int *)(iVar15 + 8) >> (uVar4 & 0xff);
  local_38[0] = 0;
  puVar2 = param_1;
  do {
    while( true ) {
      puVar3 = puVar2 + 1;
      uVar4 = *puVar2;
      puVar2 = puVar3;
      if ((uVar4 & 0x7ffffffc) == 0) break;
      if ((uVar4 & 0x7ffffff0) != 0) {
        if ((uVar4 & 0x7fffffc0) == 0) {
          uVar9 = uVar16 - 3;
          iVar8 = (int)((ulonglong)
                        ((longlong)iVar6 * (longlong)*(int *)(DAT_0001e3c0 + uVar4 * 4 + 0x1e368))
                       >> 0x20);
        }
        else {
          uVar7 = uVar4 * 0x20000;
          uVar12 = uVar7;
          if ((int)uVar7 < 0x8000000) {
            uVar12 = uVar4 << 0x15;
          }
          if ((int)uVar7 < 0x8000000) {
            iVar8 = 4;
            iVar10 = 6;
          }
          else {
            iVar8 = 0;
            iVar10 = 2;
          }
          if ((int)uVar12 < 0x20000000) {
            uVar12 = uVar12 << 2;
            iVar8 = iVar10;
          }
          if ((int)uVar12 < 0x40000000) {
            uVar12 = uVar12 << 1;
            iVar8 = iVar8 + 1;
          }
          uVar7 = 0x29a0bda9;
          if (0x5a827999 < (int)uVar12) {
            uVar7 = 0x10852163;
          }
          iVar10 = -0x4fd1b7d8;
          if (0x5a827999 < (int)uVar12) {
            iVar10 = -0x2ccc095c;
          }
          uVar17 = VectorShiftRight(CONCAT44(uVar12,uVar12),0x20);
          iVar11 = 0x46e9408b;
          if ((int)uVar12 < 0x5a82799a) {
            iVar11 = 0x5957aa1b;
          }
          iVar13 = 0x27c2cef0;
          if ((int)uVar12 < 0x5a82799a) {
            iVar13 = 0x236c498d;
          }
          iStack_64 = (int)((ulonglong)uVar17 >> 0x20);
          iVar14 = -0x10a884c;
          if ((int)uVar12 < 0x5a82799a) {
            iVar14 = -0xa7e7a7;
          }
          iVar8 = DAT_0001e3c4 + 0x1e374 + iVar8 * 4;
          uVar9 = uVar16 - *(int *)(iVar8 + 0x1f0);
          iVar8 = (int)((ulonglong)
                        ((longlong)
                         ((int)((ulonglong)
                                ((longlong)
                                 (iVar14 + (int)((ulonglong)
                                                 ((longlong)
                                                  (iVar13 + (int)((ulonglong)
                                                                  ((longlong)
                                                                   (iVar11 + (int)((ulonglong)
                                                                                   ((longlong)
                                                                                    (int)(iVar10 + 
                                                  uVar7 * iStack_64 +
                                                  (int)((ulonglong)uVar7 * (ulonglong)uVar12 >> 0x20
                                                       )) * (longlong)(int)uVar12) >> 0x20)) *
                                                  (longlong)(int)uVar12) >> 0x20)) *
                                                 (longlong)(int)uVar12) >> 0x20)) *
                                (longlong)*(int *)(iVar8 + 0x1d0)) >> 0x20) << 3) * (longlong)iVar6)
                       >> 0x20);
        }
        if ((int)uVar9 < 0) {
          uVar7 = 0x7fffffff;
          if (iVar8 <= 0x7fffffff >> (-uVar9 & 0xff)) {
            uVar7 = iVar8 << (-uVar9 & 0xff);
          }
        }
        else {
          uVar7 = iVar8 >> (uVar9 & 0xff);
        }
        goto LAB_0001e210;
      }
      iVar8 = *(int *)(iVar15 + uVar4 * 4);
      if ((int)uVar1 < 0) {
        uVar7 = iVar8 << (-uVar16 & 0xff);
      }
      else {
        uVar7 = iVar8 >> (uVar16 & 0xff);
      }
      uVar5 = uVar5 | uVar7;
      if ((int)uVar4 < 0) goto LAB_0001e264;
LAB_0001e21c:
      *param_2 = uVar7;
      param_2 = param_2 + 1;
      if (puVar3 == param_1 + param_3) {
        return uVar5;
      }
    }
    uVar7 = local_38[uVar4];
LAB_0001e210:
    uVar5 = uVar5 | uVar7;
    if (-1 < (int)uVar4) goto LAB_0001e21c;
LAB_0001e264:
    *param_2 = -uVar7;
    param_2 = param_2 + 1;
    if (puVar3 == param_1 + param_3) {
      return uVar5;
    }
  } while( true );
}



/* ===== xmp3_DequantChannel @ 0001e3c8 size=1528 ===== */

int xmp3_DequantChannel(int param_1,undefined4 *param_2,int *param_3,int *param_4,int param_5,
                       int param_6,undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined4 *puVar20;
  longlong lVar21;
  byte *local_78;
  int *local_74;
  int local_70;
  int local_68;
  uint local_60;
  uint local_5c;
  byte *local_58;
  undefined8 local_38;
  uint local_30;
  
  iVar17 = param_4[8] >> 1;
  local_70 = *(int *)(param_5 + 8);
  iVar10 = (*(int *)(param_5 + 0x40) + 1) * 2;
  if (*(int *)(param_5 + 0x14) != 2) {
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    if (iVar17 == 0) {
      iVar17 = 0x16;
      local_60 = 0xd;
      goto LAB_0001e430;
    }
    iVar17 = 0x16;
    local_60 = 0xd;
    goto LAB_0001e434;
  }
  if (*(int *)(param_5 + 0x18) == 0) {
    if (iVar17 == 0) {
      local_70 = local_70 + 2;
    }
    param_7[5] = 0;
    local_70 = 0xd2 - local_70;
    param_7[4] = 0;
    *param_7 = 0;
    param_7[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_7[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_7[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_5c = 0;
    local_60 = 0;
    local_68 = 0;
    goto LAB_0001e530;
  }
  if (*param_4 == 0) {
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    if (iVar17 == 0) {
      iVar17 = 8;
      local_60 = 3;
LAB_0001e430:
      local_70 = local_70 + 2;
    }
    else {
      iVar17 = 8;
      local_60 = 3;
    }
  }
  else {
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    if (iVar17 == 0) {
      iVar17 = 6;
      local_60 = 3;
      goto LAB_0001e430;
    }
    local_60 = 3;
    iVar17 = 6;
  }
LAB_0001e434:
  local_70 = 0xd2 - local_70;
  pbVar15 = (byte *)(param_6 + -1);
  iVar16 = DAT_0001e9c0 + 0x1e65c;
  local_68 = 0;
  local_5c = 0;
  iVar8 = 0;
  do {
    iVar14 = iVar8 + 1;
    iVar2 = param_1 + local_68 * 4;
    bVar19 = *(int *)(param_5 + 0x3c) != 0;
    uVar18 = iVar14 + iVar16;
    if (bVar19) {
      uVar18 = (uint)*(byte *)(uVar18 - 1);
    }
    iVar4 = (int)*(short *)(param_4[0xd] + iVar8 * 2 + 2) -
            (int)*(short *)(param_4[0xd] + iVar8 * 2);
    pbVar15 = pbVar15 + 1;
    uVar7 = (uint)*pbVar15;
    local_68 = local_68 + iVar4;
    if (bVar19) {
      uVar7 = uVar7 + uVar18;
    }
    uVar18 = FUN_0001e104(iVar2,iVar2,iVar4,iVar10 * uVar7 + local_70);
    if (uVar18 != 0) {
      local_38 = CONCAT44(local_38._4_4_,iVar8);
    }
    local_5c = local_5c | uVar18;
  } while ((local_68 < *param_3) && (iVar8 = iVar14, iVar14 < iVar17));
  param_7[4] = 0;
  param_7[5] = (uint)local_38;
  *param_7 = 0;
  param_7[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_7[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_7[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (0xb < local_60) {
    if (local_5c == 0) {
      return 0x1f;
    }
    iVar10 = 0;
    if ((int)local_5c < 0) {
      return -1;
    }
    do {
      iVar17 = iVar10;
      local_5c = local_5c << 1;
      iVar10 = iVar17 + 1;
    } while (-1 < (int)local_5c);
    return iVar17;
  }
LAB_0001e530:
  local_38 = CONCAT44(local_60,local_60);
  local_58 = (byte *)(param_6 + local_60 * 3 + 0x17);
  local_30 = local_60;
  do {
    iVar16 = 0;
    iVar17 = local_68 * 4;
    iVar8 = param_4[0xd] + local_60 * 2;
    puVar3 = (undefined4 *)(param_1 + iVar17);
    uVar7 = (int)*(short *)(iVar8 + 0x30) - (int)*(short *)(iVar8 + 0x2e);
    uVar18 = local_60 + 1;
    local_78 = local_58;
    puVar12 = param_2;
    puVar5 = puVar3;
    local_74 = (int *)(param_5 + 0x28);
    do {
      while( true ) {
        uVar1 = FUN_0001e104(puVar5,puVar12,uVar7,
                             iVar10 * (uint)*local_78 + local_70 + *local_74 * 8);
        if (uVar1 == 0) break;
        puVar5 = puVar5 + uVar7;
        puVar12 = puVar12 + uVar7;
        *(uint *)((int)&local_38 + iVar16 * 4) = local_60;
        iVar16 = iVar16 + 1;
        local_5c = local_5c | uVar1;
        local_78 = local_78 + 1;
        local_74 = local_74 + 1;
        if (iVar16 == 3) goto LAB_0001e640;
      }
      iVar16 = iVar16 + 1;
      puVar5 = puVar5 + uVar7;
      puVar12 = puVar12 + uVar7;
      local_78 = local_78 + 1;
      local_74 = local_74 + 1;
    } while (iVar16 != 3);
LAB_0001e640:
    local_68 = local_68 + uVar7 * 3;
    if (0 < (int)uVar7) {
      puVar12 = param_2 + uVar7;
      puVar9 = param_2 + uVar7 * 2;
      puVar5 = (undefined4 *)(param_1 + uVar7 * 0xc + iVar17);
      if ((uVar7 - 1 < 4 ||
          (param_2 < puVar5 && puVar3 < puVar12 || puVar12 < puVar5 && puVar3 < puVar9)) ||
          puVar9 < puVar5 && puVar3 < param_2 + uVar7 * 3) {
        puVar6 = param_2 + -1;
        puVar5 = puVar9;
        do {
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar6;
          puVar13 = puVar12 + 1;
          puVar3[1] = *puVar12;
          puVar3[2] = *puVar5;
          puVar5 = puVar5 + 1;
          puVar12 = puVar13;
          puVar3 = puVar3 + 3;
        } while (puVar13 != puVar9);
      }
      else {
        puVar12 = puVar9 + (uVar7 & 0xfffffffc);
        do {
          puVar9 = puVar9 + 4;
          puVar5 = (undefined4 *)0x3a0;
          puVar6 = (undefined4 *)0x3b0;
          puVar13 = (undefined4 *)0x3c0;
          lVar21 = 2;
          puVar20 = puVar3;
          while( true ) {
            *puVar20 = *puVar5;
            puVar20[1] = *puVar6;
            puVar20[2] = *puVar13;
            puVar20 = puVar20 + 3;
            lVar21 = lVar21 + -1;
            if (lVar21 == 0) break;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar20 = puVar3 + 6;
          puVar5 = (undefined4 *)0x3a8;
          puVar6 = (undefined4 *)0x3b8;
          puVar13 = (undefined4 *)0x3c8;
          lVar21 = 2;
          while( true ) {
            *puVar20 = *puVar5;
            puVar20[1] = *puVar6;
            puVar20[2] = *puVar13;
            puVar20 = puVar20 + 3;
            lVar21 = lVar21 + -1;
            if (lVar21 == 0) break;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar3 = puVar3 + 0xc;
        } while (puVar9 != puVar12);
        uVar1 = uVar7 & 0xfffffffc;
        if (uVar7 != uVar1) {
          iVar16 = uVar1 * 0xc;
          iVar2 = uVar1 + 1;
          *(undefined4 *)(param_1 + iVar16 + iVar17) = param_2[uVar1];
          iVar8 = param_1 + iVar16 + iVar17;
          *(undefined4 *)(iVar8 + 4) = param_2[uVar7 + uVar1];
          *(undefined4 *)(iVar8 + 8) = param_2[uVar7 + uVar1 + uVar7];
          if (iVar2 < (int)uVar7) {
            iVar8 = iVar16 + 0xc + iVar17;
            iVar4 = param_1 + iVar8;
            iVar14 = uVar1 + 2;
            *(undefined4 *)(param_1 + iVar8) = param_2[iVar2];
            *(undefined4 *)(iVar4 + 4) = param_2[uVar7 + iVar2];
            *(undefined4 *)(iVar4 + 8) = param_2[uVar7 + uVar7 + iVar2];
            if (iVar14 < (int)uVar7) {
              iVar17 = iVar16 + 0x18 + iVar17;
              iVar8 = param_1 + iVar17;
              *(undefined4 *)(param_1 + iVar17) = param_2[iVar14];
              *(undefined4 *)(iVar8 + 4) = param_2[iVar14 + uVar7];
              *(undefined4 *)(iVar8 + 8) = param_2[uVar7 + iVar14 + uVar7];
            }
          }
        }
      }
    }
    local_58 = local_58 + 3;
    local_60 = uVar18;
    if (0xc < (int)uVar18 || *param_3 <= local_68) {
      *param_3 = local_68;
      iVar10 = *(int *)(param_5 + 0x18);
      param_7[2] = local_38._4_4_;
      param_7[1] = (uint)local_38;
      param_7[3] = local_30;
      if (iVar10 == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = 2;
      }
      *param_7 = uVar11;
      if ((int)local_38._4_4_ <= (int)(uint)local_38) {
        local_38._4_4_ = (uint)local_38;
      }
      if ((int)local_38._4_4_ < (int)local_30) {
        local_38._4_4_ = local_30;
      }
      param_7[4] = local_38._4_4_;
      if (local_5c != 0) {
        if ((int)local_5c < 0) {
          return -1;
        }
        iVar10 = 0;
        do {
          iVar17 = iVar10;
          local_5c = local_5c << 1;
          iVar10 = iVar17 + 1;
        } while (-1 < (int)local_5c);
        return iVar17;
      }
      return 0x1f;
    }
  } while( true );
}



/* ===== xmp3_DecodeHuffman @ 0001e9c8 size=3592 ===== */

undefined1 *
xmp3_DecodeHuffman(int *param_1,undefined1 (*param_2) [16],uint *param_3,uint param_4,int param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  ushort *puVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  ushort *puVar39;
  uint uVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 (*local_dc) [16];
  uint *local_d8;
  int local_c4;
  undefined1 (*local_c0) [16];
  int *local_bc;
  uint local_b8;
  int *local_b4;
  int local_78 [21];
  
  uVar11 = DAT_0001ee90;
  uVar10 = DAT_0001ee88;
  iVar20 = DAT_0001ee98 + 0x1e9f0;
  if ((((param_1 == (int *)0x0) || (piVar12 = (int *)*param_1, piVar12 == (int *)0x0)) ||
      (iVar36 = param_1[1], iVar36 == 0)) ||
     ((param_1[2] == 0 || (iVar21 = param_1[3], iVar21 == 0 || (int)param_4 < 0)))) {
    return (undefined1 *)0xffffffff;
  }
  iVar18 = piVar12[0xd];
  iVar22 = iVar36 + param_6 * 0x48 + param_5 * 0x90;
  if ((*(int *)(iVar22 + 0x38) == 0) || (*(int *)(iVar22 + 0x3c) != 2)) {
    iVar22 = iVar36 + param_6 * 0x48 + param_5 * 0x90;
    iVar23 = *(int *)(iVar22 + 0x5c) + 1;
    local_78[1] = (int)*(short *)(iVar18 + iVar23 * 2);
    local_78[2] = (int)*(short *)(iVar18 + (iVar23 + *(int *)(iVar22 + 0x60)) * 2 + 2);
  }
  else if (*(int *)(iVar22 + 0x40) == 0) {
    local_78[2] = 0x240;
    local_78[1] = *(short *)(iVar18 + ((*(int *)(iVar22 + 0x5c) + 1) / 3) * 2 + 0x2e) * 3;
  }
  else {
    if (*piVar12 == 0) {
      local_78[1] = (int)*(short *)(iVar18 + *(int *)(iVar22 + 0x5c) * 2 + 2);
    }
    else {
      local_78[1] = (int)*(short *)(iVar18 + 0xc) +
                    ((int)*(short *)(iVar18 + 0x36) - (int)*(short *)(iVar18 + 0x34)) * 2;
    }
    local_78[2] = 0x240;
  }
  iVar18 = param_6 * 0x900 + iVar21;
  iVar22 = iVar21 + param_6 * 4;
  local_bc = local_78;
  local_b4 = (int *)(iVar36 + param_6 * 0x48 + 0x44 + param_5 * 0x90);
  local_78[3] = *(int *)(iVar36 + param_6 * 0x48 + param_5 * 0x90 + 0x2c) * 2;
  if (0x23f < local_78[3]) {
    local_78[3] = 0x240;
  }
  *(int *)(iVar22 + 0x1200) = local_78[3];
  uVar19 = *param_3;
  if (local_78[3] < local_78[2]) {
    local_78[2] = local_78[3];
  }
  if (local_78[3] < local_78[1]) {
    local_78[1] = local_78[3];
  }
  local_78[0] = 0;
  local_c0 = param_2;
  local_b8 = param_4;
  do {
    iVar23 = *local_bc;
    local_bc = local_bc + 1;
    local_dc = (undefined1 (*) [16])(*local_bc - iVar23);
    if (0 < (int)local_dc) {
      uVar19 = -uVar19 & 7;
      iVar13 = *local_b4;
      iVar24 = *(int *)(*(int *)(iVar20 + DAT_0001ee9c) + iVar13 * 8 + 4);
      if (uVar19 == 0) {
        uVar25 = 0;
        pauVar38 = local_c0;
      }
      else {
        uVar25 = (uint)(byte)(*local_c0)[0] << (0x20 - uVar19 & 0xff);
        pauVar38 = (undefined1 (*) [16])(*local_c0 + 1);
      }
      local_d8 = (uint *)(iVar18 + iVar23 * 4);
      if (iVar24 == 0) {
        uVar19 = ((int)local_dc - 1U >> 1) + 1;
        if ((int)local_dc - 1U < 2) {
          iVar23 = 0;
LAB_0001f6d0:
          (local_d8 + iVar23)[0] = 0;
          (local_d8 + iVar23)[1] = 0;
        }
        else {
          puVar41 = (undefined8 *)(iVar21 + (iVar23 + param_6 * 0x240) * 4);
          puVar26 = puVar41 + (uVar19 & 0xfffffffe);
          do {
            *puVar41 = 0;
            puVar41[1] = 0;
            puVar41 = puVar41 + 2;
          } while (puVar41 != puVar26);
          iVar23 = (uVar19 & 0xfffffffe) << 1;
          if (uVar19 != (uVar19 & 0xfffffffe)) goto LAB_0001f6d0;
        }
        uVar19 = *param_3;
      }
      else {
        iVar31 = local_b8 - uVar19;
        iVar23 = *(int *)(*(int *)(iVar20 + DAT_0001eea0) + iVar13 * 4) * 2;
        puVar32 = (ushort *)(iVar23 + *(int *)(iVar20 + DAT_0001eea4));
        if (iVar24 == 1) {
          uVar7 = *(ushort *)(iVar23 + *(int *)(iVar20 + DAT_0001eea4));
          iVar23 = 0;
          do {
            puVar29 = local_d8;
            if (iVar31 < 0x10) {
              iVar13 = iVar31 + uVar19;
              if (iVar13 < 1) {
                return (undefined1 *)0xffffffff;
              }
              iVar23 = 0xb;
              pauVar30 = pauVar38;
              if (0 < iVar31) {
                pauVar30 = (undefined1 (*) [16])(*pauVar38 + 1);
                uVar25 = uVar25 | (uint)(byte)(*pauVar38)[0] << (0x18 - uVar19 & 0xff);
              }
              if (8 < iVar31) {
                uVar19 = 0x10 - uVar19;
              }
              pauVar38 = pauVar30;
              if (8 < iVar31) {
                pauVar38 = (undefined1 (*) [16])(*pauVar30 + 1);
                uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0] << (uVar19 & 0xff);
              }
              uVar19 = iVar13 + 0xb;
              uVar25 = uVar25 & -0x80000000 >> (iVar13 - 1U & 0xff);
              iVar31 = 0;
            }
            else {
              uVar14 = 0x10 - uVar19;
              uVar33 = 0x18 - uVar19;
              uVar19 = uVar19 + 0x10;
              uVar25 = uVar25 | (uint)(byte)(*pauVar38)[1] << (uVar14 & 0xff) |
                                (uint)(byte)(*pauVar38)[0] << (uVar33 & 0xff);
              pauVar38 = (undefined1 (*) [16])(*pauVar38 + 2);
              iVar31 = iVar31 + -0x10;
            }
            do {
              local_d8 = puVar29 + 2;
              local_dc = (undefined1 (*) [16])((int)local_dc + -2);
              uVar8 = puVar32[(uVar25 >> (0x20 - (uVar7 & 0xf) & 0xff)) + 1];
              uVar15 = (uVar8 & 0xff) >> 4;
              uVar25 = uVar25 << (uint)(uVar8 >> 0xc);
              uVar33 = (uVar8 & 0xfff) >> 8;
              uVar19 = uVar19 - (uVar8 >> 0xc);
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar25 & 0x80000000;
                uVar19 = uVar19 - 1;
                uVar25 = uVar25 << 1;
                uVar14 = uVar14 | uVar15;
              }
              if (uVar33 != 0) {
                uVar19 = uVar19 - 1;
              }
              uVar15 = uVar25 & 0x80000000 | uVar33;
              if (uVar33 != 0) {
                uVar25 = uVar25 << 1;
              }
              else {
                uVar15 = 0;
              }
              if ((int)uVar19 < iVar23) {
                return (undefined1 *)0xffffffff;
              }
              bVar42 = uVar19 == 10;
              iVar13 = uVar19 - 10;
              if ((int)uVar19 >= 0xb) {
                bVar42 = local_dc == (undefined1 (*) [16])0x0;
                iVar13 = (int)local_dc;
              }
              puVar29[1] = uVar15;
              *puVar29 = uVar14;
              puVar29 = local_d8;
            } while (!bVar42 && iVar13 < 0 == ((int)uVar19 < 0xb && SBORROW4(uVar19,10)));
          } while (0 < (int)local_dc);
          uVar25 = (uVar19 - iVar23) + iVar31;
        }
        else {
          if (1 < iVar24 - 2U) {
            return (undefined1 *)0xffffffff;
          }
          uVar14 = *(uint *)(*(int *)(iVar20 + DAT_0001ee9c) + iVar13 * 8);
          uVar33 = uVar14 + 1;
          local_c4 = 0;
          puVar39 = puVar32;
          do {
            if (iVar31 < 0x10) {
              iVar23 = iVar31 + uVar19;
              if (iVar23 < 1) {
                return (undefined1 *)0xffffffff;
              }
              pauVar30 = pauVar38;
              if (0 < iVar31) {
                pauVar30 = (undefined1 (*) [16])(*pauVar38 + 1);
                uVar25 = uVar25 | (uint)(byte)(*pauVar38)[0] << (0x18 - uVar19 & 0xff);
              }
              pauVar37 = pauVar30;
              if (8 < iVar31) {
                pauVar37 = (undefined1 (*) [16])(*pauVar30 + 1);
                uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0] << (0x10 - uVar19 & 0xff);
              }
              uVar19 = iVar23 + 0xb;
              uVar25 = uVar25 & -0x80000000 >> (iVar23 - 1U & 0xff);
              iVar31 = 0;
              local_c4 = 0xb;
            }
            else {
              uVar15 = 0x10 - uVar19;
              pauVar37 = (undefined1 (*) [16])(*pauVar38 + 2);
              uVar27 = 0x18 - uVar19;
              iVar31 = iVar31 + -0x10;
              uVar19 = uVar19 + 0x10;
              uVar25 = uVar25 | (uint)(byte)(*pauVar38)[1] << (uVar15 & 0xff) |
                                (uint)(byte)(*pauVar38)[0] << (uVar27 & 0xff);
            }
            auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar1._0_8_ = 0x8000000080;
            auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
            auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar2._0_8_ = 0x2000000020;
            auVar2 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
            auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar3._0_8_ = 0x1800000018;
            auVar3 = *(undefined1 (*) [16])(auVar3 << 0x40 | auVar3);
            auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar4._0_8_ = 0x4000000040;
            auVar4 = *(undefined1 (*) [16])(auVar4 << 0x40 | auVar4);
            auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar5._0_8_ = 0x6000000060;
            auVar5 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
            pauVar38 = pauVar37;
            while( true ) {
              bVar42 = uVar19 == 10;
              pauVar30 = (undefined1 (*) [16])(uVar19 - 10);
              if ((int)uVar19 >= 0xb) {
                bVar42 = local_dc == (undefined1 (*) [16])0x0;
                pauVar30 = local_dc;
              }
              if (bVar42 || (int)pauVar30 < 0 != ((int)uVar19 < 0xb && SBORROW4(uVar19,10))) break;
              while( true ) {
                uVar28 = *puVar39 & 0xf;
                uVar27 = (uint)puVar39[(uVar25 >> (0x20 - uVar28 & 0xff)) + 1];
                uVar15 = (uint)(puVar39[(uVar25 >> (0x20 - uVar28 & 0xff)) + 1] >> 0xc);
                if (uVar15 == 0) break;
                uVar28 = (uVar27 & 0xff) >> 4;
                uVar19 = uVar19 - uVar15;
                uVar25 = uVar25 << uVar15;
                uVar15 = (uVar27 & 0xfff) >> 8;
                if (uVar28 == 0xf && iVar24 == 3) {
                  uVar27 = uVar33;
                  if (uVar15 != 0) {
                    uVar27 = uVar14 + 2;
                  }
                  if ((int)(uVar19 + iVar31) < (int)uVar27) {
                    return (undefined1 *)0xffffffff;
                  }
                  if ((int)uVar19 < (int)uVar27) {
                    uVar28 = ~uVar19 + uVar27 >> 3;
                    uVar17 = uVar28 + 1;
                    pauVar30 = pauVar38;
                    uVar16 = uVar19;
                    uVar34 = uVar27;
                    if (~uVar19 + uVar27 < 0x78) {
LAB_0001f0f4:
                      uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0] << (0x18 - uVar16 & 0xff);
                      if ((int)(uVar16 + 8) < (int)uVar27) {
                        uVar25 = uVar25 | (uint)(byte)(*pauVar30)[1] << (0x18 - (uVar16 + 8) & 0xff)
                        ;
                        if (((int)(uVar16 + 0x10) < (int)uVar27) &&
                           (uVar25 = uVar25 | (uint)(byte)(*pauVar30)[2] <<
                                              (0x18 - (uVar16 + 0x10) & 0xff),
                           (int)(uVar16 + 0x18) < (int)uVar27)) {
                          uVar25 = uVar25 | (uint)(byte)(*pauVar30)[3] << (-uVar16 & 0xff);
                          if ((int)(uVar16 + 0x20) < (int)uVar27) {
                            uVar25 = uVar25 | (uint)(byte)(*pauVar30)[4] <<
                                              (0x18 - (uVar16 + 0x20) & 0xff);
                            if ((int)(uVar16 + 0x28) < (int)uVar27) {
                              uVar25 = uVar25 | (uint)(byte)(*pauVar30)[5] <<
                                                (0x18 - (uVar16 + 0x28) & 0xff);
                              if ((int)(uVar16 + 0x30) < (int)uVar27) {
                                uVar25 = uVar25 | (uint)(byte)(*pauVar30)[6] <<
                                                  (0x18 - (uVar16 + 0x30) & 0xff);
                                if ((int)(uVar16 + 0x38) < (int)uVar27) {
                                  uVar25 = uVar25 | (uint)(byte)(*pauVar30)[7] <<
                                                    (0x18 - (uVar16 + 0x38) & 0xff);
                                  if ((int)(uVar16 + 0x40) < (int)uVar27) {
                                    uVar25 = uVar25 | (uint)(byte)(*pauVar30)[8] <<
                                                      (0x18 - (uVar16 + 0x40) & 0xff);
                                    if ((int)(uVar16 + 0x48) < (int)uVar27) {
                                      uVar25 = uVar25 | (uint)(byte)(*pauVar30)[9] <<
                                                        (0x18 - (uVar16 + 0x48) & 0xff);
                                      if ((int)(uVar16 + 0x50) < (int)uVar27) {
                                        uVar25 = uVar25 | (uint)(byte)(*pauVar30)[10] <<
                                                          (0x18 - (uVar16 + 0x50) & 0xff);
                                        if ((int)(uVar16 + 0x58) < (int)uVar27) {
                                          uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0xb] <<
                                                            (0x18 - (uVar16 + 0x58) & 0xff);
                                          if ((int)(uVar16 + 0x60) < (int)uVar27) {
                                            uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0xc] <<
                                                              (0x18 - (uVar16 + 0x60) & 0xff);
                                            if ((int)(uVar16 + 0x68) < (int)uVar27) {
                                              uVar40 = uVar16 + 0x70;
                                              uVar17 = uVar40;
                                              if ((int)uVar40 < (int)uVar27) {
                                                uVar17 = 0x18 - uVar40;
                                                uVar34 = (uint)(byte)(*pauVar30)[0xe];
                                              }
                                              uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0xd] <<
                                                                (0x18 - (uVar16 + 0x68) & 0xff);
                                              if ((int)uVar40 < (int)uVar27) {
                                                uVar25 = uVar25 | uVar34 << (uVar17 & 0xff);
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
                      auVar46._8_8_ = CONCAT44(uVar19,uVar19);
                      auVar46._0_8_ = CONCAT44(uVar19,uVar19);
                      auVar43._8_8_ = uVar11;
                      auVar43._0_8_ = uVar10;
                      auVar43 = VectorAdd(auVar46,auVar43,4);
                      auVar46 = (undefined1  [16])0x0;
                      do {
                        auVar44 = *pauVar30;
                        pauVar30 = pauVar30 + 1;
                        auVar48 = VectorAdd(auVar43,auVar2,4);
                        auVar47 = VectorAdd(auVar43,auVar4,4);
                        auVar45 = VectorCopyLong(auVar44._0_8_,1,1);
                        auVar52 = VectorCopyLong(auVar44._8_8_,1,1);
                        auVar50 = VectorSub(auVar3,auVar43,4);
                        auVar49 = VectorCopyLong(auVar45._8_8_,2,1);
                        auVar51 = VectorSub(auVar3,auVar48,4);
                        auVar45 = VectorCopyLong(auVar45._0_8_,2,1);
                        auVar48 = VectorAdd(auVar43,auVar5,4);
                        auVar44 = VectorCopyLong(auVar52._0_8_,2,1);
                        auVar47 = VectorSub(auVar3,auVar47,4);
                        auVar51 = VectorShiftLeft(auVar49,auVar51,4,0);
                        auVar49 = VectorShiftLeft(auVar45,auVar50,4,0);
                        auVar50 = VectorCopyLong(auVar52._8_8_,2,1);
                        auVar45 = VectorSub(auVar3,auVar48,4);
                        auVar44 = VectorShiftLeft(auVar44,auVar47,4,0);
                        auVar45 = VectorShiftLeft(auVar50,auVar45,4,0);
                        auVar43 = VectorAdd(auVar43,auVar1,4);
                        auVar46 = auVar46 | auVar51 | auVar49 | auVar44 | auVar45;
                      } while ((undefined1 (*) [16])(*pauVar38 + (uVar17 & 0xfffffff0)) != pauVar30)
                      ;
                      uVar40 = uVar17 & 0xfffffff0;
                      auVar44._8_8_ = 0;
                      auVar44._0_8_ = auVar46._8_8_;
                      uVar25 = uVar25 | SUB164(auVar44 | auVar46,4) | SUB164(auVar44 | auVar46,0);
                      pauVar30 = (undefined1 (*) [16])(*pauVar38 + uVar40);
                      uVar16 = uVar19 + uVar40 * 8;
                      if (uVar40 != uVar17) goto LAB_0001f0f4;
                    }
                    uVar27 = uVar28 * 8;
                    iVar31 = iVar31 + -8 + uVar28 * -8;
                    uVar19 = uVar27 + uVar19 + 8;
                    if (iVar31 < 0) {
                      uVar19 = uVar19 + iVar31;
                      uVar34 = 0x80000000;
                      uVar27 = uVar19 - 1;
                    }
                    pauVar38 = (undefined1 (*) [16])(*pauVar38 + uVar28 + 1);
                    if (iVar31 < 0) {
                      uVar25 = uVar25 & (int)uVar34 >> (uVar27 & 0xff);
                      iVar31 = 0;
                    }
                  }
                  uVar19 = uVar19 - uVar14;
                  uVar28 = (uVar25 >> (0x20 - uVar14 & 0xff)) + 0xf;
                  uVar25 = uVar25 << (uVar14 & 0xff);
                }
                uVar27 = 0;
                if (uVar28 != 0) {
                  uVar19 = uVar19 - 1;
                  uVar27 = uVar25 & 0x80000000 | uVar28;
                  uVar25 = uVar25 << 1;
                }
                if (uVar15 == 0xf && iVar24 == 3) {
                  if ((int)(iVar31 + uVar19) < (int)uVar33) {
                    return (undefined1 *)0xffffffff;
                  }
                  if ((int)uVar19 < (int)uVar33) {
                    uVar15 = uVar14 - uVar19 >> 3;
                    uVar34 = uVar15 + 1;
                    uVar28 = uVar19;
                    pauVar30 = pauVar38;
                    if (uVar14 - uVar19 < 0x78) {
LAB_0001f370:
                      uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0] << (0x18 - uVar28 & 0xff);
                      if ((int)(uVar28 + 8) < (int)uVar33) {
                        uVar25 = uVar25 | (uint)(byte)(*pauVar30)[1] << (0x18 - (uVar28 + 8) & 0xff)
                        ;
                        if (((int)(uVar28 + 0x10) < (int)uVar33) &&
                           (uVar25 = uVar25 | (uint)(byte)(*pauVar30)[2] <<
                                              (0x18 - (uVar28 + 0x10) & 0xff),
                           (int)(uVar28 + 0x18) < (int)uVar33)) {
                          uVar25 = uVar25 | (uint)(byte)(*pauVar30)[3] << (-uVar28 & 0xff);
                          if ((int)(uVar28 + 0x20) < (int)uVar33) {
                            uVar25 = uVar25 | (uint)(byte)(*pauVar30)[4] <<
                                              (0x18 - (uVar28 + 0x20) & 0xff);
                            if ((int)(uVar28 + 0x28) < (int)uVar33) {
                              uVar25 = uVar25 | (uint)(byte)(*pauVar30)[5] <<
                                                (0x18 - (uVar28 + 0x28) & 0xff);
                              if ((int)(uVar28 + 0x30) < (int)uVar33) {
                                uVar25 = uVar25 | (uint)(byte)(*pauVar30)[6] <<
                                                  (0x18 - (uVar28 + 0x30) & 0xff);
                                if ((int)(uVar28 + 0x38) < (int)uVar33) {
                                  uVar25 = uVar25 | (uint)(byte)(*pauVar30)[7] <<
                                                    (0x18 - (uVar28 + 0x38) & 0xff);
                                  if ((int)(uVar28 + 0x40) < (int)uVar33) {
                                    uVar25 = uVar25 | (uint)(byte)(*pauVar30)[8] <<
                                                      (0x18 - (uVar28 + 0x40) & 0xff);
                                    if ((int)(uVar28 + 0x48) < (int)uVar33) {
                                      uVar25 = uVar25 | (uint)(byte)(*pauVar30)[9] <<
                                                        (0x18 - (uVar28 + 0x48) & 0xff);
                                      if ((int)(uVar28 + 0x50) < (int)uVar33) {
                                        uVar25 = uVar25 | (uint)(byte)(*pauVar30)[10] <<
                                                          (0x18 - (uVar28 + 0x50) & 0xff);
                                        if ((int)(uVar28 + 0x58) < (int)uVar33) {
                                          uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0xb] <<
                                                            (0x18 - (uVar28 + 0x58) & 0xff);
                                          if ((int)(uVar28 + 0x60) < (int)uVar33) {
                                            uVar25 = uVar25 | (uint)(byte)(*pauVar30)[0xc] <<
                                                              (0x18 - (uVar28 + 0x60) & 0xff);
                                            if ((int)(uVar28 + 0x68) < (int)uVar33) {
                                              uVar17 = uVar28 + 0x70;
                                              puVar9 = *pauVar30;
                                              uVar16 = uVar17;
                                              if ((int)uVar17 < (int)uVar33) {
                                                uVar16 = 0x18 - uVar17;
                                                pauVar30 = (undefined1 (*) [16])
                                                           (uint)(byte)(*pauVar30)[0xe];
                                              }
                                              uVar25 = uVar25 | (uint)(byte)puVar9[0xd] <<
                                                                (0x18 - (uVar28 + 0x68) & 0xff);
                                              if ((int)uVar17 < (int)uVar33) {
                                                uVar25 = uVar25 | (int)pauVar30 << (uVar16 & 0xff);
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
                      auVar45._8_8_ = CONCAT44(uVar19,uVar19);
                      auVar45._0_8_ = CONCAT44(uVar19,uVar19);
                      auVar47._8_8_ = uVar11;
                      auVar47._0_8_ = uVar10;
                      auVar43 = VectorAdd(auVar45,auVar47,4);
                      auVar46 = (undefined1  [16])0x0;
                      do {
                        auVar44 = *pauVar30;
                        pauVar30 = pauVar30 + 1;
                        auVar47 = VectorAdd(auVar43,auVar2,4);
                        auVar48 = VectorAdd(auVar43,auVar4,4);
                        auVar45 = VectorCopyLong(auVar44._0_8_,1,1);
                        auVar44 = VectorCopyLong(auVar44._8_8_,1,1);
                        auVar50 = VectorSub(auVar3,auVar43,4);
                        auVar51 = VectorCopyLong(auVar45._8_8_,2,1);
                        auVar47 = VectorSub(auVar3,auVar47,4);
                        auVar45 = VectorCopyLong(auVar45._0_8_,2,1);
                        auVar49 = VectorAdd(auVar43,auVar5,4);
                        auVar52 = VectorCopyLong(auVar44._0_8_,2,1);
                        auVar48 = VectorSub(auVar3,auVar48,4);
                        auVar50 = VectorShiftLeft(auVar45,auVar50,4,0);
                        auVar47 = VectorShiftLeft(auVar51,auVar47,4,0);
                        auVar44 = VectorCopyLong(auVar44._8_8_,2,1);
                        auVar45 = VectorSub(auVar3,auVar49,4);
                        auVar48 = VectorShiftLeft(auVar52,auVar48,4,0);
                        auVar44 = VectorShiftLeft(auVar44,auVar45,4,0);
                        auVar43 = VectorAdd(auVar43,auVar1,4);
                        auVar46 = auVar46 | auVar47 | auVar50 | auVar48 | auVar44;
                      } while ((undefined1 (*) [16])(*pauVar38 + (uVar34 & 0xfffffff0)) != pauVar30)
                      ;
                      uVar16 = uVar34 & 0xfffffff0;
                      auVar48._8_8_ = 0;
                      auVar48._0_8_ = auVar46._8_8_;
                      uVar25 = uVar25 | SUB164(auVar48 | auVar46,4) | SUB164(auVar48 | auVar46,0);
                      uVar28 = uVar19 + uVar16 * 8;
                      pauVar30 = (undefined1 (*) [16])(*pauVar38 + uVar16);
                      if (uVar16 != uVar34) goto LAB_0001f370;
                    }
                    iVar31 = iVar31 + -8 + uVar15 * -8;
                    uVar19 = uVar15 * 8 + uVar19 + 8;
                    pauVar38 = (undefined1 (*) [16])(*pauVar38 + uVar34);
                    if (iVar31 < 0) {
                      uVar19 = uVar19 + iVar31;
                      iVar31 = 0;
                      uVar25 = uVar25 & -0x80000000 >> (uVar19 - 1 & 0xff);
                    }
                  }
                  uVar19 = uVar19 - uVar14;
                  uVar15 = (uVar25 >> (0x20 - uVar14 & 0xff)) + 0xf;
                  uVar25 = uVar25 << (uVar14 & 0xff);
                }
                uVar28 = 0;
                if (uVar15 != 0) {
                  uVar19 = uVar19 - 1;
                  uVar28 = uVar25 & 0x80000000 | uVar15;
                  uVar25 = uVar25 << 1;
                }
                if ((int)uVar19 < local_c4) {
                  return (undefined1 *)0xffffffff;
                }
                local_dc = (undefined1 (*) [16])((int)local_dc + -2);
                puVar29 = local_d8 + 2;
                *local_d8 = uVar27;
                local_d8[1] = uVar28;
                bVar42 = uVar19 == 10;
                iVar23 = uVar19 - 10;
                if ((int)uVar19 >= 0xb) {
                  bVar42 = local_dc == (undefined1 (*) [16])0x0;
                  iVar23 = (int)local_dc;
                }
                puVar39 = puVar32;
                local_d8 = puVar29;
                if (bVar42 || iVar23 < 0 != ((int)uVar19 < 0xb && SBORROW4(uVar19,10)))
                goto LAB_0001ed6c;
              }
              uVar19 = uVar19 - uVar28;
              uVar25 = uVar25 << uVar28;
              puVar39 = puVar39 + uVar27;
            }
LAB_0001ed6c:
          } while (0 < (int)local_dc);
          uVar25 = (uVar19 - local_c4) + iVar31;
        }
        if (local_b8 < local_b8 - uVar25) {
          return (undefined1 *)0xffffffff;
        }
        uVar19 = (local_b8 - uVar25) + *param_3;
        local_b8 = uVar25;
      }
    }
    local_c0 = (undefined1 (*) [16])(*local_c0 + ((int)uVar19 >> 3));
    uVar19 = uVar19 & 7;
    local_b4 = local_b4 + 1;
    *param_3 = uVar19;
  } while (local_78 + 3 != local_bc);
  if (local_b8 == 0) {
    iVar36 = 0;
  }
  else {
    uVar19 = -uVar19 & 7;
    iVar36 = *(int *)(iVar36 + param_6 * 0x48 + param_5 * 0x90 + 0x6c);
    iVar13 = *(int *)(*(int *)(iVar20 + DAT_0001eea8) + iVar36 * 4);
    iVar23 = *(int *)(*(int *)(iVar20 + DAT_0001eeac) + iVar36 * 4);
    if (uVar19 == 0) {
      uVar25 = 0;
      local_dc = local_c0;
    }
    else {
      local_dc = (undefined1 (*) [16])(*local_c0 + 1);
      uVar25 = (uint)(byte)(*local_c0)[0] << (0x20 - uVar19 & 0xff);
    }
    puVar29 = (uint *)(iVar18 + local_78[3] * 4);
    if (0 < 0x23d - local_78[3]) {
      iVar24 = 0;
      iVar36 = 0;
      iVar18 = local_b8 - uVar19;
      do {
        if (iVar18 < 0x10) {
          iVar31 = uVar19 + iVar18;
          if (iVar31 < 1) goto LAB_0001ef94;
          iVar24 = 10;
          if (0 < iVar18) {
            uVar25 = uVar25 | (uint)(byte)(*local_dc)[0] << (0x18 - uVar19 & 0xff);
            local_dc = (undefined1 (*) [16])(*local_dc + 1);
          }
          iVar35 = 0;
          if (8 < iVar18) {
            uVar25 = uVar25 | (uint)(byte)(*local_dc)[0] << (0x10 - uVar19 & 0xff);
            local_dc = (undefined1 (*) [16])(*local_dc + 1);
          }
          uVar19 = iVar31 + 10;
          uVar25 = uVar25 & -0x80000000 >> (iVar31 - 1U & 0xff);
        }
        else {
          uVar14 = 0x10 - uVar19;
          uVar33 = 0x18 - uVar19;
          iVar35 = iVar18 + -0x10;
          uVar19 = uVar19 + 0x10;
          uVar25 = uVar25 | (uint)(byte)(*local_dc)[1] << (uVar14 & 0xff) |
                            (uint)(byte)(*local_dc)[0] << (uVar33 & 0xff);
          local_dc = (undefined1 (*) [16])(*local_dc + 2);
        }
        iVar31 = *(int *)(iVar20 + DAT_0001eeb0);
        do {
          bVar6 = *(byte *)(iVar31 + iVar13 + (uVar25 >> (0x20U - iVar23 & 0xff)));
          uVar14 = (uint)bVar6;
          uVar33 = uVar14 & 8;
          uVar25 = uVar25 << (uint)(bVar6 >> 4);
          uVar19 = uVar19 - (bVar6 >> 4);
          if ((bVar6 & 8) != 0) {
            uVar33 = uVar25 & 0x80000000;
            uVar19 = uVar19 - 1;
            uVar25 = uVar25 << 1;
            uVar33 = uVar33 | 1;
          }
          uVar15 = uVar14 & 4;
          if ((bVar6 & 4) != 0) {
            uVar15 = uVar25 & 0x80000000;
            uVar19 = uVar19 - 1;
            uVar25 = uVar25 << 1;
            uVar15 = uVar15 | 1;
          }
          uVar27 = uVar14 & 2;
          if ((bVar6 & 2) != 0) {
            uVar27 = uVar25 & 0x80000000;
            uVar19 = uVar19 - 1;
            uVar25 = uVar25 << 1;
            uVar27 = uVar27 | 1;
          }
          uVar14 = uVar14 & 1;
          if ((bVar6 & 1) != 0) {
            uVar19 = uVar19 - 1;
            uVar14 = uVar25 & 0x80000000 | 1;
            uVar25 = uVar25 << 1;
          }
          if ((int)uVar19 < iVar24) goto LAB_0001ef94;
          iVar36 = iVar36 + 4;
          *puVar29 = uVar33;
          puVar29[1] = uVar15;
          puVar29[2] = uVar27;
          puVar29[3] = uVar14;
          puVar29 = puVar29 + 4;
          if (0x23d - local_78[3] <= iVar36) goto LAB_0001ef94;
          iVar18 = iVar35;
        } while (9 < (int)uVar19);
      } while( true );
    }
    iVar36 = 0;
  }
LAB_0001ef94:
  iVar36 = iVar36 + *(int *)(iVar22 + 0x1200);
  *(int *)(iVar22 + 0x1200) = iVar36;
  if (iVar36 < 0x240) {
    memset((void *)(iVar21 + (iVar36 + param_6 * 0x240) * 4),0,iVar36 * -4 + 0x900);
  }
  uVar19 = *param_3;
  *param_3 = local_b8 + uVar19 & 7;
  return (undefined1 *)((int)local_c0 + (((int)(local_b8 + uVar19) >> 3) - (int)param_2));
}



/* ===== FUN_0001f800 @ 0001f800 size=328 ===== */

void FUN_0001f800(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *(int *)(DAT_0001f948 + 0x1f81c + DAT_0001f94c);
  iVar9 = *(int *)(iVar2 + 0x138);
  iVar8 = *(int *)(iVar2 + 0x13c);
  iVar5 = *(int *)(iVar2 + 0x124);
  iVar7 = *(int *)(iVar2 + 0x128);
  iVar1 = *(int *)(iVar2 + 0x140);
  *param_2 = (int)((ulonglong)((longlong)iVar9 * (longlong)param_1[2]) >> 0x20) +
             (int)((ulonglong)((longlong)*(int *)(iVar2 + 0x120) * (longlong)param_1[6]) >> 0x20);
  iVar3 = *(int *)(iVar2 + 0x144);
  iVar6 = *(int *)(iVar2 + 0x130);
  param_2[1] = (int)((ulonglong)((longlong)iVar8 * (longlong)param_1[1]) >> 0x20) +
               (int)((ulonglong)((longlong)iVar5 * (longlong)param_1[7]) >> 0x20);
  iVar4 = *(int *)(iVar2 + 0x148);
  iVar5 = *(int *)(iVar2 + 300);
  param_2[2] = (int)((ulonglong)((longlong)iVar1 * (longlong)*param_1) >> 0x20) +
               (int)((ulonglong)((longlong)iVar7 * (longlong)param_1[8]) >> 0x20);
  param_2[3] = (int)((ulonglong)((longlong)iVar3 * (longlong)*param_1) >> 0x20) +
               (int)((ulonglong)((longlong)iVar5 * (longlong)param_1[8]) >> 0x20);
  iVar5 = *(int *)(iVar2 + 0x14c);
  iVar2 = *(int *)(iVar2 + 0x134);
  param_2[4] = (int)((ulonglong)((longlong)iVar4 * (longlong)param_1[1]) >> 0x20) +
               (int)((ulonglong)((longlong)iVar6 * (longlong)param_1[7]) >> 0x20);
  param_2[5] = (int)((ulonglong)((longlong)iVar5 * (longlong)param_1[2]) >> 0x20) +
               (int)((ulonglong)((longlong)iVar2 * (longlong)param_1[6]) >> 0x20);
  param_2[6] = (int)((ulonglong)((longlong)iVar9 * (longlong)param_1[5]) >> 0x20);
  param_2[7] = (int)((ulonglong)((longlong)iVar8 * (longlong)param_1[4]) >> 0x20);
  param_2[8] = (int)((ulonglong)((longlong)iVar1 * (longlong)param_1[3]) >> 0x20);
  param_2[9] = (int)((ulonglong)((longlong)iVar3 * (longlong)param_1[3]) >> 0x20);
  param_2[10] = (int)((ulonglong)((longlong)iVar4 * (longlong)param_1[4]) >> 0x20);
  iVar1 = param_1[5];
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0xb] = (int)((ulonglong)((longlong)iVar5 * (longlong)iVar1) >> 0x20);
  param_2[0xc] = 0;
  param_2[0xd] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[0xe] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[0xf] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



/* ===== FUN_0001f950 @ 0001f950 size=2108 ===== */

uint FUN_0001f950(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  if (param_4 == 0) {
    if ((param_3 & 1) != 0) {
      param_1[0x60] = -param_1[0x60];
      param_1[0xa0] = -param_1[0xa0];
      param_1[0xe0] = -param_1[0xe0];
      param_1[0x120] = -param_1[0x120];
      param_1[0x160] = -param_1[0x160];
      param_1[0x1a0] = -param_1[0x1a0];
      param_1[0x1e0] = -param_1[0x1e0];
      param_1[0x220] = -param_1[0x220];
      param_1[0x20] = -param_1[0x20];
    }
    return 0;
  }
  uVar1 = *param_1;
  uVar21 = 0x1f - param_4;
  uVar11 = (0x80000000U >> (param_4 & 0xff)) - 1;
  uVar16 = (int)uVar1 >> 0x1f;
  if ((param_3 & 1) == 0) {
    if (uVar16 != (int)uVar1 >> (uVar21 & 0xff)) {
      uVar1 = uVar11 ^ uVar16;
    }
    uVar16 = param_1[0x20];
    uVar1 = uVar1 << (param_4 & 0xff);
    *param_1 = uVar1;
    if ((int)uVar16 >> 0x1f != (int)uVar16 >> (uVar21 & 0xff)) {
      uVar16 = uVar11 ^ (int)uVar16 >> 0x1f;
    }
    uVar16 = uVar16 << (param_4 & 0xff);
    param_1[0x20] = uVar16;
    uVar2 = *param_2;
    if ((int)uVar16 < 0) {
      uVar16 = -uVar16;
    }
    if ((int)uVar2 >> 0x1f != (int)uVar2 >> (uVar21 & 0xff)) {
      uVar2 = uVar11 ^ (int)uVar2 >> 0x1f;
    }
    *param_2 = uVar2 << (param_4 & 0xff);
    uVar2 = param_1[0x40];
    if ((int)uVar2 >> 0x1f != (int)uVar2 >> (uVar21 & 0xff)) {
      uVar2 = uVar11 ^ (int)uVar2 >> 0x1f;
    }
    uVar17 = param_1[0x60];
    uVar2 = uVar2 << (param_4 & 0xff);
    param_1[0x40] = uVar2;
    if ((int)uVar17 >> 0x1f != (int)uVar17 >> (uVar21 & 0xff)) {
      uVar17 = uVar11 ^ (int)uVar17 >> 0x1f;
    }
    uVar17 = uVar17 << (param_4 & 0xff);
    param_1[0x60] = uVar17;
    uVar3 = param_2[1];
    if ((int)uVar17 < 0) {
      uVar17 = -uVar17;
    }
    if ((int)uVar3 >> 0x1f != (int)uVar3 >> (uVar21 & 0xff)) {
      uVar3 = uVar11 ^ (int)uVar3 >> 0x1f;
    }
    param_2[1] = uVar3 << (param_4 & 0xff);
    uVar3 = param_1[0x80];
    if ((int)uVar3 >> 0x1f != (int)uVar3 >> (uVar21 & 0xff)) {
      uVar3 = uVar11 ^ (int)uVar3 >> 0x1f;
    }
    uVar18 = param_1[0xa0];
    uVar3 = uVar3 << (param_4 & 0xff);
    param_1[0x80] = uVar3;
    if ((int)uVar18 >> 0x1f != (int)uVar18 >> (uVar21 & 0xff)) {
      uVar18 = uVar11 ^ (int)uVar18 >> 0x1f;
    }
    uVar18 = uVar18 << (param_4 & 0xff);
    param_1[0xa0] = uVar18;
    uVar4 = param_2[2];
    if ((int)uVar18 < 0) {
      uVar18 = -uVar18;
    }
    if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar21 & 0xff)) {
      uVar4 = uVar11 ^ (int)uVar4 >> 0x1f;
    }
    param_2[2] = uVar4 << (param_4 & 0xff);
    uVar4 = param_1[0xc0];
    if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar21 & 0xff)) {
      uVar4 = uVar11 ^ (int)uVar4 >> 0x1f;
    }
    uVar19 = param_1[0xe0];
    uVar4 = uVar4 << (param_4 & 0xff);
    param_1[0xc0] = uVar4;
    if ((int)uVar19 >> 0x1f != (int)uVar19 >> (uVar21 & 0xff)) {
      uVar19 = uVar11 ^ (int)uVar19 >> 0x1f;
    }
    uVar19 = uVar19 << (param_4 & 0xff);
    param_1[0xe0] = uVar19;
    uVar5 = param_2[3];
    if ((int)uVar19 < 0) {
      uVar19 = -uVar19;
    }
    if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar21 & 0xff)) {
      uVar5 = uVar11 ^ (int)uVar5 >> 0x1f;
    }
    param_2[3] = uVar5 << (param_4 & 0xff);
    uVar5 = param_1[0x100];
    if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar21 & 0xff)) {
      uVar5 = uVar11 ^ (int)uVar5 >> 0x1f;
    }
    uVar20 = param_1[0x120];
    uVar5 = uVar5 << (param_4 & 0xff);
    param_1[0x100] = uVar5;
    if ((int)uVar20 >> 0x1f != (int)uVar20 >> (uVar21 & 0xff)) {
      uVar20 = uVar11 ^ (int)uVar20 >> 0x1f;
    }
    uVar20 = uVar20 << (param_4 & 0xff);
    param_1[0x120] = uVar20;
    uVar6 = param_2[4];
    if ((int)uVar20 < 0) {
      uVar20 = -uVar20;
    }
    if ((int)uVar6 >> 0x1f != (int)uVar6 >> (uVar21 & 0xff)) {
      uVar6 = uVar11 ^ (int)uVar6 >> 0x1f;
    }
    param_2[4] = uVar6 << (param_4 & 0xff);
    uVar6 = param_1[0x140];
    uVar14 = param_1[0x160];
    if ((int)uVar6 >> 0x1f != (int)uVar6 >> (uVar21 & 0xff)) {
      uVar6 = uVar11 ^ (int)uVar6 >> 0x1f;
    }
    uVar6 = uVar6 << (param_4 & 0xff);
    param_1[0x140] = uVar6;
    if ((int)uVar14 >> 0x1f != (int)uVar14 >> (uVar21 & 0xff)) {
      uVar14 = uVar11 ^ (int)uVar14 >> 0x1f;
    }
    uVar14 = uVar14 << (param_4 & 0xff);
    param_1[0x160] = uVar14;
    uVar7 = param_2[5];
    if ((int)uVar14 < 0) {
      uVar14 = -uVar14;
    }
    if ((int)uVar7 >> 0x1f != (int)uVar7 >> (uVar21 & 0xff)) {
      uVar7 = uVar11 ^ (int)uVar7 >> 0x1f;
    }
    param_2[5] = uVar7 << (param_4 & 0xff);
    uVar7 = param_1[0x180];
    uVar13 = param_1[0x1a0];
    if ((int)uVar7 >> 0x1f != (int)uVar7 >> (uVar21 & 0xff)) {
      uVar7 = uVar11 ^ (int)uVar7 >> 0x1f;
    }
    uVar7 = uVar7 << (param_4 & 0xff);
    param_1[0x180] = uVar7;
    if ((int)uVar13 >> 0x1f != (int)uVar13 >> (uVar21 & 0xff)) {
      uVar13 = uVar11 ^ (int)uVar13 >> 0x1f;
    }
    uVar13 = uVar13 << (param_4 & 0xff);
    param_1[0x1a0] = uVar13;
    uVar8 = param_2[6];
    if ((int)uVar13 < 0) {
      uVar13 = -uVar13;
    }
    if ((int)uVar8 >> 0x1f != (int)uVar8 >> (uVar21 & 0xff)) {
      uVar8 = uVar11 ^ (int)uVar8 >> 0x1f;
    }
    param_2[6] = uVar8 << (param_4 & 0xff);
    uVar8 = param_1[0x1c0];
    uVar12 = param_1[0x1e0];
    if ((int)uVar8 >> 0x1f != (int)uVar8 >> (uVar21 & 0xff)) {
      uVar8 = uVar11 ^ (int)uVar8 >> 0x1f;
    }
    uVar8 = uVar8 << (param_4 & 0xff);
    param_1[0x1c0] = uVar8;
    if ((int)uVar12 >> 0x1f != (int)uVar12 >> (uVar21 & 0xff)) {
      uVar12 = uVar11 ^ (int)uVar12 >> 0x1f;
    }
    uVar12 = uVar12 << (param_4 & 0xff);
    param_1[0x1e0] = uVar12;
    uVar9 = param_2[7];
    if ((int)uVar12 < 0) {
      uVar12 = -uVar12;
    }
    if ((int)uVar9 >> 0x1f != (int)uVar9 >> (uVar21 & 0xff)) {
      uVar9 = uVar11 ^ (int)uVar9 >> 0x1f;
    }
    param_2[7] = uVar9 << (param_4 & 0xff);
    uVar9 = param_1[0x200];
    if ((int)uVar9 >> 0x1f != (int)uVar9 >> (uVar21 & 0xff)) {
      uVar9 = (int)uVar9 >> 0x1f ^ uVar11;
    }
    uVar10 = param_1[0x220];
    uVar9 = uVar9 << (param_4 & 0xff);
    param_1[0x200] = uVar9;
    if ((int)uVar10 >> 0x1f != (int)uVar10 >> (uVar21 & 0xff)) {
      uVar10 = (int)uVar10 >> 0x1f ^ uVar11;
    }
    uVar10 = uVar10 << (param_4 & 0xff);
    param_1[0x220] = uVar10;
    uVar15 = param_2[8];
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
    }
    if ((int)uVar15 >> 0x1f != (int)uVar15 >> (uVar21 & 0xff)) {
      uVar15 = uVar11 ^ (int)uVar15 >> 0x1f;
    }
    uVar10 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) | uVar16 |
             (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) | uVar17 |
             (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) | uVar18 |
             (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) | uVar19 |
             (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) | uVar20 |
             (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) | uVar14 |
             (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) | uVar13 |
             (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f) | uVar12 |
             (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) | uVar10;
  }
  else {
    if (uVar16 != (int)uVar1 >> (uVar21 & 0xff)) {
      uVar1 = uVar11 ^ uVar16;
    }
    uVar1 = uVar1 << (param_4 & 0xff);
    uVar16 = -param_1[0x20];
    *param_1 = uVar1;
    if ((int)uVar16 >> 0x1f != (int)uVar16 >> (uVar21 & 0xff)) {
      uVar16 = (int)uVar16 >> 0x1f ^ uVar11;
    }
    uVar16 = uVar16 << (param_4 & 0xff);
    param_1[0x20] = uVar16;
    uVar2 = *param_2;
    if ((int)uVar2 >> 0x1f != (int)uVar2 >> (uVar21 & 0xff)) {
      uVar2 = (int)uVar2 >> 0x1f ^ uVar11;
    }
    *param_2 = uVar2 << (param_4 & 0xff);
    uVar2 = param_1[0x40];
    if ((int)uVar2 >> 0x1f != (int)uVar2 >> (uVar21 & 0xff)) {
      uVar2 = (int)uVar2 >> 0x1f ^ uVar11;
    }
    uVar2 = uVar2 << (param_4 & 0xff);
    uVar17 = -param_1[0x60];
    param_1[0x40] = uVar2;
    if ((int)uVar17 >> 0x1f != (int)uVar17 >> (uVar21 & 0xff)) {
      uVar17 = (int)uVar17 >> 0x1f ^ uVar11;
    }
    uVar17 = uVar17 << (param_4 & 0xff);
    param_1[0x60] = uVar17;
    uVar3 = param_2[1];
    if ((int)uVar17 < 0) {
      uVar17 = -uVar17;
    }
    if ((int)uVar3 >> 0x1f != (int)uVar3 >> (uVar21 & 0xff)) {
      uVar3 = (int)uVar3 >> 0x1f ^ uVar11;
    }
    param_2[1] = uVar3 << (param_4 & 0xff);
    uVar3 = param_1[0x80];
    if ((int)uVar3 >> 0x1f != (int)uVar3 >> (uVar21 & 0xff)) {
      uVar3 = (int)uVar3 >> 0x1f ^ uVar11;
    }
    uVar3 = uVar3 << (param_4 & 0xff);
    uVar18 = -param_1[0xa0];
    param_1[0x80] = uVar3;
    if ((int)uVar18 >> 0x1f != (int)uVar18 >> (uVar21 & 0xff)) {
      uVar18 = uVar11 ^ (int)uVar18 >> 0x1f;
    }
    uVar18 = uVar18 << (param_4 & 0xff);
    param_1[0xa0] = uVar18;
    uVar4 = param_2[2];
    if ((int)uVar18 < 0) {
      uVar18 = -uVar18;
    }
    if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar21 & 0xff)) {
      uVar4 = uVar11 ^ (int)uVar4 >> 0x1f;
    }
    param_2[2] = uVar4 << (param_4 & 0xff);
    uVar4 = param_1[0xc0];
    if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar21 & 0xff)) {
      uVar4 = uVar11 ^ (int)uVar4 >> 0x1f;
    }
    uVar4 = uVar4 << (param_4 & 0xff);
    uVar19 = -param_1[0xe0];
    param_1[0xc0] = uVar4;
    if ((int)uVar19 >> 0x1f != (int)uVar19 >> (uVar21 & 0xff)) {
      uVar19 = uVar11 ^ (int)uVar19 >> 0x1f;
    }
    uVar19 = uVar19 << (param_4 & 0xff);
    param_1[0xe0] = uVar19;
    uVar5 = param_2[3];
    if ((int)uVar19 < 0) {
      uVar19 = -uVar19;
    }
    if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar21 & 0xff)) {
      uVar5 = uVar11 ^ (int)uVar5 >> 0x1f;
    }
    param_2[3] = uVar5 << (param_4 & 0xff);
    uVar5 = param_1[0x100];
    if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar21 & 0xff)) {
      uVar5 = uVar11 ^ (int)uVar5 >> 0x1f;
    }
    uVar5 = uVar5 << (param_4 & 0xff);
    uVar20 = -param_1[0x120];
    param_1[0x100] = uVar5;
    if ((int)uVar20 >> 0x1f != (int)uVar20 >> (uVar21 & 0xff)) {
      uVar20 = uVar11 ^ (int)uVar20 >> 0x1f;
    }
    uVar20 = uVar20 << (param_4 & 0xff);
    param_1[0x120] = uVar20;
    uVar6 = param_2[4];
    if ((int)uVar20 < 0) {
      uVar20 = -uVar20;
    }
    if ((int)uVar6 >> 0x1f != (int)uVar6 >> (uVar21 & 0xff)) {
      uVar6 = uVar11 ^ (int)uVar6 >> 0x1f;
    }
    param_2[4] = uVar6 << (param_4 & 0xff);
    uVar6 = param_1[0x140];
    uVar14 = -param_1[0x160];
    if ((int)uVar6 >> 0x1f != (int)uVar6 >> (uVar21 & 0xff)) {
      uVar6 = uVar11 ^ (int)uVar6 >> 0x1f;
    }
    uVar6 = uVar6 << (param_4 & 0xff);
    param_1[0x140] = uVar6;
    if ((int)uVar14 >> 0x1f != (int)uVar14 >> (uVar21 & 0xff)) {
      uVar14 = uVar11 ^ (int)uVar14 >> 0x1f;
    }
    uVar14 = uVar14 << (param_4 & 0xff);
    param_1[0x160] = uVar14;
    uVar7 = param_2[5];
    if ((int)uVar14 < 0) {
      uVar14 = -uVar14;
    }
    if ((int)uVar7 >> 0x1f != (int)uVar7 >> (uVar21 & 0xff)) {
      uVar7 = uVar11 ^ (int)uVar7 >> 0x1f;
    }
    param_2[5] = uVar7 << (param_4 & 0xff);
    uVar7 = param_1[0x180];
    uVar13 = -param_1[0x1a0];
    if ((int)uVar7 >> 0x1f != (int)uVar7 >> (uVar21 & 0xff)) {
      uVar7 = uVar11 ^ (int)uVar7 >> 0x1f;
    }
    uVar7 = uVar7 << (param_4 & 0xff);
    param_1[0x180] = uVar7;
    if ((int)uVar13 >> 0x1f != (int)uVar13 >> (uVar21 & 0xff)) {
      uVar13 = uVar11 ^ (int)uVar13 >> 0x1f;
    }
    uVar13 = uVar13 << (param_4 & 0xff);
    param_1[0x1a0] = uVar13;
    uVar8 = param_2[6];
    if ((int)uVar13 < 0) {
      uVar13 = -uVar13;
    }
    if ((int)uVar8 >> 0x1f != (int)uVar8 >> (uVar21 & 0xff)) {
      uVar8 = uVar11 ^ (int)uVar8 >> 0x1f;
    }
    param_2[6] = uVar8 << (param_4 & 0xff);
    uVar8 = param_1[0x1c0];
    uVar12 = -param_1[0x1e0];
    if ((int)uVar8 >> 0x1f != (int)uVar8 >> (uVar21 & 0xff)) {
      uVar8 = uVar11 ^ (int)uVar8 >> 0x1f;
    }
    uVar8 = uVar8 << (param_4 & 0xff);
    param_1[0x1c0] = uVar8;
    if ((int)uVar12 >> 0x1f != (int)uVar12 >> (uVar21 & 0xff)) {
      uVar12 = uVar11 ^ (int)uVar12 >> 0x1f;
    }
    uVar12 = uVar12 << (param_4 & 0xff);
    param_1[0x1e0] = uVar12;
    uVar9 = param_2[7];
    if ((int)uVar12 < 0) {
      uVar12 = -uVar12;
    }
    if ((int)uVar9 >> 0x1f != (int)uVar9 >> (uVar21 & 0xff)) {
      uVar9 = uVar11 ^ (int)uVar9 >> 0x1f;
    }
    param_2[7] = uVar9 << (param_4 & 0xff);
    uVar9 = param_1[0x200];
    if ((int)uVar9 >> 0x1f != (int)uVar9 >> (uVar21 & 0xff)) {
      uVar9 = (int)uVar9 >> 0x1f ^ uVar11;
    }
    uVar9 = uVar9 << (param_4 & 0xff);
    param_1[0x200] = uVar9;
    uVar10 = -param_1[0x220];
    if ((int)uVar10 >> 0x1f != (int)uVar10 >> (uVar21 & 0xff)) {
      uVar10 = (int)uVar10 >> 0x1f ^ uVar11;
    }
    uVar10 = uVar10 << (param_4 & 0xff);
    param_1[0x220] = uVar10;
    uVar15 = param_2[8];
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
    }
    if ((int)uVar15 >> 0x1f != (int)uVar15 >> (uVar21 & 0xff)) {
      uVar15 = uVar11 ^ (int)uVar15 >> 0x1f;
    }
    uVar10 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f) |
             (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) |
             (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) | uVar17 |
             (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) | uVar18 |
             (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) | uVar19 |
             (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) | uVar20 |
             (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) | uVar14 |
             (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) | uVar13 |
             (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f) | uVar12 |
             (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) | uVar10;
  }
  param_2[8] = uVar15 << (param_4 & 0xff);
  return uVar10;
}



/* ===== xmp3_IMDCT @ 0002018c size=17864 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 xmp3_IMDCT(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  int iVar38;
  int *piVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  undefined4 *puVar49;
  int iVar50;
  int iVar51;
  uint uVar52;
  uint *puVar53;
  int iVar54;
  uint uVar55;
  uint uVar56;
  int *piVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  uint uVar62;
  uint *puVar63;
  uint uVar64;
  int *piVar65;
  int iVar66;
  uint uVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int *piVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  int *piVar75;
  int iVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  int iVar80;
  uint uVar81;
  uint uVar82;
  int iVar83;
  int iVar84;
  uint uVar85;
  uint uVar86;
  undefined1 auVar87 [16];
  uint local_280;
  int local_27c;
  uint local_278;
  int local_274;
  uint *local_270;
  int local_26c;
  int *local_264;
  int local_25c;
  uint local_258;
  uint *local_254;
  uint local_250;
  int local_248;
  int local_244;
  int *local_230;
  int local_22c;
  int local_224;
  int local_21c;
  int local_218;
  int local_214;
  int local_20c;
  int local_204;
  int local_1fc;
  int local_1f8;
  int local_1ec;
  int local_1e4;
  int local_1dc;
  int local_1d4;
  uint local_1cc;
  int local_1c8;
  int local_1bc;
  int local_1ac;
  int local_19c;
  int local_198;
  int local_194;
  int local_18c;
  int local_184;
  int local_17c;
  int local_174;
  int local_16c;
  int local_164;
  int local_15c;
  int local_154;
  int local_14c;
  int local_144;
  int local_98 [4];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74 [10];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  
  iVar38 = DAT_00020790 + 0x201a8;
  if ((((param_1 == (undefined4 *)0x0) || (piVar39 = (int *)*param_1, piVar39 == (int *)0x0)) ||
      (iVar54 = param_1[1], iVar54 == 0)) ||
     ((iVar50 = param_1[3], iVar50 == 0 || (iVar29 = param_1[5], iVar29 == 0)))) {
    return 0xffffffff;
  }
  if (*piVar39 == 0) {
    iVar40 = 0x10;
  }
  else {
    iVar40 = 0xc;
  }
  iVar30 = iVar54 + param_3 * 0x48 + param_2 * 0x90;
  local_254 = (uint *)(iVar50 + param_3 * 0x900);
  uVar41 = (uint)(*(short *)(piVar39[0xd] + iVar40) / 0x12);
  if (*(int *)(iVar30 + 0x3c) == 2) {
    if (*(int *)(iVar30 + 0x40) != 0) {
      iVar40 = uVar41 - 1;
      local_250 = uVar41;
      goto LAB_000213c8;
    }
    local_198 = 8;
    iVar40 = 0;
    local_250 = 0;
  }
  else {
    iVar40 = *(int *)(iVar50 + (param_3 + 0x480) * 4);
    if (iVar40 < 0x227) {
      iVar40 = (iVar40 + 7) / 0x12;
      local_250 = iVar40 + 1;
LAB_000213c8:
      local_198 = iVar40 * 0x12 + 8;
      if (0 < iVar40) goto LAB_00020284;
    }
    else {
      iVar40 = 0x1f;
      local_198 = 0x236;
      local_250 = 0x20;
LAB_00020284:
      piVar39 = *(int **)(iVar38 + DAT_00020794);
      iVar30 = *piVar39;
      iVar8 = piVar39[1];
      iVar9 = piVar39[2];
      iVar10 = piVar39[3];
      iVar11 = piVar39[4];
      iVar12 = piVar39[5];
      iVar13 = piVar39[6];
      iVar14 = piVar39[7];
      iVar15 = piVar39[8];
      iVar16 = piVar39[9];
      iVar17 = piVar39[10];
      iVar18 = piVar39[0xb];
      iVar19 = piVar39[0xc];
      iVar20 = piVar39[0xd];
      iVar21 = piVar39[0xe];
      iVar42 = piVar39[0xf];
      piVar39 = (int *)local_254;
      do {
        piVar71 = piVar39 + 0x12;
        iVar80 = piVar39[10];
        iVar22 = piVar39[0xc];
        iVar43 = piVar39[0xd];
        iVar51 = piVar39[0xb];
        iVar31 = piVar39[0x10];
        iVar68 = piVar39[0xf];
        iVar3 = piVar39[0xe];
        iVar44 = piVar39[0x11];
        piVar39[10] = ((int)((ulonglong)((longlong)iVar21 * (longlong)iVar80) >> 0x20) -
                      (int)((ulonglong)((longlong)iVar42 * (longlong)piVar39[0x19]) >> 0x20)) * 2;
        piVar39[0xb] = ((int)((ulonglong)((longlong)iVar19 * (longlong)iVar51) >> 0x20) -
                       (int)((ulonglong)((longlong)iVar20 * (longlong)piVar39[0x18]) >> 0x20)) * 2;
        piVar39[0xc] = ((int)((ulonglong)((longlong)iVar17 * (longlong)iVar22) >> 0x20) -
                       (int)((ulonglong)((longlong)iVar18 * (longlong)piVar39[0x17]) >> 0x20)) * 2;
        piVar39[0xd] = ((int)((ulonglong)((longlong)iVar15 * (longlong)iVar43) >> 0x20) -
                       (int)((ulonglong)((longlong)iVar16 * (longlong)piVar39[0x16]) >> 0x20)) * 2;
        piVar39[0xe] = ((int)((ulonglong)((longlong)iVar13 * (longlong)iVar3) >> 0x20) -
                       (int)((ulonglong)((longlong)iVar14 * (longlong)piVar39[0x15]) >> 0x20)) * 2;
        piVar39[0xf] = ((int)((ulonglong)((longlong)iVar11 * (longlong)iVar68) >> 0x20) -
                       (int)((ulonglong)((longlong)iVar12 * (longlong)piVar39[0x14]) >> 0x20)) * 2;
        piVar39[0x10] =
             ((int)((ulonglong)((longlong)iVar9 * (longlong)iVar31) >> 0x20) -
             (int)((ulonglong)((longlong)iVar10 * (longlong)piVar39[0x13]) >> 0x20)) * 2;
        piVar39[0x11] =
             ((int)((ulonglong)((longlong)iVar30 * (longlong)iVar44) >> 0x20) -
             (int)((ulonglong)((longlong)iVar8 * (longlong)*piVar71) >> 0x20)) * 2;
        local_26c = (int)((ulonglong)((longlong)iVar43 * (longlong)iVar16) >> 0x20);
        local_274 = (int)((ulonglong)((longlong)iVar15 * (longlong)piVar39[0x16]) >> 0x20);
        *piVar71 = ((int)((ulonglong)((longlong)iVar44 * (longlong)iVar8) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar30 * (longlong)*piVar71) >> 0x20)) * 2;
        piVar39[0x13] =
             ((int)((ulonglong)((longlong)iVar31 * (longlong)iVar10) >> 0x20) +
             (int)((ulonglong)((longlong)iVar9 * (longlong)piVar39[0x13]) >> 0x20)) * 2;
        piVar39[0x14] =
             ((int)((ulonglong)((longlong)iVar68 * (longlong)iVar12) >> 0x20) +
             (int)((ulonglong)((longlong)iVar11 * (longlong)piVar39[0x14]) >> 0x20)) * 2;
        piVar39[0x15] =
             ((int)((ulonglong)((longlong)iVar3 * (longlong)iVar14) >> 0x20) +
             (int)((ulonglong)((longlong)iVar13 * (longlong)piVar39[0x15]) >> 0x20)) * 2;
        local_27c = (int)((ulonglong)((longlong)iVar22 * (longlong)iVar18) >> 0x20);
        piVar39[0x16] = (local_26c + local_274) * 2;
        piVar39[0x17] =
             (local_27c + (int)((ulonglong)((longlong)iVar17 * (longlong)piVar39[0x17]) >> 0x20)) *
             2;
        piVar39[0x18] =
             ((int)((ulonglong)((longlong)iVar51 * (longlong)iVar20) >> 0x20) +
             (int)((ulonglong)((longlong)iVar19 * (longlong)piVar39[0x18]) >> 0x20)) * 2;
        piVar39[0x19] =
             ((int)((ulonglong)((longlong)iVar80 * (longlong)iVar42) >> 0x20) +
             (int)((ulonglong)((longlong)iVar21 * (longlong)piVar39[0x19]) >> 0x20)) * 2;
        piVar39 = piVar71;
      } while ((uint *)piVar71 != local_254 + iVar40 * 0x12);
    }
    iVar40 = *(int *)(iVar54 + param_3 * 0x48 + param_2 * 0x90 + 0x40);
  }
  iVar50 = iVar50 + param_3 * 4;
  iVar8 = iVar29 + param_3 * 4;
  iVar30 = *(int *)(iVar50 + 0x1200);
  if (*(int *)(iVar50 + 0x1200) <= local_198) {
    iVar30 = local_198;
  }
  puVar63 = (uint *)(iVar29 + param_3 * 0x900);
  *(int *)(iVar50 + 0x1200) = iVar30;
  iVar9 = param_3 * 0x480 + iVar29;
  uVar7 = (iVar30 + 0x11) / 0x12;
  iVar50 = *(int *)(iVar50 + 0x1208);
  if (iVar40 == 0) {
    uVar41 = 0;
  }
  iVar40 = iVar54 + param_2 * 0x90 + param_3 * 0x48 + 0x28;
  local_258 = *(uint *)(iVar8 + 0x1b00);
  local_264 = (int *)(iVar9 + 0x1200);
  iVar30 = *(int *)(iVar8 + 0x1b08);
  uVar45 = *(uint *)(iVar8 + 0x1b10);
  if ((int)local_250 < 1) {
    local_250 = 0;
    local_278 = 0;
  }
  else {
    uVar23 = 7 - iVar50;
    uVar24 = uVar23;
    if (6 < iVar50) {
      uVar24 = 0;
    }
    if ((int)uVar45 < 1) {
      local_278 = 0;
      iVar10 = 0;
      piVar39 = local_264;
      piVar71 = (int *)local_254;
LAB_000215e4:
      iVar11 = *(int *)(iVar38 + DAT_0002079c);
      iVar9 = iVar30 * 0x90 + iVar11;
      local_270 = puVar63 + iVar10;
      do {
        local_1f8 = *(int *)(iVar40 + 0x14);
        if ((*(int *)(iVar40 + 0x18) != 0) && (iVar10 < (int)uVar41)) {
          local_1f8 = 0;
        }
        iVar12 = piVar71[0x11];
        iVar13 = piVar71[0x10];
        if (iVar50 < 7) {
          piVar39[8] = piVar39[8] >> (uVar23 & 0xff);
          iVar14 = piVar71[0xf];
          iVar12 = iVar12 >> (uVar23 & 0xff);
          iVar16 = piVar71[0xe];
          iVar13 = (iVar13 >> (uVar23 & 0xff)) - iVar12;
          piVar39[7] = piVar39[7] >> (uVar23 & 0xff);
          iVar18 = (iVar14 >> (uVar23 & 0xff)) - iVar13;
          iVar15 = piVar71[0xd];
          iVar17 = piVar71[0xc];
          piVar39[6] = piVar39[6] >> (uVar23 & 0xff);
          iVar14 = (iVar16 >> (uVar23 & 0xff)) - iVar18;
          local_84 = (iVar15 >> (uVar23 & 0xff)) - iVar14;
          iVar18 = iVar18 - iVar12;
          iVar15 = piVar71[0xb];
          iVar21 = piVar71[10];
          piVar39[5] = piVar39[5] >> (uVar23 & 0xff);
          iVar16 = piVar71[9];
          iVar17 = (iVar17 >> (uVar23 & 0xff)) - local_84;
          iVar19 = piVar71[8];
          iVar20 = (iVar15 >> (uVar23 & 0xff)) - iVar17;
          local_84 = local_84 - iVar18;
          iVar31 = (iVar21 >> (uVar23 & 0xff)) - iVar20;
          piVar39[4] = piVar39[4] >> (uVar23 & 0xff);
          iVar21 = (iVar16 >> (uVar23 & 0xff)) - iVar31;
          iVar20 = iVar20 - local_84;
          iVar43 = (iVar19 >> (uVar23 & 0xff)) - iVar21;
          iVar16 = piVar71[6];
          iVar15 = (piVar71[7] >> (uVar23 & 0xff)) - iVar43;
          piVar39[3] = piVar39[3] >> (uVar23 & 0xff);
          iVar21 = iVar21 - iVar20;
          iVar42 = piVar71[5];
          iVar19 = (iVar16 >> (uVar23 & 0xff)) - iVar15;
          iVar22 = piVar71[4];
          iVar15 = iVar15 - iVar21;
          piVar39[2] = piVar39[2] >> (uVar23 & 0xff);
          iVar3 = (iVar42 >> (uVar23 & 0xff)) - iVar19;
          iVar16 = piVar71[3];
          iVar44 = (iVar22 >> (uVar23 & 0xff)) - iVar3;
          iVar22 = piVar71[2];
          piVar39[1] = piVar39[1] >> (uVar23 & 0xff);
          iVar42 = (iVar16 >> (uVar23 & 0xff)) - iVar44;
          iVar16 = (iVar22 >> (uVar23 & 0xff)) - iVar42;
          iVar3 = iVar3 - iVar15;
          iVar22 = (piVar71[1] >> (uVar23 & 0xff)) - iVar16;
          iVar42 = iVar42 - iVar3;
          local_1c8 = iVar22 - iVar42;
          iVar51 = *piVar71;
          *piVar39 = *piVar39 >> (uVar23 & 0xff);
          iVar22 = (iVar51 >> (uVar23 & 0xff)) - iVar22;
        }
        else {
          iVar13 = iVar13 - iVar12;
          iVar14 = piVar71[0xe] - (piVar71[0xf] - iVar13);
          iVar17 = piVar71[0xc] - (piVar71[0xd] - iVar14);
          iVar31 = piVar71[10] - (piVar71[0xb] - iVar17);
          iVar43 = piVar71[8] - (piVar71[9] - iVar31);
          iVar18 = (piVar71[0xf] - iVar13) - iVar12;
          local_84 = (piVar71[0xd] - iVar14) - iVar18;
          iVar19 = piVar71[6] - (piVar71[7] - iVar43);
          iVar20 = (piVar71[0xb] - iVar17) - local_84;
          iVar21 = (piVar71[9] - iVar31) - iVar20;
          iVar44 = piVar71[4] - (piVar71[5] - iVar19);
          iVar15 = (piVar71[7] - iVar43) - iVar21;
          iVar3 = (piVar71[5] - iVar19) - iVar15;
          iVar16 = piVar71[2] - (piVar71[3] - iVar44);
          iVar42 = (piVar71[3] - iVar44) - iVar3;
          local_1c8 = (piVar71[1] - iVar16) - iVar42;
          iVar22 = *piVar71 - (piVar71[1] - iVar16);
        }
        local_174 = (int)((ulonglong)((longlong)(iVar43 + iVar44) * 0x163a1a7e) >> 0x20);
        local_184 = (int)((ulonglong)((longlong)(iVar43 + iVar44) * 0x620dbe8b) >> 0x20);
        iVar68 = (int)((ulonglong)((longlong)iVar19 * 0x6ed9eba1) >> 0x20);
        iVar51 = (iVar44 - iVar43) - iVar13;
        local_20c = (int)((ulonglong)((longlong)(iVar13 + iVar44) * 0x163a1a7e) >> 0x20);
        iVar19 = local_184 * 2 + local_20c * 2;
        local_184 = (int)((ulonglong)((longlong)(iVar13 - iVar43) * 0x620dbe8b) >> 0x20);
        iVar80 = local_184 * 2 + local_174 * -2;
        iVar43 = (iVar22 >> 1) + (iVar17 >> 1);
        iVar44 = (int)((ulonglong)((longlong)iVar15 * 0x6ed9eba1) >> 0x20);
        local_22c = (int)((ulonglong)((longlong)(iVar31 - iVar14) * 0x5246dd49) >> 0x20);
        iVar13 = (iVar3 - iVar21) - iVar12;
        local_14c = (int)((ulonglong)((longlong)(iVar12 + iVar3) * 0x163a1a7e) >> 0x20);
        iVar58 = (int)((ulonglong)((longlong)(iVar21 + iVar3) * 0x620dbe8b) >> 0x20) * 2 +
                 local_14c * 2;
        local_144 = (int)((ulonglong)((longlong)(iVar12 - iVar21) * 0x620dbe8b) >> 0x20);
        iVar15 = local_144 * 2 +
                 (int)((ulonglong)((longlong)(iVar21 + iVar3) * 0x163a1a7e) >> 0x20) * -2;
        local_1fc = (int)((ulonglong)((longlong)(iVar20 - iVar18) * 0x7e0e2e32) >> 0x20);
        iVar17 = (iVar22 >> 1) - iVar17;
        local_194 = (int)((ulonglong)((longlong)(iVar14 + iVar16) * 0x7e0e2e32) >> 0x20);
        iVar3 = iVar43 + iVar68 * -2;
        iVar43 = iVar68 * 2 + iVar43;
        iVar22 = local_22c * 2 + local_194 * 2;
        local_1ac = (int)((ulonglong)((longlong)(iVar31 + iVar16) * 0x5246dd49) >> 0x20);
        iVar21 = local_1ac * 2 +
                 (int)((ulonglong)((longlong)(iVar31 - iVar14) * 0x7e0e2e32) >> 0x20) * -2;
        local_174 = (int)((ulonglong)((longlong)(iVar18 + iVar42) * 0x7e0e2e32) >> 0x20);
        iVar12 = (local_1c8 >> 1) + (local_84 >> 1);
        local_84 = (local_1c8 >> 1) - local_84;
        local_74[0] = (int)((ulonglong)((longlong)(iVar20 - iVar18) * 0x5246dd49) >> 0x20) * 2 +
                      local_174 * 2;
        local_16c = (int)((ulonglong)((longlong)(iVar20 + iVar42) * 0x5246dd49) >> 0x20);
        iVar68 = iVar12 + iVar44 * -2;
        iVar12 = iVar44 * 2 + iVar12;
        local_98[3] = local_16c * 2 + local_1fc * -2;
        local_18c = (int)((ulonglong)((longlong)((iVar16 - iVar31) - iVar14) * 0x6ed9eba1) >> 0x20);
        local_78 = local_84 + (iVar13 >> 1);
        local_164 = (int)((ulonglong)((longlong)((iVar42 - iVar20) - iVar18) * 0x6ed9eba1) >> 0x20);
        iVar14 = iVar17 + (iVar51 >> 1);
        local_88 = (iVar68 - (iVar15 + iVar58)) - (local_98[3] - local_74[0]);
        local_80 = (iVar12 - (iVar15 + iVar58)) + (local_98[3] - local_74[0]);
        local_98[0] = (iVar19 + iVar3) - iVar22;
        local_7c = (iVar15 + iVar12) - local_98[3];
        local_98[3] = iVar15 + iVar68 + local_98[3];
        local_98[1] = iVar58 + iVar12 + local_74[0];
        local_74[0] = (iVar58 + iVar68) - local_74[0];
        local_98[2] = local_164 * 2 + local_78;
        local_84 = local_84 - iVar13;
        local_78 = local_78 + local_164 * -2;
        if (iVar30 == 0 && local_1f8 == 0) {
          iVar12 = local_98[0] >> 2;
          iVar16 = *piVar39;
          iVar13 = iVar14 + local_18c * -2 >> 2;
          local_22c = (int)((ulonglong)((longlong)local_74[0] * 0xb27eb5c) >> 0x20);
          iVar18 = local_22c - iVar12;
          iVar15 = -iVar18 - iVar16;
          *piVar39 = iVar12 + local_22c;
          uVar32 = iVar18 + (int)((ulonglong)((longlong)iVar15 * 0x42aace8b) >> 0x20) * 4;
          *local_270 = uVar32;
          uVar72 = (int)((ulonglong)((longlong)iVar15 * -0x3d16d8dc) >> 0x20) * 4 - iVar16;
          iVar12 = (int)((ulonglong)((longlong)local_78 * 0x2120fb83) >> 0x20);
          local_270[0x220] = uVar72;
          iVar18 = piVar39[1];
          iVar20 = iVar12 - iVar13;
          iVar15 = -iVar20 - iVar18;
          iVar16 = (int)((ulonglong)((longlong)local_7c * 0x36185aee) >> 0x20);
          piVar39[1] = iVar13 + iVar12;
          iVar12 = (iVar80 + iVar43) - iVar21 >> 2;
          uVar73 = (int)((ulonglong)((longlong)iVar15 * -0x36a09e66) >> 0x20) * 4 - iVar18;
          iVar18 = iVar16 - iVar12;
          local_270[0x200] = uVar73;
          uVar47 = iVar20 + (int)((ulonglong)((longlong)iVar15 * 0x47311c28) >> 0x20) * 4;
          local_270[0x20] = uVar47;
          iVar15 = piVar39[2];
          iVar13 = -iVar18 - iVar15;
          piVar39[2] = iVar12 + iVar16;
          uVar46 = (int)((ulonglong)((longlong)iVar13 * -0x2f7a6274) >> 0x20) * 4 - iVar15;
          local_270[0x1e0] = uVar46;
          iVar12 = (iVar43 - (iVar80 + iVar19)) + (iVar21 - iVar22) >> 2;
          uVar4 = iVar18 + (int)((ulonglong)((longlong)iVar13 * 0x4a868feb) >> 0x20) * 4;
          local_270[0x40] = uVar4;
          iVar18 = piVar39[3];
          local_26c = (int)((ulonglong)((longlong)local_80 * 0x496af3e2) >> 0x20);
          iVar13 = local_26c - iVar12;
          iVar15 = -iVar13 - iVar18;
          piVar39[3] = iVar12 + local_26c;
          iVar16 = (int)((ulonglong)((longlong)local_84 * 0x5a82799a) >> 0x20);
          uVar64 = (int)((ulonglong)((longlong)iVar15 * -0x27dbc160) >> 0x20) * 4 - iVar18;
          local_270[0x1c0] = uVar64;
          uVar81 = iVar13 + (int)((ulonglong)((longlong)iVar15 * 0x4c913b51) >> 0x20) * 4;
          local_270[0x60] = uVar81;
          iVar12 = iVar17 - iVar51 >> 2;
          iVar17 = piVar39[4];
          iVar15 = iVar16 - iVar12;
          iVar13 = -iVar15 - iVar17;
          piVar39[4] = iVar12 + iVar16;
          iVar12 = (iVar3 - (iVar80 + iVar19)) - (iVar21 - iVar22) >> 2;
          local_26c = (int)((ulonglong)((longlong)iVar13 * -0x20000000) >> 0x20);
          uVar33 = iVar15 + (int)((ulonglong)((longlong)iVar13 * 0x4d413ccc) >> 0x20) * 4;
          iVar13 = (int)((ulonglong)((longlong)local_88 * 0x68d9f964) >> 0x20);
          local_270[0x80] = uVar33;
          uVar34 = local_26c * 4 - iVar17;
          local_270[0x1a0] = uVar34;
          iVar18 = iVar13 - iVar12;
          iVar17 = piVar39[5];
          iVar16 = (int)((ulonglong)((longlong)local_98[3] * 0x7401e4c1) >> 0x20);
          iVar15 = -iVar18 - iVar17;
          piVar39[5] = iVar12 + iVar13;
          iVar12 = iVar80 + iVar3 + iVar21 >> 2;
          uVar77 = (int)((ulonglong)((longlong)iVar15 * -0x18243e9f) >> 0x20) * 4 - iVar17;
          local_270[0x180] = uVar77;
          iVar13 = local_18c * 2 + iVar14 >> 2;
          uVar55 = iVar18 + (int)((ulonglong)((longlong)iVar15 * 0x4c913b51) >> 0x20) * 4;
          local_270[0xa0] = uVar55;
          iVar14 = iVar19 + iVar43 + iVar22 >> 2;
          iVar17 = piVar39[6];
          iVar15 = iVar16 - iVar12;
          piVar39[6] = iVar12 + iVar16;
          iVar12 = -iVar15 - iVar17;
          if ((int)uVar34 < 0) {
            uVar34 = -uVar34;
          }
          if ((int)uVar33 < 0) {
            uVar33 = -uVar33;
          }
          uVar35 = (int)((ulonglong)((longlong)iVar12 * -0x10859d8b) >> 0x20) * 4 - iVar17;
          local_270[0x160] = uVar35;
          iVar16 = (int)((ulonglong)((longlong)local_98[1] * 0x7f834ed0) >> 0x20);
          local_214 = (int)((ulonglong)((longlong)local_98[2] * 0x7ba3751d) >> 0x20);
          iVar17 = local_214 - iVar13;
          uVar25 = iVar15 + (int)((ulonglong)((longlong)iVar12 * 0x4a868feb) >> 0x20) * 4;
          local_270[0xc0] = uVar25;
          iVar12 = piVar39[7];
          piVar39[7] = iVar13 + local_214;
          iVar15 = iVar16 - iVar14;
          iVar13 = -iVar17 - iVar12;
          if ((int)uVar47 < 0) {
            uVar47 = -uVar47;
          }
          if ((int)uVar73 < 0) {
            uVar73 = -uVar73;
          }
          uVar56 = iVar17 + (int)((ulonglong)((longlong)iVar13 * 0x47311c28) >> 0x20) * 4;
          local_214 = (int)((ulonglong)((longlong)iVar13 * -0x95f6199) >> 0x20);
          if ((int)uVar32 < 0) {
            uVar32 = -uVar32;
          }
          local_270[0xe0] = uVar56;
          if ((int)uVar56 < 0) {
            uVar56 = -uVar56;
          }
          uVar5 = local_214 * 4 - iVar12;
          if ((int)uVar72 < 0) {
            uVar72 = -uVar72;
          }
          local_270[0x140] = uVar5;
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          if ((int)uVar5 < 0) {
            uVar5 = -uVar5;
          }
          iVar12 = -iVar15 - piVar39[8];
          if ((int)uVar46 < 0) {
            uVar46 = -uVar46;
          }
          local_244 = (int)((ulonglong)((longlong)iVar12 * 0x42aace8b) >> 0x20);
          if ((int)uVar25 < 0) {
            uVar25 = -uVar25;
          }
          if ((int)uVar35 < 0) {
            uVar35 = -uVar35;
          }
          uVar74 = (int)((ulonglong)((longlong)iVar12 * -0x2e92723) >> 0x20) * 4 - piVar39[8];
          uVar26 = iVar15 + local_244 * 4;
          if ((int)uVar81 < 0) {
            uVar81 = -uVar81;
          }
          if ((int)uVar64 < 0) {
            uVar64 = -uVar64;
          }
          if ((int)uVar55 < 0) {
            uVar55 = -uVar55;
          }
          if ((int)uVar77 < 0) {
            uVar77 = -uVar77;
          }
          uVar77 = uVar34 | uVar33 | uVar47 | uVar73 | uVar56 | uVar5 | uVar32 | uVar72 | uVar4 |
                   uVar46 | uVar25 | uVar35 | (uVar26 ^ (int)uVar26 >> 0x1f) - ((int)uVar26 >> 0x1f)
                   | (uVar74 ^ (int)uVar74 >> 0x1f) - ((int)uVar74 >> 0x1f) | uVar81 | uVar64 |
                   uVar55 | uVar77;
          piVar39[8] = iVar14 + iVar16;
          local_270[0x100] = uVar26;
          local_270[0x120] = uVar74;
        }
        else {
          if (iVar30 == 2) {
            FUN_0001f800(piVar39,local_74 + 1);
          }
          else {
            local_2c[0] = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x8c) * (longlong)*piVar39)
                               >> 0x20);
            local_74[1] = (int)((ulonglong)((longlong)*piVar39 * (longlong)*(int *)(iVar9 + 0x48))
                               >> 0x20);
            local_30 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x88) * (longlong)piVar39[1]) >>
                            0x20);
            local_74[2] = (int)((ulonglong)((longlong)piVar39[1] * (longlong)*(int *)(iVar9 + 0x4c))
                               >> 0x20);
            local_34 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x84) * (longlong)piVar39[2]) >>
                            0x20);
            local_74[3] = (uint)((ulonglong)
                                 ((longlong)piVar39[2] * (longlong)*(int *)(iVar9 + 0x50)) >> 0x20);
            local_38 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x80) * (longlong)piVar39[3]) >>
                            0x20);
            local_74[4] = (int)((ulonglong)((longlong)piVar39[3] * (longlong)*(int *)(iVar9 + 0x54))
                               >> 0x20);
            local_3c = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x7c) * (longlong)piVar39[4]) >>
                            0x20);
            local_74[5] = (uint)((ulonglong)
                                 ((longlong)piVar39[4] * (longlong)*(int *)(iVar9 + 0x58)) >> 0x20);
            local_40 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x78) * (longlong)piVar39[5]) >>
                            0x20);
            local_74[6] = (int)((ulonglong)((longlong)piVar39[5] * (longlong)*(int *)(iVar9 + 0x5c))
                               >> 0x20);
            local_44 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x74) * (longlong)piVar39[6]) >>
                            0x20);
            local_74[7] = (int)((ulonglong)((longlong)piVar39[6] * (longlong)*(int *)(iVar9 + 0x60))
                               >> 0x20);
            local_48 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x70) * (longlong)piVar39[7]) >>
                            0x20);
            local_74[8] = (int)((ulonglong)((longlong)piVar39[7] * (longlong)*(int *)(iVar9 + 100))
                               >> 0x20);
            local_4c = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x6c) * (longlong)piVar39[8]) >>
                            0x20);
            local_74[9] = (int)((ulonglong)((longlong)piVar39[8] * (longlong)*(int *)(iVar9 + 0x68))
                               >> 0x20);
          }
          uVar77 = 0;
          iVar13 = local_1f8 * 0x90 + iVar11;
          iVar12 = 0;
          piVar65 = (int *)(iVar13 + -4);
          piVar28 = (int *)(iVar13 + 0x48);
          piVar57 = (int *)(DAT_0002321c + 0x223fc);
          piVar27 = piVar39;
          puVar53 = local_270;
          piVar75 = local_98;
          piVar1 = local_2c;
          do {
            iVar13 = *piVar75;
            iVar14 = (int)((ulonglong)((longlong)piVar75[9] * (longlong)*piVar57) >> 0x20);
            *piVar27 = (iVar13 >> 2) + iVar14;
            piVar65 = piVar65 + 1;
            iVar14 = (iVar13 >> 2) - iVar14;
            piVar28 = piVar28 + -1;
            iVar15 = *piVar28;
            iVar16 = local_74[iVar12 + 1] +
                     (int)((ulonglong)((longlong)iVar14 * (longlong)*piVar65) >> 0x20);
            uVar34 = iVar16 * 4;
            iVar13 = *piVar1;
            local_270[iVar12 * 0x20] = uVar34;
            if ((int)uVar34 < 0) {
              uVar34 = iVar16 * -4;
            }
            local_22c = (int)((ulonglong)((longlong)iVar14 * (longlong)iVar15) >> 0x20);
            iVar12 = iVar12 + 1;
            uVar33 = (iVar13 + local_22c) * 4;
            puVar53[0x220] = uVar33;
            if ((int)uVar33 < 0) {
              uVar33 = (iVar13 + local_22c) * -4;
            }
            uVar77 = uVar77 | uVar33 | uVar34;
            piVar57 = piVar57 + -1;
            piVar27 = piVar27 + 1;
            puVar53 = puVar53 + -0x20;
            piVar75 = piVar75 + -1;
            piVar1 = piVar1 + -1;
          } while (iVar12 != 9);
        }
        uVar34 = FUN_0001f950(local_270,piVar39,iVar10,uVar24);
        iVar10 = iVar10 + 1;
        local_270 = local_270 + 1;
        local_278 = local_278 | uVar77 | uVar34;
        piVar39 = piVar39 + 9;
        piVar71 = piVar71 + 0x12;
      } while (iVar10 < (int)local_250);
    }
    else {
      local_278 = 0;
      uVar77 = uVar45;
      if ((int)local_250 <= (int)uVar45) {
        uVar77 = local_250;
      }
      iVar10 = 0;
      piVar57 = (int *)(iVar9 + 0x1224);
      piVar1 = (int *)local_254;
      puVar53 = puVar63;
      do {
        piVar39 = piVar57;
        piVar71 = piVar1 + 0x12;
        local_218 = *(int *)(iVar40 + 0x14);
        if ((*(int *)(iVar40 + 0x18) != 0) && (iVar10 < (int)uVar41)) {
          local_218 = 0;
        }
        local_248 = piVar1[0x11];
        iVar9 = piVar1[0x10];
        if (iVar50 < 7) {
          piVar39[-1] = piVar39[-1] >> (uVar23 & 0xff);
          iVar11 = piVar1[0xf];
          local_248 = local_248 >> (uVar23 & 0xff);
          iVar13 = piVar1[0xe];
          iVar9 = (iVar9 >> (uVar23 & 0xff)) - local_248;
          piVar39[-2] = piVar39[-2] >> (uVar23 & 0xff);
          iVar12 = (iVar11 >> (uVar23 & 0xff)) - iVar9;
          iVar11 = (iVar13 >> (uVar23 & 0xff)) - iVar12;
          iVar13 = piVar1[0xc];
          iVar12 = iVar12 - local_248;
          local_84 = (piVar1[0xd] >> (uVar23 & 0xff)) - iVar11;
          piVar39[-3] = piVar39[-3] >> (uVar23 & 0xff);
          iVar13 = (iVar13 >> (uVar23 & 0xff)) - local_84;
          local_84 = local_84 - iVar12;
          iVar14 = piVar1[10];
          iVar16 = (piVar1[0xb] >> (uVar23 & 0xff)) - iVar13;
          piVar39[-4] = piVar39[-4] >> (uVar23 & 0xff);
          iVar14 = (iVar14 >> (uVar23 & 0xff)) - iVar16;
          iVar17 = piVar1[9];
          iVar15 = piVar1[8];
          iVar16 = iVar16 - local_84;
          piVar39[-5] = piVar39[-5] >> (uVar23 & 0xff);
          iVar18 = (iVar17 >> (uVar23 & 0xff)) - iVar14;
          iVar3 = iVar18 - iVar16;
          iVar18 = (iVar15 >> (uVar23 & 0xff)) - iVar18;
          iVar15 = piVar1[6];
          local_1c8 = (piVar1[7] >> (uVar23 & 0xff)) - iVar18;
          piVar39[-6] = piVar39[-6] >> (uVar23 & 0xff);
          iVar15 = (iVar15 >> (uVar23 & 0xff)) - local_1c8;
          iVar17 = piVar1[5];
          local_1c8 = local_1c8 - iVar3;
          iVar20 = piVar1[4];
          piVar39[-7] = piVar39[-7] >> (uVar23 & 0xff);
          iVar19 = (iVar17 >> (uVar23 & 0xff)) - iVar15;
          iVar17 = piVar1[3];
          iVar21 = (iVar20 >> (uVar23 & 0xff)) - iVar19;
          iVar20 = piVar1[2];
          piVar39[-8] = piVar39[-8] >> (uVar23 & 0xff);
          iVar17 = (iVar17 >> (uVar23 & 0xff)) - iVar21;
          iVar19 = iVar19 - local_1c8;
          iVar20 = (iVar20 >> (uVar23 & 0xff)) - iVar17;
          iVar17 = iVar17 - iVar19;
          iVar42 = (piVar1[1] >> (uVar23 & 0xff)) - iVar20;
          local_1f8 = iVar42 - iVar17;
          iVar42 = (*piVar1 >> (uVar23 & 0xff)) - iVar42;
          piVar39[-9] = piVar39[-9] >> (uVar23 & 0xff);
        }
        else {
          iVar9 = iVar9 - local_248;
          iVar11 = piVar1[0xe] - (piVar1[0xf] - iVar9);
          iVar13 = piVar1[0xc] - (piVar1[0xd] - iVar11);
          iVar12 = (piVar1[0xf] - iVar9) - local_248;
          iVar14 = piVar1[10] - (piVar1[0xb] - iVar13);
          iVar18 = piVar1[8] - (piVar1[9] - iVar14);
          local_84 = (piVar1[0xd] - iVar11) - iVar12;
          iVar15 = piVar1[6] - (piVar1[7] - iVar18);
          iVar16 = (piVar1[0xb] - iVar13) - local_84;
          iVar3 = (piVar1[9] - iVar14) - iVar16;
          iVar21 = piVar1[4] - (piVar1[5] - iVar15);
          local_1c8 = (piVar1[7] - iVar18) - iVar3;
          iVar20 = piVar1[2] - (piVar1[3] - iVar21);
          iVar19 = (piVar1[5] - iVar15) - local_1c8;
          iVar17 = (piVar1[3] - iVar21) - iVar19;
          local_1f8 = (piVar1[1] - iVar20) - iVar17;
          iVar42 = *piVar1 - (piVar1[1] - iVar20);
        }
        local_17c = (int)((ulonglong)((longlong)(iVar18 + iVar21) * 0x620dbe8b) >> 0x20);
        local_16c = (int)((ulonglong)((longlong)(iVar18 + iVar21) * 0x163a1a7e) >> 0x20);
        iVar51 = (iVar21 - iVar18) - iVar9;
        iVar44 = local_17c * 2 +
                 (int)((ulonglong)((longlong)(iVar9 + iVar21) * 0x163a1a7e) >> 0x20) * 2;
        iVar22 = (int)((ulonglong)((longlong)iVar15 * 0x6ed9eba1) >> 0x20);
        iVar18 = (int)((ulonglong)((longlong)(iVar9 - iVar18) * 0x620dbe8b) >> 0x20) * 2 +
                 local_16c * -2;
        iVar21 = (iVar42 >> 1) + (iVar13 >> 1);
        iVar31 = (int)((ulonglong)((longlong)local_1c8 * 0x6ed9eba1) >> 0x20);
        local_174 = (int)((ulonglong)((longlong)(local_248 + iVar19) * 0x163a1a7e) >> 0x20);
        iVar9 = (iVar19 - iVar3) - local_248;
        iVar15 = (int)((ulonglong)((longlong)(iVar3 + iVar19) * 0x620dbe8b) >> 0x20) * 2 +
                 local_174 * 2;
        local_14c = (int)((ulonglong)((longlong)(local_248 - iVar3) * 0x620dbe8b) >> 0x20);
        iVar68 = local_14c * 2 +
                 (int)((ulonglong)((longlong)(iVar3 + iVar19) * 0x163a1a7e) >> 0x20) * -2;
        iVar13 = (iVar42 >> 1) - iVar13;
        iVar43 = iVar21 + iVar22 * -2;
        iVar21 = iVar21 + iVar22 * 2;
        local_18c = (int)((ulonglong)((longlong)(iVar11 + iVar20) * 0x7e0e2e32) >> 0x20);
        iVar19 = (int)((ulonglong)((longlong)(iVar14 - iVar11) * 0x5246dd49) >> 0x20) * 2 +
                 local_18c * 2;
        local_194 = (int)((ulonglong)((longlong)(iVar14 + iVar20) * 0x5246dd49) >> 0x20);
        iVar3 = local_194 * 2 +
                (int)((ulonglong)((longlong)(iVar14 - iVar11) * 0x7e0e2e32) >> 0x20) * -2;
        iVar42 = (local_1f8 >> 1) + (local_84 >> 1);
        local_84 = (local_1f8 >> 1) - local_84;
        local_16c = (int)((ulonglong)((longlong)(iVar12 + iVar17) * 0x7e0e2e32) >> 0x20);
        local_74[0] = (int)((ulonglong)((longlong)(iVar16 - iVar12) * 0x5246dd49) >> 0x20) * 2 +
                      local_16c * 2;
        local_164 = (int)((ulonglong)((longlong)(iVar16 + iVar17) * 0x5246dd49) >> 0x20);
        local_98[3] = local_164 * 2 +
                      (int)((ulonglong)((longlong)(iVar16 - iVar12) * 0x7e0e2e32) >> 0x20) * -2;
        iVar22 = iVar42 + iVar31 * -2;
        iVar42 = iVar42 + iVar31 * 2;
        local_174 = (int)((ulonglong)((longlong)((iVar20 - iVar14) - iVar11) * 0x6ed9eba1) >> 0x20);
        iVar11 = iVar13 + (iVar51 >> 1);
        local_78 = local_84 + (iVar9 >> 1);
        local_15c = (int)((ulonglong)((longlong)((iVar17 - iVar16) - iVar12) * 0x6ed9eba1) >> 0x20);
        local_88 = (iVar22 - (iVar15 + iVar68)) - (local_98[3] - local_74[0]);
        local_80 = (iVar42 - (iVar15 + iVar68)) + (local_98[3] - local_74[0]);
        local_98[0] = (iVar43 + iVar44) - iVar19;
        local_98[1] = iVar42 + iVar15 + local_74[0];
        local_7c = (iVar42 + iVar68) - local_98[3];
        local_98[3] = iVar22 + iVar68 + local_98[3];
        local_74[0] = (iVar22 + iVar15) - local_74[0];
        local_84 = local_84 - iVar9;
        local_98[2] = local_78 + local_15c * 2;
        local_78 = local_78 + local_15c * -2;
        if (local_218 == 0) {
          iVar9 = local_98[0] >> 2;
          iVar20 = piVar39[-9];
          iVar16 = (int)((ulonglong)((longlong)local_74[0] * 0xb27eb5c) >> 0x20);
          iVar17 = iVar16 - iVar9;
          iVar12 = iVar11 + local_174 * -2 >> 2;
          iVar15 = -iVar17 - iVar20;
          iVar14 = (iVar21 + iVar18) - iVar3 >> 2;
          piVar39[-9] = iVar9 + iVar16;
          uVar72 = iVar17 + (int)((ulonglong)((longlong)iVar15 * 0x42aace8b) >> 0x20) * 4;
          iVar16 = (int)((ulonglong)((longlong)local_78 * 0x2120fb83) >> 0x20);
          *puVar53 = uVar72;
          uVar4 = (int)((ulonglong)((longlong)iVar15 * -0x3d16d8dc) >> 0x20) * 4 - iVar20;
          puVar53[0x220] = uVar4;
          iVar17 = piVar39[-8];
          iVar15 = iVar16 - iVar12;
          iVar9 = -iVar15 - iVar17;
          piVar39[-8] = iVar12 + iVar16;
          iVar12 = (int)((ulonglong)((longlong)local_7c * 0x36185aee) >> 0x20);
          uVar32 = (int)((ulonglong)((longlong)iVar9 * -0x36a09e66) >> 0x20) * 4 - iVar17;
          uVar73 = iVar15 + (int)((ulonglong)((longlong)iVar9 * 0x47311c28) >> 0x20) * 4;
          puVar53[0x200] = uVar32;
          puVar53[0x20] = uVar73;
          iVar15 = iVar12 - iVar14;
          iVar9 = piVar39[-7];
          piVar39[-7] = iVar14 + iVar12;
          iVar12 = -iVar15 - iVar9;
          iVar14 = (int)((ulonglong)((longlong)local_80 * 0x496af3e2) >> 0x20);
          uVar81 = (int)((ulonglong)((longlong)iVar12 * -0x2f7a6274) >> 0x20) * 4 - iVar9;
          puVar53[0x1e0] = uVar81;
          iVar9 = (iVar21 - (iVar44 + iVar18)) + (iVar3 - iVar19) >> 2;
          uVar46 = iVar15 + (int)((ulonglong)((longlong)iVar12 * 0x4a868feb) >> 0x20) * 4;
          puVar53[0x40] = uVar46;
          iVar15 = piVar39[-6];
          iVar16 = iVar14 - iVar9;
          iVar12 = -iVar16 - iVar15;
          piVar39[-6] = iVar9 + iVar14;
          iVar14 = (int)((ulonglong)((longlong)local_84 * 0x5a82799a) >> 0x20);
          uVar55 = (int)((ulonglong)((longlong)iVar12 * -0x27dbc160) >> 0x20) * 4 - iVar15;
          uVar64 = iVar16 + (int)((ulonglong)((longlong)iVar12 * 0x4c913b51) >> 0x20) * 4;
          puVar53[0x1c0] = uVar55;
          puVar53[0x60] = uVar64;
          iVar9 = iVar13 - iVar51 >> 2;
          iVar13 = piVar39[-5];
          iVar15 = iVar14 - iVar9;
          iVar12 = -iVar15 - iVar13;
          piVar39[-5] = iVar9 + iVar14;
          local_26c = (int)((ulonglong)((longlong)iVar12 * -0x20000000) >> 0x20);
          iVar14 = (int)((ulonglong)((longlong)local_88 * 0x68d9f964) >> 0x20);
          uVar33 = local_26c * 4 - iVar13;
          uVar47 = iVar15 + (int)((ulonglong)((longlong)iVar12 * 0x4d413ccc) >> 0x20) * 4;
          puVar53[0x1a0] = uVar33;
          puVar53[0x80] = uVar47;
          iVar9 = (iVar43 - (iVar44 + iVar18)) - (iVar3 - iVar19) >> 2;
          iVar12 = piVar39[-4];
          iVar15 = iVar14 - iVar9;
          iVar13 = -iVar15 - iVar12;
          piVar39[-4] = iVar9 + iVar14;
          if ((int)uVar33 < 0) {
            uVar33 = -uVar33;
          }
          iVar16 = (int)((ulonglong)((longlong)local_98[3] * 0x7401e4c1) >> 0x20);
          iVar9 = iVar43 + iVar18 + iVar3 >> 2;
          uVar34 = (int)((ulonglong)((longlong)iVar13 * -0x18243e9f) >> 0x20) * 4 - iVar12;
          puVar53[0x180] = uVar34;
          iVar14 = iVar16 - iVar9;
          iVar12 = iVar21 + iVar44 + iVar19 >> 2;
          uVar25 = iVar15 + (int)((ulonglong)((longlong)iVar13 * 0x4c913b51) >> 0x20) * 4;
          puVar53[0xa0] = uVar25;
          iVar11 = iVar11 + local_174 * 2 >> 2;
          if ((int)uVar47 < 0) {
            uVar47 = -uVar47;
          }
          iVar15 = piVar39[-3];
          iVar13 = -iVar14 - iVar15;
          piVar39[-3] = iVar9 + iVar16;
          uVar56 = (int)((ulonglong)((longlong)iVar13 * -0x10859d8b) >> 0x20) * 4 - iVar15;
          iVar15 = (int)((ulonglong)((longlong)local_98[1] * 0x7f834ed0) >> 0x20);
          puVar53[0x160] = uVar56;
          local_26c = (int)((ulonglong)((longlong)local_98[2] * 0x7ba3751d) >> 0x20);
          uVar35 = iVar14 + (int)((ulonglong)((longlong)iVar13 * 0x4a868feb) >> 0x20) * 4;
          puVar53[0xc0] = uVar35;
          iVar13 = local_26c - iVar11;
          iVar9 = piVar39[-2];
          piVar39[-2] = iVar11 + local_26c;
          iVar11 = -iVar13 - iVar9;
          iVar14 = iVar15 - iVar12;
          if ((int)uVar73 < 0) {
            uVar73 = -uVar73;
          }
          if ((int)uVar32 < 0) {
            uVar32 = -uVar32;
          }
          uVar5 = iVar13 + (int)((ulonglong)((longlong)iVar11 * 0x47311c28) >> 0x20) * 4;
          if ((int)uVar72 < 0) {
            uVar72 = -uVar72;
          }
          puVar53[0xe0] = uVar5;
          if ((int)uVar5 < 0) {
            uVar5 = -uVar5;
          }
          local_20c = (int)((ulonglong)((longlong)iVar11 * -0x95f6199) >> 0x20);
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          uVar26 = local_20c * 4 - iVar9;
          puVar53[0x140] = uVar26;
          if ((int)uVar46 < 0) {
            uVar46 = -uVar46;
          }
          if ((int)uVar26 < 0) {
            uVar26 = -uVar26;
          }
          iVar9 = -iVar14 - piVar39[-1];
          if ((int)uVar81 < 0) {
            uVar81 = -uVar81;
          }
          if ((int)uVar35 < 0) {
            uVar35 = -uVar35;
          }
          if ((int)uVar56 < 0) {
            uVar56 = -uVar56;
          }
          local_214 = (int)((ulonglong)((longlong)iVar9 * 0x42aace8b) >> 0x20);
          uVar74 = iVar14 + local_214 * 4;
          if ((int)uVar64 < 0) {
            uVar64 = -uVar64;
          }
          if ((int)uVar55 < 0) {
            uVar55 = -uVar55;
          }
          if ((int)uVar25 < 0) {
            uVar25 = -uVar25;
          }
          uVar82 = (int)((ulonglong)((longlong)iVar9 * -0x2e92723) >> 0x20) * 4 - piVar39[-1];
          if ((int)uVar34 < 0) {
            uVar34 = -uVar34;
          }
          piVar39[-1] = iVar12 + iVar15;
          uVar34 = uVar47 | uVar33 | uVar73 | uVar32 | uVar5 | uVar26 | uVar72 | uVar4 | uVar46 |
                   uVar81 | uVar35 | uVar56 | (uVar74 ^ (int)uVar74 >> 0x1f) - ((int)uVar74 >> 0x1f)
                   | (uVar82 ^ (int)uVar82 >> 0x1f) - ((int)uVar82 >> 0x1f) | uVar64 | uVar55 |
                   uVar25 | uVar34;
          puVar53[0x100] = uVar74;
          puVar53[0x120] = uVar82;
        }
        else {
          uVar34 = 0;
          iVar11 = *(int *)(iVar38 + DAT_0002079c);
          local_2c[0] = (int)((ulonglong)((longlong)piVar39[-9] * (longlong)*(int *)(iVar11 + 0x8c))
                             >> 0x20);
          iVar12 = local_218 * 0x90 + iVar11;
          iVar9 = 0;
          local_74[1] = (int)((ulonglong)((longlong)piVar39[-9] * (longlong)*(int *)(iVar11 + 0x48))
                             >> 0x20);
          piVar27 = (int *)(iVar12 + -4);
          piVar65 = (int *)(iVar12 + 0x48);
          local_30 = (int)((ulonglong)((longlong)piVar39[-8] * (longlong)*(int *)(iVar11 + 0x88)) >>
                          0x20);
          local_74[2] = (int)((ulonglong)((longlong)piVar39[-8] * (longlong)*(int *)(iVar11 + 0x4c))
                             >> 0x20);
          local_34 = (int)((ulonglong)((longlong)piVar39[-7] * (longlong)*(int *)(iVar11 + 0x84)) >>
                          0x20);
          local_74[3] = (uint)((ulonglong)
                               ((longlong)piVar39[-7] * (longlong)*(int *)(iVar11 + 0x50)) >> 0x20);
          local_38 = (int)((ulonglong)((longlong)piVar39[-6] * (longlong)*(int *)(iVar11 + 0x80)) >>
                          0x20);
          local_74[4] = (int)((ulonglong)((longlong)piVar39[-6] * (longlong)*(int *)(iVar11 + 0x54))
                             >> 0x20);
          local_3c = (int)((ulonglong)((longlong)piVar39[-5] * (longlong)*(int *)(iVar11 + 0x7c)) >>
                          0x20);
          local_74[5] = (uint)((ulonglong)
                               ((longlong)piVar39[-5] * (longlong)*(int *)(iVar11 + 0x58)) >> 0x20);
          local_40 = (int)((ulonglong)((longlong)piVar39[-4] * (longlong)*(int *)(iVar11 + 0x78)) >>
                          0x20);
          local_74[6] = (int)((ulonglong)((longlong)piVar39[-4] * (longlong)*(int *)(iVar11 + 0x5c))
                             >> 0x20);
          local_44 = (int)((ulonglong)((longlong)piVar39[-3] * (longlong)*(int *)(iVar11 + 0x74)) >>
                          0x20);
          local_74[7] = (int)((ulonglong)((longlong)piVar39[-3] * (longlong)*(int *)(iVar11 + 0x60))
                             >> 0x20);
          local_48 = (int)((ulonglong)((longlong)piVar39[-2] * (longlong)*(int *)(iVar11 + 0x70)) >>
                          0x20);
          local_74[8] = (int)((ulonglong)((longlong)piVar39[-2] * (longlong)*(int *)(iVar11 + 100))
                             >> 0x20);
          local_4c = (int)((ulonglong)((longlong)piVar39[-1] * (longlong)*(int *)(iVar11 + 0x6c)) >>
                          0x20);
          local_74[9] = (int)((ulonglong)((longlong)piVar39[-1] * (longlong)*(int *)(iVar11 + 0x68))
                             >> 0x20);
          puVar48 = puVar53;
          piVar75 = piVar39 + -9;
          piVar28 = local_98;
          piVar1 = local_2c;
          piVar57 = (int *)(DAT_00020798 + 0x21428);
          do {
            iVar12 = (int)((ulonglong)((longlong)piVar28[9] * (longlong)*piVar57) >> 0x20);
            iVar11 = *piVar28;
            *piVar75 = (iVar11 >> 2) + iVar12;
            piVar27 = piVar27 + 1;
            iVar12 = (iVar11 >> 2) - iVar12;
            piVar65 = piVar65 + -1;
            iVar13 = local_74[iVar9 + 1] +
                     (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar27) >> 0x20);
            uVar33 = iVar13 * 4;
            iVar11 = *piVar1 + (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar65) >> 0x20);
            uVar47 = iVar11 * 4;
            puVar53[iVar9 * 0x20] = uVar33;
            if ((int)uVar33 < 0) {
              uVar33 = iVar13 * -4;
            }
            iVar9 = iVar9 + 1;
            puVar48[0x220] = uVar47;
            if ((int)uVar47 < 0) {
              uVar47 = iVar11 * -4;
            }
            uVar34 = uVar34 | uVar33 | uVar47;
            puVar48 = puVar48 + -0x20;
            piVar75 = piVar75 + 1;
            piVar28 = piVar28 + -1;
            piVar1 = piVar1 + -1;
            piVar57 = piVar57 + -1;
          } while (iVar9 != 9);
        }
        uVar33 = FUN_0001f950(puVar53,piVar39 + -9,iVar10,uVar24);
        iVar10 = iVar10 + 1;
        puVar53 = puVar53 + 1;
        local_278 = local_278 | uVar33 | uVar34;
        piVar57 = piVar39 + 9;
        piVar1 = piVar71;
      } while (iVar10 < (int)uVar77);
      if (iVar10 < (int)local_250) goto LAB_000215e4;
    }
    local_254 = local_254 + local_250 * 0x12;
    local_264 = local_264 + local_250 * 9;
  }
  local_280 = local_250;
  if ((int)local_250 < (int)uVar7) {
    uVar23 = 7 - iVar50;
    uVar24 = uVar23;
    if (6 < iVar50) {
      uVar24 = 0;
    }
    if ((int)local_250 < (int)uVar45) {
      uVar77 = uVar7;
      if ((int)uVar45 <= (int)uVar7) {
        uVar77 = uVar45;
      }
      iVar40 = *(int *)(iVar38 + DAT_00023220);
      iVar9 = *(int *)(iVar40 + 0x8c);
      iVar10 = *(int *)(iVar40 + 0x48);
      piVar39 = local_264;
      puVar53 = local_254;
      local_270 = (uint *)local_250;
      puVar48 = puVar63 + local_250;
      do {
        local_254 = puVar53 + 0x12;
        local_230 = piVar39 + 9;
        iVar12 = *puVar53;
        iVar11 = puVar53[1];
        if (iVar50 < 7) {
          *puVar53 = iVar12 >> (uVar23 & 0xff);
          puVar53[1] = iVar11 >> (uVar23 & 0xff);
          *piVar39 = *piVar39 >> (uVar23 & 0xff);
          puVar53[2] = (int)puVar53[2] >> (uVar23 & 0xff);
          puVar53[3] = (int)puVar53[3] >> (uVar23 & 0xff);
          piVar39[1] = piVar39[1] >> (uVar23 & 0xff);
          puVar53[4] = (int)puVar53[4] >> (uVar23 & 0xff);
          puVar53[5] = (int)puVar53[5] >> (uVar23 & 0xff);
          piVar39[2] = piVar39[2] >> (uVar23 & 0xff);
          puVar53[6] = (int)puVar53[6] >> (uVar23 & 0xff);
          puVar53[7] = (int)puVar53[7] >> (uVar23 & 0xff);
          piVar39[3] = piVar39[3] >> (uVar23 & 0xff);
          puVar53[8] = (int)puVar53[8] >> (uVar23 & 0xff);
          puVar53[9] = (int)puVar53[9] >> (uVar23 & 0xff);
          piVar39[4] = piVar39[4] >> (uVar23 & 0xff);
          puVar53[10] = (int)puVar53[10] >> (uVar23 & 0xff);
          puVar53[0xb] = (int)puVar53[0xb] >> (uVar23 & 0xff);
          piVar39[5] = piVar39[5] >> (uVar23 & 0xff);
          puVar53[0xc] = (int)puVar53[0xc] >> (uVar23 & 0xff);
          puVar53[0xd] = (int)puVar53[0xd] >> (uVar23 & 0xff);
          piVar39[6] = piVar39[6] >> (uVar23 & 0xff);
          puVar53[0xe] = (int)puVar53[0xe] >> (uVar23 & 0xff);
          puVar53[0xf] = (int)puVar53[0xf] >> (uVar23 & 0xff);
          piVar39[7] = piVar39[7] >> (uVar23 & 0xff);
          puVar53[0x10] = (int)puVar53[0x10] >> (uVar23 & 0xff);
          puVar53[0x11] = (int)puVar53[0x11] >> (uVar23 & 0xff);
          piVar39[8] = piVar39[8] >> (uVar23 & 0xff);
          iVar11 = puVar53[1];
          iVar12 = *puVar53;
        }
        iVar68 = puVar53[0xf];
        iVar31 = puVar53[0xc] - iVar68;
        iVar18 = (puVar53[9] - iVar31) - iVar68;
        local_1fc = (int)((ulonglong)((longlong)*piVar39 * (longlong)iVar10) >> 0x20);
        iVar20 = local_1fc;
        uVar34 = local_1fc * 4;
        iVar69 = puVar53[0x10];
        iVar43 = puVar53[6] - (puVar53[9] - iVar31);
        iVar13 = puVar53[3] - iVar43;
        iVar14 = iVar13 - iVar18 >> 1;
        iVar15 = iVar12 - iVar13 >> 1;
        iVar22 = puVar53[0xd] - iVar69;
        iVar21 = puVar53[7] - (puVar53[10] - iVar22);
        iVar83 = puVar53[0x11];
        local_74[1] = local_1fc;
        local_1dc = (int)((ulonglong)((longlong)*piVar39 * (longlong)iVar9) >> 0x20);
        iVar42 = local_1dc;
        iVar51 = iVar14 + (iVar68 >> 1);
        local_2c[0] = local_1dc;
        iVar12 = (puVar53[10] - iVar22) - iVar69;
        iVar17 = puVar53[4] - iVar21;
        local_74[2] = (int)((ulonglong)((longlong)piVar39[1] * (longlong)*(int *)(iVar40 + 0x4c)) >>
                           0x20);
        iVar16 = iVar17 - iVar12 >> 1;
        iVar3 = iVar15 + (iVar31 >> 1);
        local_1fc = (int)((ulonglong)((longlong)piVar39[1] * (longlong)*(int *)(iVar40 + 0x88)) >>
                         0x20);
        local_30 = local_1fc;
        iVar19 = iVar16 + (iVar69 >> 1);
        local_14c = (int)((ulonglong)((longlong)iVar18 * 0x6ed9eba1) >> 0x20);
        local_34 = (int)((ulonglong)((longlong)piVar39[2] * (longlong)*(int *)(iVar40 + 0x84)) >>
                        0x20);
        local_1cc = (uint)((ulonglong)((longlong)piVar39[2] * (longlong)*(int *)(iVar40 + 0x50)) >>
                          0x20);
        uVar33 = local_1cc;
        local_74[3] = local_1cc;
        local_154 = (int)((ulonglong)((longlong)iVar43 * 0x6ed9eba1) >> 0x20);
        local_164 = (int)((ulonglong)((longlong)iVar12 * 0x6ed9eba1) >> 0x20);
        iVar12 = local_154 * 2;
        iVar13 = local_164 * 2;
        iVar84 = iVar3 + local_154 * -2;
        iVar18 = local_164 * -2;
        local_1cc = (uint)((ulonglong)((longlong)(iVar51 + local_14c * -2) * 0x2120fb83) >> 0x20);
        local_38 = (int)((ulonglong)((longlong)piVar39[3] * (longlong)*(int *)(iVar40 + 0x80)) >>
                        0x20);
        iVar44 = iVar84 + local_1cc * -4;
        local_154 = (int)((ulonglong)((longlong)piVar39[3] * (longlong)*(int *)(iVar40 + 0x54)) >>
                         0x20);
        local_74[4] = local_154;
        local_164 = (int)((ulonglong)((longlong)(local_14c * 2 + iVar51) * 0x7ba3751d) >> 0x20);
        iVar12 = iVar12 + iVar3;
        local_74[5] = (int)((ulonglong)((longlong)piVar39[4] * (longlong)*(int *)(iVar40 + 0x58)) >>
                           0x20);
        iVar17 = iVar11 - iVar17 >> 1;
        iVar84 = iVar84 + local_1cc * 4;
        iVar58 = iVar17 + (iVar22 >> 1);
        iVar80 = iVar12 + local_164 * -4;
        iVar12 = iVar12 + local_164 * 4;
        local_144 = (int)((ulonglong)((longlong)piVar39[4] * (longlong)*(int *)(iVar40 + 0x7c)) >>
                         0x20);
        local_3c = local_144;
        iVar15 = iVar15 - iVar31;
        iVar17 = iVar17 - iVar22;
        local_74[6] = (int)((ulonglong)((longlong)piVar39[5] * (longlong)*(int *)(iVar40 + 0x5c)) >>
                           0x20);
        iVar76 = *(int *)(iVar40 + 0x120);
        iVar22 = puVar53[0xe] - iVar83;
        local_204 = (int)((ulonglong)((longlong)piVar39[5] * (longlong)*(int *)(iVar40 + 0x78)) >>
                         0x20);
        local_40 = local_204;
        iVar70 = (puVar53[0xb] - iVar22) - iVar83;
        local_22c = (int)((ulonglong)((longlong)iVar21 * 0x6ed9eba1) >> 0x20);
        iVar31 = puVar53[8] - (puVar53[0xb] - iVar22);
        local_44 = (int)((ulonglong)((longlong)piVar39[6] * (longlong)*(int *)(iVar40 + 0x74)) >>
                        0x20);
        local_1ec = (int)((ulonglong)((longlong)(iVar19 + iVar18) * 0x2120fb83) >> 0x20);
        local_18c = (int)((ulonglong)((longlong)piVar39[6] * (longlong)*(int *)(iVar40 + 0x60)) >>
                         0x20);
        iVar3 = local_18c;
        iVar11 = local_1ec * 4;
        local_74[7] = local_18c;
        iVar43 = local_22c * 2 + iVar58;
        iVar58 = iVar58 + local_22c * -2;
        iVar59 = iVar58 + local_1ec * -4;
        iVar60 = puVar53[5] - iVar31;
        local_1ec = (int)((ulonglong)((longlong)(iVar13 + iVar19) * 0x7ba3751d) >> 0x20);
        iVar13 = local_1ec * 4;
        iVar51 = iVar43 + local_1ec * -4;
        local_1ec = (int)((ulonglong)((longlong)piVar39[7] * (longlong)*(int *)(iVar40 + 100)) >>
                         0x20);
        iVar21 = local_1ec;
        local_74[8] = local_1ec;
        iVar18 = (int)(puVar53[2] - iVar60) >> 1;
        iVar19 = iVar60 - iVar70 >> 1;
        local_194 = (int)((ulonglong)((longlong)piVar39[7] * (longlong)*(int *)(iVar40 + 0x70)) >>
                         0x20);
        local_48 = local_194;
        iVar16 = (int)((ulonglong)((longlong)(iVar16 - iVar69) * 0x5a82799a) >> 0x20);
        local_1ec = (int)((ulonglong)((longlong)(iVar14 - iVar68) * 0x5a82799a) >> 0x20);
        iVar68 = iVar15 + local_1ec * -4;
        local_18c = (int)((ulonglong)((longlong)piVar39[8] * (longlong)*(int *)(iVar40 + 0x6c)) >>
                         0x20);
        iVar15 = iVar15 + local_1ec * 4;
        iVar14 = iVar17 + iVar16 * -4;
        local_4c = local_18c;
        local_1ac = (int)((ulonglong)((longlong)piVar39[8] * (longlong)*(int *)(iVar40 + 0x68)) >>
                         0x20);
        local_74[9] = local_1ac;
        *puVar48 = uVar34;
        if ((int)uVar34 < 0) {
          uVar34 = iVar20 * -4;
        }
        iVar60 = iVar19 + (iVar83 >> 1);
        iVar20 = iVar18 + (iVar22 >> 1);
        iVar18 = iVar18 - iVar22;
        uVar47 = local_154 * 4;
        puVar48[0x60] = uVar47;
        if ((int)uVar47 < 0) {
          uVar47 = local_154 * -4;
        }
        local_184 = (int)((ulonglong)((longlong)iVar76 * (longlong)iVar44) >> 0x20);
        uVar32 = local_184 + iVar3 * 4;
        puVar48[0xc0] = uVar32;
        iVar69 = *(int *)(iVar40 + 300);
        iVar61 = *(int *)(iVar40 + 0x138);
        iVar66 = *(int *)(iVar40 + 0x144);
        local_25c = (int)((ulonglong)((longlong)iVar69 * (longlong)iVar80) >> 0x20);
        uVar72 = local_25c + local_18c * 4;
        local_224 = (int)((ulonglong)((longlong)iVar70 * 0x6ed9eba1) >> 0x20);
        iVar22 = local_224;
        puVar48[0x120] = uVar72;
        local_17c = (int)((ulonglong)((longlong)iVar76 * (longlong)iVar59) >> 0x20);
        iVar3 = local_224 * 2;
        uVar4 = local_17c + (int)((ulonglong)((longlong)iVar84 * (longlong)iVar61) >> 0x20) +
                local_204 * 4;
        local_224 = (int)((ulonglong)((longlong)iVar69 * (longlong)iVar51) >> 0x20);
        iVar69 = *(int *)(iVar40 + 0x124);
        puVar48[0x180] = uVar4;
        iVar70 = *(int *)(iVar40 + 0x130);
        uVar46 = local_224 + (int)((ulonglong)((longlong)iVar12 * (longlong)iVar66) >> 0x20) +
                 local_34 * 4;
        puVar48[0x1e0] = uVar46;
        uVar73 = local_74[2] * 4;
        puVar48[0x20] = uVar73;
        if ((int)uVar73 < 0) {
          uVar73 = local_74[2] * -4;
        }
        iVar76 = *(int *)(iVar40 + 0x13c);
        uVar81 = local_74[5] * 4;
        puVar48[0x80] = uVar81;
        if ((int)uVar81 < 0) {
          uVar81 = local_74[5] * -4;
        }
        local_15c = (int)((ulonglong)((longlong)iVar69 * (longlong)iVar68) >> 0x20);
        uVar55 = local_15c + iVar21 * 4;
        puVar48[0xe0] = uVar55;
        local_15c = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar76) >> 0x20);
        uVar25 = (int)((ulonglong)((longlong)iVar68 * (longlong)iVar70) >> 0x20) + local_194 * 4;
        puVar48[0x140] = uVar25;
        iVar21 = *(int *)(iVar40 + 0x148);
        uVar35 = (int)((ulonglong)((longlong)iVar69 * (longlong)iVar14) >> 0x20) + local_15c +
                 local_144 * 4;
        puVar48[0x1a0] = uVar35;
        iVar68 = *(int *)(iVar40 + 0x128);
        uVar56 = (int)((ulonglong)((longlong)iVar70 * (longlong)iVar14) >> 0x20) +
                 (int)((ulonglong)((longlong)iVar15 * (longlong)iVar21) >> 0x20) + local_1fc * 4;
        puVar48[0x200] = uVar56;
        uVar5 = (int)local_270 + 1;
        uVar64 = uVar33 * 4;
        puVar48[0x40] = uVar64;
        if ((int)uVar64 < 0) {
          uVar64 = uVar33 * -4;
        }
        local_22c = (int)((ulonglong)((longlong)iVar31 * 0x6ed9eba1) >> 0x20);
        uVar33 = local_74[6] * 4;
        puVar48[0xa0] = uVar33;
        if ((int)uVar33 < 0) {
          uVar33 = local_74[6] * -4;
        }
        iVar14 = local_22c * 2 + iVar20;
        iVar20 = iVar20 + local_22c * -2;
        local_25c = (int)((ulonglong)((longlong)iVar80 * (longlong)iVar68) >> 0x20);
        uVar26 = local_25c + local_1ac * 4;
        iVar15 = *(int *)(iVar40 + 0x134);
        puVar48[0x100] = uVar26;
        iVar21 = *(int *)(iVar40 + 0x140);
        local_25c = (int)((ulonglong)((longlong)iVar44 * (longlong)iVar15) >> 0x20);
        uVar74 = local_25c + local_44 * 4;
        puVar48[0x160] = uVar74;
        local_15c = (int)((ulonglong)((longlong)iVar51 * (longlong)iVar68) >> 0x20);
        local_1dc = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar21) >> 0x20);
        iVar12 = *(int *)(iVar40 + 0x14c);
        local_1cc = (uint)((ulonglong)((longlong)(iVar3 + iVar60) * 0x7ba3751d) >> 0x20);
        uVar82 = local_15c + local_1dc + local_38 * 4;
        puVar48[0x1c0] = uVar82;
        local_194 = (int)((ulonglong)((longlong)(iVar19 - iVar83) * 0x5a82799a) >> 0x20);
        local_174 = (int)((ulonglong)((longlong)(iVar60 + iVar22 * -2) * 0x2120fb83) >> 0x20);
        local_19c = (int)((ulonglong)((longlong)iVar59 * (longlong)iVar15) >> 0x20);
        local_1d4 = (int)((ulonglong)((longlong)iVar84 * (longlong)iVar12) >> 0x20);
        uVar62 = local_19c + local_1d4 + iVar42 * 4;
        puVar48[0x220] = uVar62;
        *piVar39 = iVar43 + iVar13 >> 2;
        piVar39[3] = (int)(iVar14 + local_1cc * 4) >> 2;
        piVar39[2] = iVar58 + iVar11 >> 2;
        piVar39[8] = (int)(iVar14 + local_1cc * -4) >> 2;
        piVar39[5] = iVar20 + local_174 * 4 >> 2;
        piVar39[1] = iVar17 + iVar16 * 4 >> 2;
        piVar39[6] = iVar20 + local_174 * -4 >> 2;
        piVar39[4] = iVar18 + local_194 * 4 >> 2;
        piVar39[7] = iVar18 + local_194 * -4 >> 2;
        uVar6 = FUN_0001f950(puVar48,piVar39,local_270,uVar24);
        if ((int)uVar55 < 0) {
          uVar55 = -uVar55;
        }
        if ((int)uVar25 < 0) {
          uVar25 = -uVar25;
        }
        if ((int)uVar32 < 0) {
          uVar32 = -uVar32;
        }
        if ((int)uVar72 < 0) {
          uVar72 = -uVar72;
        }
        if ((int)uVar35 < 0) {
          uVar35 = -uVar35;
        }
        if ((int)uVar56 < 0) {
          uVar56 = -uVar56;
        }
        if ((int)uVar26 < 0) {
          uVar26 = -uVar26;
        }
        if ((int)uVar74 < 0) {
          uVar74 = -uVar74;
        }
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if ((int)uVar46 < 0) {
          uVar46 = -uVar46;
        }
        if ((int)uVar82 < 0) {
          uVar82 = -uVar82;
        }
        if ((int)uVar62 < 0) {
          uVar62 = -uVar62;
        }
        local_278 = local_278 |
                    uVar55 | uVar6 | uVar47 | uVar73 | uVar81 | uVar64 | uVar33 | uVar34 | uVar25 |
                    uVar32 | uVar72 | uVar35 | uVar56 | uVar26 | uVar74 | uVar4 | uVar46 | uVar82 |
                    uVar62;
        piVar39 = local_230;
        puVar53 = local_254;
        local_270 = (uint *)uVar5;
        puVar48 = puVar48 + 1;
      } while ((int)uVar5 < (int)uVar77);
      if ((int)uVar5 < (int)uVar7) goto LAB_000231a4;
    }
    else {
      local_230 = local_264;
      local_270 = (uint *)local_250;
      iVar40 = *(int *)(iVar38 + DAT_00023220);
LAB_000231a4:
      iVar9 = iVar30 * 0x90 + iVar40;
      puVar53 = local_254;
      local_254 = puVar63 + (int)local_270;
      do {
        iVar10 = puVar53[1];
        iVar11 = *puVar53;
        if (iVar50 < 7) {
          *puVar53 = iVar11 >> (uVar23 & 0xff);
          puVar53[1] = iVar10 >> (uVar23 & 0xff);
          *local_230 = *local_230 >> (uVar23 & 0xff);
          puVar53[2] = (int)puVar53[2] >> (uVar23 & 0xff);
          puVar53[3] = (int)puVar53[3] >> (uVar23 & 0xff);
          local_230[1] = local_230[1] >> (uVar23 & 0xff);
          puVar53[4] = (int)puVar53[4] >> (uVar23 & 0xff);
          puVar53[5] = (int)puVar53[5] >> (uVar23 & 0xff);
          local_230[2] = local_230[2] >> (uVar23 & 0xff);
          puVar53[6] = (int)puVar53[6] >> (uVar23 & 0xff);
          puVar53[7] = (int)puVar53[7] >> (uVar23 & 0xff);
          local_230[3] = local_230[3] >> (uVar23 & 0xff);
          puVar53[8] = (int)puVar53[8] >> (uVar23 & 0xff);
          puVar53[9] = (int)puVar53[9] >> (uVar23 & 0xff);
          local_230[4] = local_230[4] >> (uVar23 & 0xff);
          puVar53[10] = (int)puVar53[10] >> (uVar23 & 0xff);
          puVar53[0xb] = (int)puVar53[0xb] >> (uVar23 & 0xff);
          local_230[5] = local_230[5] >> (uVar23 & 0xff);
          puVar53[0xc] = (int)puVar53[0xc] >> (uVar23 & 0xff);
          puVar53[0xd] = (int)puVar53[0xd] >> (uVar23 & 0xff);
          local_230[6] = local_230[6] >> (uVar23 & 0xff);
          puVar53[0xe] = (int)puVar53[0xe] >> (uVar23 & 0xff);
          puVar53[0xf] = (int)puVar53[0xf] >> (uVar23 & 0xff);
          local_230[7] = local_230[7] >> (uVar23 & 0xff);
          puVar53[0x11] = (int)puVar53[0x11] >> (uVar23 & 0xff);
          puVar53[0x10] = (int)puVar53[0x10] >> (uVar23 & 0xff);
          local_230[8] = local_230[8] >> (uVar23 & 0xff);
          iVar10 = puVar53[1];
          iVar11 = *puVar53;
        }
        iVar68 = puVar53[0xf];
        iVar3 = puVar53[0xc] - iVar68;
        iVar12 = (puVar53[9] - iVar3) - iVar68;
        iVar21 = puVar53[0xd] - puVar53[0x10];
        iVar20 = puVar53[0xe] - puVar53[0x11];
        iVar14 = (puVar53[10] - iVar21) - puVar53[0x10];
        iVar19 = puVar53[6] - (puVar53[9] - iVar3);
        iVar42 = puVar53[7] - (puVar53[10] - iVar21);
        iVar15 = (puVar53[0xb] - iVar20) - puVar53[0x11];
        iVar22 = puVar53[8] - (puVar53[0xb] - iVar20);
        local_21c = (int)((ulonglong)((longlong)iVar12 * 0x6ed9eba1) >> 0x20);
        iVar16 = puVar53[3] - iVar19;
        iVar13 = iVar16 - iVar12 >> 1;
        iVar17 = puVar53[4] - iVar42;
        iVar44 = puVar53[5] - iVar22;
        local_1d4 = (int)((ulonglong)((longlong)iVar15 * 0x6ed9eba1) >> 0x20);
        local_1dc = (int)((ulonglong)((longlong)iVar14 * 0x6ed9eba1) >> 0x20);
        iVar14 = iVar17 - iVar14 >> 1;
        iVar12 = local_1dc * 2;
        iVar31 = iVar13 + (iVar68 >> 1);
        iVar15 = iVar44 - iVar15 >> 1;
        iVar80 = iVar14 + ((int)puVar53[0x10] >> 1);
        iVar43 = iVar15 + ((int)puVar53[0x11] >> 1);
        iVar18 = local_1dc * -2;
        iVar11 = iVar11 - iVar16 >> 1;
        iVar16 = iVar10 - iVar17 >> 1;
        iVar17 = (int)(puVar53[2] - iVar44) >> 1;
        iVar44 = (int)((ulonglong)((longlong)iVar22 * 0x6ed9eba1) >> 0x20);
        local_22c = (int)((ulonglong)((longlong)iVar19 * 0x6ed9eba1) >> 0x20);
        local_1dc = (int)((ulonglong)((longlong)(iVar31 + local_21c * 2) * 0x7ba3751d) >> 0x20);
        iVar19 = local_1dc;
        local_20c = (int)((ulonglong)((longlong)iVar42 * 0x6ed9eba1) >> 0x20);
        iVar42 = (int)((ulonglong)((longlong)(iVar43 + local_1d4 * -2) * 0x2120fb83) >> 0x20);
        iVar22 = iVar11 + (iVar3 >> 1);
        iVar11 = iVar11 - iVar3;
        iVar51 = iVar22 + local_22c * -2;
        iVar22 = iVar22 + local_22c * 2;
        local_224 = (int)((ulonglong)((longlong)(iVar31 + local_21c * -2) * 0x2120fb83) >> 0x20);
        local_21c = (int)((ulonglong)((longlong)(iVar80 + iVar12) * 0x7ba3751d) >> 0x20);
        iVar10 = local_21c * 4;
        iVar3 = (int)((ulonglong)((longlong)(int)(iVar14 - puVar53[0x10]) * 0x5a82799a) >> 0x20);
        local_1cc = (uint)((ulonglong)((longlong)(iVar80 + iVar18) * 0x2120fb83) >> 0x20);
        local_1bc = (int)((ulonglong)((longlong)(iVar43 + local_1d4 * 2) * 0x7ba3751d) >> 0x20);
        local_1e4 = (int)((ulonglong)((longlong)(iVar13 - iVar68) * 0x5a82799a) >> 0x20);
        iVar31 = local_1dc * 4 + iVar22;
        local_1dc = (int)((ulonglong)((longlong)(int)(iVar15 - puVar53[0x11]) * 0x5a82799a) >> 0x20)
        ;
        iVar14 = iVar16 + (iVar21 >> 1);
        iVar16 = iVar16 - iVar21;
        iVar15 = iVar17 + (iVar20 >> 1);
        iVar17 = iVar17 - iVar20;
        iVar22 = iVar22 + iVar19 * -4;
        iVar19 = iVar14 + local_20c * 2;
        iVar14 = iVar14 + local_20c * -2;
        iVar20 = iVar15 + iVar44 * 2;
        iVar43 = local_224 * 4 + iVar51;
        iVar15 = iVar15 + iVar44 * -2;
        iVar51 = iVar51 + local_224 * -4;
        iVar21 = iVar19 + local_21c * -4;
        iVar12 = iVar14 + local_1cc * -4;
        iVar13 = local_1e4 * 4 + iVar11;
        iVar11 = iVar11 + local_1e4 * -4;
        iVar18 = iVar16 + iVar3 * -4;
        if (iVar30 == 2) {
          FUN_0001f800(local_230,local_74 + 1);
        }
        else {
          local_74[1] = (int)((ulonglong)((longlong)*local_230 * (longlong)*(int *)(iVar9 + 0x48))
                             >> 0x20);
          local_2c[0] = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x8c) * (longlong)*local_230)
                             >> 0x20);
          local_74[2] = (int)((ulonglong)((longlong)local_230[1] * (longlong)*(int *)(iVar9 + 0x4c))
                             >> 0x20);
          local_30 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x88) * (longlong)local_230[1]) >>
                          0x20);
          local_74[3] = (int)((ulonglong)((longlong)local_230[2] * (longlong)*(int *)(iVar9 + 0x50))
                             >> 0x20);
          local_34 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x84) * (longlong)local_230[2]) >>
                          0x20);
          local_74[4] = (int)((ulonglong)((longlong)local_230[3] * (longlong)*(int *)(iVar9 + 0x54))
                             >> 0x20);
          local_38 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x80) * (longlong)local_230[3]) >>
                          0x20);
          local_74[5] = (int)((ulonglong)((longlong)local_230[4] * (longlong)*(int *)(iVar9 + 0x58))
                             >> 0x20);
          local_3c = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x7c) * (longlong)local_230[4]) >>
                          0x20);
          local_74[6] = (int)((ulonglong)((longlong)local_230[5] * (longlong)*(int *)(iVar9 + 0x5c))
                             >> 0x20);
          local_40 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x78) * (longlong)local_230[5]) >>
                          0x20);
          local_44 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x74) * (longlong)local_230[6]) >>
                          0x20);
          local_74[7] = (int)((ulonglong)((longlong)local_230[6] * (longlong)*(int *)(iVar9 + 0x60))
                             >> 0x20);
          local_74[8] = (int)((ulonglong)((longlong)local_230[7] * (longlong)*(int *)(iVar9 + 100))
                             >> 0x20);
          local_48 = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x70) * (longlong)local_230[7]) >>
                          0x20);
          local_74[9] = (int)((ulonglong)((longlong)local_230[8] * (longlong)*(int *)(iVar9 + 0x68))
                             >> 0x20);
          local_4c = (int)((ulonglong)((longlong)*(int *)(iVar9 + 0x6c) * (longlong)local_230[8]) >>
                          0x20);
        }
        iVar44 = local_74[1];
        uVar77 = local_74[1] * 4;
        *local_254 = uVar77;
        iVar80 = *(int *)(iVar40 + 300);
        uVar34 = local_74[4] * 4;
        iVar68 = *(int *)(iVar40 + 0x120);
        local_254[0x60] = uVar34;
        if ((int)uVar34 < 0) {
          uVar34 = local_74[4] * -4;
        }
        uVar33 = (int)((ulonglong)((longlong)iVar51 * (longlong)iVar68) >> 0x20) + local_74[7] * 4;
        local_254[0xc0] = uVar33;
        if ((int)uVar33 < 0) {
          uVar33 = -uVar33;
        }
        iVar58 = *(int *)(iVar40 + 0x138);
        local_25c = (int)((ulonglong)((longlong)iVar22 * (longlong)iVar80) >> 0x20);
        uVar47 = local_25c + local_4c * 4;
        local_254[0x120] = uVar47;
        if ((int)uVar47 < 0) {
          uVar47 = -uVar47;
        }
        local_1e4 = (int)((ulonglong)((longlong)iVar43 * (longlong)iVar58) >> 0x20);
        iVar58 = *(int *)(iVar40 + 0x144);
        uVar73 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar68) >> 0x20) + local_1e4 +
                 local_40 * 4;
        local_254[0x180] = uVar73;
        if ((int)uVar73 < 0) {
          uVar73 = -uVar73;
        }
        local_1e4 = (int)((ulonglong)((longlong)iVar21 * (longlong)iVar80) >> 0x20);
        uVar32 = local_1e4 + (int)((ulonglong)((longlong)iVar31 * (longlong)iVar58) >> 0x20) +
                 local_34 * 4;
        local_254[0x1e0] = uVar32;
        iVar68 = *(int *)(iVar40 + 0x130);
        if ((int)uVar32 < 0) {
          uVar32 = -uVar32;
        }
        iVar80 = *(int *)(iVar40 + 0x124);
        uVar72 = local_74[2] * 4;
        local_254[0x20] = uVar72;
        if ((int)uVar72 < 0) {
          uVar72 = local_74[2] * -4;
        }
        uVar4 = local_74[5] * 4;
        local_254[0x80] = uVar4;
        if ((int)uVar4 < 0) {
          uVar4 = local_74[5] * -4;
        }
        uVar46 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar80) >> 0x20) + local_74[8] * 4;
        local_254[0xe0] = uVar46;
        if ((int)uVar46 < 0) {
          uVar46 = -uVar46;
        }
        local_184 = (int)((ulonglong)((longlong)iVar68 * (longlong)iVar11) >> 0x20);
        iVar11 = *(int *)(iVar40 + 0x13c);
        uVar81 = local_184 + local_48 * 4;
        local_254[0x140] = uVar81;
        if ((int)uVar81 < 0) {
          uVar81 = -uVar81;
        }
        local_1e4 = (int)((ulonglong)((longlong)iVar18 * (longlong)iVar80) >> 0x20);
        uVar64 = local_1e4 + (int)((ulonglong)((longlong)iVar13 * (longlong)iVar11) >> 0x20) +
                 local_3c * 4;
        iVar11 = *(int *)(iVar40 + 0x148);
        local_254[0x1a0] = uVar64;
        if ((int)uVar64 < 0) {
          uVar64 = -uVar64;
        }
        uVar25 = (int)local_270 + 1;
        local_25c = (int)((ulonglong)((longlong)iVar18 * (longlong)iVar68) >> 0x20);
        uVar55 = local_25c + (int)((ulonglong)((longlong)iVar13 * (longlong)iVar11) >> 0x20) +
                 local_30 * 4;
        local_254[0x200] = uVar55;
        if ((int)uVar55 < 0) {
          uVar55 = -uVar55;
        }
        iVar11 = *(int *)(iVar40 + 0x128);
        uVar35 = local_74[3] * 4;
        local_254[0x40] = uVar35;
        if ((int)uVar35 < 0) {
          uVar35 = local_74[3] * -4;
        }
        uVar56 = local_74[6] << 2;
        iVar13 = *(int *)(iVar40 + 0x134);
        local_254[0xa0] = uVar56;
        local_214 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar22) >> 0x20);
        uVar5 = local_214 + local_74[9] * 4;
        local_254[0x100] = uVar5;
        if ((int)uVar5 < 0) {
          uVar5 = -uVar5;
        }
        local_224 = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar51) >> 0x20);
        iVar18 = *(int *)(iVar40 + 0x140);
        uVar26 = local_224 + local_44 * 4;
        local_254[0x160] = uVar26;
        if ((int)uVar26 < 0) {
          uVar26 = -uVar26;
        }
        iVar22 = *(int *)(iVar40 + 0x14c);
        local_22c = (int)((ulonglong)((longlong)iVar31 * (longlong)iVar18) >> 0x20);
        local_1e4 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar21) >> 0x20);
        uVar74 = local_1e4 + local_22c + local_38 * 4;
        local_21c = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar12) >> 0x20);
        local_254[0x1c0] = uVar74;
        if ((int)uVar74 < 0) {
          uVar74 = -uVar74;
        }
        uVar62 = local_21c + (int)((ulonglong)((longlong)iVar43 * (longlong)iVar22) >> 0x20) +
                 local_2c[0] * 4;
        local_254[0x220] = uVar62;
        auVar2._4_4_ = iVar3 * 4 + iVar16;
        auVar2._0_4_ = iVar10 + iVar19;
        auVar2._8_4_ = local_1cc * 4 + iVar14;
        auVar2._12_4_ = local_1bc * 4 + iVar20;
        auVar87 = VectorSignedFixedToFloat(auVar2,2);
        *(longlong *)local_230 = auVar87._0_8_;
        *(longlong *)(local_230 + 2) = auVar87._8_8_;
        auVar87._4_4_ = iVar42 * 4 + iVar15;
        auVar87._0_4_ = local_1dc * 4 + iVar17;
        auVar87._8_4_ = iVar15 + iVar42 * -4;
        auVar87._12_4_ = iVar17 + local_1dc * -4;
        auVar87 = VectorSignedFixedToFloat(auVar87,2);
        *(longlong *)(local_230 + 4) = auVar87._0_8_;
        *(longlong *)(local_230 + 6) = auVar87._8_8_;
        local_230[8] = iVar20 + local_1bc * -4 >> 2;
        uVar82 = FUN_0001f950(local_254,local_230,local_270,uVar24);
        if ((int)uVar77 < 0) {
          uVar77 = iVar44 * -4;
        }
        local_278 = local_278 |
                    uVar77 | uVar82 | uVar72 | uVar34 | uVar4 | uVar35 |
                                      (uVar56 ^ (int)uVar56 >> 0x1f) - ((int)uVar56 >> 0x1f) |
                                      uVar46 | uVar81 | uVar33 | uVar47 | uVar64 | uVar55 | uVar5 |
                                      uVar26 | uVar73 | uVar32 | uVar74 |
                                      (uVar62 ^ (int)uVar62 >> 0x1f) - ((int)uVar62 >> 0x1f);
        puVar53 = puVar53 + 0x12;
        local_230 = local_230 + 9;
        local_254 = local_254 + 1;
        local_270 = (uint *)uVar25;
      } while ((int)uVar25 < (int)uVar7);
    }
    local_264 = local_264 + (uVar7 - local_250) * 9;
    local_280 = uVar7;
  }
  if ((int)local_280 < (int)local_258) {
    if ((int)local_280 < (int)uVar45) {
      local_270 = (uint *)local_280;
      uVar7 = local_258;
      if ((int)uVar45 <= (int)local_258) {
        uVar7 = uVar45;
      }
      iVar38 = *(int *)(iVar38 + DAT_00023220);
      iVar50 = *(int *)(iVar38 + 0x6c);
      iVar40 = *(int *)(iVar38 + 0x68);
      iVar9 = *(int *)(iVar38 + 0x70);
      iVar10 = *(int *)(iVar38 + 100);
      iVar11 = *(int *)(iVar38 + 0x74);
      iVar12 = *(int *)(iVar38 + 0x60);
      iVar13 = *(int *)(iVar38 + 0x78);
      iVar14 = *(int *)(iVar38 + 0x5c);
      iVar15 = *(int *)(iVar38 + 0x7c);
      iVar16 = *(int *)(iVar38 + 0x58);
      iVar17 = *(int *)(iVar38 + 0x80);
      iVar18 = *(int *)(iVar38 + 0x54);
      iVar19 = *(int *)(iVar38 + 0x84);
      iVar20 = *(int *)(iVar38 + 0x50);
      iVar21 = *(int *)(iVar38 + 0x88);
      iVar42 = *(int *)(iVar38 + 0x4c);
      iVar3 = *(int *)(iVar38 + 0x8c);
      iVar22 = *(int *)(iVar38 + 0x48);
      puVar53 = puVar63 + local_280;
      piVar39 = local_264;
      do {
        local_264 = piVar39 + 9;
        uVar23 = local_280 & 1;
        uVar77 = (int)(local_280 << 0x1f) >> 0x1f;
        local_74[1] = (int)((ulonglong)((longlong)*piVar39 * (longlong)iVar22) >> 0x20);
        local_2c[0] = (int)((ulonglong)((longlong)iVar3 * (longlong)*piVar39) >> 0x20);
        uVar45 = local_74[1] * 4;
        uVar24 = uVar45;
        if ((int)uVar45 < 0) {
          uVar24 = local_74[1] * -4;
        }
        local_74[2] = (int)((ulonglong)((longlong)iVar42 * (longlong)piVar39[1]) >> 0x20);
        local_30 = (int)((ulonglong)((longlong)piVar39[1] * (longlong)iVar21) >> 0x20);
        uVar33 = (uVar77 ^ local_74[2] << 2) + uVar23;
        uVar34 = uVar33;
        if ((int)uVar33 < 0) {
          uVar34 = -uVar33;
        }
        local_74[3] = (int)((ulonglong)((longlong)iVar20 * (longlong)piVar39[2]) >> 0x20);
        local_34 = (int)((ulonglong)((longlong)piVar39[2] * (longlong)iVar19) >> 0x20);
        local_74[4] = (int)((ulonglong)((longlong)iVar18 * (longlong)piVar39[3]) >> 0x20);
        local_38 = (int)((ulonglong)((longlong)piVar39[3] * (longlong)iVar17) >> 0x20);
        local_74[5] = (int)((ulonglong)((longlong)iVar16 * (longlong)piVar39[4]) >> 0x20);
        local_3c = (int)((ulonglong)((longlong)piVar39[4] * (longlong)iVar15) >> 0x20);
        local_74[6] = (int)((ulonglong)((longlong)iVar14 * (longlong)piVar39[5]) >> 0x20);
        local_40 = (int)((ulonglong)((longlong)piVar39[5] * (longlong)iVar13) >> 0x20);
        local_74[7] = (int)((ulonglong)((longlong)iVar12 * (longlong)piVar39[6]) >> 0x20);
        local_44 = (int)((ulonglong)((longlong)piVar39[6] * (longlong)iVar11) >> 0x20);
        local_74[8] = (int)((ulonglong)((longlong)iVar10 * (longlong)piVar39[7]) >> 0x20);
        local_48 = (int)((ulonglong)((longlong)piVar39[7] * (longlong)iVar9) >> 0x20);
        local_74[9] = (int)((ulonglong)((longlong)iVar40 * (longlong)piVar39[8]) >> 0x20);
        local_4c = (int)((ulonglong)((longlong)piVar39[8] * (longlong)iVar50) >> 0x20);
        *puVar53 = uVar45;
        puVar53[0x20] = uVar33;
        *piVar39 = 0;
        uVar47 = local_74[3] << 2;
        puVar53[0x40] = uVar47;
        uVar72 = uVar23 + (uVar77 ^ local_74[4] << 2);
        puVar53[0x60] = uVar72;
        piVar39[1] = 0;
        uVar73 = local_74[5] * 4;
        puVar53[0x80] = uVar73;
        uVar32 = uVar73;
        if ((int)uVar73 < 0) {
          uVar32 = local_74[5] * -4;
        }
        uVar46 = uVar23 + (uVar77 ^ local_74[6] << 2);
        puVar53[0xa0] = uVar46;
        piVar39[2] = 0;
        uVar4 = uVar72;
        if ((int)uVar72 < 0) {
          uVar4 = -uVar72;
        }
        uVar81 = local_74[7] * 4;
        puVar53[0xc0] = uVar81;
        uVar64 = uVar81;
        if ((int)uVar81 < 0) {
          uVar64 = local_74[7] * -4;
        }
        uVar55 = uVar46;
        if ((int)uVar46 < 0) {
          uVar55 = -uVar46;
        }
        uVar56 = uVar23 + (uVar77 ^ local_74[8] << 2);
        puVar53[0xe0] = uVar56;
        piVar39[3] = 0;
        uVar25 = local_74[9] * 4;
        puVar53[0x100] = uVar25;
        uVar35 = uVar25;
        if ((int)uVar25 < 0) {
          uVar35 = local_74[9] * -4;
        }
        uVar74 = uVar23 + (uVar77 ^ local_4c << 2);
        puVar53[0x120] = uVar74;
        piVar39[4] = 0;
        uVar5 = local_48 * 4;
        puVar53[0x140] = uVar5;
        uVar26 = uVar5;
        if ((int)uVar5 < 0) {
          uVar26 = local_48 * -4;
        }
        uVar6 = uVar23 + (uVar77 ^ local_44 << 2);
        puVar53[0x160] = uVar6;
        piVar39[5] = 0;
        uVar82 = local_40 * 4;
        puVar53[0x180] = uVar82;
        uVar62 = uVar82;
        if ((int)uVar82 < 0) {
          uVar62 = local_40 * -4;
        }
        uVar52 = uVar23 + (uVar77 ^ local_3c << 2);
        puVar53[0x1a0] = uVar52;
        piVar39[6] = 0;
        uVar78 = local_38 * 4;
        puVar53[0x1c0] = uVar78;
        uVar86 = uVar78;
        if ((int)uVar78 < 0) {
          uVar86 = local_38 * -4;
        }
        uVar85 = uVar23 + (uVar77 ^ local_34 << 2);
        puVar53[0x1e0] = uVar85;
        piVar39[7] = 0;
        uVar67 = local_30 * 4;
        puVar53[0x200] = uVar67;
        uVar79 = uVar67;
        if ((int)uVar67 < 0) {
          uVar79 = local_30 * -4;
        }
        uVar23 = uVar23 + (uVar77 ^ local_2c[0] << 2);
        puVar53[0x220] = uVar23;
        piVar39[8] = 0;
        if (((((((((((((((((uVar47 != 0 || uVar73 != 0) || uVar81 != 0) || uVar25 != 0) ||
                        uVar5 != 0) || uVar82 != 0) || uVar78 != 0) || uVar67 != 0) || uVar72 != 0)
                   || uVar46 != 0) || uVar56 != 0) || uVar74 != 0) || uVar6 != 0) || uVar52 != 0) ||
              uVar85 != 0) || uVar23 != 0) || uVar45 != 0) || uVar33 != 0) {
          local_270 = (uint *)local_280;
        }
        local_280 = local_280 + 1;
        local_278 = local_278 |
                    (uVar47 ^ (int)uVar47 >> 0x1f) - ((int)uVar47 >> 0x1f) | uVar32 | uVar64 |
                    uVar35 | uVar26 | uVar62 | uVar86 | uVar79 | uVar4 | uVar55 |
                    (uVar56 ^ (int)uVar56 >> 0x1f) - ((int)uVar56 >> 0x1f) |
                    (uVar74 ^ (int)uVar74 >> 0x1f) - ((int)uVar74 >> 0x1f) |
                    (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) |
                    (uVar52 ^ (int)uVar52 >> 0x1f) - ((int)uVar52 >> 0x1f) |
                    (uVar85 ^ (int)uVar85 >> 0x1f) - ((int)uVar85 >> 0x1f) |
                    (uVar23 ^ (int)uVar23 >> 0x1f) - ((int)uVar23 >> 0x1f) | uVar24 | uVar34;
        puVar53 = puVar53 + 1;
        piVar39 = local_264;
      } while ((int)local_280 < (int)uVar7);
      if ((int)local_258 <= (int)local_280) goto LAB_00024598;
    }
    else {
      local_270 = (uint *)local_280;
      iVar38 = *(int *)(iVar38 + DAT_0002476c);
    }
    iVar38 = iVar30 * 0x90 + iVar38;
    puVar53 = puVar63 + local_280;
    do {
      if (iVar30 == 2) {
        FUN_0001f800(local_264,local_74 + 1);
      }
      else {
        local_74[1] = (int)((ulonglong)((longlong)*local_264 * (longlong)*(int *)(iVar38 + 0x48)) >>
                           0x20);
        local_2c[0] = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x8c) * (longlong)*local_264) >>
                           0x20);
        local_74[2] = (int)((ulonglong)((longlong)local_264[1] * (longlong)*(int *)(iVar38 + 0x4c))
                           >> 0x20);
        local_30 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x88) * (longlong)local_264[1]) >>
                        0x20);
        local_74[3] = (int)((ulonglong)((longlong)local_264[2] * (longlong)*(int *)(iVar38 + 0x50))
                           >> 0x20);
        local_34 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x84) * (longlong)local_264[2]) >>
                        0x20);
        local_74[4] = (int)((ulonglong)((longlong)local_264[3] * (longlong)*(int *)(iVar38 + 0x54))
                           >> 0x20);
        local_38 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x80) * (longlong)local_264[3]) >>
                        0x20);
        local_74[5] = (int)((ulonglong)((longlong)local_264[4] * (longlong)*(int *)(iVar38 + 0x58))
                           >> 0x20);
        local_3c = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x7c) * (longlong)local_264[4]) >>
                        0x20);
        local_74[6] = (int)((ulonglong)((longlong)local_264[5] * (longlong)*(int *)(iVar38 + 0x5c))
                           >> 0x20);
        local_40 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x78) * (longlong)local_264[5]) >>
                        0x20);
        local_44 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x74) * (longlong)local_264[6]) >>
                        0x20);
        local_74[7] = (int)((ulonglong)((longlong)local_264[6] * (longlong)*(int *)(iVar38 + 0x60))
                           >> 0x20);
        local_74[8] = (int)((ulonglong)((longlong)local_264[7] * (longlong)*(int *)(iVar38 + 100))
                           >> 0x20);
        local_48 = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x70) * (longlong)local_264[7]) >>
                        0x20);
        local_74[9] = (int)((ulonglong)((longlong)local_264[8] * (longlong)*(int *)(iVar38 + 0x68))
                           >> 0x20);
        local_4c = (int)((ulonglong)((longlong)*(int *)(iVar38 + 0x6c) * (longlong)local_264[8]) >>
                        0x20);
      }
      uVar7 = local_74[1] * 4;
      *puVar53 = uVar7;
      uVar23 = (int)(local_280 << 0x1f) >> 0x1f;
      uVar24 = local_280 & 1;
      uVar77 = uVar24 + (uVar23 ^ local_74[2] << 2);
      puVar53[0x20] = uVar77;
      *local_264 = 0;
      uVar45 = uVar7;
      if ((int)uVar7 < 0) {
        uVar45 = local_74[1] * -4;
      }
      uVar34 = uVar77;
      if ((int)uVar77 < 0) {
        uVar34 = -uVar77;
      }
      uVar33 = local_74[3] << 2;
      puVar53[0x40] = uVar33;
      uVar32 = (uVar23 ^ local_74[4] << 2) + uVar24;
      puVar53[0x60] = uVar32;
      local_264[1] = 0;
      uVar47 = local_74[5] << 2;
      puVar53[0x80] = uVar47;
      uVar72 = (uVar23 ^ local_74[6] << 2) + uVar24;
      puVar53[0xa0] = uVar72;
      local_264[2] = 0;
      uVar73 = uVar32;
      if ((int)uVar32 < 0) {
        uVar73 = -uVar32;
      }
      uVar4 = local_74[7] * 4;
      puVar53[0xc0] = uVar4;
      uVar46 = uVar4;
      if ((int)uVar4 < 0) {
        uVar46 = local_74[7] * -4;
      }
      uVar81 = uVar72;
      if ((int)uVar72 < 0) {
        uVar81 = -uVar72;
      }
      uVar25 = (uVar23 ^ local_74[8] << 2) + uVar24;
      puVar53[0xe0] = uVar25;
      local_264[3] = 0;
      uVar64 = local_74[9] * 4;
      puVar53[0x100] = uVar64;
      uVar55 = uVar64;
      if ((int)uVar64 < 0) {
        uVar55 = local_74[9] * -4;
      }
      uVar5 = (uVar23 ^ local_4c << 2) + uVar24;
      puVar53[0x120] = uVar5;
      local_264[4] = 0;
      uVar35 = local_48 * 4;
      puVar53[0x140] = uVar35;
      uVar56 = uVar35;
      if ((int)uVar35 < 0) {
        uVar56 = local_48 * -4;
      }
      uVar74 = (uVar23 ^ local_44 << 2) + uVar24;
      puVar53[0x160] = uVar74;
      local_264[5] = 0;
      uVar26 = uVar74;
      if ((int)uVar74 < 0) {
        uVar26 = -uVar74;
      }
      uVar82 = local_40 * 4;
      puVar53[0x180] = uVar82;
      uVar62 = uVar82;
      if ((int)uVar82 < 0) {
        uVar62 = local_40 * -4;
      }
      uVar86 = (uVar23 ^ local_3c << 2) + uVar24;
      puVar53[0x1a0] = uVar86;
      local_264[6] = 0;
      uVar6 = local_38 * 4;
      puVar53[0x1c0] = uVar6;
      uVar78 = uVar6;
      if ((int)uVar6 < 0) {
        uVar78 = local_38 * -4;
      }
      uVar79 = (uVar23 ^ local_34 << 2) + uVar24;
      puVar53[0x1e0] = uVar79;
      local_264[7] = 0;
      uVar52 = local_30 * 4;
      puVar53[0x200] = uVar52;
      uVar67 = uVar52;
      if ((int)uVar52 < 0) {
        uVar67 = local_30 * -4;
      }
      uVar24 = (uVar23 ^ local_2c[0] << 2) + uVar24;
      puVar53[0x220] = uVar24;
      if ((((((((((((((((((local_74[5] | local_74[3]) & 0x3fffffffU) != 0 || uVar4 != 0) ||
                       uVar64 != 0) || uVar35 != 0) || uVar82 != 0) || uVar6 != 0) || uVar52 != 0)
                  || uVar32 != 0) || uVar72 != 0) || uVar25 != 0) || uVar5 != 0) || uVar74 != 0) ||
             uVar86 != 0) || uVar79 != 0) || uVar24 != 0) || uVar7 != 0) || uVar77 != 0) {
        local_270 = (uint *)local_280;
      }
      local_280 = local_280 + 1;
      local_264[8] = 0;
      local_278 = local_278 |
                  (uVar47 ^ (int)uVar47 >> 0x1f) - ((int)uVar47 >> 0x1f) |
                  (uVar33 ^ (int)uVar33 >> 0x1f) - ((int)uVar33 >> 0x1f) | uVar46 | uVar55 | uVar56
                  | uVar62 | uVar78 | uVar67 | uVar73 | uVar81 |
                  (uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f) |
                  (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) | uVar26 |
                  (uVar86 ^ (int)uVar86 >> 0x1f) - ((int)uVar86 >> 0x1f) |
                  (uVar79 ^ (int)uVar79 >> 0x1f) - ((int)uVar79 >> 0x1f) |
                  (uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f) | uVar45 | uVar34;
      puVar53 = puVar53 + 1;
      local_264 = local_264 + 9;
    } while ((int)local_280 < (int)local_258);
  }
  else {
    local_258 = local_280;
    local_270 = (uint *)local_280;
  }
LAB_00024598:
  if ((int)local_258 < 0x20) {
    uVar7 = 0x20 - local_258;
    if (2 < 0x1f - local_258) {
      uVar45 = 0;
      puVar49 = (undefined4 *)(iVar29 + (param_3 * 0x240 + local_258) * 4);
      do {
        puVar36 = puVar49;
        do {
          *puVar36 = 0;
          puVar36[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          puVar36[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          puVar36[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puVar36 = puVar36 + 0x20;
        } while (puVar49 + 0x240 != puVar36);
        uVar45 = uVar45 + 1;
        puVar49 = puVar49 + 4;
      } while (uVar7 >> 2 != uVar45);
      local_258 = local_258 + (uVar7 & 0xfffffffc);
      if (uVar7 == (uVar7 & 0xfffffffc)) goto LAB_00024644;
    }
    do {
      iVar38 = 0;
      do {
        puVar63[local_258 + iVar38 * 0x20] = 0;
        iVar38 = iVar38 + 1;
      } while (iVar38 != 0x12);
      local_258 = local_258 + 1;
    } while (local_258 != 0x20);
  }
LAB_00024644:
  if (local_278 == 0) {
    iVar38 = 0x1f;
  }
  else if ((int)local_278 < 0) {
    iVar38 = -1;
  }
  else {
    iVar50 = 0;
    do {
      iVar38 = iVar50;
      local_278 = local_278 << 1;
      iVar50 = iVar38 + 1;
    } while (-1 < (int)local_278);
  }
  *(uint **)(iVar8 + 0x1b00) = local_270;
  uVar37 = *(undefined4 *)(iVar54 + param_3 * 0x48 + param_2 * 0x90 + 0x3c);
  *(uint *)(iVar8 + 0x1b10) = uVar41;
  *(int *)(iVar8 + 0x1b18) = iVar38;
  *(undefined4 *)(iVar8 + 0x1b08) = uVar37;
  return 0;
}



/* ===== AudioDecMP3Open @ 00024770 size=64 ===== */

undefined4 AudioDecMP3Open(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0xdeadfcfc;
  *(undefined4 *)(param_1 + 8) = 0xdeadfcfc;
  iVar2 = MP3InitDecoder();
  iVar1 = DAT_000247b0;
  piVar3 = (int *)(DAT_000247b0 + 0x24794);
  *piVar3 = iVar2;
  if (iVar2 != 0) {
    *(int **)(param_1 + 8) = piVar3;
    uVar4 = 0;
    *(undefined4 *)(iVar1 + 0x24824) = *(undefined4 *)(param_1 + 4);
  }
  return uVar4;
}



/* ===== AudioDecMP3Close @ 000247b4 size=44 ===== */

undefined4 AudioDecMP3Close(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_000247e0 + 0x247c4);
  if (*piVar1 != 0) {
    MP3FreeDecoder();
    *piVar1 = 0;
  }
  return 0;
}



/* ===== AudioDecMP3Process @ 000247e4 size=248 ===== */

int AudioDecMP3Process(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  local_20 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  local_1c = iVar5;
  iVar2 = MP3FindSyncWord(local_20,iVar5);
  iVar1 = DAT_000248dc;
  if (iVar2 < 0) {
    iVar3 = 3;
    printf((char *)(DAT_000248ec + 0x248d0),DAT_000248e8 + 0x248cc,0x38);
    local_1c = 0;
  }
  else {
    puVar4 = (undefined4 *)(DAT_000248dc + 0x24828);
    local_1c = local_1c - iVar2;
    local_20 = local_20 + iVar2;
    iVar3 = MP3Decode(*puVar4,&local_20,&local_1c,*(undefined4 *)(DAT_000248dc + 0x248b8),0);
    if (iVar3 == 0) {
      MP3GetLastFrameInfo(*puVar4,iVar1 + 0x2482c);
    }
    else {
      printf((char *)(DAT_000248e4 + 0x24894),DAT_000248e0 + 0x24890,0x43,iVar3);
      if (iVar5 == local_1c && iVar2 == 0) {
        local_1c = local_1c + -1;
        local_20 = local_20 + 1;
      }
      if (iVar3 == -1) {
        local_1c = -1;
      }
    }
  }
  *(int *)(param_1 + 4) = local_20;
  *(int *)(param_1 + 8) = local_1c;
  return iVar3;
}



/* ===== MP3InitDecoder @ 000248f0 size=4 ===== */

void MP3InitDecoder(void)

{
  (*(code *)PTR_xmp3_AllocateBuffers_00048160)();
  return;
}



/* ===== MP3FreeDecoder @ 000248f4 size=24 ===== */

void MP3FreeDecoder(int param_1)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_xmp3_FreeBuffers_0004810c)();
  return;
}



/* ===== MP3FindSyncWord @ 00024900 size=84 ===== */

char * MP3FindSyncWord(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (1 < param_2) {
    pcVar1 = (char *)(param_1 + -2 + param_2);
    pcVar2 = (char *)(param_1 + -1);
    do {
      while( true ) {
        pcVar3 = pcVar2 + 1;
        if (*pcVar3 != -1) break;
        if ((pcVar2[2] & 0xe0U) == 0xe0) {
          return pcVar2 + (1 - param_1);
        }
        pcVar2 = pcVar3;
        if (pcVar3 == pcVar1) {
          return (char *)0xffffffff;
        }
      }
      pcVar2 = pcVar3;
    } while (pcVar3 != pcVar1);
  }
  return (char *)0xffffffff;
}



/* ===== MP3GetLastFrameInfo @ 00024954 size=180 ===== */

void MP3GetLastFrameInfo(int param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_00024a0c;
  iVar2 = DAT_00024a08 + 0x24968;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x844);
    iVar6 = *(int *)(param_1 + 0x7bc);
    *param_2 = *(undefined8 *)(param_1 + 0x7b8);
    iVar5 = *(int *)(param_1 + 2000);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x7c0);
    *(undefined4 *)((int)param_2 + 0xc) = 0x10;
    iVar3 = *(int *)(iVar2 + iVar3);
    *(int *)((int)param_2 + 0x14) = iVar5;
    *(int *)(param_2 + 3) = iVar4;
    sVar1 = *(short *)(iVar3 + (iVar4 * 3 + iVar5 + -1) * 2);
    *(undefined4 *)((int)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x7d4);
    *(int *)(param_2 + 2) = iVar6 * sVar1;
    param_2[4] = *(undefined8 *)(param_1 + 0x7d8);
    memcpy(param_2 + 5,(void *)(param_1 + 0x7e0),100);
    return;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
  ;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)param_2 + 0xc) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



/* ===== MP3GetNextFrameInfo @ 00024a10 size=80 ===== */

undefined4 MP3GetNextFrameInfo(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xfffffffb;
  }
  iVar1 = xmp3_UnpackFrameHeader(param_1,param_3);
  if ((iVar1 != -1) && (*(int *)(param_1 + 2000) == 3)) {
    MP3GetLastFrameInfo(param_1,param_2);
    return 0;
  }
  return 0xfffffffa;
}



/* ===== MP3Decode @ 00024a60 size=1516 ===== */

undefined4 MP3Decode(int param_1,int *param_2,int *param_3,void *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t __n;
  int iVar7;
  char *pcVar8;
  void *__dest;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *local_38;
  int local_2c [2];
  
  if (param_1 == 0) {
    return 0xfffffffb;
  }
  iVar2 = xmp3_UnpackFrameHeader(param_1,*param_2);
  if (iVar2 < 0) {
LAB_00024ebc:
    uVar5 = 0xfffffffa;
  }
  else {
    *param_2 = *param_2 + iVar2;
    iVar3 = xmp3_UnpackSideInfo(param_1);
    if (iVar3 < 0) {
      iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c8) * *(int *)(param_1 + 0x7c4);
      if (0 < iVar2) {
        memset(param_4,0,iVar2 * 2);
      }
      return 0xfffffff9;
    }
    iVar7 = *param_2;
    iVar10 = *param_3 - (iVar2 + iVar3);
    iVar6 = iVar7 + iVar3;
    *param_2 = iVar6;
    *param_3 = iVar10;
    if (*(int *)(param_1 + 0x7b8) == 0) {
      if (*(int *)(param_1 + 0x7b0) != 0) goto LAB_00024ae0;
      pcVar8 = (char *)(iVar7 - iVar2);
      iVar7 = iVar6;
      do {
        iVar4 = MP3FindSyncWord(iVar7,iVar10);
        iVar9 = iVar7 + iVar4;
        iVar10 = iVar10 - (iVar4 + 3);
        if (iVar4 < 0) {
          iVar6 = *(int *)(param_1 + 0x7c4);
          iVar7 = *(int *)(param_1 + 0x7c8);
          *(undefined4 *)(param_1 + 0x7b4) = 0xffffffff;
          goto LAB_00025018;
        }
        pcVar1 = (char *)(iVar7 + iVar4);
        iVar7 = iVar9 + 3;
      } while (((*pcVar1 != *pcVar8) || (*(char *)(iVar9 + 1) != pcVar8[1])) ||
              (((*(byte *)(iVar9 + 2) ^ pcVar8[2]) & 0xfc) != 0));
      if ((pcVar8[2] & 2U) != 0) {
        iVar9 = iVar9 + -1;
      }
      iVar9 = iVar9 - iVar6;
      iVar6 = *(int *)(param_1 + 0x7c4);
      iVar7 = *(int *)(param_1 + 0x7c8);
      *(int *)(param_1 + 0x7b4) = iVar9;
      if (iVar9 < 0) {
LAB_00025018:
        iVar2 = *(int *)(param_1 + 0x7bc) * iVar7 * iVar6;
        if (0 < iVar2) {
          memset(param_4,0,iVar2 * 2);
          return 0xfffffffd;
        }
        return 0xfffffffd;
      }
      *(undefined4 *)(param_1 + 0x7b0) = 1;
      uVar5 = FUN_0002bc8c(*(int *)(param_1 + 0x7c0) * (iVar2 + iVar9 + iVar3) * 8,iVar7 * iVar6);
      *(undefined4 *)(param_1 + 0x7b8) = uVar5;
LAB_00024ae4:
      iVar2 = xmp3_CheckPadBit(param_1);
      *(int *)(param_1 + 0x7cc) = iVar2 + iVar9;
      iVar10 = *param_3;
    }
    else if (*(int *)(param_1 + 0x7b0) != 0) {
LAB_00024ae0:
      iVar9 = *(int *)(param_1 + 0x7b4);
      goto LAB_00024ae4;
    }
    if (param_5 == 0) {
      if (iVar10 < (int)*(size_t *)(param_1 + 0x7cc)) {
        iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c8) * *(int *)(param_1 + 0x7c4);
        if (0 < iVar2) {
          memset(param_4,0,iVar2 * 2);
        }
        return 0xffffffff;
      }
      iVar2 = *(int *)(param_1 + 0x84c);
      __dest = (void *)(param_1 + 0x1c);
      __n = *(size_t *)(param_1 + 0x848);
      if (iVar2 < (int)__n) {
        memcpy((void *)((int)__dest + iVar2),(void *)*param_2,*(size_t *)(param_1 + 0x7cc));
        iVar3 = *(int *)(param_1 + 0x7cc);
        iVar2 = *param_2;
        *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) + iVar3;
        iVar6 = *param_3;
        *param_2 = iVar2 + iVar3;
        *param_3 = iVar6 - iVar3;
        iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c8) * *(int *)(param_1 + 0x7c4);
        if (0 < iVar2) {
          memset(param_4,0,iVar2 * 2);
        }
        return 0xfffffffe;
      }
      memmove(__dest,(void *)((int)__dest + (iVar2 - __n)),__n);
      memcpy((void *)((int)__dest + *(int *)(param_1 + 0x848)),(void *)*param_2,
             *(size_t *)(param_1 + 0x7cc));
      iVar3 = *(int *)(param_1 + 0x7cc);
      iVar2 = *param_2;
      *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x848) + iVar3;
      iVar6 = *param_3;
      *param_2 = iVar2 + iVar3;
      *param_3 = iVar6 - iVar3;
    }
    else {
      *(int *)(param_1 + 0x7cc) = iVar10;
      if (*(int *)(param_1 + 0x848) != 0 || iVar10 < 1) {
        iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c8) * *(int *)(param_1 + 0x7c4);
        if (0 < iVar2) {
          memset(param_4,0,iVar2 * 2);
        }
        goto LAB_00024ebc;
      }
      *(int *)(param_1 + 0x84c) = iVar10;
      __dest = (void *)*param_2;
      iVar2 = *param_3;
      *param_2 = (int)__dest + iVar10;
      *param_3 = iVar2 - iVar10;
    }
    iVar3 = 0;
    local_2c[0] = 0;
    iVar2 = *(int *)(param_1 + 0x84c) << 3;
    if (0 < *(int *)(param_1 + 0x7c4)) {
      local_38 = (int *)(param_1 + 0x850);
      do {
        if (0 < *(int *)(param_1 + 0x7bc)) {
          iVar6 = 0;
          piVar11 = local_38;
          do {
            iVar7 = local_2c[0];
            iVar4 = xmp3_UnpackScaleFactors(param_1,__dest,local_2c,iVar2,iVar3,iVar6);
            iVar10 = local_2c[0];
            iVar7 = (iVar4 * 8 - iVar7) + local_2c[0];
            if (iVar2 < *piVar11 || iVar4 < 0) {
              iVar2 = *(int *)(param_1 + 0x7bc) *
                      *(int *)(param_1 + 0x7c8) * *(int *)(param_1 + 0x7c4);
              if (0 < iVar2) {
                memset(param_4,0,iVar2 * 2);
              }
              return 0xfffffff8;
            }
            iVar9 = iVar6 + 1;
            iVar6 = xmp3_DecodeHuffman(param_1,(int)__dest + iVar4,local_2c,*piVar11 - iVar7,iVar3,
                                       iVar6);
            __dest = (void *)((int)__dest + iVar4 + iVar6);
            if (iVar6 < 0) {
              iVar2 = *(int *)(param_1 + 0x7bc) *
                      *(int *)(param_1 + 0x7c4) * *(int *)(param_1 + 0x7c8);
              if (0 < iVar2) {
                memset(param_4,0,iVar2 * 2);
              }
              return 0xfffffff7;
            }
            iVar2 = (iVar2 - iVar7) - ((iVar6 * 8 - iVar10) + local_2c[0]);
            iVar6 = iVar9;
            piVar11 = piVar11 + 1;
          } while (iVar9 < *(int *)(param_1 + 0x7bc));
        }
        iVar6 = xmp3_Dequantize(param_1,iVar3);
        if (iVar6 < 0) {
          iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c4) * *(int *)(param_1 + 0x7c8);
          if (0 < iVar2) {
            memset(param_4,0,iVar2 * 2);
          }
          return 0xfffffff6;
        }
        iVar6 = *(int *)(param_1 + 0x7bc);
        if (0 < iVar6) {
          iVar7 = 0;
          do {
            iVar10 = iVar7 + 1;
            iVar6 = xmp3_IMDCT(param_1,iVar3,iVar7);
            if (iVar6 < 0) {
              iVar2 = *(int *)(param_1 + 0x7bc) *
                      *(int *)(param_1 + 0x7c4) * *(int *)(param_1 + 0x7c8);
              if (0 < iVar2) {
                memset(param_4,0,iVar2 * 2);
              }
              return 0xfffffff5;
            }
            iVar6 = *(int *)(param_1 + 0x7bc);
            iVar7 = iVar10;
          } while (iVar10 < iVar6);
        }
        iVar6 = xmp3_Subband(param_1,(void *)((int)param_4 +
                                             iVar6 * *(int *)(param_1 + 0x7c8) * iVar3 * 2));
        if (iVar6 < 0) {
          iVar2 = *(int *)(param_1 + 0x7bc) * *(int *)(param_1 + 0x7c4) * *(int *)(param_1 + 0x7c8);
          if (0 < iVar2) {
            memset(param_4,0,iVar2 * 2);
          }
          return 0xfffffff4;
        }
        iVar3 = iVar3 + 1;
        local_38 = local_38 + 2;
      } while (iVar3 < *(int *)(param_1 + 0x7c4));
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== PolyphaseMonoHalfBuffer @ 0002504c size=1584 ===== */

void PolyphaseMonoHalfBuffer(ushort *param_1,int param_2,int *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  ushort *local_80;
  
  uVar26 = param_4 & 7;
  iVar24 = 0xf - (-param_4 & 7);
  uVar37 = param_4 + 1 & 7;
  iVar15 = 0xf - (1 - param_4 & 7);
  uVar10 = param_4 + 2 & 7;
  uVar11 = param_4 + 3 & 7;
  iVar27 = 0xf - (3 - param_4 & 7);
  iVar14 = 0xf - (2 - param_4 & 7);
  uVar28 = param_4 + 4 & 7;
  iVar38 = 0xf - (4 - param_4 & 7);
  uVar21 = param_4 + 5 & 7;
  iVar29 = 0xf - (5 - param_4 & 7);
  uVar19 = param_4 + 6 & 7;
  iVar16 = 0xf - (6 - param_4 & 7);
  uVar4 = param_4 + 7 & 7;
  iVar25 = 0xf - (7 - param_4 & 7);
  iVar7 = param_2 + 0x800;
  iVar22 = *(int *)(iVar7 + uVar21 * 4);
  iVar30 = param_3[0x100];
  lVar2 = (longlong)-param_3[0xf] * (longlong)*(int *)(param_2 + iVar25 * 4) +
          (longlong)param_3[0xe] * (longlong)*(int *)(param_2 + uVar4 * 4) +
          (longlong)-param_3[0xd] * (longlong)*(int *)(param_2 + iVar16 * 4) +
          (longlong)param_3[0xc] * (longlong)*(int *)(param_2 + uVar19 * 4) +
          (longlong)-param_3[0xb] * (longlong)*(int *)(param_2 + iVar29 * 4) +
          (longlong)*(int *)(param_2 + uVar21 * 4) * (longlong)param_3[10] +
          (longlong)*(int *)(param_2 + iVar38 * 4) * (longlong)-param_3[9] +
          (longlong)*(int *)(param_2 + uVar28 * 4) * (longlong)param_3[8] +
          (longlong)*(int *)(param_2 + iVar27 * 4) * (longlong)-param_3[7] +
          (longlong)*(int *)(param_2 + uVar11 * 4) * (longlong)param_3[6] +
          (longlong)*(int *)(param_2 + iVar14 * 4) * (longlong)-param_3[5] +
          (longlong)*(int *)(param_2 + uVar10 * 4) * (longlong)param_3[4] +
          (longlong)*(int *)(param_2 + iVar15 * 4) * (longlong)-param_3[3] +
          (longlong)*(int *)(param_2 + uVar37 * 4) * (longlong)param_3[2] +
          (longlong)*(int *)(param_2 + iVar24 * 4) * (longlong)-param_3[1] +
          (longlong)*(int *)(param_2 + uVar26 * 4) * (longlong)*param_3 + 0x2000000;
  uVar1 = (int)((ulonglong)lVar2 >> 0x20) << 0xc;
  uVar12 = (uint)lVar2 >> 0x14 | uVar1;
  if ((int)uVar12 >> 0x1f == (int)uVar12 >> 0x15) {
    uVar9 = (ushort)((int)uVar12 >> 6);
  }
  else {
    uVar9 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  *param_1 = uVar9;
  lVar2 = (longlong)param_3[0x107] * (longlong)*(int *)(iVar7 + uVar4 * 4) +
          (longlong)param_3[0x106] * (longlong)*(int *)(iVar7 + uVar19 * 4) +
          (longlong)param_3[0x105] * (longlong)iVar22 +
          (longlong)param_3[0x104] * (longlong)*(int *)(iVar7 + uVar28 * 4) +
          (longlong)param_3[0x103] * (longlong)*(int *)(iVar7 + uVar11 * 4) +
          (longlong)param_3[0x102] * (longlong)*(int *)(iVar7 + uVar10 * 4) +
          (longlong)param_3[0x101] * (longlong)*(int *)(iVar7 + uVar37 * 4) +
          (longlong)iVar30 * (longlong)*(int *)(iVar7 + uVar26 * 4) + 0x2000000;
  uVar1 = (int)((ulonglong)lVar2 >> 0x20) << 0xc;
  uVar12 = (uint)lVar2 >> 0x14 | uVar1;
  if ((int)uVar12 >> 0x1f == (int)uVar12 >> 0x15) {
    uVar9 = (ushort)((int)uVar12 >> 6);
  }
  else {
    uVar9 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  puVar5 = param_1 + 0x20;
  param_1[0x10] = uVar9;
  iVar7 = 0;
  piVar8 = param_3 + 0x20;
  local_80 = param_1;
  do {
    iVar22 = *(int *)(param_2 + uVar26 * 4 + 0x80 + iVar7 * 0x40);
    iVar20 = *(int *)(param_2 + iVar24 * 4 + 0x80 + iVar7 * 0x40);
    iVar31 = *(int *)(param_2 + iVar15 * 4 + 0x80 + iVar7 * 0x40);
    iVar30 = *(int *)(param_2 + uVar37 * 4 + 0x80 + iVar7 * 0x40);
    iVar17 = *(int *)(param_2 + uVar10 * 4 + 0x80 + iVar7 * 0x40);
    iVar32 = *(int *)(param_2 + iVar14 * 4 + 0x80 + iVar7 * 0x40);
    iVar39 = *(int *)(param_2 + uVar11 * 4 + 0x80 + iVar7 * 0x40);
    iVar33 = *(int *)(param_2 + iVar27 * 4 + 0x80 + iVar7 * 0x40);
    iVar40 = *(int *)(param_2 + uVar28 * 4 + 0x80 + iVar7 * 0x40);
    iVar23 = *(int *)(param_2 + iVar38 * 4 + 0x80 + iVar7 * 0x40);
    iVar41 = *(int *)(param_2 + uVar21 * 4 + 0x80 + iVar7 * 0x40);
    iVar34 = *(int *)(param_2 + iVar29 * 4 + 0x80 + iVar7 * 0x40);
    iVar42 = *(int *)(param_2 + uVar19 * 4 + 0x80 + iVar7 * 0x40);
    iVar35 = *(int *)(param_2 + iVar16 * 4 + 0x80 + iVar7 * 0x40);
    iVar18 = *(int *)(param_2 + uVar4 * 4 + 0x80 + iVar7 * 0x40);
    iVar36 = *(int *)(param_2 + iVar25 * 4 + 0x80 + iVar7 * 0x40);
    iVar7 = iVar7 + 2;
    lVar2 = (longlong)-piVar8[-1] * (longlong)iVar36 +
            (longlong)piVar8[-2] * (longlong)iVar18 +
            (longlong)-piVar8[-3] * (longlong)iVar35 +
            (longlong)piVar8[-4] * (longlong)iVar42 +
            (longlong)-piVar8[-5] * (longlong)iVar34 +
            (longlong)piVar8[-6] * (longlong)iVar41 +
            (longlong)-piVar8[-7] * (longlong)iVar23 +
            (longlong)piVar8[-8] * (longlong)iVar40 +
            (longlong)-piVar8[-9] * (longlong)iVar33 +
            (longlong)piVar8[-10] * (longlong)iVar39 +
            (longlong)-piVar8[-0xb] * (longlong)iVar32 +
            (longlong)piVar8[-0xc] * (longlong)iVar17 +
            (longlong)-piVar8[-0xd] * (longlong)iVar31 +
            (longlong)piVar8[-0xe] * (longlong)iVar30 +
            (longlong)-piVar8[-0xf] * (longlong)iVar20 +
            (longlong)piVar8[-0x10] * (longlong)iVar22 + 0x2000000;
    lVar3 = (longlong)iVar36 * (longlong)piVar8[-2] +
            (longlong)piVar8[-1] * (longlong)iVar18 +
            (longlong)iVar35 * (longlong)piVar8[-4] +
            (longlong)piVar8[-3] * (longlong)iVar42 +
            (longlong)iVar34 * (longlong)piVar8[-6] +
            (longlong)piVar8[-5] * (longlong)iVar41 +
            (longlong)iVar23 * (longlong)piVar8[-8] +
            (longlong)piVar8[-7] * (longlong)iVar40 +
            (longlong)iVar33 * (longlong)piVar8[-10] +
            (longlong)piVar8[-9] * (longlong)iVar39 +
            (longlong)iVar32 * (longlong)piVar8[-0xc] +
            (longlong)piVar8[-0xb] * (longlong)iVar17 +
            (longlong)iVar31 * (longlong)piVar8[-0xe] +
            (longlong)piVar8[-0xd] * (longlong)iVar30 +
            (longlong)iVar20 * (longlong)piVar8[-0x10] +
            (longlong)piVar8[-0xf] * (longlong)iVar22 + 0x2000000;
    uVar1 = (int)((ulonglong)lVar2 >> 0x20) << 0xc;
    uVar6 = (uint)lVar2 >> 0x14 | uVar1;
    uVar12 = (int)((ulonglong)lVar3 >> 0x20) << 0xc;
    uVar13 = (uint)lVar3 >> 0x14 | uVar12;
    uVar9 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    if ((int)uVar6 >> 0x1f == (int)uVar6 >> 0x15) {
      uVar9 = (ushort)((int)uVar6 >> 6);
    }
    local_80 = local_80 + 1;
    *local_80 = uVar9;
    uVar9 = (ushort)((int)uVar12 >> 0x1f) ^ 0x7fff;
    if ((int)uVar13 >> 0x1f == (int)uVar13 >> 0x15) {
      uVar9 = (ushort)((int)uVar13 >> 6);
    }
    puVar5 = puVar5 + -1;
    *puVar5 = uVar9;
    piVar8 = piVar8 + 0x10;
  } while (iVar7 != 0x1e);
  return;
}



/* ===== PolyphaseStereoHalfBuffer @ 0002567c size=3464 ===== */

void PolyphaseStereoHalfBuffer(ushort *param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  uint uVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  bool bVar92;
  int local_12c;
  int *local_118;
  ushort *local_114;
  ushort *local_108;
  
  uVar63 = 5 - param_4 & 7;
  uVar37 = 3 - param_4 & 7;
  uVar65 = 6 - param_4 & 7;
  uVar38 = param_4 + 4 & 7;
  uVar66 = param_4 + 7 & 7;
  uVar42 = 1 - param_4 & 7;
  uVar40 = 2 - param_4 & 7;
  uVar34 = 4 - param_4 & 7;
  uVar79 = param_4 + 6 & 7;
  uVar43 = param_4 + 2 & 7;
  uVar41 = param_4 + 3 & 7;
  uVar35 = param_4 + 5 & 7;
  uVar64 = param_4 & 7;
  uVar51 = 7 - param_4 & 7;
  uVar28 = param_4 + 1 & 7;
  iVar7 = (-param_4 & 7) * -4;
  iVar8 = uVar42 * -4;
  iVar9 = uVar37 * -4;
  iVar10 = uVar34 * -4;
  iVar11 = uVar63 * -4;
  iVar1 = uVar64 * 4;
  iVar2 = uVar43 * 4;
  iVar12 = uVar40 * -4;
  iVar3 = uVar28 * 4;
  iVar13 = uVar65 * -4;
  iVar14 = uVar51 * -4;
  iVar55 = uVar41 * 4 + 0x40;
  iVar56 = uVar38 * 4 + 0x40;
  iVar57 = uVar35 * 4 + 0x40;
  iVar58 = uVar79 * 4 + 0x40;
  iVar59 = uVar66 * 4 + 0x40;
  iVar44 = 0xf - (-param_4 & 7);
  iVar60 = 0xf - uVar42;
  iVar80 = 0xf - uVar34;
  iVar61 = 0xf - uVar40;
  iVar45 = 0xf - uVar37;
  iVar46 = 0xf - uVar63;
  iVar47 = 0xf - uVar65;
  iVar48 = 0xf - uVar51;
  iVar49 = param_3[0x101];
  lVar4 = (longlong)-param_3[0xf] * (longlong)*(int *)(param_2 + iVar48 * 4) +
          (longlong)param_3[0xe] * (longlong)*(int *)(param_2 + uVar66 * 4) +
          (longlong)-param_3[0xd] * (longlong)*(int *)(param_2 + iVar47 * 4) +
          (longlong)param_3[0xc] * (longlong)*(int *)(param_2 + uVar79 * 4) +
          (longlong)*(int *)(param_2 + iVar46 * 4) * (longlong)-param_3[0xb] +
          (longlong)*(int *)(param_2 + uVar35 * 4) * (longlong)param_3[10] +
          (longlong)*(int *)(param_2 + iVar80 * 4) * (longlong)-param_3[9] +
          (longlong)*(int *)(param_2 + uVar38 * 4) * (longlong)param_3[8] +
          (longlong)*(int *)(param_2 + iVar45 * 4) * (longlong)-param_3[7] +
          (longlong)*(int *)(param_2 + uVar41 * 4) * (longlong)param_3[6] +
          (longlong)*(int *)(param_2 + iVar61 * 4) * (longlong)-param_3[5] +
          (longlong)*(int *)(param_2 + uVar43 * 4) * (longlong)param_3[4] +
          (longlong)*(int *)(param_2 + iVar60 * 4) * (longlong)-param_3[3] +
          (longlong)*(int *)(param_2 + uVar28 * 4) * (longlong)param_3[2] +
          (longlong)*(int *)(param_2 + iVar44 * 4) * (longlong)-param_3[1] +
          (longlong)*(int *)(param_2 + uVar64 * 4) * (longlong)*param_3 + 0x2000000;
  iVar67 = param_3[0x100];
  lVar5 = (longlong)-param_3[0xf] * (longlong)*(int *)(param_2 + iVar14 + 0x7c) +
          (longlong)param_3[0xe] * (longlong)*(int *)(param_2 + iVar59) +
          (longlong)-param_3[0xd] * (longlong)*(int *)(param_2 + iVar13 + 0x7c) +
          (longlong)param_3[0xc] * (longlong)*(int *)(param_2 + iVar58) +
          (longlong)*(int *)(param_2 + iVar11 + 0x7c) * (longlong)-param_3[0xb] +
          (longlong)*(int *)(param_2 + iVar57) * (longlong)param_3[10] +
          (longlong)*(int *)(param_2 + iVar10 + 0x7c) * (longlong)-param_3[9] +
          (longlong)*(int *)(param_2 + iVar56) * (longlong)param_3[8] +
          (longlong)*(int *)(param_2 + iVar9 + 0x7c) * (longlong)-param_3[7] +
          (longlong)*(int *)(param_2 + iVar55) * (longlong)param_3[6] +
          (longlong)*(int *)(param_2 + iVar12 + 0x7c) * (longlong)-param_3[5] +
          (longlong)*(int *)(param_2 + iVar2 + 0x40) * (longlong)param_3[4] +
          (longlong)*(int *)(param_2 + iVar8 + 0x7c) * (longlong)-param_3[3] +
          (longlong)*(int *)(param_2 + iVar3 + 0x40) * (longlong)param_3[2] +
          (longlong)*(int *)(param_2 + iVar7 + 0x7c) * (longlong)-param_3[1] +
          (longlong)*(int *)(param_2 + iVar1 + 0x40) * (longlong)*param_3 + 0x2000000;
  uVar34 = (int)((ulonglong)lVar4 >> 0x20) << 0xc;
  uVar42 = (uint)lVar4 >> 0x14 | uVar34;
  uVar37 = (int)((ulonglong)lVar5 >> 0x20) << 0xc;
  uVar40 = (uint)lVar5 >> 0x14 | uVar37;
  bVar92 = (int)uVar42 >> 0x1f != (int)uVar42 >> 0x15;
  if (bVar92) {
    uVar39 = (ushort)((int)uVar34 >> 0x1f) ^ 0x7f00;
  }
  else {
    uVar39 = (ushort)((int)uVar42 >> 6);
  }
  if (bVar92) {
    uVar39 = uVar39 ^ 0xff;
  }
  bVar92 = (int)uVar40 >> 0x1f != (int)uVar40 >> 0x15;
  *param_1 = uVar39;
  if (bVar92) {
    uVar39 = (ushort)((int)uVar37 >> 0x1f) ^ 0x7f00;
  }
  else {
    uVar39 = (ushort)((int)uVar40 >> 6);
  }
  iVar15 = param_2 + 0x800;
  iVar81 = *(int *)(iVar15 + uVar64 * 4);
  if (bVar92) {
    uVar39 = uVar39 ^ 0xff;
  }
  param_1[1] = uVar39;
  local_118 = param_3 + 0x20;
  lVar4 = (longlong)param_3[0x107] * (longlong)*(int *)(iVar15 + uVar66 * 4) +
          (longlong)param_3[0x106] * (longlong)*(int *)(iVar15 + uVar79 * 4) +
          (longlong)param_3[0x105] * (longlong)*(int *)(iVar15 + uVar35 * 4) +
          (longlong)param_3[0x104] * (longlong)*(int *)(iVar15 + uVar38 * 4) +
          (longlong)param_3[0x103] * (longlong)*(int *)(iVar15 + uVar41 * 4) +
          (longlong)param_3[0x102] * (longlong)*(int *)(iVar15 + uVar43 * 4) +
          (longlong)iVar49 * (longlong)*(int *)(iVar15 + uVar28 * 4) +
          (longlong)iVar67 * (longlong)iVar81 + 0x2000000;
  lVar5 = (longlong)param_3[0x107] * (longlong)*(int *)(iVar15 + iVar59) +
          (longlong)param_3[0x106] * (longlong)*(int *)(iVar15 + iVar58) +
          (longlong)param_3[0x105] * (longlong)*(int *)(iVar15 + iVar57) +
          (longlong)param_3[0x104] * (longlong)*(int *)(iVar15 + iVar56) +
          (longlong)param_3[0x103] * (longlong)*(int *)(iVar15 + iVar55) +
          (longlong)param_3[0x102] * (longlong)*(int *)(iVar15 + iVar2 + 0x40) +
          (longlong)iVar49 * (longlong)*(int *)(iVar15 + iVar3 + 0x40) +
          (longlong)iVar67 * (longlong)*(int *)(iVar15 + iVar1 + 0x40) + 0x2000000;
  uVar37 = (uint)lVar4 >> 0x14 | (int)((ulonglong)lVar4 >> 0x20) << 0xc;
  uVar34 = (int)uVar37 >> 0x1f;
  uVar28 = (uint)lVar5 >> 0x14 | (int)((ulonglong)lVar5 >> 0x20) << 0xc;
  bVar92 = uVar34 != (int)uVar37 >> 0x15;
  if (bVar92) {
    uVar37 = uVar34 ^ 0x7f00;
  }
  iVar49 = (int)uVar28 >> 0x1f;
  if (bVar92) {
    uVar39 = (ushort)uVar37 ^ 0xff;
  }
  else {
    uVar39 = (ushort)((int)uVar37 >> 6);
  }
  bVar92 = iVar49 == (int)uVar28 >> 0x15;
  param_1[0x20] = uVar39;
  if (bVar92) {
    iVar49 = (int)uVar28 >> 6;
  }
  uVar39 = (ushort)iVar49;
  if (!bVar92) {
    uVar39 = uVar39 ^ 0x7fff;
  }
  param_1[0x21] = uVar39;
  local_114 = param_1 + 4;
  local_12c = 0;
  local_108 = param_1;
  do {
    iVar29 = local_118[-0x10];
    iVar68 = *(int *)(param_2 + iVar1 + 0x80 + local_12c * 0x20);
    iVar36 = *(int *)(param_2 + iVar44 * 4 + 0x80 + local_12c * 0x20);
    iVar23 = local_118[-0xf];
    iVar52 = *(int *)(param_2 + iVar1 + 0x40 + 0x80 + local_12c * 0x20);
    iVar69 = *(int *)(param_2 + iVar7 + 0xfc + local_12c * 0x20);
    iVar50 = local_118[-0xe];
    iVar53 = *(int *)(param_2 + iVar3 + 0x80 + local_12c * 0x20);
    iVar17 = local_118[-0xd];
    iVar82 = *(int *)(param_2 + iVar3 + 0x40 + 0x80 + local_12c * 0x20);
    iVar70 = *(int *)(param_2 + iVar60 * 4 + 0x80 + local_12c * 0x20);
    iVar18 = local_118[-0xc];
    iVar83 = *(int *)(param_2 + iVar2 + 0x80 + local_12c * 0x20);
    iVar54 = *(int *)(param_2 + iVar8 + 0xfc + local_12c * 0x20);
    iVar30 = local_118[-0xb];
    iVar71 = *(int *)(param_2 + iVar2 + 0x40 + 0x80 + local_12c * 0x20);
    iVar49 = *(int *)(param_2 + iVar61 * 4 + 0x80 + local_12c * 0x20);
    iVar31 = local_118[-10];
    iVar84 = *(int *)(param_2 + iVar12 + 0xfc + local_12c * 0x20);
    iVar72 = *(int *)(param_2 + uVar41 * 4 + 0x80 + local_12c * 0x20);
    iVar67 = local_118[-9];
    iVar85 = *(int *)(param_2 + iVar55 + 0x80 + local_12c * 0x20);
    iVar19 = *(int *)(param_2 + iVar45 * 4 + 0x80 + local_12c * 0x20);
    iVar15 = local_118[-8];
    iVar73 = *(int *)(param_2 + uVar38 * 4 + 0x80 + local_12c * 0x20);
    iVar86 = *(int *)(param_2 + iVar9 + 0xfc + local_12c * 0x20);
    iVar24 = local_118[-7];
    iVar20 = *(int *)(param_2 + iVar80 * 4 + 0x80 + local_12c * 0x20);
    iVar32 = *(int *)(param_2 + iVar56 + 0x80 + local_12c * 0x20);
    iVar74 = *(int *)(param_2 + iVar10 + 0xfc + local_12c * 0x20);
    iVar62 = *(int *)(param_2 + uVar35 * 4 + 0x80 + local_12c * 0x20);
    iVar33 = local_118[-6];
    iVar25 = local_118[-5];
    iVar75 = *(int *)(param_2 + iVar46 * 4 + 0x80 + local_12c * 0x20);
    iVar87 = *(int *)(param_2 + iVar57 + 0x80 + local_12c * 0x20);
    iVar26 = local_118[-4];
    iVar88 = *(int *)(param_2 + iVar11 + 0xfc + local_12c * 0x20);
    iVar21 = *(int *)(param_2 + uVar79 * 4 + 0x80 + local_12c * 0x20);
    iVar81 = local_118[-3];
    iVar89 = *(int *)(param_2 + iVar58 + 0x80 + local_12c * 0x20);
    iVar76 = *(int *)(param_2 + iVar47 * 4 + 0x80 + local_12c * 0x20);
    iVar22 = local_118[-2];
    iVar16 = *(int *)(param_2 + uVar66 * 4 + 0x80 + local_12c * 0x20);
    iVar90 = *(int *)(param_2 + iVar13 + 0xfc + local_12c * 0x20);
    iVar77 = local_118[-1];
    iVar91 = *(int *)(param_2 + iVar59 + 0x80 + local_12c * 0x20);
    iVar27 = *(int *)(param_2 + iVar48 * 4 + 0x80 + local_12c * 0x20);
    lVar4 = (longlong)-iVar77 * (longlong)iVar27 +
            (longlong)iVar22 * (longlong)iVar16 +
            (longlong)-iVar81 * (longlong)iVar76 +
            (longlong)iVar26 * (longlong)iVar21 +
            (longlong)-iVar25 * (longlong)iVar75 +
            (longlong)iVar33 * (longlong)iVar62 +
            (longlong)-iVar24 * (longlong)iVar20 +
            (longlong)iVar15 * (longlong)iVar73 +
            (longlong)-iVar67 * (longlong)iVar19 +
            (longlong)iVar31 * (longlong)iVar72 +
            (longlong)-iVar30 * (longlong)iVar49 +
            (longlong)iVar18 * (longlong)iVar83 +
            (longlong)-iVar17 * (longlong)iVar70 +
            (longlong)iVar50 * (longlong)iVar53 +
            (longlong)-iVar23 * (longlong)iVar36 + (longlong)iVar29 * (longlong)iVar68 + 0x2000000;
    iVar78 = *(int *)(param_2 + iVar14 + 0xfc + local_12c * 0x20);
    lVar5 = (longlong)iVar78 * (longlong)-iVar77 +
            (longlong)iVar91 * (longlong)iVar22 +
            (longlong)iVar90 * (longlong)-iVar81 +
            (longlong)iVar89 * (longlong)iVar26 +
            (longlong)iVar88 * (longlong)-iVar25 +
            (longlong)iVar87 * (longlong)iVar33 +
            (longlong)iVar74 * (longlong)-iVar24 +
            (longlong)iVar32 * (longlong)iVar15 +
            (longlong)iVar86 * (longlong)-iVar67 +
            (longlong)iVar85 * (longlong)iVar31 +
            (longlong)iVar84 * (longlong)-iVar30 +
            (longlong)iVar71 * (longlong)iVar18 +
            (longlong)iVar54 * (longlong)-iVar17 +
            (longlong)iVar82 * (longlong)iVar50 +
            (longlong)iVar69 * (longlong)-iVar23 + (longlong)iVar52 * (longlong)iVar29 + 0x2000000;
    uVar34 = (int)((ulonglong)lVar4 >> 0x20) << 0xc;
    uVar40 = (uint)lVar4 >> 0x14 | uVar34;
    lVar4 = (longlong)iVar27 * (longlong)iVar22 +
            (longlong)iVar77 * (longlong)iVar16 +
            (longlong)iVar76 * (longlong)iVar26 +
            (longlong)iVar81 * (longlong)iVar21 +
            (longlong)iVar75 * (longlong)iVar33 +
            (longlong)iVar25 * (longlong)iVar62 +
            (longlong)iVar20 * (longlong)iVar15 +
            (longlong)iVar24 * (longlong)iVar73 +
            (longlong)iVar19 * (longlong)iVar31 +
            (longlong)iVar67 * (longlong)iVar72 +
            (longlong)iVar49 * (longlong)iVar18 +
            (longlong)iVar30 * (longlong)iVar83 +
            (longlong)iVar70 * (longlong)iVar50 +
            (longlong)iVar17 * (longlong)iVar53 +
            (longlong)iVar36 * (longlong)iVar29 + (longlong)iVar23 * (longlong)iVar68 + 0x2000000;
    lVar6 = (longlong)iVar78 * (longlong)iVar22 +
            (longlong)iVar91 * (longlong)iVar77 +
            (longlong)iVar90 * (longlong)iVar26 +
            (longlong)iVar89 * (longlong)iVar81 +
            (longlong)iVar88 * (longlong)iVar33 +
            (longlong)iVar87 * (longlong)iVar25 +
            (longlong)iVar74 * (longlong)iVar15 +
            (longlong)iVar32 * (longlong)iVar24 +
            (longlong)iVar86 * (longlong)iVar31 +
            (longlong)iVar85 * (longlong)iVar67 +
            (longlong)iVar84 * (longlong)iVar18 +
            (longlong)iVar71 * (longlong)iVar30 +
            (longlong)iVar54 * (longlong)iVar50 +
            (longlong)iVar82 * (longlong)iVar17 +
            (longlong)iVar69 * (longlong)iVar29 + (longlong)iVar52 * (longlong)iVar23 + 0x2000000;
    uVar37 = (int)((ulonglong)lVar5 >> 0x20) << 0xc;
    uVar28 = (uint)lVar5 >> 0x14 | uVar37;
    if ((int)uVar40 >> 0x1f == (int)uVar40 >> 0x15) {
      uVar39 = (ushort)((int)uVar40 >> 6);
    }
    else {
      uVar39 = (ushort)((int)uVar34 >> 0x1f) ^ 0x7fff;
    }
    local_114[-2] = uVar39;
    uVar34 = (int)((ulonglong)lVar4 >> 0x20) << 0xc;
    uVar40 = (uint)lVar4 >> 0x14 | uVar34;
    if ((int)uVar28 >> 0x1f == (int)uVar28 >> 0x15) {
      uVar39 = (ushort)((int)uVar28 >> 6);
    }
    else {
      uVar39 = (ushort)((int)uVar37 >> 0x1f) ^ 0x7fff;
    }
    uVar37 = (int)((ulonglong)lVar6 >> 0x20) << 0xc;
    uVar28 = (uint)lVar6 >> 0x14 | uVar37;
    local_114[-1] = uVar39;
    if ((int)uVar40 >> 0x1f == (int)uVar40 >> 0x15) {
      uVar39 = (ushort)((int)uVar40 >> 6);
    }
    else {
      uVar39 = (ushort)((int)uVar34 >> 0x1f) ^ 0x7fff;
    }
    local_108[0x3e] = uVar39;
    local_12c = local_12c + 4;
    if ((int)uVar28 >> 0x1f == (int)uVar28 >> 0x15) {
      uVar39 = (ushort)((int)uVar28 >> 6);
    }
    else {
      uVar39 = (ushort)((int)uVar37 >> 0x1f) ^ 0x7fff;
    }
    local_108[0x3f] = uVar39;
    local_114 = local_114 + 2;
    local_118 = local_118 + 0x10;
    local_108 = local_108 + -2;
  } while (local_12c != 0x3c);
  return;
}



/* ===== xmp3_UnpackScaleFactors @ 00026404 size=2988 ===== */

int xmp3_UnpackScaleFactors
              (undefined4 *param_1,undefined4 param_2,uint *param_3,int param_4,int param_5,
              int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int aiStack_38 [5];
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  piVar10 = (int *)*param_1;
  if (((piVar10 == (int *)0x0) || (iVar19 = param_1[1], iVar19 == 0)) ||
     (iVar18 = param_1[2], iVar18 == 0)) {
    return -1;
  }
  iVar5 = param_4 + *param_3 + 7;
  if (iVar5 < 0) {
    iVar5 = param_4 + *param_3 + 0xe;
  }
  xmp3_SetBitstreamPointer(aiStack_38,iVar5 >> 3);
  if (*param_3 != 0) {
    xmp3_GetBits(aiStack_38);
  }
  iVar5 = iVar19 + param_6 * 0x48 + param_5 * 0x90;
  iVar16 = *(int *)(iVar5 + 0x3c);
  uVar6 = *(uint *)(iVar5 + 0x34);
  if (*piVar10 == 0) {
    uVar3 = *(undefined1 *)(DAT_00026fb0 + 0x26738 + uVar6 * 2);
    uVar1 = *(undefined1 *)(DAT_00026fb0 + 0x26738 + uVar6 * 2 + 1);
    if (iVar16 != 2) {
      if (param_5 == 0) {
        iVar5 = param_6 * 0x3e;
        puVar17 = (undefined1 *)(iVar18 + iVar5 + -1);
        do {
          uVar4 = xmp3_GetBits(aiStack_38,uVar3);
          puVar17 = puVar17 + 1;
          *puVar17 = uVar4;
        } while ((undefined1 *)(iVar5 + 10 + iVar18) != puVar17);
        puVar17 = (undefined1 *)(iVar18 + iVar5 + 0xb);
        do {
          uVar3 = xmp3_GetBits(aiStack_38,uVar1);
          puVar11 = puVar17 + 1;
          *puVar17 = uVar3;
          puVar17 = puVar11;
        } while (puVar11 != (undefined1 *)(iVar18 + iVar5 + 0x15));
        goto LAB_000266c0;
      }
      iVar5 = param_6 * 0x10 + 8;
      iVar16 = iVar19 + iVar5;
      if (*(int *)(iVar19 + iVar5) == 0) {
        puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + param_5 * 0x7c + -1);
        do {
          uVar4 = xmp3_GetBits(aiStack_38,uVar3);
          puVar17 = puVar17 + 1;
          *puVar17 = uVar4;
        } while (puVar17 != (undefined1 *)(iVar18 + param_6 * 0x3e + 5 + param_5 * 0x7c));
        if (*(int *)(iVar16 + 4) == 0) goto LAB_000269d8;
LAB_000267c4:
        iVar14 = iVar18 + param_6 * 0x3e;
        iVar5 = iVar18 + param_5 * 0x7c + param_6 * 0x3e;
        *(undefined1 *)(iVar5 + 6) = *(undefined1 *)(iVar14 + 6);
        *(undefined1 *)(iVar5 + 7) = *(undefined1 *)(iVar14 + 7);
        *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(iVar14 + 8);
        *(undefined1 *)(iVar5 + 9) = *(undefined1 *)(iVar14 + 9);
        *(undefined1 *)(iVar5 + 10) = *(undefined1 *)(iVar14 + 10);
        if (*(int *)(iVar16 + 8) == 0) goto LAB_00026a30;
LAB_0002681c:
        iVar14 = iVar18 + param_6 * 0x3e;
        iVar5 = iVar18 + param_5 * 0x7c + param_6 * 0x3e;
        *(undefined1 *)(iVar5 + 0xb) = *(undefined1 *)(iVar14 + 0xb);
        *(undefined1 *)(iVar5 + 0xc) = *(undefined1 *)(iVar14 + 0xc);
        *(undefined1 *)(iVar5 + 0xd) = *(undefined1 *)(iVar14 + 0xd);
        *(undefined1 *)(iVar5 + 0xe) = *(undefined1 *)(iVar14 + 0xe);
        *(undefined1 *)(iVar5 + 0xf) = *(undefined1 *)(iVar14 + 0xf);
      }
      else {
        iVar12 = param_6 * 0x3e;
        iVar5 = param_5 * 0x7c + iVar12;
        iVar14 = iVar18 + iVar12;
        iVar8 = iVar18 + iVar5;
        *(undefined1 *)(iVar18 + iVar5) = *(undefined1 *)(iVar18 + iVar12);
        *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(iVar14 + 1);
        *(undefined1 *)(iVar8 + 2) = *(undefined1 *)(iVar14 + 2);
        *(undefined1 *)(iVar8 + 3) = *(undefined1 *)(iVar14 + 3);
        *(undefined1 *)(iVar8 + 4) = *(undefined1 *)(iVar14 + 4);
        *(undefined1 *)(iVar8 + 5) = *(undefined1 *)(iVar14 + 5);
        if (*(int *)(iVar16 + 4) != 0) goto LAB_000267c4;
LAB_000269d8:
        puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + 6 + param_5 * 0x7c);
        do {
          uVar4 = xmp3_GetBits(aiStack_38,uVar3);
          puVar11 = puVar17 + 1;
          *puVar17 = uVar4;
          puVar17 = puVar11;
        } while (puVar11 != (undefined1 *)(iVar18 + param_6 * 0x3e + 0xb + param_5 * 0x7c));
        if (*(int *)(iVar16 + 8) != 0) goto LAB_0002681c;
LAB_00026a30:
        puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + 0xb + param_5 * 0x7c);
        do {
          uVar3 = xmp3_GetBits(aiStack_38,uVar1);
          puVar11 = puVar17 + 1;
          *puVar17 = uVar3;
          puVar17 = puVar11;
        } while (puVar11 != (undefined1 *)(iVar18 + param_6 * 0x3e + 0x10 + param_5 * 0x7c));
      }
      if (*(int *)(iVar16 + 0xc) == 0) {
        puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + 0x10 + param_5 * 0x7c);
        do {
          uVar3 = xmp3_GetBits(aiStack_38,uVar1);
          puVar11 = puVar17 + 1;
          *puVar17 = uVar3;
          puVar17 = puVar11;
        } while (puVar11 != (undefined1 *)(iVar18 + param_6 * 0x3e + 0x15 + param_5 * 0x7c));
      }
      else {
        iVar16 = iVar18 + param_6 * 0x3e;
        iVar5 = iVar18 + param_5 * 0x7c + param_6 * 0x3e;
        *(undefined1 *)(iVar5 + 0x10) = *(undefined1 *)(iVar16 + 0x10);
        *(undefined1 *)(iVar5 + 0x11) = *(undefined1 *)(iVar16 + 0x11);
        *(undefined1 *)(iVar5 + 0x12) = *(undefined1 *)(iVar16 + 0x12);
        *(undefined1 *)(iVar5 + 0x13) = *(undefined1 *)(iVar16 + 0x13);
        *(undefined1 *)(iVar5 + 0x14) = *(undefined1 *)(iVar16 + 0x14);
      }
      iVar18 = iVar18 + param_6 * 0x3e + param_5 * 0x7c;
      *(undefined1 *)(iVar18 + 0x15) = 0;
      *(undefined1 *)(iVar18 + 0x16) = 0;
      goto LAB_000266c0;
    }
    iVar16 = 0;
    if (*(int *)(iVar5 + 0x40) != 0) {
      puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + param_5 * 0x7c + -1);
      do {
        uVar4 = xmp3_GetBits(aiStack_38,uVar3);
        puVar17 = puVar17 + 1;
        *puVar17 = uVar4;
      } while ((undefined1 *)(iVar18 + param_6 * 0x3e + 7 + param_5 * 0x7c) != puVar17);
      iVar16 = 3;
    }
    iVar14 = param_5 * 0x7c + param_6 * 0x3e;
    iVar12 = iVar18 + param_6 * 0x3e + 0x12 + param_5 * 0x7c;
    iVar5 = iVar18 + iVar16 * 3 + iVar14;
    do {
      uVar4 = xmp3_GetBits(aiStack_38,uVar3);
      iVar16 = iVar5 + 3;
      *(undefined1 *)(iVar5 + 0x17) = uVar4;
      uVar4 = xmp3_GetBits(aiStack_38,uVar3);
      *(undefined1 *)(iVar5 + 0x18) = uVar4;
      uVar4 = xmp3_GetBits(aiStack_38,uVar3);
      *(undefined1 *)(iVar5 + 0x19) = uVar4;
      iVar5 = iVar16;
    } while (iVar12 != iVar16);
    iVar5 = iVar18 + iVar14;
    do {
      uVar3 = xmp3_GetBits(aiStack_38,uVar1);
      iVar16 = iVar5 + 3;
      *(undefined1 *)(iVar5 + 0x29) = uVar3;
      uVar3 = xmp3_GetBits(aiStack_38,uVar1);
      *(undefined1 *)(iVar5 + 0x2a) = uVar3;
      uVar3 = xmp3_GetBits(aiStack_38,uVar1);
      *(undefined1 *)(iVar5 + 0x2b) = uVar3;
      iVar5 = iVar16;
    } while (iVar12 != iVar16);
  }
  else {
    uVar20 = ~piVar10[8] & 1;
    if (param_6 != 1) {
      uVar20 = 1;
    }
    if (uVar20 == 0) {
      iVar5 = (int)uVar6 >> 1;
      local_78 = uVar6 & 1;
      local_84 = 0;
      uVar6 = local_84;
      local_80 = local_84;
      if (iVar5 < 0xb4) {
        uVar13 = 7;
        uVar7 = 4;
        uVar21 = 7;
        local_7c = 4;
        local_70 = 5;
        uVar20 = 7;
        local_58[0] = iVar5 / 0x24;
        local_6c = 4;
        local_74 = 4;
        local_58[1] = (iVar5 % 0x24) / 6;
        local_50 = (ulonglong)(uint)((iVar5 % 0x24) % 6);
      }
      else if (iVar5 < 0xf4) {
        uVar6 = iVar5 - 0xb4;
        uVar7 = 3;
        uVar20 = 6;
        local_6c = 4;
        local_58[1] = (uVar6 & 0xf) >> 2;
        local_50 = (ulonglong)uVar6 & 0xffffffff00000003;
        local_70 = 4;
        local_58[0] = (int)uVar6 >> 4;
        local_7c = 3;
        local_74 = 3;
        local_80 = 2;
        uVar6 = 3;
        uVar13 = uVar20;
        uVar21 = uVar20;
      }
      else {
        uVar20 = 8;
        local_50 = 0;
        local_7c = 4;
        uVar7 = 3;
        uVar13 = 5;
        uVar21 = 8;
        local_6c = 5;
        local_74 = 3;
        local_58[0] = (iVar5 - 0xf4U) / 3;
        local_58[1] = (iVar5 - 0xf4U) % 3;
        local_70 = 6;
      }
    }
    else if ((int)uVar6 < 400) {
      local_84 = 0;
      local_78 = 0;
      uVar20 = 5;
      local_7c = 3;
      local_6c = 3;
      local_80 = 3;
      local_74 = 3;
      local_58[1] = ((int)uVar6 >> 4) % 5;
      local_70 = 3;
      local_58[0] = ((int)uVar6 >> 4) / 5;
      local_50 = CONCAT44(uVar6,(uVar6 & 0xf) >> 2) & 0x3ffffffff;
      uVar6 = 5;
      uVar7 = 3;
      uVar13 = 5;
      uVar21 = 6;
    }
    else if ((int)uVar6 < 500) {
      uVar13 = (int)(uVar6 - 400) >> 2;
      local_7c = 3;
      local_6c = 3;
      local_78 = 0;
      uVar7 = 4;
      local_50 = (ulonglong)(uVar6 - 400 & 3);
      local_84 = 0;
      local_70 = 3;
      local_74 = 4;
      uVar20 = 5;
      local_58[0] = uVar13 / 5;
      local_58[1] = uVar13 % 5;
      local_80 = 2;
      uVar6 = 3;
      uVar13 = 7;
      uVar21 = 6;
    }
    else {
      local_50 = 0;
      local_58[0] = (uVar6 - 500) / 3;
      local_58[1] = (uVar6 - 500) % 3;
      if (*(int *)(iVar5 + 0x40) != 0) {
        local_50 = (ulonglong)local_58[1];
        local_58[1] = local_58[0];
      }
      local_78 = 0;
      local_6c = 6;
      local_74 = 6;
      local_7c = 6;
      uVar20 = 10;
      local_70 = 3;
      local_84 = 1;
      uVar6 = local_78;
      uVar7 = local_78;
      uVar13 = local_78;
      uVar21 = 0xb;
      local_80 = local_78;
    }
    uVar2 = local_58[0];
    if ((iVar16 == 2) &&
       (uVar20 = local_7c, uVar6 = local_80, uVar13 = uVar7, uVar21 = local_6c,
       *(int *)(iVar19 + param_6 * 0x48 + param_5 * 0x90 + 0x40) != 0)) {
      uVar20 = local_70;
      uVar13 = local_74;
      uVar21 = 6;
    }
    puVar9 = local_58;
    if (param_6 == 1) {
      uVar7 = piVar10[8] & 1;
    }
    else {
      uVar7 = 0;
    }
    local_48 = CONCAT44(uVar20,uVar21);
    local_40 = CONCAT44(uVar6,uVar13);
    if (uVar7 != 0) {
      *(uint *)(iVar18 + 0xfc) = local_58[0];
      *(uint *)(iVar18 + 0x100) = local_58[1];
      *(undefined4 *)(iVar18 + 0x104) = (undefined4)local_50;
      *(undefined4 *)(iVar18 + 0x108) = local_50._4_4_;
      *(uint *)(iVar18 + 0x118) = uVar6;
      *(uint *)(iVar18 + 0x10c) = uVar21;
      *(uint *)(iVar18 + 0x110) = uVar20;
      *(uint *)(iVar18 + 0x114) = uVar13;
      *(uint *)(iVar18 + 0xf8) = local_78;
    }
    iVar5 = iVar19 + param_6 * 0x48 + param_5 * 0x90;
    *(uint *)(iVar5 + 100) = local_84;
    if (iVar16 != 2) {
      iVar16 = 0;
      iVar5 = param_6 * 0x3e + param_5 * 0x7c;
      piVar10 = (int *)&local_48;
      do {
        piVar15 = piVar10 + 1;
        iVar14 = *piVar10;
        if (0 < iVar14) {
          uVar6 = *puVar9;
          puVar17 = (undefined1 *)(iVar18 + iVar5 + iVar16);
          do {
            uVar3 = xmp3_GetBits(aiStack_38,uVar6);
            puVar11 = puVar17 + 1;
            *puVar17 = uVar3;
            puVar17 = puVar11;
          } while (puVar11 != (undefined1 *)(iVar16 + iVar18 + iVar5 + iVar14));
          iVar16 = iVar16 + iVar14;
        }
        puVar9 = puVar9 + 1;
        piVar10 = piVar15;
      } while (piVar15 != aiStack_38);
      iVar18 = iVar18 + param_6 * 0x3e + param_5 * 0x7c;
      *(undefined1 *)(iVar18 + 0x16) = 0;
      *(undefined1 *)(iVar18 + 0x15) = 0;
      goto LAB_000266c0;
    }
    if (*(int *)(iVar5 + 0x40) == 0) {
      iVar5 = 0;
      iVar16 = 0;
    }
    else {
      puVar17 = (undefined1 *)(iVar18 + param_6 * 0x3e + param_5 * 0x7c + -1);
      do {
        uVar3 = xmp3_GetBits(aiStack_38,uVar2);
        puVar17 = puVar17 + 1;
        *puVar17 = uVar3;
      } while (puVar17 != (undefined1 *)(iVar18 + param_6 * 0x3e + 5 + param_5 * 0x7c));
      iVar16 = 3;
      iVar5 = 1;
    }
    puVar9 = puVar9 + iVar5;
    iVar14 = param_6 * 0x3e + param_5 * 0x7c;
    piVar10 = (int *)((int)&local_48 + iVar5 * 4);
    do {
      piVar15 = piVar10 + 1;
      iVar5 = iVar16;
      if (0 < *piVar10) {
        iVar5 = *piVar10 + iVar16;
        uVar6 = *puVar9;
        iVar16 = iVar18 + iVar16 * 3 + iVar14;
        do {
          uVar3 = xmp3_GetBits(aiStack_38,uVar6);
          iVar12 = iVar16 + 3;
          *(undefined1 *)(iVar16 + 0x17) = uVar3;
          uVar3 = xmp3_GetBits(aiStack_38,uVar6);
          *(undefined1 *)(iVar16 + 0x18) = uVar3;
          uVar3 = xmp3_GetBits(aiStack_38,uVar6);
          *(undefined1 *)(iVar16 + 0x19) = uVar3;
          iVar16 = iVar12;
        } while (iVar12 != iVar5 * 3 + iVar18 + iVar14);
      }
      puVar9 = puVar9 + 1;
      iVar16 = iVar5;
      piVar10 = piVar15;
    } while (piVar15 != aiStack_38);
  }
  iVar18 = iVar18 + param_6 * 0x3e + param_5 * 0x7c;
  *(undefined1 *)(iVar18 + 0x3d) = 0;
  *(undefined1 *)(iVar18 + 0x3c) = 0;
  *(undefined1 *)(iVar18 + 0x3b) = 0;
LAB_000266c0:
  param_1[param_6 + param_5 * 2 + 0x214] =
       *(undefined4 *)(iVar19 + param_6 * 0x48 + param_5 * 0x90 + 0x28);
  iVar19 = xmp3_CalcBitsUsed(aiStack_38,param_2,*param_3);
  uVar6 = *param_3;
  *param_3 = iVar19 + uVar6 & 7;
  return (int)(iVar19 + uVar6) >> 3;
}



/* ===== xmp3_MidSideProc @ 00026fb4 size=400 ===== */

void xmp3_MidSideProc(undefined1 (*param_1) [16],uint param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  else {
    if (param_2 - 1 < 3) {
      uVar2 = 0;
      uVar1 = uVar2;
      uVar7 = uVar2;
    }
    else {
      auVar9 = (undefined1  [16])0x0;
      pauVar6 = param_1 + 0x90;
      uVar1 = 0;
      pauVar5 = param_1;
      auVar10 = auVar9;
      do {
        uVar1 = uVar1 + 1;
        auVar11 = VectorAdd(*pauVar5,*pauVar6,4);
        auVar8 = VectorSub(*pauVar5,*pauVar6,4);
        auVar13 = VectorAbsolute(auVar11,4);
        auVar12 = VectorAbsolute(auVar8,4);
        *(longlong *)*pauVar5 = auVar11._0_8_;
        *(longlong *)(*pauVar5 + 8) = auVar11._8_8_;
        pauVar5 = pauVar5 + 1;
        auVar10 = auVar10 | auVar13;
        *(longlong *)*pauVar6 = auVar8._0_8_;
        *(longlong *)(*pauVar6 + 8) = auVar8._8_8_;
        pauVar6 = pauVar6 + 1;
        auVar9 = auVar9 | auVar12;
      } while (uVar1 != param_2 >> 2);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar10._8_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar9._8_8_;
      uVar2 = SUB164(auVar9 | auVar11,0) | SUB164(auVar9 | auVar11,4);
      uVar1 = SUB164(auVar10 | auVar8,0) | SUB164(auVar10 | auVar8,4);
      uVar7 = param_2 & 0xfffffffc;
      if (param_2 == (param_2 & 0xfffffffc)) goto LAB_00027108;
    }
    uVar4 = *(int *)(*param_1 + uVar7 * 4) + *(int *)(param_1[0x90] + uVar7 * 4);
    uVar3 = *(int *)(*param_1 + uVar7 * 4) - *(int *)(param_1[0x90] + uVar7 * 4);
    *(uint *)(*param_1 + uVar7 * 4) = uVar4;
    *(uint *)(param_1[0x90] + uVar7 * 4) = uVar3;
    uVar1 = uVar1 | (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    uVar2 = uVar2 | (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    if ((int)(uVar7 + 1) < (int)param_2) {
      uVar4 = *(int *)(*param_1 + uVar7 * 4 + 4) + *(int *)(param_1[0x90] + uVar7 * 4 + 4);
      uVar3 = *(int *)(*param_1 + uVar7 * 4 + 4) - *(int *)(param_1[0x90] + uVar7 * 4 + 4);
      *(uint *)(*param_1 + uVar7 * 4 + 4) = uVar4;
      uVar1 = uVar1 | (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      *(uint *)(param_1[0x90] + uVar7 * 4 + 4) = uVar3;
      uVar2 = uVar2 | (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      if ((int)(uVar7 + 2) < (int)param_2) {
        uVar4 = *(int *)(param_1[0x90] + uVar7 * 4 + 8) + *(int *)(*param_1 + uVar7 * 4 + 8);
        uVar3 = *(int *)(*param_1 + uVar7 * 4 + 8) - *(int *)(param_1[0x90] + uVar7 * 4 + 8);
        *(uint *)(*param_1 + uVar7 * 4 + 8) = uVar4;
        uVar2 = uVar2 | (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        *(uint *)(param_1[0x90] + uVar7 * 4 + 8) = uVar3;
        uVar1 = uVar1 | (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      }
    }
  }
LAB_00027108:
  *param_3 = *param_3 | CONCAT44(uVar2,uVar1);
  return;
}



/* ===== xmp3_IntensityProcMPEG1 @ 00027144 size=1300 ===== */

int xmp3_IntensityProcMPEG1
              (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
              undefined4 param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint unaff_r8;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  int local_74;
  byte *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_48;
  int local_34;
  
  iVar14 = DAT_00027658 + 0x2715c;
  uVar19 = *(uint *)(param_5 + 0x18);
  if (uVar19 == 0) {
    iVar5 = *(int *)(param_5 + 0x2c);
    iVar17 = *(int *)(param_3 + 0x34);
    iVar12 = *(int *)(param_5 + 0x14);
    iVar21 = (iVar5 + 1) * 2;
    iVar10 = (int)*(short *)(iVar17 + iVar21);
    param_2 = param_2 - iVar10;
    if (param_2 < 1 || iVar12 <= iVar5) {
      unaff_r8 = 0;
    }
    iVar13 = param_6 * 0x1c + *(int *)(iVar14 + DAT_0002765c);
    if (param_2 >= 1 && iVar12 > iVar5) {
      local_70 = (byte *)(param_4 + iVar5);
      unaff_r8 = 0;
      local_74 = iVar5 + 1;
      while( true ) {
        local_70 = local_70 + 1;
        if (*local_70 == 7) {
          iVar20 = *(int *)(*(int *)(iVar14 + DAT_00027660) + param_6 * 8);
          iVar7 = *(int *)(*(int *)(iVar14 + DAT_00027660) + param_6 * 8 + 4);
          iVar5 = param_6;
        }
        else {
          iVar20 = *(int *)(iVar13 + (uint)*local_70 * 4);
          iVar7 = *(int *)(iVar13 + 0x18) - iVar20;
        }
        iVar21 = (int)*(short *)(iVar17 + iVar21 + 2) - (int)*(short *)(iVar17 + iVar21);
        iVar8 = param_2;
        if (0 < iVar21) {
          iVar15 = param_2 + iVar10;
          puVar11 = (uint *)(param_1 + iVar10 * 4);
          do {
            iVar8 = iVar8 + -1;
            iVar24 = param_2 - iVar8;
            iVar16 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)iVar7) >> 0x20);
            iVar10 = iVar15 - iVar8;
            lVar4 = (longlong)(int)*puVar11 * (longlong)iVar20;
            iVar5 = (int)lVar4;
            iVar18 = (int)((ulonglong)lVar4 >> 0x20);
            uVar6 = iVar16 * 4;
            puVar11[0x240] = uVar6;
            if ((int)uVar6 < 0) {
              uVar6 = iVar16 * -4;
            }
            uVar9 = iVar18 * 4;
            *puVar11 = uVar9;
            unaff_r8 = unaff_r8 | uVar6;
            if ((int)uVar9 < 0) {
              uVar9 = iVar18 * -4;
            }
            bVar26 = iVar21 == iVar24;
            iVar18 = iVar21 - iVar24;
            if (iVar21 > iVar24) {
              bVar26 = iVar8 == 0;
              iVar18 = iVar8;
            }
            uVar19 = uVar19 | uVar9;
            puVar11 = puVar11 + 1;
          } while (!bVar26 && iVar18 < 0 == (iVar21 <= iVar24 && SBORROW4(iVar21,iVar24)));
        }
        bVar26 = iVar12 == local_74;
        iVar21 = iVar12 - local_74;
        if (iVar12 > local_74) {
          bVar26 = iVar8 == 0;
          iVar21 = iVar8;
        }
        if (bVar26 || iVar21 < 0 != (iVar12 <= local_74 && SBORROW4(iVar12,local_74))) break;
        iVar21 = (local_74 + 1) * 2;
        param_2 = iVar8;
        local_74 = local_74 + 1;
      }
    }
  }
  else {
    if (uVar19 - 1 < 2) {
      iVar5 = *(int *)(param_5 + 0x28) + 1;
      local_34 = *(int *)(param_5 + 0x10) + 1;
      iVar21 = (int)*(short *)(*(int *)(param_3 + 0x34) + *(int *)(param_5 + 0x28) * 2 + 0x30);
      local_54 = iVar21 * 3;
      param_2 = param_2 + iVar21 * -3;
    }
    else {
      iVar5 = 0;
      local_34 = 0;
      local_54 = 0;
    }
    bVar27 = SBORROW4(param_2,2);
    iVar21 = param_2 + -2;
    bVar26 = param_2 == 2;
    if (2 < param_2) {
      bVar27 = SBORROW4(local_34,iVar5);
      iVar21 = local_34 - iVar5;
      bVar26 = local_34 == iVar5;
    }
    bVar25 = iVar21 < 0;
    uVar6 = (uint)(!bVar26 && bVar25 == bVar27);
    if (bVar26 || bVar25 != bVar27) {
      uVar19 = uVar6;
      unaff_r8 = uVar6;
    }
    iVar21 = param_6 * 0x1c + *(int *)(iVar14 + DAT_0002765c);
    if (!bVar26 && bVar25 == bVar27) {
      iVar12 = iVar5 * 2;
      iVar10 = *(int *)(param_3 + 0x34);
      local_48 = param_4 + iVar5 * 3;
      uVar19 = 0;
      unaff_r8 = 0;
      uVar6 = (uint)*(byte *)(local_48 + 0x17);
      iVar17 = param_6 * 8;
      if (uVar6 == 7) goto LAB_000273f4;
LAB_0002720c:
      local_64 = *(int *)(iVar21 + uVar6 * 4);
      local_60 = *(int *)(iVar21 + 0x18) - local_64;
      uVar6 = (uint)*(byte *)(local_48 + 0x18);
      if (uVar6 == 7) goto LAB_0002742c;
LAB_00027234:
      local_6c = *(int *)(iVar21 + uVar6 * 4);
      local_5c = *(int *)(iVar21 + 0x18) - local_6c;
      uVar6 = (uint)*(byte *)(local_48 + 0x19);
      if (uVar6 == 7) goto LAB_00027464;
      do {
        local_68 = *(int *)(iVar21 + uVar6 * 4);
        local_58 = *(int *)(iVar21 + 0x18) - local_68;
        while( true ) {
          iVar12 = iVar10 + iVar12;
          iVar5 = iVar5 + 1;
          iVar12 = (int)*(short *)(iVar12 + 0x30) - (int)*(short *)(iVar12 + 0x2e);
          if (0 < iVar12) {
            iVar20 = 0;
            iVar7 = param_2 + local_54;
            iVar13 = param_2;
            puVar11 = (uint *)(param_1 + local_54 * 4);
            do {
              param_2 = iVar13 + -3;
              iVar20 = iVar20 + 1;
              local_54 = iVar7 - param_2;
              iVar8 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)local_60) >> 0x20);
              iVar18 = (int)((ulonglong)((longlong)(int)puVar11[1] * (longlong)local_5c) >> 0x20);
              uVar6 = iVar8 * 4;
              iVar15 = (int)((ulonglong)((longlong)(int)puVar11[1] * (longlong)local_6c) >> 0x20);
              uVar9 = iVar18 * 4;
              uVar1 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)local_64) >> 0x20) << 2;
              puVar11[0x240] = uVar6;
              if ((int)uVar6 < 0) {
                uVar6 = iVar8 * -4;
              }
              *puVar11 = uVar1;
              iVar8 = (int)((ulonglong)((longlong)(int)puVar11[2] * (longlong)local_58) >> 0x20);
              uVar2 = iVar15 * 4;
              uVar22 = iVar8 * 4;
              puVar11[0x241] = uVar9;
              if ((int)uVar9 < 0) {
                uVar9 = iVar18 * -4;
              }
              puVar11[0x242] = uVar22;
              if ((int)uVar22 < 0) {
                uVar22 = iVar8 * -4;
              }
              uVar3 = (int)((ulonglong)((longlong)(int)puVar11[2] * (longlong)local_68) >> 0x20) <<
                      2;
              uVar23 = uVar2;
              if ((int)uVar2 < 0) {
                uVar23 = iVar15 * -4;
              }
              bVar27 = SBORROW4(iVar12,iVar20);
              iVar8 = iVar12 - iVar20;
              bVar26 = iVar12 == iVar20;
              if (iVar20 < iVar12) {
                bVar27 = SBORROW4(param_2,2);
                iVar8 = iVar13 + -5;
                bVar26 = param_2 == 2;
              }
              puVar11[1] = uVar2;
              puVar11[2] = uVar3;
              unaff_r8 = unaff_r8 | uVar9 | uVar6 | uVar22;
              uVar19 = uVar19 | uVar23 | (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) |
                                (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
              iVar13 = param_2;
              puVar11 = puVar11 + 3;
            } while (!bVar26 && iVar8 < 0 == bVar27);
          }
          iVar13 = local_48 + 3;
          if (param_2 < 3 || local_34 <= iVar5) goto LAB_00027618;
          iVar12 = iVar5 * 2;
          uVar6 = (uint)*(byte *)(local_48 + 0x1a);
          local_48 = iVar13;
          if (uVar6 != 7) goto LAB_0002720c;
LAB_000273f4:
          local_64 = *(int *)(*(int *)(iVar14 + DAT_00027660) + param_6 * 8);
          local_60 = *(int *)(*(int *)(iVar14 + DAT_00027660) + iVar17 + 4);
          uVar6 = (uint)*(byte *)(local_48 + 0x18);
          if (uVar6 != 7) goto LAB_00027234;
LAB_0002742c:
          local_6c = *(int *)(*(int *)(iVar14 + DAT_00027660) + param_6 * 8);
          local_5c = *(int *)(*(int *)(iVar14 + DAT_00027660) + iVar17 + 4);
          uVar6 = (uint)*(byte *)(local_48 + 0x19);
          if (uVar6 != 7) break;
LAB_00027464:
          local_68 = *(int *)(*(int *)(iVar14 + DAT_00027660) + param_6 * 8);
          local_58 = *(int *)(*(int *)(iVar14 + DAT_00027660) + iVar17 + 4);
        }
      } while( true );
    }
  }
LAB_00027618:
  *param_8 = uVar19;
  param_8[1] = unaff_r8;
  return iVar5;
}



/* ===== xmp3_IntensityProcMPEG2 @ 00027664 size=1728 ===== */

int xmp3_IntensityProcMPEG2
              (int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7
              ,undefined4 param_8,uint *param_9)

{
  short *psVar1;
  undefined8 uVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  uint *local_b4;
  int local_a4;
  int *local_9c;
  uint local_8c;
  undefined8 local_88 [12];
  undefined1 auStack_28 [4];
  uint *puVar20;
  
  iVar22 = DAT_00027d24 + 0x27688;
  uVar15 = param_6[5];
  uVar26 = ~(-1 << (param_6[1] & 0xffU));
  piVar7 = (int *)(*(int *)(iVar22 + DAT_00027d28) + (param_7 + *param_6 * 2) * 0x40);
  if ((int)uVar15 < 1) {
    uVar15 = 0;
  }
  else {
    if (uVar15 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar15 & 0xfffffffc;
      if (uVar15 == uVar8) goto LAB_0002775c;
    }
    *(uint *)((int)local_88 + uVar8 * 4) = uVar26;
    if ((int)(uVar8 + 1) < (int)uVar15) {
      *(uint *)((int)local_88 + (uVar8 + 1) * 4) = uVar26;
      if ((int)(uVar8 + 2) < (int)uVar15) {
        *(uint *)((int)local_88 + (uVar8 + 2) * 4) = uVar26;
      }
    }
  }
LAB_0002775c:
  uVar8 = param_6[6];
  uVar26 = ~(-1 << (param_6[2] & 0xffU));
  if (0 < (int)uVar8) {
    if (uVar8 - 1 < 3) {
      uVar21 = 0;
      uVar9 = uVar15;
LAB_000277e4:
      *(uint *)((int)local_88 + uVar9 * 4) = uVar26;
      if ((int)(uVar21 + 1) < (int)uVar8) {
        *(uint *)((int)local_88 + (uVar9 + 1) * 4) = uVar26;
        if ((int)(uVar21 + 2) < (int)uVar8) {
          *(uint *)((int)local_88 + (uVar9 + 2) * 4) = uVar26;
        }
      }
    }
    else {
      uVar9 = uVar8 >> 2;
      iVar13 = uVar15 * 4;
      uVar2 = CONCAT44(uVar26,uVar26);
      *(undefined8 *)((int)local_88 + iVar13) = uVar2;
      *(undefined8 *)((int)local_88 + iVar13 + 8) = uVar2;
      if (uVar9 != 1) {
        *(undefined8 *)((int)local_88 + iVar13 + 0x10) = uVar2;
        *(undefined8 *)((int)local_88 + iVar13 + 0x18) = uVar2;
        if (uVar9 != 2) {
          *(undefined8 *)((int)local_88 + iVar13 + 0x20) = uVar2;
          *(undefined8 *)((int)local_88 + iVar13 + 0x28) = uVar2;
          if (uVar9 != 3) {
            *(undefined8 *)((int)local_88 + iVar13 + 0x30) = uVar2;
            *(undefined8 *)((int)local_88 + iVar13 + 0x38) = uVar2;
            if (uVar9 != 4) {
              *(undefined8 *)((int)local_88 + iVar13 + 0x40) = uVar2;
              *(undefined8 *)((int)local_88 + iVar13 + 0x48) = uVar2;
            }
          }
        }
      }
      uVar21 = uVar8 & 0xfffffffc;
      uVar9 = uVar15 + uVar21;
      if (uVar8 != uVar21) goto LAB_000277e4;
    }
    uVar15 = uVar15 + uVar8;
  }
  uVar8 = param_6[7];
  uVar26 = ~(-1 << (param_6[3] & 0xffU));
  if (0 < (int)uVar8) {
    if (uVar8 - 1 < 3) {
      uVar21 = 0;
      uVar9 = uVar15;
LAB_000278ac:
      *(uint *)((int)local_88 + uVar9 * 4) = uVar26;
      if ((int)(uVar21 + 1) < (int)uVar8) {
        *(uint *)((int)local_88 + (uVar9 + 1) * 4) = uVar26;
        if ((int)(uVar21 + 2) < (int)uVar8) {
          *(uint *)((int)local_88 + (uVar9 + 2) * 4) = uVar26;
        }
      }
    }
    else {
      uVar9 = uVar8 >> 2;
      iVar13 = uVar15 * 4;
      uVar2 = CONCAT44(uVar26,uVar26);
      *(undefined8 *)((int)local_88 + iVar13) = uVar2;
      *(undefined8 *)((int)local_88 + iVar13 + 8) = uVar2;
      if (uVar9 != 1) {
        *(undefined8 *)((int)local_88 + iVar13 + 0x10) = uVar2;
        *(undefined8 *)((int)local_88 + iVar13 + 0x18) = uVar2;
        if (uVar9 != 2) {
          *(undefined8 *)((int)local_88 + iVar13 + 0x20) = uVar2;
          *(undefined8 *)((int)local_88 + iVar13 + 0x28) = uVar2;
          if (uVar9 != 3) {
            *(undefined8 *)((int)local_88 + iVar13 + 0x30) = uVar2;
            *(undefined8 *)((int)local_88 + iVar13 + 0x38) = uVar2;
            if (uVar9 != 4) {
              *(undefined8 *)((int)local_88 + iVar13 + 0x40) = uVar2;
              *(undefined8 *)((int)local_88 + iVar13 + 0x48) = uVar2;
            }
          }
        }
      }
      uVar21 = uVar8 & 0xfffffffc;
      uVar9 = uVar15 + uVar21;
      if (uVar8 != uVar21) goto LAB_000278ac;
    }
    uVar15 = uVar15 + uVar8;
  }
  uVar26 = param_6[8];
  uVar8 = ~(-1 << (param_6[4] & 0xffU));
  if (0 < (int)uVar26) {
    if (uVar26 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar26 >> 2;
      iVar13 = uVar15 * 4;
      uVar2 = CONCAT44(uVar8,uVar8);
      *(undefined8 *)((int)local_88 + iVar13) = uVar2;
      *(undefined8 *)((int)local_88 + iVar13 + 8) = uVar2;
      if (uVar9 != 1) {
        *(undefined8 *)((int)local_88 + iVar13 + 0x10) = uVar2;
        *(undefined8 *)((int)local_88 + iVar13 + 0x18) = uVar2;
        if (uVar9 != 2) {
          *(undefined8 *)((int)local_88 + iVar13 + 0x20) = uVar2;
          *(undefined8 *)((int)local_88 + iVar13 + 0x28) = uVar2;
          if (uVar9 != 3) {
            *(undefined8 *)((int)local_88 + iVar13 + 0x30) = uVar2;
            *(undefined8 *)((int)local_88 + iVar13 + 0x38) = uVar2;
            if (uVar9 != 4) {
              *(undefined8 *)((int)local_88 + iVar13 + 0x40) = uVar2;
              *(undefined8 *)((int)local_88 + iVar13 + 0x48) = uVar2;
            }
          }
        }
      }
      uVar9 = uVar26 & 0xfffffffc;
      uVar15 = uVar15 + uVar9;
      if (uVar9 == uVar26) goto LAB_000279b4;
    }
    *(uint *)((int)local_88 + uVar15 * 4) = uVar8;
    if ((int)(uVar9 + 1) < (int)uVar26) {
      puVar16 = (undefined1 *)(uVar15 + 2);
      if ((int)(uVar9 + 2) < (int)uVar26) {
        puVar16 = auStack_28 + (int)puVar16 * 4;
      }
      *(uint *)((int)local_88 + (uVar15 + 1) * 4) = uVar8;
      if ((int)(uVar9 + 2) < (int)uVar26) {
        *(uint *)(puVar16 + -0x60) = uVar8;
      }
    }
  }
LAB_000279b4:
  iVar13 = *(int *)(param_3 + 0x34);
  if (param_5[6] == 0) {
    iVar17 = param_5[5];
    iVar10 = param_5[0xb] + 1;
    psVar14 = (short *)(iVar13 + iVar10 * 2);
    iVar18 = (int)*(short *)(iVar13 + iVar10 * 2);
    param_2 = param_2 - iVar18;
    uVar15 = 0;
    iVar6 = iVar13;
    uVar26 = uVar15;
    if (iVar10 <= iVar17) {
      local_b4 = &local_8c + iVar10;
      pbVar27 = (byte *)(param_4 + param_5[0xb]);
      do {
        pbVar27 = pbVar27 + 1;
        bVar3 = *pbVar27;
        local_b4 = local_b4 + 1;
        if (*local_b4 == (uint)bVar3) {
          iVar6 = *(int *)(iVar22 + DAT_00027d2c);
          iVar13 = *(int *)(iVar6 + param_7 * 8 + 4);
          iVar10 = *(int *)(iVar6 + param_7 * 8);
        }
        else {
          iVar6 = (int)(bVar3 + 1) >> 1;
          iVar10 = piVar7[iVar6];
          iVar13 = *piVar7;
          if ((bVar3 & 1) == 0) {
            iVar13 = iVar10;
            iVar10 = *piVar7;
          }
        }
        psVar1 = psVar14 + 1;
        sVar4 = *psVar14;
        psVar14 = psVar14 + 1;
        iVar25 = (int)*psVar1 - (int)sVar4;
        if (param_2 <= (int)*psVar1 - (int)sVar4) {
          iVar25 = param_2;
        }
        iVar11 = iVar18;
        if (0 < iVar25) {
          iVar11 = iVar25 + iVar18;
          puVar19 = (uint *)(param_1 + iVar18 * 4);
          do {
            puVar20 = puVar19 + 1;
            iVar23 = (int)((ulonglong)((longlong)(int)*puVar19 * (longlong)iVar13) >> 0x20);
            lVar5 = (longlong)(int)*puVar19 * (longlong)iVar10;
            iVar6 = (int)lVar5;
            iVar18 = (int)((ulonglong)lVar5 >> 0x20);
            uVar8 = iVar23 * 4;
            puVar19[0x240] = uVar8;
            if ((int)uVar8 < 0) {
              uVar8 = iVar23 * -4;
            }
            uVar9 = iVar18 * 4;
            *puVar19 = uVar9;
            uVar15 = uVar15 | uVar8;
            if ((int)uVar9 < 0) {
              uVar9 = iVar18 * -4;
            }
            uVar26 = uVar26 | uVar9;
            puVar19 = puVar20;
          } while (puVar20 != (uint *)(param_1 + iVar11 * 4));
        }
        param_2 = param_2 - iVar25;
      } while ((param_2 != 0) &&
              (iVar6 = iVar17, iVar18 = iVar11, (int)(pbVar27 + (1 - param_4)) <= iVar17));
    }
  }
  else {
    uVar15 = 0;
    uVar26 = 0;
    local_a4 = 0;
    do {
      local_9c = param_5 + 1;
      iVar17 = param_5[7];
      iVar18 = *local_9c;
      iVar6 = iVar17 + 1;
      iVar10 = *(short *)(iVar13 + iVar17 * 2 + 0x30) * 3 + local_a4;
      if (iVar6 <= iVar18) {
        local_b4 = &local_8c + iVar6;
        psVar14 = (short *)(iVar13 + (iVar17 + 0x18) * 2);
        iVar17 = param_4 + iVar17 * 3 + local_a4;
        do {
          bVar3 = *(byte *)(iVar17 + 0x1a);
          local_b4 = local_b4 + 1;
          if (*local_b4 == (uint)bVar3) {
            iVar6 = *(int *)(iVar22 + DAT_00027d2c);
            iVar25 = *(int *)(iVar6 + param_7 * 8);
            iVar11 = *(int *)(iVar6 + param_7 * 8 + 4);
          }
          else {
            iVar6 = (int)(bVar3 + 1) >> 1;
            iVar11 = *piVar7;
            iVar25 = piVar7[iVar6];
            if ((bVar3 & 1) == 0) {
              iVar25 = iVar11;
              iVar11 = piVar7[iVar6];
            }
          }
          psVar1 = psVar14 + 1;
          sVar4 = *psVar14;
          psVar14 = psVar14 + 1;
          if (0 < (int)*psVar1 - (int)sVar4) {
            iVar23 = ((int)*psVar1 - (int)sVar4) * 3 + iVar10;
            do {
              iVar6 = *(int *)(param_1 + iVar10 * 4);
              iVar24 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar11) >> 0x20);
              lVar5 = (longlong)iVar6 * (longlong)iVar25;
              iVar6 = (int)lVar5;
              iVar12 = (int)((ulonglong)lVar5 >> 0x20);
              uVar8 = iVar24 * 4;
              *(uint *)(param_1 + 0x900 + iVar10 * 4) = uVar8;
              if ((int)uVar8 < 0) {
                uVar8 = iVar24 * -4;
              }
              uVar9 = iVar12 * 4;
              *(uint *)(param_1 + iVar10 * 4) = uVar9;
              iVar10 = iVar10 + 3;
              if ((int)uVar9 < 0) {
                uVar9 = iVar12 * -4;
              }
              uVar15 = uVar15 | uVar8;
              uVar26 = uVar26 | uVar9;
            } while (iVar10 != iVar23);
          }
          iVar17 = iVar17 + 3;
        } while (psVar14 != (short *)(iVar13 + 0x30 + iVar18 * 2));
      }
      local_a4 = local_a4 + 1;
      param_5 = local_9c;
    } while (local_a4 != 3);
  }
  *param_9 = uVar26;
  param_9[1] = uVar15;
  return iVar6;
}



/* ===== xmp3_Subband @ 00027d30 size=368 ===== */

undefined4 xmp3_Subband(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar7 = *(int *)(param_1 + 0x14);
    if ((iVar7 == 0) || (iVar9 = *(int *)(param_1 + 0x18), iVar9 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = (ushort *)(iVar9 + 0x1100);
      uVar2 = (uint)(short)*puVar4;
      if (*(int *)(param_1 + 0x7bc) == 2) {
        uVar3 = *(undefined4 *)(DAT_00027ea0 + 0x27d40 + DAT_00027ea4);
        uVar5 = 0;
        iVar8 = iVar7;
        do {
          uVar6 = uVar5 & 1;
          uVar5 = uVar5 + 1;
          FDCT32HalfBuffer(iVar8,iVar9,uVar2,uVar6,*(undefined4 *)(iVar7 + 0x1b18));
          iVar1 = iVar8 + 0x900;
          iVar8 = iVar8 + 0x80;
          FDCT32HalfBuffer(iVar1,iVar9 + 0x40,(int)(short)*puVar4,uVar6,
                           *(undefined4 *)(iVar7 + 0x1b1c));
          PolyphaseStereoHalfBuffer(param_2,uVar6 * 0x880 + iVar9,uVar3,(int)(short)*puVar4);
          param_2 = param_2 + 0x80;
          uVar2 = *puVar4 - uVar6 & 7;
          *puVar4 = (ushort)uVar2;
        } while (iVar7 + 0x900 != iVar8);
      }
      else {
        uVar3 = *(undefined4 *)(DAT_00027ea0 + 0x27d40 + DAT_00027ea4);
        uVar5 = 0;
        do {
          uVar6 = uVar5 & 1;
          iVar8 = uVar5 * 0x80;
          uVar5 = uVar5 + 1;
          FDCT32HalfBuffer(iVar7 + iVar8,iVar9,uVar2,uVar6,*(undefined4 *)(iVar7 + 0x1b18));
          PolyphaseMonoHalfBuffer(param_2,uVar6 * 0x880 + iVar9,uVar3,(int)(short)*puVar4);
          param_2 = param_2 + 0x40;
          uVar2 = *puVar4 - uVar6 & 7;
          *puVar4 = (ushort)uVar2;
        } while (uVar5 != 0x12);
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xffffffff;
}



/* ===== AudioMp3EncodeOpen @ 00027ea8 size=248 ===== */

int * AudioMp3EncodeOpen(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = audio_malloc(0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = Mp3EncodeVariableInit(*param_1,param_1[2],0xa0);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      printf((char *)(DAT_00027fb4 + 0x27f90),DAT_00027fb0 + 0x27f8c,0x2c);
      audio_free(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      uVar3 = *param_1;
      uVar4 = param_1[2];
      iVar2 = *(int *)(iVar2 + 0xd7b8);
      piVar1[1] = iVar2;
      if (iVar2 < 1) {
        printf((char *)(DAT_00027fa8 + 0x27f58),DAT_00027fac + 0x27f60,0x33,uVar3,uVar4);
        audio_free(piVar1);
        return (int *)0x0;
      }
      printf((char *)(DAT_00027fa0 + 0x27f18),DAT_00027fa4 + 0x27f24,0x39,piVar1,uVar3,uVar4,iVar2);
      piVar1[2] = *(int *)(*piVar1 + 0x14);
    }
  }
  return piVar1;
}



/* ===== AudioMp3Encode @ 00027fb8 size=28 ===== */

void AudioMp3Encode(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_L3_compress_00048110)(*param_1,0,param_1 + 3);
  return;
}



/* ===== AudioMp3EncodeClose @ 00027fc8 size=80 ===== */

undefined4 AudioMp3EncodeClose(undefined4 *param_1)

{
  printf((char *)(DAT_0002801c + 0x27ffc),DAT_00028018 + 0x28004,0x47,param_1,param_1[3]);
  Mp3EncodeDeinit(*param_1);
  audio_free(param_1);
  return 0;
}



/* ===== record_mp3_init @ 00028020 size=176 ===== */

undefined4 record_mp3_init(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = audio_calloc(1,0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 4) = *param_2;
  uVar4 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(puVar1 + 0x14) = uVar4;
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  iVar2 = AudioMp3EncodeOpen(uVar3);
  *(int *)(puVar1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    printf((char *)(DAT_000280d4 + 0x28098),DAT_000280d0 + 0x28094,0x44);
    return 0;
  }
  printf((char *)(DAT_000280dc + 0x280c0),DAT_000280d8 + 0x280bc,0x40);
  audio_free(puVar1);
  return 0xffffffff;
}



/* ===== record_mp3_process @ 000280e0 size=252 ===== */

undefined4 record_mp3_process(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  do {
    iVar1 = (**(code **)(iVar2 + 4))
                      (*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(*(int *)(iVar2 + 0x10) + 8),
                       *(int *)(*(int *)(iVar2 + 0x10) + 4) << 1);
    if (iVar1 == 0) {
      printf((char *)(DAT_000281e0 + 0x28164),DAT_000281dc + 0x2816c,0x54);
      return 0;
    }
    if (iVar1 == -1) {
      printf((char *)(DAT_000281e8 + 0x28188),DAT_000281e4 + 0x28190,0x59);
      return 1;
    }
    iVar1 = AudioMp3Encode(*(undefined4 *)(iVar2 + 0x10));
    if (iVar1 < 0) {
      printf((char *)(DAT_000281f0 + 0x281b0),DAT_000281ec + 0x281b8,0x5f,iVar1);
      return 3;
    }
    iVar1 = (**(code **)(iVar2 + 8))
                      (*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc),
                       iVar1);
  } while (iVar1 != -1);
  printf((char *)(DAT_000281f8 + 0x281d4),(int)&DAT_000281dc + DAT_000281f4,0x65);
  return 2;
}



/* ===== record_mp3_get_post_state @ 000281fc size=12 ===== */

undefined1 record_mp3_get_post_state(int param_1)

{
  return **(undefined1 **)(param_1 + 0x18);
}



/* ===== record_mp3_destroy @ 00028208 size=28 ===== */

void record_mp3_destroy(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  AudioMp3EncodeClose(*(undefined4 *)(iVar1 + 0x10));
  audio_free(iVar1);
  return;
}



/* ===== open_bit_stream @ 00028228 size=156 ===== */

void open_bit_stream(int param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x800);
  *(undefined4 *)(param_1 + 0x5880) = 0;
  *(void **)(param_1 + 0x5884) = pvVar1;
  *(undefined1 *)(param_1 + 0x7c) = 0xff;
  *(byte *)(param_1 + 0x7d) =
       ~((byte)~(byte)((((uint)(*(int *)(param_1 + 0x58) == 0) | *(int *)(param_1 + 0x20) << 3 |
                        *(int *)(param_1 + 0x24) << 1) << 0x1b) >> 0x18) >> 3);
  *(byte *)(param_1 + 0x7e) =
       (byte)(*(int *)(param_1 + 0x54) << 2) | (byte)(*(int *)(param_1 + 0x4c) << 4) |
       (byte)*(undefined4 *)(param_1 + 0x5c);
  *(byte *)(param_1 + 0x7f) =
       (byte)(*(int *)(param_1 + 0x60) << 4) | (byte)(*(int *)(param_1 + 0x28) << 6) |
       (byte)*(undefined4 *)(param_1 + 0x34) | (byte)(*(int *)(param_1 + 100) << 3) |
       (byte)(*(int *)(param_1 + 0x68) << 2);
  return;
}



/* ===== close_bit_stream @ 000282c4 size=28 ===== */

void close_bit_stream(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(void **)(param_1 + 0x5884) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 0x5884));
  return;
}



/* ===== putbits @ 000282e0 size=188 ===== */

void putbits(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_4 < 0x21) {
    *(uint *)(param_1 + 0xd7a8) = *(int *)(param_1 + 0xd7a8) + param_4;
    if (param_4 == 0) {
      return;
    }
  }
  else {
    puts((char *)(DAT_000283a0 + 0x28388));
    *(uint *)(param_1 + 0xd7a8) = *(int *)(param_1 + 0xd7a8) + param_4;
  }
  iVar1 = DAT_0002839c + 0x28324;
  do {
    uVar4 = *(uint *)(param_1 + 0xd7a0);
    uVar2 = uVar4;
    if (param_4 <= uVar4) {
      uVar2 = param_4;
    }
    param_4 = param_4 - uVar2;
    *(byte *)(param_2 + *(int *)(param_1 + 0xd79c)) =
         *(byte *)(param_2 + *(int *)(param_1 + 0xd79c)) |
         (byte)((*(uint *)(iVar1 + uVar2 * 4) & param_3 >> (param_4 & 0xff)) <<
               (uVar4 - uVar2 & 0xff));
    iVar3 = *(int *)(param_1 + 0xd7a0) - uVar2;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xd7a0) = 8;
      iVar3 = *(int *)(param_1 + 0xd79c) + 1;
      *(int *)(param_1 + 0xd79c) = iVar3;
      *(undefined1 *)(param_2 + iVar3) = 0;
    }
    else {
      *(int *)(param_1 + 0xd7a0) = iVar3;
    }
  } while (param_4 != 0);
  return;
}



/* ===== abs_and_sign @ 000283a4 size=32 ===== */

bool abs_and_sign(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    *param_1 = -iVar1;
  }
  return iVar1 < 1;
}



/* ===== L3_format_bitstream @ 000283c4 size=3412 ===== */

int L3_format_bitstream(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  void *__src;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint *unaff_r7;
  uint *puVar25;
  char *__format;
  int iVar26;
  int *piVar27;
  char *__format_00;
  undefined4 *puVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int local_94;
  int local_90;
  int local_78;
  int local_74;
  int *local_70;
  int local_60;
  uint *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c [2];
  undefined4 *puVar24;
  
  uVar2 = DAT_000286c8;
  iVar22 = 0;
  iVar11 = *(int *)(param_1 + 0xd794) * 0x30 + 0x88;
  iVar15 = param_1 + iVar11;
  *(undefined1 *)(param_1 + iVar11) = *(undefined1 *)(param_1 + 0x7c);
  *(undefined1 *)(iVar15 + 1) = *(undefined1 *)(param_1 + 0x7d);
  *(byte *)(iVar15 + 2) = *(byte *)(param_1 + 0x7e) | (byte)(*(int *)(param_1 + 0x38) << 1);
  uVar1 = *(undefined1 *)(param_1 + 0x7f);
  *(undefined1 *)(iVar15 + 4) = 0;
  *(undefined1 *)(iVar15 + 3) = uVar1;
  *(undefined4 *)(param_1 + 0xd7a8) = 0x20;
  *(undefined8 *)(param_1 + 0xd79c) = uVar2;
  iVar11 = DAT_000286d8 + 0x28450;
  if (*(int *)(param_1 + 0x20) == 3) {
    putbits(param_1,iVar15,*(undefined4 *)(param_1 + 0xa088),9);
    if (*(int *)(param_1 + 0x6c) == 2) {
      uVar12 = 3;
    }
    else {
      uVar12 = 5;
    }
    putbits(param_1,iVar15,0,uVar12);
    iVar9 = *(int *)(param_1 + 0x6c);
    if (0 < iVar9) {
      do {
        putbits(param_1,iVar15,0,4);
        iVar9 = *(int *)(param_1 + 0x6c);
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar9);
    }
    puVar28 = (undefined4 *)(param_1 + 0xa0a8);
    do {
      if (0 < iVar9) {
        unaff_r7 = (uint *)0x0;
        puVar21 = puVar28;
        do {
          putbits(param_1,iVar15,puVar21[-7],0xc);
          putbits(param_1,iVar15,puVar21[-6],9);
          putbits(param_1,iVar15,puVar21[-4],8);
          putbits(param_1,iVar15,0,5);
          puVar23 = puVar21 + -3;
          do {
            puVar24 = puVar23 + 1;
            putbits(param_1,iVar15,*puVar23,5);
            puVar23 = puVar24;
          } while (puVar21 != puVar24);
          putbits(param_1,iVar15,*puVar21,4);
          unaff_r7 = (uint *)((int)unaff_r7 + 1);
          putbits(param_1,iVar15,puVar21[1],3);
          putbits(param_1,iVar15,0,2);
          putbits(param_1,iVar15,puVar21[2],1);
          iVar9 = *(int *)(param_1 + 0x6c);
          puVar21 = puVar21 + 0x10;
        } while ((int)unaff_r7 < iVar9);
      }
      puVar28 = puVar28 + 0x20;
    } while ((undefined4 *)(param_1 + 0xa1a8) != puVar28);
  }
  else {
    putbits(param_1,iVar15,*(undefined4 *)(param_1 + 0xa088),8);
    if (*(int *)(param_1 + 0x6c) == 1) {
      uVar12 = 1;
    }
    else {
      uVar12 = 2;
    }
    putbits(param_1,iVar15,0,uVar12);
    if (0 < *(int *)(param_1 + 0x6c)) {
      puVar20 = (uint *)(param_1 + 0xa0a8);
      do {
        putbits(param_1,iVar15,puVar20[-7],0xc);
        putbits(param_1,iVar15,puVar20[-6],9);
        putbits(param_1,iVar15,puVar20[-4],8);
        putbits(param_1,iVar15,0,10);
        puVar25 = puVar20 + -3;
        do {
          unaff_r7 = puVar25 + 1;
          putbits(param_1,iVar15,*puVar25,5);
          puVar25 = unaff_r7;
        } while (puVar20 != unaff_r7);
        putbits(param_1,iVar15,*puVar20,4);
        iVar22 = iVar22 + 1;
        putbits(param_1,iVar15,puVar20[1],3);
        putbits(param_1,iVar15,0,1);
        putbits(param_1,iVar15,puVar20[2],1);
        puVar20 = puVar20 + 0x10;
      } while (iVar22 < *(int *)(param_1 + 0x6c));
    }
  }
  iVar9 = *(int *)(param_1 + 0x40);
  iVar22 = *(int *)(param_1 + 0xd7a8);
  iVar15 = *(int *)(param_1 + 0xd794) + 1;
  iVar13 = *(int *)(param_1 + 0xd794) * 0x30 + param_1;
  *(int *)(iVar13 + 0x80) = iVar22 >> 3;
  *(int *)(iVar13 + 0x84) = iVar9 - iVar22 >> 3;
  if (iVar15 == 0x80) {
    *(undefined4 *)(param_1 + 0xd794) = 0;
  }
  else {
    *(int *)(param_1 + 0xd794) = iVar15;
  }
  uVar2 = DAT_000286d0;
  *(undefined4 *)(param_1 + 0xd7a8) = 0;
  *(undefined8 *)(param_1 + 0xd79c) = uVar2;
  *(undefined1 *)(param_1 + 0x1880) = 0;
  iVar15 = *(int *)(param_1 + 0x70);
  if (iVar15 < 1) {
    uVar3 = *(uint *)(param_1 + 0xa18c);
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5880) = 0;
      iVar11 = 0;
      goto LAB_00028ca0;
    }
LAB_00028cb4:
    if (0x4000 < (int)uVar3) {
      printf((char *)(DAT_000286ec + 0x29114));
    }
    iVar11 = ((int)uVar3 >> 5) + -1;
    if ((int)uVar3 >> 5 != 0) {
      do {
        iVar11 = iVar11 + -1;
        putbits(param_1,param_1 + 0x1880,0,0x20);
      } while (iVar11 != -1);
    }
    if ((uVar3 & 0x1f) != 0) {
      putbits(param_1,param_1 + 0x1880,0,uVar3 & 0x1f);
    }
  }
  else {
    local_70 = (int *)(param_1 + 0xa08c);
    local_74 = param_1 + 0x5888;
    iVar22 = *(int *)(param_1 + 0x6c);
    local_60 = 0;
    do {
      if (0 < iVar22) {
        local_90 = local_74;
        local_78 = 0;
        iVar15 = *(int *)(iVar11 + DAT_000286dc);
        piVar29 = local_70;
        do {
          iVar16 = piVar29[1];
          local_3c = 0;
          iVar22 = iVar16 * 2;
          local_40 = 0;
          iVar13 = *(int *)(*(int *)(param_1 + 0xd7b4) + (piVar29[7] + 1 + piVar29[8] + 1) * 4);
          iVar9 = *(int *)(*(int *)(param_1 + 0xd7b4) + (piVar29[7] + 1) * 4);
          local_44 = (uint *)0x0;
          if (iVar22 < 1) {
            local_94 = 0;
          }
          else {
            if (iVar9 < 1) {
              local_94 = 0;
              iVar9 = 0;
            }
            else {
              local_94 = 0;
              iVar18 = iVar22;
              if (iVar9 <= iVar22) {
                iVar18 = iVar9;
              }
              iVar17 = 0;
              do {
                while (iVar9 = iVar17, iVar17 = piVar29[4], iVar17 != 0) {
                  local_2c[0] = *(uint *)(local_90 + 4 + iVar9 * 4);
                  local_30 = *(uint *)(local_90 + iVar9 * 4);
                  uVar3 = abs_and_sign(&local_30);
                  uVar4 = abs_and_sign(local_2c);
                  uVar10 = local_2c[0];
                  iVar30 = iVar17 * 0x18 + iVar15;
                  if (iVar17 < 0x10) {
                    iVar17 = *(int *)(iVar30 + 4) * local_30 + local_2c[0];
                    uVar10 = *(uint *)(*(int *)(iVar30 + 0x10) + iVar17 * 4);
                    uVar14 = (uint)*(byte *)(*(int *)(iVar30 + 0x14) + iVar17);
                    if (local_30 != 0) {
                      uVar10 = uVar3 | uVar10 << 1;
                      uVar14 = uVar14 + 1;
                    }
                    if (local_2c[0] != 0) {
                      uVar14 = uVar14 + 1;
                      uVar10 = uVar4 | uVar10 << 1;
                    }
                    uVar8 = 0;
                    uVar3 = uVar8;
                  }
                  else {
                    uVar32 = *(uint *)(iVar30 + 8);
                    if ((int)local_30 < 0xf) {
                      iVar26 = 0;
                    }
                    else {
                      iVar26 = local_30 - 0xf;
                      local_30 = 0xf;
                    }
                    if (0xe < (int)local_2c[0]) {
                      unaff_r7 = (uint *)(local_2c[0] - 0xf);
                      local_2c[0] = 0xf;
                    }
                    iVar17 = iVar17 * 0x18 + iVar15;
                    if ((int)uVar10 < 0xf) {
                      unaff_r7 = (uint *)0x0;
                    }
                    iVar30 = local_30 * *(int *)(iVar30 + 4) + local_2c[0];
                    uVar8 = local_30;
                    if (local_30 == 0xf) {
                      uVar8 = uVar32;
                    }
                    uVar10 = *(uint *)(*(int *)(iVar17 + 0x10) + iVar30 * 4);
                    uVar14 = (uint)*(byte *)(*(int *)(iVar17 + 0x14) + iVar30);
                    if (local_30 == 0xf) {
LAB_00028e4c:
                      uVar3 = uVar3 | iVar26 << 1;
                      uVar8 = uVar8 + 1;
                    }
                    else {
                      if (uVar8 != 0) {
                        iVar26 = 0;
                        uVar8 = 0;
                        goto LAB_00028e4c;
                      }
                      uVar8 = 0;
                      uVar3 = 0;
                    }
                    if (local_2c[0] == 0xf) {
                      uVar3 = (uint)unaff_r7 | uVar3 << (uVar32 & 0xff);
                      uVar8 = uVar8 + uVar32;
                    }
                    else if (local_2c[0] == 0) {
                      uVar14 = uVar14 + uVar8;
                      goto LAB_00028800;
                    }
                    uVar8 = uVar8 + 1;
                    uVar14 = uVar14 + uVar8;
                    uVar3 = uVar4 | uVar3 << 1;
                  }
LAB_00028800:
                  local_94 = local_94 + uVar14;
                  putbits(param_1,param_1 + 0x1880,uVar10);
                  putbits(param_1,param_1 + 0x1880,uVar3,uVar8);
                  unaff_r7 = (uint *)((int)local_44 + uVar14);
                  iVar17 = iVar9 + 2;
                  local_44 = unaff_r7;
                  if (iVar18 <= iVar9 + 2) goto LAB_0002884c;
                }
                local_44 = (uint *)0x0;
                iVar17 = iVar9 + 2;
              } while (iVar9 + 2 < iVar18);
LAB_0002884c:
              iVar9 = iVar9 + 2;
              if (iVar22 <= iVar9) goto LAB_000289e0;
            }
            unaff_r7 = (uint *)(local_90 + iVar9 * 4);
            do {
              if (iVar9 < iVar13) {
                iVar18 = piVar29[5];
                piVar19 = &local_40;
              }
              else {
                iVar18 = piVar29[6];
                piVar19 = &local_3c;
              }
              if (iVar18 == 0) {
                *piVar19 = 0;
              }
              else {
                local_2c[0] = unaff_r7[1];
                local_30 = *unaff_r7;
                uVar10 = abs_and_sign(&local_30);
                uVar3 = 0x288d0;
                uVar14 = abs_and_sign(local_2c);
                uVar4 = local_2c[0];
                iVar17 = iVar18 * 0x18 + iVar15;
                if (iVar18 < 0x10) {
                  iVar18 = *(int *)(iVar17 + 4) * local_30 + local_2c[0];
                  uVar4 = *(uint *)(*(int *)(iVar17 + 0x10) + iVar18 * 4);
                  uVar8 = (uint)*(byte *)(*(int *)(iVar17 + 0x14) + iVar18);
                  if (local_30 != 0) {
                    uVar4 = uVar10 | uVar4 << 1;
                    uVar8 = uVar8 + 1;
                  }
                  if (local_2c[0] != 0) {
                    uVar8 = uVar8 + 1;
                    uVar4 = uVar14 | uVar4 << 1;
                  }
                  uVar32 = 0;
                  uVar10 = uVar32;
                }
                else {
                  uVar31 = *(uint *)(iVar17 + 8);
                  if ((int)local_30 < 0xf) {
                    iVar30 = 0;
                  }
                  else {
                    iVar30 = local_30 - 0xf;
                    local_30 = 0xf;
                  }
                  if (0xe < (int)local_2c[0]) {
                    uVar3 = local_2c[0] - 0xf;
                    local_2c[0] = 0xf;
                  }
                  iVar18 = iVar18 * 0x18 + iVar15;
                  if ((int)uVar4 < 0xf) {
                    uVar3 = 0;
                  }
                  iVar17 = *(int *)(iVar17 + 4) * local_30 + local_2c[0];
                  uVar32 = local_30;
                  if (local_30 == 0xf) {
                    uVar32 = uVar31;
                  }
                  uVar4 = *(uint *)(*(int *)(iVar18 + 0x10) + iVar17 * 4);
                  uVar8 = (uint)*(byte *)(*(int *)(iVar18 + 0x14) + iVar17);
                  if (local_30 == 0xf) {
LAB_00028dd0:
                    uVar10 = uVar10 | iVar30 << 1;
                    uVar32 = uVar32 + 1;
                  }
                  else {
                    if (uVar32 != 0) {
                      iVar30 = 0;
                      uVar32 = 0;
                      goto LAB_00028dd0;
                    }
                    uVar32 = 0;
                    uVar10 = 0;
                  }
                  if (local_2c[0] == 0xf) {
                    uVar10 = uVar3 | uVar10 << (uVar31 & 0xff);
                    uVar32 = uVar32 + uVar31;
                  }
                  else if (local_2c[0] == 0) {
                    uVar8 = uVar32 + uVar8;
                    goto LAB_00028998;
                  }
                  uVar32 = uVar32 + 1;
                  uVar8 = uVar32 + uVar8;
                  uVar10 = uVar14 | uVar10 << 1;
                }
LAB_00028998:
                local_94 = local_94 + uVar8;
                putbits(param_1,param_1 + 0x1880,uVar4);
                putbits(param_1,param_1 + 0x1880,uVar10,uVar32);
                *piVar19 = *piVar19 + uVar8;
              }
              iVar9 = iVar9 + 2;
              unaff_r7 = unaff_r7 + 2;
            } while (iVar9 < iVar22);
          }
LAB_000289e0:
          iVar9 = (piVar29[9] + 0x20) * 0x18 + iVar15;
          if (iVar22 < iVar22 + piVar29[2] * 4) {
            unaff_r7 = (uint *)(param_1 + 0x1880);
            piVar19 = (int *)(local_90 + iVar16 * 8);
            piVar27 = (int *)(local_90 + (iVar22 + piVar29[2] * 4) * 4);
            do {
              while( true ) {
                local_34 = piVar19[1];
                local_30 = piVar19[2];
                local_2c[0] = piVar19[3];
                local_38 = *piVar19;
                uVar12 = abs_and_sign(&local_38);
                uVar5 = abs_and_sign(&local_34);
                uVar6 = abs_and_sign(&local_30);
                uVar7 = abs_and_sign(local_2c);
                iVar22 = local_38 + local_34 * 2 + local_30 * 4 + local_2c[0] * 8;
                uVar3 = (uint)*(byte *)(*(int *)(iVar9 + 0x14) + iVar22);
                putbits(param_1,unaff_r7,*(undefined4 *)(*(int *)(iVar9 + 0x10) + iVar22 * 4),uVar3)
                ;
                if (local_38 != 0) {
                  putbits(param_1,unaff_r7,uVar12,1);
                  uVar3 = uVar3 + 1;
                }
                if (local_34 != 0) {
                  putbits(param_1,unaff_r7,uVar5,1);
                  uVar3 = uVar3 + 1;
                }
                if (local_30 != 0) {
                  putbits(param_1,unaff_r7,uVar6,1);
                  uVar3 = uVar3 + 1;
                }
                if (local_2c[0] != 0) break;
                piVar19 = piVar19 + 4;
                local_94 = local_94 + uVar3;
                if (piVar19 == piVar27) goto LAB_00028b0c;
              }
              piVar19 = piVar19 + 4;
              putbits(param_1,unaff_r7,uVar7,1);
              local_94 = local_94 + uVar3 + 1;
            } while (piVar19 != piVar27);
          }
LAB_00028b0c:
          uVar3 = *piVar29 - local_94;
          if (uVar3 != 0) {
            iVar22 = ((int)uVar3 >> 5) + -1;
            if ((int)uVar3 >> 5 != 0) {
              do {
                iVar22 = iVar22 + -1;
                putbits(param_1,param_1 + 0x1880,0xffffffff,0x20);
              } while (iVar22 != -1);
            }
            if ((uVar3 & 0x1f) != 0) {
              putbits(param_1,param_1 + 0x1880,0xffffffff,uVar3 & 0x1f);
            }
          }
          piVar29 = piVar29 + 0x10;
          iVar22 = *(int *)(param_1 + 0x6c);
          local_78 = local_78 + 1;
          local_90 = local_90 + 0x900;
        } while (local_78 < iVar22);
        iVar15 = *(int *)(param_1 + 0x70);
      }
      local_60 = local_60 + 1;
      local_70 = local_70 + 0x20;
      local_74 = local_74 + 0x1200;
    } while (local_60 < iVar15);
    uVar3 = *(uint *)(param_1 + 0xa18c);
    if (uVar3 != 0) goto LAB_00028cb4;
  }
  iVar15 = 0;
  *(undefined4 *)(param_1 + 0xd79c) = 0;
  *(undefined4 *)(param_1 + 0x5880) = 0;
  uVar3 = *(int *)(param_1 + 0xd7a8) >> 3;
  if (uVar3 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    uVar10 = *(uint *)(param_1 + 0xd7a4);
    __format_00 = (char *)(DAT_000286e0 + 0x28c08);
    __format = (char *)(DAT_000286e4 + 0x28c0c);
    while( true ) {
      uVar4 = 0x800 - iVar11;
      if (uVar10 == 0) {
        iVar15 = *(int *)(param_1 + 0xd798) * 0x30;
        uVar10 = *(uint *)(param_1 + iVar15 + 0x80);
        if (uVar10 < uVar4) {
          memcpy((void *)(*(int *)(param_1 + 0x5884) + iVar11),(void *)(param_1 + iVar15 + 0x88),
                 uVar10);
          iVar11 = uVar10 + *(int *)(param_1 + 0x5880);
          *(int *)(param_1 + 0x5880) = iVar11;
        }
        else {
          printf(__format_00,uVar10);
          iVar11 = *(int *)(param_1 + 0x5880);
        }
        uVar4 = 0x800 - iVar11;
        iVar15 = *(int *)(param_1 + 0xd79c);
        iVar22 = *(int *)(param_1 + 0xd798) + 1;
        uVar10 = *(uint *)(*(int *)(param_1 + 0xd798) * 0x30 + param_1 + 0x84);
        *(int *)(param_1 + 0xd798) = iVar22;
        if (iVar22 == 0x80) {
          *(undefined4 *)(param_1 + 0xd798) = 0;
        }
        *(uint *)(param_1 + 0xd7a4) = uVar10;
      }
      __src = (void *)(param_1 + iVar15 + 0x1880);
      if ((int)uVar3 <= (int)uVar10) break;
      if (uVar10 < uVar4) {
        memcpy((void *)(*(int *)(param_1 + 0x5884) + iVar11),__src,uVar10);
        iVar11 = uVar10 + *(int *)(param_1 + 0x5880);
        *(int *)(param_1 + 0x5880) = iVar11;
        iVar22 = *(int *)(param_1 + 0xd7a4);
        *(undefined4 *)(param_1 + 0xd7a4) = 0;
        iVar15 = iVar22 + *(int *)(param_1 + 0xd79c);
        *(int *)(param_1 + 0xd79c) = iVar15;
      }
      else {
        printf(__format,uVar10);
        iVar22 = *(int *)(param_1 + 0xd7a4);
        iVar11 = *(int *)(param_1 + 0x5880);
        iVar15 = iVar22 + *(int *)(param_1 + 0xd79c);
        *(undefined4 *)(param_1 + 0xd7a4) = 0;
        *(int *)(param_1 + 0xd79c) = iVar15;
      }
      uVar3 = uVar3 - iVar22;
      if (uVar3 == 0) goto LAB_00028ca0;
      uVar10 = 0;
    }
    if (uVar3 < uVar4) {
      memcpy((void *)(*(int *)(param_1 + 0x5884) + iVar11),__src,uVar3);
      iVar11 = uVar3 + *(int *)(param_1 + 0x5880);
      *(int *)(param_1 + 0x5880) = iVar11;
    }
    else {
      printf((char *)(DAT_000286e8 + 0x28f34),uVar3);
      iVar11 = *(int *)(param_1 + 0x5880);
    }
    *(uint *)(param_1 + 0xd7a4) = *(int *)(param_1 + 0xd7a4) - uVar3;
  }
LAB_00028ca0:
  *param_2 = *(undefined4 *)(param_1 + 0x5884);
  return iVar11;
}



/* ===== L3_window_filter_subband @ 00029140 size=2520 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00029544 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void L3_window_filter_subband(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  int iVar24;
  uint extraout_s2;
  undefined4 extraout_s4;
  undefined1 extraout_var [12];
  undefined1 in_q2 [16];
  undefined1 in_q3 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 in_q9 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 in_q10 [16];
  undefined8 uVar31;
  undefined1 auVar30 [16];
  undefined4 in_d22;
  undefined4 in_register_000003b4;
  undefined4 in_d23;
  undefined4 in_register_000003bc;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_q15 [16];
  undefined1 auStack_228 [244];
  undefined1 (*local_134) [16];
  int *local_130;
  int local_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_e4 [32];
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  iVar21 = DAT_000295c0 + 0x29160;
  piVar19 = *(int **)(iVar21 + DAT_000295c4);
  pauVar7 = (undefined1 (*) [16])*param_2;
  iVar4 = piVar19[param_4];
  if (*(int *)(param_1 + 0x6c) == 1) {
    iVar17 = param_4 * 0x200;
    iVar12 = iVar17 + iVar4;
    local_134 = pauVar7 + 4;
    iVar15 = *(int *)(iVar21 + DAT_000298c0);
    if ((undefined1 (*) [16])(iVar15 + iVar12 * 4) < local_134 &&
        pauVar7 < (undefined1 (*) [16])(iVar15 + (iVar12 + 0x20) * 4)) {
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x1f) * 4) = *(int *)*pauVar7 << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x1e) * 4) = *(uint *)*pauVar7 & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x1d) * 4) = *(int *)(*pauVar7 + 4) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x1c) * 4) = *(uint *)(*pauVar7 + 4) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x1b) * 4) = *(int *)(*pauVar7 + 8) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x1a) * 4) = *(uint *)(*pauVar7 + 8) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x19) * 4) = *(int *)(*pauVar7 + 0xc) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x18) * 4) = *(uint *)(*pauVar7 + 0xc) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x17) * 4) = *(int *)pauVar7[1] << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x16) * 4) = *(uint *)pauVar7[1] & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x15) * 4) = *(int *)(pauVar7[1] + 4) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x14) * 4) = *(uint *)(pauVar7[1] + 4) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x13) * 4) = *(int *)(pauVar7[1] + 8) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x12) * 4) = *(uint *)(pauVar7[1] + 8) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0x11) * 4) = *(int *)(pauVar7[1] + 0xc) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0x10) * 4) = *(uint *)(pauVar7[1] + 0xc) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0xf) * 4) = *(int *)pauVar7[2] << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0xe) * 4) = *(uint *)pauVar7[2] & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0xd) * 4) = *(int *)(pauVar7[2] + 4) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 0xc) * 4) = *(uint *)(pauVar7[2] + 4) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 0xb) * 4) = *(int *)(pauVar7[2] + 8) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 10) * 4) = *(uint *)(pauVar7[2] + 8) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 9) * 4) = *(int *)(pauVar7[2] + 0xc) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 8) * 4) = *(uint *)(pauVar7[2] + 0xc) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 7) * 4) = *(int *)pauVar7[3] << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 6) * 4) = *(uint *)pauVar7[3] & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 5) * 4) = *(int *)(pauVar7[3] + 4) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 4) * 4) = *(uint *)(pauVar7[3] + 4) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 3) * 4) = *(int *)(pauVar7[3] + 8) << 0x10;
      *(uint *)(iVar15 + (iVar17 + iVar4 + 2) * 4) = *(uint *)(pauVar7[3] + 8) & 0xffff0000;
      *(int *)(iVar15 + (iVar17 + iVar4 + 1) * 4) = *(int *)(pauVar7[3] + 0xc) << 0x10;
      *(uint *)(iVar15 + iVar12 * 4) = *(uint *)(pauVar7[3] + 0xc) & 0xffff0000;
    }
    else {
      auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar25._0_8_ = 0xffff0000ffff;
      in_q9 = ~*(undefined1 (*) [16])(auVar25 << 0x40 | auVar25);
      auVar25 = VectorShiftLeft(*pauVar7,0x10,0x20,0);
      iVar6 = iVar15 + (iVar12 + 0x1f) * 4;
      *(int *)(iVar15 + (iVar12 + 0x1f) * 4) = auVar25._0_4_;
      *(int *)(iVar6 + -8) = auVar25._4_4_;
      *(int *)(iVar6 + -0x10) = auVar25._8_4_;
      *(int *)(iVar6 + -0x18) = auVar25._12_4_;
      iVar24 = iVar15 + (iVar12 + 0x1e) * 4;
      auVar25 = *pauVar7;
      uVar27 = in_q9._8_8_;
      uVar26 = auVar25._8_8_ & uVar27;
      *(int *)(iVar15 + (iVar12 + 0x1e) * 4) = auVar25._0_4_;
      *(int *)(iVar24 + -8) = auVar25._4_4_;
      *(int *)(iVar24 + -0x10) = (int)uVar26;
      *(int *)(iVar24 + -0x18) = (int)(uVar26 >> 0x20);
      auVar25 = VectorShiftLeft(pauVar7[1],0x10,0x20,0);
      *(int *)(iVar6 + -0x20) = auVar25._0_4_;
      *(int *)(iVar6 + -0x28) = auVar25._4_4_;
      *(int *)(iVar6 + -0x30) = auVar25._8_4_;
      *(int *)(iVar6 + -0x38) = auVar25._12_4_;
      auVar25 = pauVar7[1];
      uVar26 = auVar25._8_8_ & uVar27;
      *(int *)(iVar24 + -0x20) = auVar25._0_4_;
      *(int *)(iVar24 + -0x28) = auVar25._4_4_;
      *(int *)(iVar24 + -0x30) = (int)uVar26;
      *(int *)(iVar24 + -0x38) = (int)(uVar26 >> 0x20);
      auVar25 = VectorShiftLeft(pauVar7[2],0x10,0x20,0);
      *(int *)(iVar6 + -0x40) = auVar25._0_4_;
      *(int *)(iVar6 + -0x48) = auVar25._4_4_;
      *(int *)(iVar6 + -0x50) = auVar25._8_4_;
      *(int *)(iVar6 + -0x58) = auVar25._12_4_;
      auVar25 = pauVar7[2];
      uVar27 = auVar25._8_8_ & uVar27;
      *(int *)(iVar24 + -0x40) = auVar25._0_4_;
      *(int *)(iVar24 + -0x48) = auVar25._4_4_;
      *(int *)(iVar24 + -0x50) = (int)uVar27;
      *(int *)(iVar24 + -0x58) = (int)(uVar27 >> 0x20);
      auVar25 = VectorShiftLeft(pauVar7[3],0x10,0x20,0);
      *(int *)(iVar6 + -0x60) = auVar25._0_4_;
      *(int *)(iVar6 + -0x68) = auVar25._4_4_;
      *(int *)(iVar6 + -0x70) = auVar25._8_4_;
      *(int *)(iVar6 + -0x78) = auVar25._12_4_;
      auVar25 = pauVar7[3] & in_q9;
      *(int *)(iVar24 + -0x60) = auVar25._0_4_;
      *(int *)(iVar24 + -0x68) = auVar25._4_4_;
      *(int *)(iVar24 + -0x70) = auVar25._8_4_;
      *(int *)(iVar24 + -0x78) = auVar25._12_4_;
    }
    *param_2 = local_134;
  }
  else {
    uVar31 = in_q10._8_8_;
    if (param_4 == 0) {
      pauVar10 = pauVar7 + 8;
      iVar15 = *(int *)(iVar21 + DAT_000295d4);
      iVar17 = (*piVar19 + 0x20) * 4;
      pauVar22 = (undefined1 (*) [16])(iVar15 + iVar17);
      if ((undefined1 (*) [16])(iVar15 + iVar17 + -0x80) < pauVar10 && pauVar7 < pauVar22) {
        do {
          puVar9 = *pauVar7;
          pauVar22 = (undefined1 (*) [16])(pauVar22[-1] + 0xc);
          *(int *)*pauVar22 = *(int *)*pauVar7 << 0x10;
          pauVar7 = (undefined1 (*) [16])(puVar9 + 4);
        } while (pauVar10 != (undefined1 (*) [16])(puVar9 + 4));
      }
      else {
        puVar5 = (undefined8 *)(iVar15 + iVar17 + -0x10);
        VectorShiftLeft(*pauVar7,0x10,0x20,0);
        pauVar22 = (undefined1 (*) [16])VectorTableLookup(pauVar10,puVar5,2);
        VectorTableLookup(iVar4,puVar5,2);
        uVar29 = in_q10._0_8_;
        *puVar5 = uVar29;
        puVar5[1] = uVar31;
        VectorShiftLeft(*pauVar22,0x10,0x20,0);
        VectorTableLookup(pauVar10,puVar5,2);
        VectorTableLookup(iVar4,puVar5,2);
        puVar5[-2] = uVar29;
        puVar5[-1] = uVar31;
        VectorShiftLeft(pauVar7[2],0x10,0x20,0);
        pauVar22 = (undefined1 (*) [16])VectorTableLookup(pauVar10,puVar5,2);
        puVar13 = (undefined8 *)VectorTableLookup(iVar4,puVar5,2);
        *puVar13 = uVar29;
        puVar13[1] = uVar31;
        VectorShiftLeft(*pauVar22,0x10,0x20,0);
        VectorTableLookup(pauVar10,puVar5,2);
        VectorTableLookup(iVar4,puVar5,2);
        puVar5[-6] = uVar29;
        puVar5[-5] = uVar31;
        VectorShiftLeft(pauVar7[4],0x10,0x20,0);
        pauVar22 = (undefined1 (*) [16])VectorTableLookup(pauVar10,puVar5,2);
        puVar13 = (undefined8 *)VectorTableLookup(iVar4,puVar5,2);
        *puVar13 = uVar29;
        puVar13[1] = uVar31;
        puVar13 = puVar5 + -0xe;
        VectorShiftLeft(*pauVar22,0x10,0x20,0);
        VectorTableLookup(pauVar10,puVar13,2);
        VectorTableLookup(iVar4,puVar13,2);
        puVar5[-10] = uVar29;
        puVar5[-9] = uVar31;
        VectorShiftLeft(pauVar7[6],0x10,0x20,0);
        puVar11 = (undefined8 *)VectorTableLookup(pauVar10,puVar13,2);
        VectorTableLookup(iVar4,puVar13,2);
        *puVar11 = uVar29;
        puVar11[1] = uVar31;
        in_q9 = VectorShiftLeft(pauVar7[7],0x10,0x20,0);
        VectorTableLookup(pauVar10,puVar13,2);
        VectorTableLookup(iVar4,puVar13,2);
        *puVar13 = uVar29;
        puVar5[-0xd] = uVar31;
      }
      iVar17 = 0;
      *param_2 = pauVar10;
    }
    else {
      iVar17 = param_4 * 0x200;
      iVar12 = iVar17 + iVar4;
      pauVar10 = pauVar7 + 8;
      iVar15 = *(int *)(iVar21 + DAT_000295d4);
      pauVar22 = (undefined1 (*) [16])(iVar15 + (iVar12 + 0x20) * 4);
      if ((undefined1 (*) [16])(iVar15 + iVar12 * 4) < pauVar10 && pauVar7 < pauVar22) {
        do {
          puVar9 = *pauVar7;
          pauVar22 = (undefined1 (*) [16])(pauVar22[-1] + 0xc);
          *(uint *)*pauVar22 = *(uint *)*pauVar7 & 0xffff0000;
          pauVar7 = (undefined1 (*) [16])(puVar9 + 4);
        } while (pauVar10 != (undefined1 (*) [16])(puVar9 + 4));
      }
      else {
        auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar28._0_8_ = 0xffff0000ffff;
        pauVar22 = pauVar7 + 2;
        puVar14 = (undefined4 *)(iVar15 + (iVar12 + 0x1c) * 4);
        VectorTableLookup(pauVar10,pauVar22,2);
        VectorTableLookup(iVar4,pauVar22,2);
        *puVar14 = in_d22;
        puVar14[1] = in_register_000003b4;
        puVar14[2] = in_d23;
        puVar14[3] = in_register_000003bc;
        VectorTableLookup(pauVar10,pauVar22,2);
        VectorTableLookup(iVar4,pauVar22,2);
        puVar14[-4] = in_d22;
        puVar14[-3] = in_register_000003b4;
        puVar14[-2] = in_d23;
        puVar14[-1] = in_register_000003bc;
        puVar20 = puVar14 + -0xc;
        VectorTableLookup(pauVar10,puVar20,2);
        VectorTableLookup(iVar4,puVar20,2);
        puVar14[-8] = in_d22;
        puVar14[-7] = in_register_000003b4;
        puVar14[-6] = in_d23;
        puVar14[-5] = in_register_000003bc;
        VectorTableLookup(pauVar10,puVar20,2);
        VectorTableLookup(iVar4,puVar20,2);
        *puVar20 = in_d22;
        puVar14[-0xb] = in_register_000003b4;
        puVar14[-10] = in_d23;
        puVar14[-9] = in_register_000003bc;
        VectorTableLookup(pauVar10,pauVar7 + 5,2);
        VectorTableLookup(iVar4,pauVar7 + 5,2);
        puVar14[-0x10] = in_d22;
        puVar14[-0xf] = in_register_000003b4;
        puVar14[-0xe] = in_d23;
        puVar14[-0xd] = in_register_000003bc;
        puVar20 = puVar14 + -0x18;
        puVar5 = (undefined8 *)(puVar14 + -0x1c);
        VectorTableLookup(pauVar10,puVar20,2);
        VectorTableLookup(iVar4,puVar20,2);
        puVar14[-0x14] = in_d22;
        puVar14[-0x13] = in_register_000003b4;
        puVar14[-0x12] = in_d23;
        puVar14[-0x11] = in_register_000003bc;
        iVar15 = VectorTableLookup(pauVar10,puVar20,2);
        iVar17 = VectorTableLookup(iVar4,puVar20,2);
        *puVar20 = in_d22;
        puVar14[-0x17] = in_register_000003b4;
        puVar14[-0x16] = in_d23;
        puVar14[-0x15] = in_register_000003bc;
        auVar25 = pauVar7[7];
        in_q9 = auVar25 & ~*(undefined1 (*) [16])(auVar28 << 0x40 | auVar28);
        VectorTableLookup(pauVar10,puVar5,2);
        VectorTableLookup(iVar4,puVar5,2);
        *puVar5 = auVar25._0_8_;
        *(longlong *)(puVar14 + -0x1a) = auVar25._8_8_;
      }
      *param_2 = pauVar10;
    }
  }
  iVar12 = 0x1ff;
  local_12c = *(int *)(iVar21 + DAT_000295c8);
  puVar20 = (undefined4 *)(local_12c + 0x800);
  puVar14 = (undefined4 *)(*(int *)(iVar21 + DAT_000295cc) + 0x800);
  local_130 = param_3;
  do {
    uVar8 = iVar12 + iVar4;
    puVar14 = puVar14 + -1;
    iVar12 = iVar12 + -1;
    uVar3 = mul(*(undefined4 *)(iVar15 + (iVar17 + (uVar8 & 0x1ff)) * 4),*puVar14);
    auVar35._4_12_ = extraout_var;
    auVar35._0_4_ = extraout_s4;
    iVar4 = piVar19[param_4];
    puVar20 = puVar20 + -1;
    *puVar20 = uVar3;
  } while (iVar12 != -1);
  local_134 = &local_128;
  pauVar7 = (undefined1 (*) [16])(local_12c + 0x7f0);
  piVar19[param_4] = iVar4 + 0x1e0U & 0x1ff;
  do {
    pauVar10 = pauVar7 + -0x30;
    VectorTableLookup(puVar20,pauVar7 + -0x50,2);
    VectorTableLookup(iVar21,pauVar7 + -0x50,2);
    uVar3 = VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(*pauVar7,in_q9,4);
    pauVar7 = pauVar7 + -1;
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    auVar25 = VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,pauVar10,2);
    VectorTableLookup(iVar21,pauVar10,2);
    VectorAdd(auVar25,in_q9,4);
    VectorTableLookup(puVar20,uVar3,2);
    puVar9 = (undefined1 *)VectorTableLookup(iVar21,uVar3,2);
    *(longlong *)(puVar9 + 0x100) = in_q9._0_8_;
    *(longlong *)(puVar9 + 0x108) = in_q9._8_8_;
  } while (auStack_228 != puVar9);
  auVar30._8_8_ = local_110;
  auVar30._0_8_ = local_118;
  uVar3 = VectorTableLookup(puVar20,iVar15,2);
  VectorTableLookup(iVar21,iVar15,2);
  auVar34._4_4_ = uStack_44;
  auVar34._0_4_ = local_48;
  auVar34._8_8_ = local_40;
  auVar32._8_8_ = local_100;
  auVar32._0_8_ = local_108;
  uVar16 = VectorTableLookup(puVar20,uVar3,2);
  VectorTableLookup(iVar21,uVar3,2);
  pauVar7 = (undefined1 (*) [16])VectorTableLookup(puVar20,uVar16,2);
  pauVar10 = (undefined1 (*) [16])VectorTableLookup(iVar21,uVar16,2);
  uVar3 = VectorTableLookup(puVar20,local_e4,2);
  VectorTableLookup(iVar21,uVar3,2);
  pauVar22 = (undefined1 (*) [16])VectorTableLookup(puVar20,param_4,2);
  iVar4 = VectorTableLookup(iVar21,param_4,2);
  VectorTableLookup(puVar20,&local_b4,2);
  auVar28 = VectorSub(*pauVar7,auVar30,4);
  VectorTableLookup(iVar21,&local_b4,2);
  auVar33._8_8_ = uStack_bc;
  auVar33._0_8_ = local_c4;
  auVar33 = VectorAdd(auVar33,in_q3,4);
  pauVar23 = (undefined1 (*) [16])VectorTableLookup(puVar20,&local_b4,2);
  VectorTableLookup(iVar21,&local_b4,2);
  auVar25 = VectorSub(*pauVar10,auVar34,4);
  auVar34 = VectorAdd(*pauVar23,in_q2,4);
  auVar2._4_4_ = uStack_a0;
  auVar2._0_4_ = local_a4;
  auVar2._8_8_ = uStack_9c;
  auVar1._8_8_ = uStack_ac;
  auVar1._0_8_ = local_b4;
  auVar30 = VectorSub(auVar2,auVar32,4);
  auVar32 = VectorAdd(auVar1,in_q15,4);
  *(longlong *)*pauVar23 = auVar34._0_8_;
  *(longlong *)(*pauVar23 + 8) = auVar34._8_8_;
  local_c4 = auVar33._0_8_;
  uStack_bc = auVar33._8_8_;
  auVar35 = VectorAdd(*pauVar22,auVar35,4);
  local_b4 = auVar32._0_8_;
  uStack_ac = auVar32._8_8_;
  local_74 = local_74 - local_5c;
  local_a4 = auVar30._0_4_;
  uStack_a0 = auVar30._4_4_;
  uStack_9c = auVar30._8_8_;
  *(longlong *)*pauVar7 = auVar28._0_8_;
  *(longlong *)(*pauVar7 + 8) = auVar28._8_8_;
  local_70 = local_70 - local_60;
  *(longlong *)*pauVar10 = auVar25._0_8_;
  *(longlong *)(*pauVar10 + 8) = auVar25._8_8_;
  local_6c = local_6c - local_64;
  piVar19 = local_130 + 0x10;
  *(longlong *)*pauVar22 = auVar35._0_8_;
  *(longlong *)(*pauVar22 + 8) = auVar35._8_8_;
  piVar18 = local_130 + 0xf;
  puVar14 = (undefined4 *)(*(int *)(iVar21 + iVar4) + 0x784);
  uVar27 = local_58;
  do {
    piVar19 = piVar19 + -1;
    *piVar19 = 0;
    piVar18 = piVar18 + 1;
    *piVar18 = 0;
    pauVar7 = local_134;
    puVar20 = puVar14;
    do {
      puVar9 = (undefined1 *)((int)pauVar7 + 8);
      iVar4 = mul((int)uVar27,(int)(uVar27 >> 0x20),(int)local_50,puVar20[-1],
                  *(undefined4 *)((int)pauVar7 + 0x40));
      iVar21 = mul(*puVar20,*(undefined4 *)((int)pauVar7 + 0x44));
      local_50 = (ulonglong)extraout_s2;
      uVar27 = uVar27 & 0xffffffff;
      *piVar19 = *piVar19 + iVar4 + iVar21;
      *piVar18 = *piVar18 + (iVar4 - iVar21);
      pauVar7 = (undefined1 (*) [16])puVar9;
      puVar20 = puVar20 + 2;
    } while (puVar9 != (undefined1 *)((int)&uStack_ac + 4));
    puVar14 = puVar14 + -0x20;
  } while (local_130 != piVar19);
  return;
}



/* ===== L3_mdct_sub @ 00029b54 size=2768 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

void L3_mdct_sub(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  int *piVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined4 *puVar35;
  bool bVar36;
  longlong lVar37;
  undefined1 in_q8 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_f8 [4];
  int local_f4;
  undefined4 local_ec;
  undefined4 local_e0;
  int local_d8;
  undefined4 local_2c [2];
  
  iVar6 = *(int *)(param_1 + 0x70);
  puVar33 = auStack_f8;
  if (0 < iVar6) {
    param_3 = 0;
  }
  local_f4 = param_1;
  local_d8 = DAT_0002a624 + 0x29b74;
  if (0 < iVar6) {
    local_e0 = param_3;
  }
  iVar10 = *(int *)(param_1 + 0x6c);
  puVar34 = auStack_f8;
  if (0 < iVar6) {
    local_ec = param_3;
    do {
      iVar21 = *(int *)(puVar33 + 0x18);
      *(int *)(puVar33 + 0xc) = *(int *)(puVar33 + 0xc) + 1;
      *(int *)(puVar33 + 0x1c) = iVar10 + -1;
      if (iVar10 != 0) {
        iVar6 = (iVar10 + -1) * 0x1b00;
        iVar13 = *(int *)(puVar33 + 4);
        piVar26 = (int *)(iVar13 + iVar6 + 0xab74 + iVar21);
        *(int *)(puVar33 + 8) = iVar13 + iVar10 * 0x900 + iVar21 * 2;
        iVar10 = *(int *)(puVar33 + 0x20);
        *(int *)(puVar33 + 0x14) = iVar13 + iVar6 + 0x1b00 + iVar21;
        puVar25 = (undefined4 *)(iVar13 + iVar6 + 0xab14 + iVar21);
        puVar18 = (undefined4 *)(puVar33 + 0x40);
        *(undefined4 *)(puVar33 + 0x34) = *(undefined4 *)(iVar10 + DAT_0002a628);
        *(undefined4 *)(puVar33 + 0x2c) = *(undefined4 *)(iVar10 + DAT_0002a62c);
        *(undefined1 **)(puVar33 + 0x30) = puVar33 + 0x84;
        *(undefined4 *)(puVar33 + 0x28) = *(undefined4 *)(iVar10 + DAT_0002a630);
        while( true ) {
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          puVar4 = puVar25;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          iVar10 = *(int *)(puVar33 + 0x14);
          puVar24 = puVar25 + 0x80;
          auVar38 = FloatVectorNeg(in_q8,1,4);
          iVar6 = iVar10 + 0x9000;
          puVar31 = (undefined4 *)(iVar10 + 0x9114);
          puVar4 = (undefined4 *)(iVar10 + 0x9214);
          *puVar25 = auVar38._0_4_;
          puVar7 = (undefined4 *)(iVar10 + 0x9314);
          puVar25[2] = auVar38._4_4_;
          puVar9 = (undefined4 *)(iVar10 + 0x9414);
          puVar22 = (undefined4 *)(iVar10 + 0x9514);
          puVar25[4] = auVar38._8_4_;
          puVar25[6] = auVar38._12_4_;
          puVar14 = (undefined4 *)(iVar10 + 0x9614);
          iVar21 = iVar10 + 0x9710;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar35 = (undefined4 *)(iVar21 + 4);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar25[0x40] = auVar38._0_4_;
          puVar25[0x42] = auVar38._4_4_;
          puVar25[0x44] = auVar38._8_4_;
          puVar25[0x46] = auVar38._12_4_;
          puVar31 = (undefined4 *)(iVar6 + 0x814);
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar4 = (undefined4 *)(iVar6 + 0x34);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x82] = auVar38._4_4_;
          puVar25[0x84] = auVar38._8_4_;
          puVar25[0x86] = auVar38._12_4_;
          puVar24 = puVar25 + 0xc0;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar7 = (undefined4 *)(iVar6 + 0x134);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0xc2] = auVar38._4_4_;
          puVar25[0xc4] = auVar38._8_4_;
          puVar25[0xc6] = auVar38._12_4_;
          puVar24 = puVar25 + 0x100;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar9 = (undefined4 *)(iVar6 + 0x234);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x102] = auVar38._4_4_;
          puVar25[0x104] = auVar38._8_4_;
          puVar25[0x106] = auVar38._12_4_;
          puVar24 = puVar25 + 0x140;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar22 = (undefined4 *)(iVar6 + 0x334);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x142] = auVar38._4_4_;
          puVar25[0x144] = auVar38._8_4_;
          puVar25[0x146] = auVar38._12_4_;
          puVar24 = puVar25 + 0x180;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar14 = (undefined4 *)(iVar6 + 0x434);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x182] = auVar38._4_4_;
          puVar25[0x184] = auVar38._8_4_;
          puVar25[0x186] = auVar38._12_4_;
          puVar24 = puVar25 + 0x1c0;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar35 = (undefined4 *)(iVar6 + 0x534);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x1c2] = auVar38._4_4_;
          puVar25[0x1c4] = auVar38._8_4_;
          puVar25[0x1c6] = auVar38._12_4_;
          puVar24 = puVar25 + 0x200;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar31 = (undefined4 *)(iVar6 + 0x634);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x202] = auVar38._4_4_;
          puVar25[0x204] = auVar38._8_4_;
          puVar25[0x206] = auVar38._12_4_;
          puVar24 = puVar25 + 8;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar4 = (undefined4 *)(iVar6 + 0x734);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[10] = auVar38._4_4_;
          puVar25[0xc] = auVar38._8_4_;
          puVar25[0xe] = auVar38._12_4_;
          puVar24 = puVar25 + 0x48;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar7 = (undefined4 *)(iVar6 + 0x834);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x4a] = auVar38._4_4_;
          puVar25[0x4c] = auVar38._8_4_;
          puVar25[0x4e] = auVar38._12_4_;
          puVar24 = puVar25 + 0x88;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar9 = (undefined4 *)(iVar6 + 0x54);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x8a] = auVar38._4_4_;
          puVar25[0x8c] = auVar38._8_4_;
          puVar25[0x8e] = auVar38._12_4_;
          puVar24 = puVar25 + 200;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar22 = (undefined4 *)(iVar6 + 0x154);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0xca] = auVar38._4_4_;
          puVar25[0xcc] = auVar38._8_4_;
          puVar25[0xce] = auVar38._12_4_;
          puVar24 = puVar25 + 0x108;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar14 = (undefined4 *)(iVar6 + 0x254);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x10a] = auVar38._4_4_;
          puVar25[0x10c] = auVar38._8_4_;
          puVar25[0x10e] = auVar38._12_4_;
          puVar24 = puVar25 + 0x148;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar35 = (undefined4 *)(iVar6 + 0x354);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x14a] = auVar38._4_4_;
          puVar25[0x14c] = auVar38._8_4_;
          puVar25[0x14e] = auVar38._12_4_;
          puVar24 = puVar25 + 0x188;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar31 = (undefined4 *)(iVar6 + 0x454);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x18a] = auVar38._4_4_;
          puVar25[0x18c] = auVar38._8_4_;
          puVar25[0x18e] = auVar38._12_4_;
          puVar24 = puVar25 + 0x1c8;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar4 = (undefined4 *)(iVar6 + 0x554);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x1ca] = auVar38._4_4_;
          puVar25[0x1cc] = auVar38._8_4_;
          puVar25[0x1ce] = auVar38._12_4_;
          puVar24 = puVar25 + 0x208;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar7 = (undefined4 *)(iVar6 + 0x654);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *puVar24 = auVar38._0_4_;
          puVar25[0x20a] = auVar38._4_4_;
          puVar25[0x20c] = auVar38._8_4_;
          puVar25[0x20e] = auVar38._12_4_;
          puVar24 = puVar25 + 0x10;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar9 = (undefined4 *)(iVar6 + 0x754);
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar11 = (undefined4 *)(iVar6 + 0x854);
          *puVar24 = auVar38._0_4_;
          puVar25[0x12] = auVar38._4_4_;
          puVar25[0x14] = auVar38._8_4_;
          puVar25[0x16] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          *(int *)(puVar33 + 0x10) = *(int *)(puVar33 + 8) + 0x7c88;
          puVar25[0x50] = auVar38._0_4_;
          puVar25[0x52] = auVar38._4_4_;
          puVar25[0x54] = auVar38._8_4_;
          puVar25[0x56] = auVar38._12_4_;
          puVar22 = puVar25 + 0x90;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar27 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          iVar6 = iVar10 + 0x868c;
          *puVar22 = auVar38._0_4_;
          puVar25[0x92] = auVar38._4_4_;
          puVar25[0x94] = auVar38._8_4_;
          puVar25[0x96] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar35;
            puVar35 = puVar35 + 1;
            *puVar27 = *puVar35;
            puVar35 = puVar35 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          iVar21 = iVar10 + 0x8f8c;
          puVar25[0xd0] = auVar38._0_4_;
          puVar25[0xd2] = auVar38._4_4_;
          puVar25[0xd4] = auVar38._8_4_;
          puVar25[0xd6] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          *(int *)(puVar33 + 0x24) = iVar10 + 0x860c;
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar25[0x110] = auVar38._0_4_;
          puVar25[0x112] = auVar38._4_4_;
          puVar25[0x114] = auVar38._8_4_;
          puVar25[0x116] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar27 = *puVar4;
            puVar4 = puVar4 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar25[0x150] = auVar38._0_4_;
          puVar25[0x152] = auVar38._4_4_;
          puVar25[0x154] = auVar38._8_4_;
          puVar25[0x156] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar27 = *puVar7;
            puVar7 = puVar7 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar25[400] = auVar38._0_4_;
          puVar25[0x192] = auVar38._4_4_;
          puVar25[0x194] = auVar38._8_4_;
          puVar25[0x196] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar27 = *puVar9;
            puVar9 = puVar9 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          auVar38 = FloatVectorNeg(auVar38,1,4);
          puVar25[0x1d0] = auVar38._0_4_;
          puVar25[0x1d2] = auVar38._4_4_;
          puVar25[0x1d4] = auVar38._8_4_;
          puVar25[0x1d6] = auVar38._12_4_;
          puVar29 = (undefined4 *)0x380;
          puVar27 = (undefined4 *)0x390;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar11;
            puVar11 = puVar11 + 1;
            *puVar27 = *puVar11;
            puVar11 = puVar11 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar29 = (undefined4 *)0x388;
          puVar27 = (undefined4 *)0x398;
          lVar37 = 2;
          while( true ) {
            *puVar29 = *puVar11;
            puVar11 = puVar11 + 1;
            *puVar27 = *puVar11;
            puVar11 = puVar11 + 1;
            lVar37 = lVar37 + -1;
            if (lVar37 == 0) break;
            puVar29 = puVar29 + 1;
            puVar27 = puVar27 + 1;
          }
          in_q8 = FloatVectorNeg(auVar38,1,4);
          puVar25[0x210] = in_q8._0_4_;
          puVar25[0x212] = in_q8._4_4_;
          puVar25[0x214] = in_q8._8_4_;
          puVar25[0x216] = in_q8._12_4_;
          *piVar26 = -*piVar26;
          piVar26[0x40] = -piVar26[0x40];
          piVar26[0x80] = -piVar26[0x80];
          piVar26[0xc0] = -piVar26[0xc0];
          piVar26[0x100] = -piVar26[0x100];
          piVar26[0x140] = -piVar26[0x140];
          piVar26[0x180] = -piVar26[0x180];
          piVar26[0x1c0] = -piVar26[0x1c0];
          piVar26[0x200] = -piVar26[0x200];
          piVar26[2] = -piVar26[2];
          piVar26[0x42] = -piVar26[0x42];
          piVar26[0x82] = -piVar26[0x82];
          piVar26[0xc2] = -piVar26[0xc2];
          piVar26[0x102] = -piVar26[0x102];
          piVar26[0x142] = -piVar26[0x142];
          piVar26[0x182] = -piVar26[0x182];
          piVar26[0x1c2] = -piVar26[0x1c2];
          piVar26[0x202] = -piVar26[0x202];
          piVar26[4] = -piVar26[4];
          piVar26[0x44] = -piVar26[0x44];
          piVar26[0x84] = -piVar26[0x84];
          piVar26[0xc4] = -piVar26[0xc4];
          piVar26[0x104] = -piVar26[0x104];
          piVar26[0x144] = -piVar26[0x144];
          piVar26[0x184] = -piVar26[0x184];
          piVar26[0x1c4] = -piVar26[0x1c4];
          piVar26[0x204] = -piVar26[0x204];
          piVar26[6] = -piVar26[6];
          piVar26[0x46] = -piVar26[0x46];
          piVar26[0x86] = -piVar26[0x86];
          piVar26[0xc6] = -piVar26[0xc6];
          piVar26[0x106] = -piVar26[0x106];
          puVar29 = *(undefined4 **)(puVar33 + 0x34);
          piVar26[0x146] = -piVar26[0x146];
          piVar26[0x186] = -piVar26[0x186];
          iVar10 = piVar26[0x1c6];
          iVar13 = piVar26[0x206];
          *(undefined4 **)(puVar33 + 0x38) = puVar25;
          piVar26[0x1c6] = -iVar10;
          piVar26[0x206] = -iVar13;
          *(int **)(puVar33 + 0x3c) = piVar26;
          do {
            iVar10 = 0x12;
            puVar25 = *(undefined4 **)(puVar33 + 0x30);
            do {
              iVar13 = iVar10 * 0x80;
              uVar8 = *(undefined4 *)(iVar21 + iVar10 * 0x80);
              iVar10 = iVar10 + -1;
              *puVar25 = *(undefined4 *)(iVar6 + iVar13);
              puVar25[0x12] = uVar8;
              puVar25 = puVar25 + -1;
            } while (iVar10 != 0);
            piVar26 = *(int **)(puVar33 + 0x10);
            puVar25 = puVar29 + 0x288;
            do {
              puVar4 = (undefined4 *)(puVar33 + 0xd0);
              piVar26 = piVar26 + -1;
              *piVar26 = 0;
              puVar27 = puVar25;
              do {
                puVar4 = puVar4 + -1;
                puVar27 = puVar27 + -1;
                iVar10 = mul(*puVar4,*puVar27);
                *piVar26 = *piVar26 + iVar10;
              } while (puVar4 != puVar18);
              puVar25 = puVar25 + -0x24;
            } while (puVar25 != puVar29);
            iVar6 = iVar6 + -4;
            iVar21 = iVar21 + -4;
            *(int *)(puVar33 + 0x10) = *(int *)(puVar33 + 0x10) + -0x48;
          } while (iVar6 != *(int *)(puVar33 + 0x24));
          uVar8 = *(undefined4 *)(puVar33 + 0x3c);
          piVar26 = (int *)(*(int *)(puVar33 + 8) + 0x7c20);
          puVar25 = *(undefined4 **)(puVar33 + 0x2c);
          *(undefined4 **)(puVar33 + 0x3c) = puVar18;
          *(undefined4 *)(puVar33 + 0x24) = *(undefined4 *)(puVar33 + 0x38);
          *(int *)(puVar33 + 0x10) = *(int *)(puVar33 + 8) + 0x7368;
          *(undefined4 *)(puVar33 + 0x38) = uVar8;
          do {
            puVar18 = puVar25 + 8;
            puVar29 = (undefined4 *)(*(int *)(puVar33 + 0x28) + 0x20);
            piVar15 = piVar26;
            piVar23 = piVar26 + 0xf;
            do {
              puVar18 = puVar18 + -1;
              iVar6 = muls(*piVar15,*puVar18);
              puVar29 = puVar29 + -1;
              iVar10 = muls(*piVar23,*puVar29);
              iVar21 = muls(*piVar23,*puVar18);
              iVar13 = muls(*piVar15,*puVar29);
              *piVar15 = iVar6 + iVar10;
              *piVar23 = iVar21 - iVar13;
              piVar15 = piVar15 + 1;
              piVar23 = piVar23 + -1;
            } while (puVar18 != puVar25);
            piVar26 = piVar26 + -0x12;
          } while (piVar26 != *(int **)(puVar33 + 0x10));
          *(int *)(puVar33 + 0x14) = *(int *)(puVar33 + 0x14) + -0x1b00;
          puVar25 = (undefined4 *)(*(int *)(puVar33 + 0x24) + -0x1b00);
          puVar18 = *(undefined4 **)(puVar33 + 0x3c);
          piVar26 = (int *)(*(int *)(puVar33 + 0x38) + -0x1b00);
          *(int *)(puVar33 + 8) = *(int *)(puVar33 + 8) + -0x900;
          if (*(int *)(puVar33 + 0x1c) == 0) break;
          *(int *)(puVar33 + 0x1c) = *(int *)(puVar33 + 0x1c) + -1;
        }
        iVar6 = *(int *)(*(int *)(puVar33 + 4) + 0x70);
        iVar10 = *(int *)(*(int *)(puVar33 + 4) + 0x6c);
      }
      *(int *)(puVar33 + 0x18) = *(int *)(puVar33 + 0x18) + 0x900;
      puVar34 = puVar33;
    } while (*(int *)(puVar33 + 0xc) < iVar6);
  }
  iVar21 = iVar10 + -1;
  if (iVar10 != 0) {
    iVar10 = *(int *)(puVar34 + 4);
    puVar5 = (undefined8 *)(iVar21 * 0x1b00 + iVar10 + 0xa110);
    do {
      iVar13 = (0x970 - iVar10) + (int)puVar5;
      puVar12 = puVar5 + 0x120;
      puVar32 = puVar5 + 0x12a;
      do {
        iVar19 = iVar13 + iVar6 * 0x900;
        iVar28 = iVar13 + iVar6 * 0x900 + 0x10;
        bVar36 = SBORROW4(iVar13,iVar28);
        iVar1 = iVar13 - iVar28;
        if (iVar13 < iVar28) {
          bVar36 = SBORROW4(iVar19,iVar13 + 0x10);
          iVar1 = iVar19 - (iVar13 + 0x10);
        }
        if (iVar1 < 0 == bVar36) {
          puVar20 = puVar32 + iVar6 * 0x120 + 4;
          puVar17 = puVar32 + iVar6 * 0x120 + 2;
          uVar8 = *(undefined4 *)((int)puVar20 + 4);
          uVar2 = *(undefined4 *)(puVar20 + 1);
          uVar3 = *(undefined4 *)((int)puVar20 + 0xc);
          puVar30 = puVar32 + iVar6 * 0x120;
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)puVar20;
          *(undefined4 *)((int)puVar12 + 0x74) = uVar8;
          *(undefined4 *)(puVar12 + 0xf) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x7c) = uVar3;
          pauVar16 = (undefined1 (*) [16])(puVar12 + iVar6 * 0x120);
          uVar8 = *(undefined4 *)((int)puVar17 + 4);
          uVar2 = *(undefined4 *)(puVar17 + 1);
          uVar3 = *(undefined4 *)((int)puVar17 + 0xc);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)puVar17;
          *(undefined4 *)((int)puVar12 + 100) = uVar8;
          *(undefined4 *)(puVar12 + 0xd) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x6c) = uVar3;
          uVar8 = *(undefined4 *)((int)puVar30 + 4);
          uVar2 = *(undefined4 *)(puVar30 + 1);
          uVar3 = *(undefined4 *)((int)puVar30 + 0xc);
          *(undefined4 *)puVar32 = *(undefined4 *)puVar30;
          *(undefined4 *)((int)puVar32 + 4) = uVar8;
          *(undefined4 *)(puVar32 + 1) = uVar2;
          *(undefined4 *)((int)puVar32 + 0xc) = uVar3;
          uVar8 = *(undefined4 *)(pauVar16[4] + 4);
          uVar2 = *(undefined4 *)(pauVar16[4] + 8);
          uVar3 = *(undefined4 *)(pauVar16[4] + 0xc);
          *(undefined4 *)(puVar12 + 8) = *(undefined4 *)pauVar16[4];
          *(undefined4 *)((int)puVar12 + 0x44) = uVar8;
          *(undefined4 *)(puVar12 + 9) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x4c) = uVar3;
          puVar17 = puVar12 + iVar6 * 0x120 + 4;
          uVar8 = *(undefined4 *)(pauVar16[3] + 4);
          uVar2 = *(undefined4 *)(pauVar16[3] + 8);
          uVar3 = *(undefined4 *)(pauVar16[3] + 0xc);
          *(undefined4 *)(puVar12 + 6) = *(undefined4 *)pauVar16[3];
          *(undefined4 *)((int)puVar12 + 0x34) = uVar8;
          *(undefined4 *)(puVar12 + 7) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x3c) = uVar3;
          puVar20 = puVar12 + iVar6 * 0x120 + 2;
          uVar8 = *(undefined4 *)((int)puVar17 + 4);
          uVar2 = *(undefined4 *)(puVar17 + 1);
          uVar3 = *(undefined4 *)((int)puVar17 + 0xc);
          *(undefined4 *)(puVar12 + 4) = *(undefined4 *)puVar17;
          *(undefined4 *)((int)puVar12 + 0x24) = uVar8;
          *(undefined4 *)(puVar12 + 5) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x2c) = uVar3;
          uVar8 = *(undefined4 *)((int)puVar20 + 4);
          uVar2 = *(undefined4 *)(puVar20 + 1);
          uVar3 = *(undefined4 *)((int)puVar20 + 0xc);
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)puVar20;
          *(undefined4 *)((int)puVar12 + 0x14) = uVar8;
          *(undefined4 *)(puVar12 + 3) = uVar2;
          *(undefined4 *)((int)puVar12 + 0x1c) = uVar3;
          auVar38 = *pauVar16;
          *puVar12 = auVar38._0_8_;
          puVar12[1] = auVar38._8_8_;
        }
        else {
          puVar20 = puVar32 + iVar6 * 0x120 + 6;
          puVar17 = puVar12 + 0x10;
          do {
            puVar20 = (undefined8 *)((int)puVar20 + -4);
            puVar17 = (undefined8 *)((int)puVar17 + -4);
            *(undefined4 *)puVar17 = *(undefined4 *)puVar20;
          } while (puVar12 != puVar17);
        }
        puVar12 = puVar12 + -0x10;
        iVar13 = iVar13 + -0x80;
        puVar32 = puVar32 + -0x10;
      } while (puVar12 != puVar5);
      bVar36 = iVar21 != 0;
      puVar5 = puVar5 + -0x360;
      iVar21 = iVar21 + -1;
    } while (bVar36);
  }
  return;
}



/* ===== Mp3EncodeVariableInit @ 0002a638 size=1112 ===== */

undefined4 * Mp3EncodeVariableInit(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *__ptr;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_r10;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  void *local_1f8 [3];
  uint local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  int local_1c0;
  int local_1bc;
  uint local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined8 local_19c;
  int local_194;
  int local_190 [4];
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  
  local_1e0 = param_3;
  if (param_1 < 0x2b12) {
    uVar4 = 0;
    local_1ec = 0;
    if (param_3 < 0xa1) {
      uVar6 = 0;
    }
    else {
      local_1e0 = 0xa0;
      uVar6 = uVar4;
    }
  }
  else if (param_1 < 0x5623) {
    uVar6 = 2;
    local_1ec = 2;
    if (0xa0 < param_3) {
      local_1e0 = 0xa0;
    }
    uVar4 = 0;
  }
  else {
    uVar6 = 3;
    uVar4 = 1;
    local_1ec = 3;
    if (0x140 < param_3) {
      local_1e0 = 0x140;
    }
  }
  iVar1 = local_1e0;
  uStack_1b0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_2 != 1) {
    local_1e4 = 0;
    unaff_r10 = local_1e4;
  }
  else {
    local_1e4 = 3;
  }
  local_190[0] = *(int *)(DAT_0002aa98 + 0x2a690);
  local_190[1] = *(int *)(DAT_0002aa98 + 0x2a694);
  local_190[2] = *(int *)(DAT_0002aa98 + 0x2a698);
  local_190[3] = *(undefined4 *)(DAT_0002aa98 + 0x2a69c);
  if (param_2 == 1) {
    unaff_r10 = 1;
  }
  local_1b4 = 0;
  local_1e8 = 1;
  local_180 = *(undefined4 *)(DAT_0002aa98 + 0x2a6a0);
  local_17c = *(undefined4 *)(DAT_0002aa98 + 0x2a6a4);
  local_178 = *(int *)(DAT_0002aa98 + 0x2a6a8);
  local_174 = *(int *)(DAT_0002aa98 + 0x2a6ac);
  local_1a4 = 1;
  local_19c = CONCAT44(local_19c._4_4_,1);
  uVar7 = 0;
  local_1dc = 0;
  local_170 = *(int *)(DAT_0002aa98 + 0x2a6b0);
  local_16c = *(int *)(DAT_0002aa98 + 0x2a6b4);
  local_168 = *(int *)(DAT_0002aa98 + 0x2a6b8);
  local_164 = *(int *)(DAT_0002aa98 + 0x2a6bc);
  local_1d8 = 0;
  if (param_1 == local_190[0]) {
LAB_0002a9e8:
    uVar8 = 0;
    uVar6 = uVar7;
  }
  else if (param_1 == local_190[1]) {
LAB_0002a9fc:
    uVar8 = 1;
    uVar6 = uVar7;
  }
  else {
    if (param_1 != local_190[2]) {
      if (param_1 == local_178) {
        uVar7 = 2;
        goto LAB_0002a9e8;
      }
      if (param_1 == local_174) {
        uVar7 = 2;
        goto LAB_0002a9fc;
      }
      if (param_1 == local_170) {
        uVar7 = 2;
      }
      else {
        if (param_1 == local_16c) {
          uVar7 = 3;
          goto LAB_0002a9e8;
        }
        if (param_1 == local_168) {
          uVar7 = 3;
          goto LAB_0002a9fc;
        }
        uVar8 = uVar7;
        if (param_1 != local_164) goto LAB_0002a758;
        uVar7 = 3;
      }
    }
    uVar8 = 2;
    uVar6 = uVar7;
  }
  uVar4 = uVar6 & 1;
  local_1ec = uVar6;
LAB_0002a758:
  local_1bc = param_1;
  local_1b8 = uVar8;
  local_1a0 = param_2;
  memcpy(local_190,(void *)(DAT_0002aa9c + 0x2a7a0),0x78);
  if (local_190[uVar4 * 0xf + 1] < iVar1) {
    if (local_190[uVar4 * 0xf + 2] < iVar1) {
      if (local_190[uVar4 * 0xf + 3] < iVar1) {
        if (local_190[uVar4 * 0xf + 4] < iVar1) {
          if (local_190[uVar4 * 0xf + 5] < iVar1) {
            if (local_190[uVar4 * 0xf + 6] < iVar1) {
              if (local_190[uVar4 * 0xf + 7] < iVar1) {
                if (local_190[uVar4 * 0xf + 8] < iVar1) {
                  if (local_190[uVar4 * 0xf + 9] < iVar1) {
                    if (local_190[uVar4 * 0xf + 10] < iVar1) {
                      if (local_190[uVar4 * 0xf + 0xb] < iVar1) {
                        if (local_190[uVar4 * 0xf + 0xc] < iVar1) {
                          if (local_190[uVar4 * 0xf + 0xd] < iVar1) {
                            if (local_190[uVar4 * 0xf + 0xe] < iVar1) {
                              iVar5 = 0;
                            }
                            else {
                              iVar5 = 0xe;
                            }
                          }
                          else {
                            iVar5 = 0xd;
                          }
                        }
                        else {
                          iVar5 = 0xc;
                        }
                      }
                      else {
                        iVar5 = 0xb;
                      }
                    }
                    else {
                      iVar5 = 10;
                    }
                  }
                  else {
                    iVar5 = 9;
                  }
                }
                else {
                  iVar5 = 8;
                }
              }
              else {
                iVar5 = 7;
              }
            }
            else {
              iVar5 = 6;
            }
          }
          else {
            iVar5 = 5;
          }
        }
        else {
          iVar5 = 4;
        }
      }
      else {
        iVar5 = 3;
      }
    }
    else {
      iVar5 = 2;
    }
  }
  else {
    iVar5 = 1;
  }
  local_1c0 = iVar5;
  memcpy(local_190,(void *)(DAT_0002aaa0 + 0x2a8f8),0x168);
  local_194 = local_190[uVar8 * 0x1e + unaff_r10 * 0xf + iVar5];
  __ptr = malloc(0x1200);
  if (__ptr == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_1f8[0] = __ptr;
    puVar2 = calloc(0xd7bc,1);
    if (puVar2 == (undefined4 *)0x0) {
      free(__ptr);
      return (undefined4 *)0x0;
    }
    if (uVar6 == 3) {
      local_19c = DAT_0002aa90;
      iVar5 = 0x480;
      if (param_2 == 1) {
        uVar3 = 0xa8;
      }
      else {
        uVar3 = 0x120;
      }
      puVar2[4] = uVar3;
      local_1d0 = 0x480;
    }
    else {
      iVar5 = 0x240;
      local_1d0 = 0x240;
      if (param_2 == 1) {
        uVar3 = 0x68;
      }
      else {
        uVar3 = 0xa8;
      }
      puVar2[4] = uVar3;
      local_19c = CONCAT44(0x7f8,(undefined4)local_19c);
    }
    puVar2[0x35ed] = DAT_0002aaa4 + 0x2a8fc + uVar6 * 0x114 + uVar8 * 0x5c;
    uVar9 = FUN_0002bd68(iVar5 * iVar1 * 0x7d,param_1);
    puVar2[1] = (int)uVar9;
    puVar2[2] = 0;
    *puVar2 = (int)((ulonglong)uVar9 >> 0x20);
    memcpy(puVar2 + 5,local_1f8,0x68);
    open_bit_stream(puVar2);
    puVar2[0x35ee] = puVar2[0x1b] * puVar2[0xf];
  }
  return puVar2;
}



/* ===== L3_compress @ 0002aaa8 size=276 ===== */

void L3_compress(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 local_30;
  
  iVar1 = param_1[0x14];
  iVar2 = param_1[2] + *param_1;
  param_1[2] = iVar2;
  iVar3 = iVar2;
  if (iVar1 <= iVar2) {
    iVar3 = iVar2 - iVar1;
  }
  local_30 = CONCAT44(param_1[5],param_1[5]);
  if (iVar1 <= iVar2) {
    param_1[2] = iVar3;
  }
  param_1[0xe] = (uint)(iVar1 <= iVar2);
  iVar3 = ((uint)(iVar1 <= iVar2) + param_1[1]) * 8;
  iVar1 = param_1[0x1c];
  iVar2 = param_1[0x1b];
  param_1[0x10] = iVar3;
  param_1[3] = iVar3 - param_1[4] >> ((iVar1 + iVar2) - 2U & 0xff);
  if (0 < iVar1) {
    iVar3 = 0;
    piVar8 = param_1 + 0x2ce4;
    do {
      iVar3 = iVar3 + 1;
      if (0 < iVar2) {
        iVar1 = 0;
        piVar6 = piVar8;
        puVar7 = &local_30;
        do {
          piVar4 = piVar6 + -0x240;
          do {
            piVar5 = piVar4 + 0x20;
            L3_window_filter_subband(param_1,puVar7,piVar4,iVar1);
            piVar4 = piVar5;
          } while (piVar6 != piVar5);
          iVar2 = param_1[0x1b];
          iVar1 = iVar1 + 1;
          puVar7 = (undefined8 *)((int)puVar7 + 4);
          piVar6 = piVar6 + 0x6c0;
        } while (iVar1 < iVar2);
        iVar1 = param_1[0x1c];
      }
      piVar8 = piVar8 + 0x240;
    } while (iVar3 < iVar1);
  }
  L3_mdct_sub(param_1);
  L3_iteration_loop(param_1);
  L3_format_bitstream(param_1,param_3);
  return;
}



/* ===== Mp3EncodeDeinit @ 0002abbc size=36 ===== */

void Mp3EncodeDeinit(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  close_bit_stream();
  free(*(void **)((int)param_1 + 0x14));
  free(param_1);
  return;
}



/* ===== quantize @ 0002abe0 size=140 ===== */

undefined4 quantize(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = DAT_0002ac74;
  iVar5 = DAT_0002ac6c + 0x2ac00;
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + DAT_0002ac70) + (param_2 + -1) * 4);
  iVar1 = mulr(*(undefined4 *)(DAT_0002ac74 + 0x2ac0c),uVar7);
  if (iVar1 < 10000) {
    if (0 < param_3) {
      puVar4 = (undefined4 *)(iVar6 + 0x2ac10);
      iVar6 = *(int *)(iVar5 + DAT_0002ac78);
      piVar2 = param_1;
      do {
        puVar4 = puVar4 + 1;
        iVar1 = mulr(*puVar4,uVar7);
        piVar3 = piVar2 + 1;
        *piVar2 = (int)*(short *)(iVar6 + iVar1 * 2);
        piVar2 = piVar3;
      } while (piVar3 != param_1 + param_3);
    }
    return 1;
  }
  return 0;
}



/* ===== ix_max @ 0002ac7c size=212 ===== */

int ix_max(int param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (param_3 <= param_2) {
    return 0;
  }
  uVar5 = param_3 - param_2;
  if ((param_3 - 1) - param_2 < 4) {
    iVar4 = 0;
  }
  else {
    pauVar3 = (undefined1 (*) [16])(param_1 + param_2 * 4);
    auVar8 = (undefined1  [16])0x0;
    pauVar6 = pauVar3 + (uVar5 >> 2);
    do {
      auVar1 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      auVar8 = VectorMax(auVar8,auVar1,4,0);
    } while (pauVar3 != pauVar6);
    uVar7 = VectorMax(auVar8._0_8_,auVar8._8_8_,4,0);
    param_2 = param_2 + (uVar5 & 0xfffffffc);
    uVar7 = VectorPairwiseMax(uVar7,uVar7,4,0);
    iVar4 = (int)uVar7;
    if (uVar5 == (uVar5 & 0xfffffffc)) {
      return iVar4;
    }
  }
  iVar2 = *(int *)(param_1 + param_2 * 4);
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  if (param_2 + 1 < param_3) {
    iVar2 = *(int *)(param_1 + (param_2 + 1) * 4);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (param_2 + 2 < param_3) {
      iVar2 = *(int *)(param_1 + (param_2 + 2) * 4);
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      if ((param_2 + 3 < param_3) && (iVar2 = *(int *)(param_1 + (param_2 + 3) * 4), iVar4 < iVar2))
      {
        iVar4 = iVar2;
      }
    }
  }
  return iVar4;
}



/* ===== calc_runlen @ 0002ad50 size=280 ===== */

void calc_runlen(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar3 < 2) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_2 + 4) = iVar3 >> 1;
    return;
  }
  if (*(int *)(param_1 + (iVar3 + 0x3fffffff) * 4 + -4) == 0 &&
      *(int *)(param_1 + (iVar3 + 0x3fffffff) * 4) == 0) {
    do {
      iVar3 = iVar3 + -2;
      if (iVar3 < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
        goto LAB_0002ada8;
      }
    } while (*(int *)(param_1 + -4 + iVar3 * 4) == 0 && *(int *)(param_1 + -8 + iVar3 * 4) == 0);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if ((((3 < iVar3) &&
       (iVar2 = (iVar3 + 0x3fffffff) * 4, *(int *)(param_1 + (iVar3 + 0x3fffffff) * 4) < 2)) &&
      (iVar4 = param_1 + iVar2, *(int *)(iVar4 + -4) < 2)) && (*(int *)(iVar4 + -8) < 2)) {
    iVar4 = 1;
    iVar2 = param_1 + iVar2 + 4;
    while (*(int *)(iVar2 + -0x10) < 2) {
      iVar3 = iVar3 + -4;
      *(int *)(param_2 + 8) = iVar4;
      iVar4 = iVar4 + 1;
      if (((iVar3 < 4) || (1 < *(int *)(iVar2 + -0x14))) ||
         ((1 < *(int *)(iVar2 + -0x18) ||
          (piVar1 = (int *)(iVar2 + -0x1c), iVar2 = iVar2 + -0x10, 1 < *piVar1)))) break;
    }
  }
LAB_0002ada8:
  *(int *)(param_2 + 4) = iVar3 >> 1;
  return;
}



/* ===== count1_bitcount @ 0002ae68 size=264 ===== */

int count1_bitcount(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 0;
  }
  iVar1 = 0;
  iVar4 = *(int *)(DAT_0002af70 + 0x2ae80 + DAT_0002af74);
  piVar6 = (int *)(param_1 + (*(int *)(param_2 + 4) * 2 + *(int *)(param_2 + 8) * 4) * 4);
  iVar9 = 0;
  iVar7 = *(int *)(iVar4 + 0x314);
  iVar4 = *(int *)(iVar4 + 0x32c);
  piVar2 = (int *)(param_1 + *(int *)(param_2 + 4) * 8);
  do {
    while( true ) {
      piVar3 = piVar2 + 4;
      uVar5 = (uint)(*piVar2 != 0);
      if (piVar2[1] != 0) {
        uVar5 = uVar5 + 1;
      }
      if (piVar2[2] != 0) {
        uVar5 = uVar5 + 1;
      }
      iVar8 = *piVar2 + piVar2[1] * 2 + piVar2[2] * 4 + piVar2[3] * 8;
      if (piVar2[3] == 0) break;
      iVar9 = (uint)*(byte *)(iVar7 + iVar8) + uVar5 + 1 + iVar9;
      iVar1 = (uint)*(byte *)(iVar4 + iVar8) + uVar5 + 1 + iVar1;
      piVar2 = piVar3;
      if (piVar6 == piVar3) {
        if (iVar1 <= iVar9) {
LAB_0002af54:
          *(undefined4 *)(param_2 + 0x24) = 1;
          return iVar1;
        }
LAB_0002af24:
        *(undefined4 *)(param_2 + 0x24) = 0;
        return iVar9;
      }
    }
    iVar9 = (uint)*(byte *)(iVar7 + iVar8) + uVar5 + iVar9;
    iVar1 = (uint)*(byte *)(iVar4 + iVar8) + uVar5 + iVar1;
    piVar2 = piVar3;
  } while (piVar6 != piVar3);
  if (iVar1 <= iVar9) goto LAB_0002af54;
  goto LAB_0002af24;
}



/* ===== subdivide @ 0002af78 size=316 ===== */

void subdivide(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined8 *)(param_1 + 0x1c) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 4) * 2;
  piVar5 = *(int **)(param_1 + 0x38);
  if (*piVar5 < iVar1) {
    iVar6 = 0;
    piVar2 = piVar5;
    do {
      piVar2 = piVar2 + 1;
      iVar6 = iVar6 + 1;
    } while (*piVar2 < iVar1);
    iVar4 = *(int *)(DAT_0002b0b4 + 0x2afe0 + iVar6 * 8);
    iVar7 = *(int *)(DAT_0002b0b4 + 0x2afe0 + iVar6 * 8 + 4);
    iVar3 = iVar4 + 1;
    *(int *)(param_1 + 0x1c) = iVar4;
    iVar8 = iVar7 + 2;
    if (iVar4 == 0) {
LAB_0002b03c:
      iVar3 = 2;
      iVar6 = 4;
    }
    else {
      iVar6 = iVar3 * 4;
      piVar2 = piVar5 + iVar3;
      if (iVar1 < piVar5[iVar3]) {
        do {
          iVar3 = iVar4;
          iVar4 = iVar3 + -1;
          if (iVar4 == 0) goto LAB_0002b03c;
          piVar2 = piVar2 + -1;
        } while (iVar1 < *piVar2);
        iVar6 = iVar3 << 2;
        iVar8 = iVar8 + iVar4;
        iVar3 = iVar3 + 1;
      }
      else {
        iVar8 = iVar8 + iVar4;
        iVar3 = iVar4 + 2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x20) = iVar7;
    if (iVar7 != 0) {
      piVar2 = piVar5 + iVar8;
      iVar4 = piVar5[iVar8];
      while (iVar1 < iVar4) {
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) goto LAB_0002b080;
        piVar2 = piVar2 + -1;
        iVar4 = *piVar2;
      }
      iVar3 = iVar3 + iVar7;
    }
  }
  else {
    iVar7 = 0;
    iVar6 = 4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar3 = 2;
  }
LAB_0002b080:
  *(int *)(param_1 + 0x20) = iVar7;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)piVar5 + iVar6);
  *(int *)(param_1 + 0x2c) = piVar5[iVar3];
  *(int *)(param_1 + 0x30) = iVar1;
  return;
}



/* ===== count_bit @ 0002b0b8 size=328 ===== */

int count_bit(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = param_4 * 0x18 + *(int *)(DAT_0002b200 + 0x2b0c8 + DAT_0002b204);
  iVar2 = *(int *)(iVar1 + 4);
  if (param_4 < 0x10) {
    if (param_2 < param_3) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(param_1 + param_2 * 4);
        iVar5 = *(int *)(param_1 + 4 + param_2 * 4);
        param_2 = param_2 + 2;
        iVar3 = iVar3 + (uint)*(byte *)(iVar2 * iVar4 + *(int *)(iVar1 + 0x14) + iVar5);
        if (iVar4 != 0) {
          iVar3 = iVar3 + 1;
        }
        if (iVar5 != 0) {
          iVar3 = iVar3 + 1;
        }
      } while (param_2 < param_3);
      return iVar3;
    }
  }
  else if (param_2 < param_3) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar4 = *(int *)(iVar1 + 0x14);
    iVar1 = 0;
    do {
      iVar6 = *(int *)(param_1 + param_2 * 4);
      iVar5 = *(int *)(param_1 + 4 + param_2 * 4);
      if (iVar6 < 0xf) {
        if (0xe < iVar5) {
          iVar1 = (uint)*(byte *)(iVar4 + iVar2 * iVar6 + 0xf) + iVar1 + iVar3;
          if (iVar6 != 0) goto LAB_0002b124;
          goto LAB_0002b128;
        }
        iVar1 = iVar1 + (uint)*(byte *)(iVar4 + iVar5 + iVar2 * iVar6);
        if (iVar6 != 0) goto LAB_0002b1c8;
LAB_0002b1cc:
        if (iVar5 != 0) goto LAB_0002b128;
      }
      else {
        if (iVar5 < 0xf) {
          iVar1 = (uint)*(byte *)(iVar4 + iVar5 + iVar2 * 0xf) + iVar1 + iVar3;
LAB_0002b1c8:
          iVar1 = iVar1 + 1;
          goto LAB_0002b1cc;
        }
        iVar1 = (uint)*(byte *)(iVar4 + iVar2 * 0xf + 0xf) + iVar3 + iVar1 + iVar3;
LAB_0002b124:
        iVar1 = iVar1 + 1;
LAB_0002b128:
        iVar1 = iVar1 + 1;
      }
      param_2 = param_2 + 2;
      if (param_3 <= param_2) {
        return iVar1;
      }
    } while( true );
  }
  return 0;
}



/* ===== new_choose_table @ 0002b208 size=1164 ===== */

undefined4 new_choose_table(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = ix_max();
  uVar5 = 0;
  if (uVar1 != 0) {
    if (0xe < (int)uVar1) {
      iVar2 = *(int *)(DAT_0002b694 + 0x2b228 + DAT_0002b698);
      uVar1 = uVar1 - 0xf;
      if (*(uint *)(iVar2 + 0x174) < uVar1) {
        if (*(uint *)(iVar2 + 0x18c) < uVar1) {
          if (*(uint *)(iVar2 + 0x1a4) < uVar1) {
            if (*(uint *)(iVar2 + 0x1bc) < uVar1) {
              if (*(uint *)(iVar2 + 0x1d4) < uVar1) {
                if (*(uint *)(iVar2 + 0x1ec) < uVar1) {
                  if (*(uint *)(iVar2 + 0x204) < uVar1) {
                    if (*(uint *)(iVar2 + 0x21c) < uVar1) {
                      if (*(uint *)(iVar2 + 0x234) < uVar1) {
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = 0x17;
                      }
                    }
                    else {
                      uVar5 = 0x16;
                    }
                  }
                  else {
                    uVar5 = 0x15;
                  }
                }
                else {
                  uVar5 = 0x14;
                }
              }
              else {
                uVar5 = 0x13;
              }
            }
            else {
              uVar5 = 0x12;
            }
          }
          else {
            uVar5 = 0x11;
          }
        }
        else {
          uVar5 = 0x10;
        }
      }
      else {
        uVar5 = 0xf;
      }
      if (*(uint *)(iVar2 + 0x24c) < uVar1) {
        if (*(uint *)(iVar2 + 0x264) < uVar1) {
          if (*(uint *)(iVar2 + 0x27c) < uVar1) {
            if (*(uint *)(iVar2 + 0x294) < uVar1) {
              if (*(uint *)(iVar2 + 0x2ac) < uVar1) {
                if (*(uint *)(iVar2 + 0x2c4) < uVar1) {
                  if (*(uint *)(iVar2 + 0x2dc) < uVar1) {
                    if (*(uint *)(iVar2 + 0x2f4) < uVar1) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0x1f;
                    }
                  }
                  else {
                    uVar6 = 0x1e;
                  }
                }
                else {
                  uVar6 = 0x1d;
                }
              }
              else {
                uVar6 = 0x1c;
              }
            }
            else {
              uVar6 = 0x1b;
            }
          }
          else {
            uVar6 = 0x1a;
          }
        }
        else {
          uVar6 = 0x19;
        }
      }
      else {
        uVar6 = 0x18;
      }
      iVar2 = count_bit(param_1,param_2,param_3,uVar5);
      iVar3 = count_bit(param_1,param_2,param_3,uVar6);
      if (iVar3 < iVar2) {
        uVar5 = uVar6;
      }
      return uVar5;
    }
    puVar4 = *(uint **)(DAT_0002b694 + 0x2b228 + DAT_0002b698);
    if (uVar1 < puVar4[0x4e]) {
      iVar2 = count_bit(param_1,param_2,param_3,0xd);
      iVar3 = count_bit(param_1,param_2,param_3,0xf);
      if (iVar2 < iVar3) {
        uVar5 = 0xd;
      }
      else {
        uVar5 = 0xf;
      }
    }
    else if (uVar1 < puVar4[0x48]) {
      count_bit(param_1,param_2,param_3,0xc);
      uVar5 = 0xc;
    }
    else {
      if (uVar1 < puVar4[0x42]) {
        uVar5 = 0xb;
      }
      else {
        if (uVar1 < puVar4[0x3c]) {
          iVar3 = count_bit(param_1,param_2,param_3,10);
          iVar2 = count_bit(param_1,param_2,param_3,0xb);
          if (iVar3 < iVar2) {
            uVar5 = 10;
            iVar2 = iVar3;
          }
          else {
            uVar5 = 0xb;
          }
          iVar3 = count_bit(param_1,param_2,param_3,0xc);
          if (iVar2 < iVar3) {
            return uVar5;
          }
          return 0xc;
        }
        if (uVar1 < puVar4[0x36]) {
          uVar5 = 9;
        }
        else if (uVar1 < puVar4[0x30]) {
          uVar5 = 8;
        }
        else {
          if (uVar1 < puVar4[0x2a]) {
            iVar3 = count_bit(param_1,param_2,param_3,7);
            iVar2 = count_bit(param_1,param_2,param_3,8);
            if (iVar3 < iVar2) {
              uVar5 = 7;
              iVar2 = iVar3;
            }
            else {
              uVar5 = 8;
            }
            iVar3 = count_bit(param_1,param_2,param_3,9);
            if (iVar2 < iVar3) {
              return uVar5;
            }
            return 9;
          }
          if (uVar1 < puVar4[0x24]) {
            uVar5 = 6;
          }
          else {
            if (uVar1 < puVar4[0x1e]) {
              iVar2 = count_bit(param_1,param_2,param_3,5);
              iVar3 = count_bit(param_1,param_2,param_3,6);
              if (iVar3 <= iVar2) {
                return 6;
              }
              return 5;
            }
            if (uVar1 < puVar4[0x18]) {
              uVar5 = 4;
            }
            else if (uVar1 < puVar4[0x12]) {
              uVar5 = 3;
            }
            else {
              if (uVar1 < puVar4[0xc]) {
                iVar2 = count_bit(param_1,param_2,param_3,2);
                iVar3 = count_bit(param_1,param_2,param_3,3);
                if (iVar3 <= iVar2) {
                  return 3;
                }
                return 2;
              }
              if (uVar1 < puVar4[6]) {
                uVar5 = 1;
              }
              else {
                if (*puVar4 <= uVar1) {
                  count_bit(param_1,param_2,param_3,0);
                  return 0;
                }
                uVar5 = 0;
              }
            }
          }
        }
      }
      count_bit(param_1,param_2,param_3,uVar5);
    }
  }
  return uVar5;
}



/* ===== bigv_tab_select @ 0002b69c size=140 ===== */

void bigv_tab_select(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  uVar2 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar1 = new_choose_table(param_1,0,*(int *)(param_2 + 0x28));
    uVar2 = *(uint *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
  }
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (uVar2 < uVar3) {
    uVar1 = new_choose_table(param_1,uVar2,uVar3);
    uVar3 = *(uint *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
  }
  if ((uint)(*(int *)(param_2 + 4) * 2) <= uVar3) {
    return;
  }
  uVar1 = new_choose_table(param_1,uVar3);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}



/* ===== bigv_bitcount @ 0002b728 size=148 ===== */

int bigv_bitcount(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar1 = *(int *)(param_2 + 0x14);
    iVar3 = 0;
  }
  else {
    iVar3 = count_bit(param_1,0,*(undefined4 *)(param_2 + 0x28),*(int *)(param_2 + 0x10));
    iVar1 = *(int *)(param_2 + 0x14);
  }
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x18);
  }
  else {
    iVar1 = count_bit(param_1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
    iVar2 = *(int *)(param_2 + 0x18);
    iVar3 = iVar3 + iVar1;
  }
  if (iVar2 == 0) {
    return iVar3;
  }
  iVar1 = count_bit(param_1,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  return iVar3 + iVar1;
}



/* ===== L3_iteration_loop @ 0002b7bc size=948 ===== */

void L3_iteration_loop(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar23 = *(int *)(param_1 + 0xd790) << 3;
  *(int *)(param_1 + 0xa088) = *(int *)(param_1 + 0xd790);
  iVar1 = DAT_0002bb70;
  if (iVar4 < 1) {
LAB_0002ba00:
    uVar14 = *(uint *)(param_1 + 0x74);
    uVar7 = 0x1e00 - *(int *)(param_1 + 0x40);
    if ((int)uVar7 <= (int)uVar14) {
      uVar14 = uVar7 & ~((int)uVar7 >> 0x1f);
    }
    uVar7 = uVar23;
    if ((int)uVar14 <= (int)uVar23) {
      uVar7 = uVar14;
    }
    *(int *)(param_1 + 0xd790) = (int)uVar7 >> 3;
    *(uint *)(param_1 + 0xa18c) = uVar23 + ((int)uVar7 >> 3) * -8;
    return;
  }
  local_4c = 0;
  puVar8 = (undefined4 *)(DAT_0002bb70 + 0x2b810);
  iVar9 = DAT_0002bb70 + 0x2b818;
  piVar6 = (int *)(DAT_0002bb74 + 0x2b81c);
LAB_0002b820:
  iVar10 = *(int *)(param_1 + 0x6c);
  if (iVar10 != 0) {
    local_54 = iVar10 + -1;
    puVar16 = (undefined4 *)(param_1 + (iVar10 + 0x3ffffff + local_4c * 2) * 0x40 + 0xa09c);
    piVar21 = (int *)(param_1 + local_54 * 0x900 + local_4c * 0x1200 + 0x7c88);
    do {
      iVar4 = 0;
      piVar15 = piVar21 + -0x900;
      iVar10 = *(int *)(param_1 + 0x78);
      *(int **)("recorder_unregister_encoder" + iVar1 + 4) = piVar21;
      *puVar8 = 0;
      if (iVar10 == 0) {
        iVar4 = 0;
      }
      else {
        piVar5 = piVar21 + iVar10;
        bVar17 = false;
        piVar22 = (int *)(iVar9 + iVar10 * 4);
        do {
          piVar5 = piVar5 + -1;
          iVar11 = *piVar5;
          if (iVar11 < 0) {
            iVar11 = -iVar11;
          }
          piVar22 = piVar22 + -1;
          *piVar22 = iVar11;
          if (iVar4 < iVar11) {
            bVar17 = true;
            iVar4 = iVar11;
          }
        } while (piVar5 != piVar21);
        if (bVar17) {
          *piVar6 = iVar4;
        }
        else {
          iVar4 = 0;
        }
      }
      puVar16[-4] = 0;
      puVar16[-3] = 0;
      local_58 = uVar23 - ((int)uVar23 >> 1);
      puVar16[-2] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      *puVar16 = 0;
      puVar16[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar16[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar16[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar11 = iVar2 + ((int)uVar23 >> 1);
      uVar12 = *(undefined4 *)(param_1 + 0xd7b4);
      if (iVar11 < 0x1000) {
        local_50 = iVar11;
      }
      puVar16[0xb] = iVar10;
      puVar16[10] = uVar12;
      if (0xfff < iVar11) {
        iVar13 = iVar11 + -0xfff;
        iVar11 = 0xfff;
        local_50 = 0xfff;
        local_58 = local_58 + iVar13;
      }
      iVar13 = 0;
      if (iVar4 != 0) {
        iVar4 = 0x40;
        iVar19 = 0x40;
        iVar20 = 7;
        iVar18 = param_1 + local_4c * 0x80 + 0xa08c + local_54 * 0x40;
        while( true ) {
          iVar3 = quantize(piVar15,iVar19,iVar10);
          iVar4 = iVar4 >> 1;
          iVar13 = 0x7fffffff;
          iVar10 = iVar4;
          if (iVar3 != 0) {
            calc_runlen(piVar15,iVar18);
            iVar13 = count1_bitcount(piVar15,iVar18);
            subdivide(iVar18);
            bigv_tab_select(piVar15,iVar18);
            iVar3 = bigv_bitcount(piVar15,iVar18);
            iVar13 = iVar13 + iVar3;
            if (iVar13 <= iVar11) {
              iVar10 = -iVar4;
            }
          }
          iVar19 = iVar19 + iVar10;
          if (iVar20 == 1) break;
          iVar20 = iVar20 + -1;
          iVar10 = puVar16[0xb];
        }
        for (; iVar11 < iVar13; iVar13 = iVar13 + iVar4) {
          iVar19 = iVar19 + 1;
          quantize(piVar15,iVar19,puVar16[0xb]);
          calc_runlen(piVar15,iVar18);
          iVar13 = count1_bitcount(piVar15,iVar18);
          subdivide(iVar18);
          bigv_tab_select(piVar15,iVar18);
          iVar4 = bigv_bitcount(piVar15,iVar18);
        }
        puVar16[9] = iVar19;
        puVar16[-4] = iVar13;
        iVar10 = *(int *)(param_1 + 0x78);
      }
      uVar23 = (local_58 + local_50) - iVar13;
      puVar16[-1] = puVar16[9] + 0x59;
      if (0 < iVar10) {
        iVar4 = 0;
        piVar5 = (int *)(*(int *)("[E]%s-%d: encode_run can\'t get msg\n" + DAT_0002bb78 + 0x20) +
                        -4);
        do {
          while (piVar5 = piVar5 + 1, *piVar5 < 0) {
            piVar15[iVar4] = -piVar15[iVar4];
            iVar4 = iVar4 + 1;
            iVar10 = *(int *)(param_1 + 0x78);
            if (iVar10 <= iVar4) goto LAB_0002b9a0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar10);
      }
LAB_0002b9a0:
      piVar21 = piVar21 + -0x240;
      puVar16 = puVar16 + -0x10;
      if (local_54 == 0) goto LAB_0002b9e4;
      local_54 = local_54 + -1;
    } while( true );
  }
  goto LAB_0002b9ec;
LAB_0002b9e4:
  iVar4 = *(int *)(param_1 + 0x70);
LAB_0002b9ec:
  local_4c = local_4c + 1;
  if (iVar4 <= local_4c) goto LAB_0002ba00;
  goto LAB_0002b820;
}



/* ===== mul @ 0002bb7c size=12 ===== */

undefined4 mul(int param_1,int param_2)

{
  return (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);
}



/* ===== muls @ 0002bb88 size=16 ===== */

uint muls(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0x1f |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 1;
}



/* ===== mulr @ 0002bb98 size=20 ===== */

undefined4 mulr(int param_1,int param_2)

{
  return (int)((ulonglong)((longlong)param_1 * (longlong)param_2 + 0x80000000) >> 0x20);
}



/* ===== mulsr @ 0002bbac size=24 ===== */

uint mulsr(int param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1 * (longlong)param_2 + 0x40000000;
  return (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
}



/* ===== FUN_0002bbc4 @ 0002bbc4 size=168 ===== */

ulonglong FUN_0002bbc4(uint param_1,uint param_2)

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



/* ===== FUN_0002bc6c @ 0002bc6c size=32 ===== */

void FUN_0002bc6c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002bbc4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002bc8c @ 0002bc8c size=24 ===== */

ulonglong FUN_0002bc8c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_0002bc94 @ 0002bc94 size=196 ===== */

uint FUN_0002bc94(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_0002bd68 @ 0002bd68 size=32 ===== */

void FUN_0002bd68(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002bc94();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002bd88 @ 0002bd88 size=76 ===== */

void FUN_0002bd88(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0002bdd4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002bdd4 @ 0002bdd4 size=328 ===== */

undefined8 FUN_0002bdd4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _fini @ 0002bf1c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00059000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00059004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00059008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0005900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00059010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00059014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00059018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0005901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00059020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 00059024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 00059028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0005902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00059030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00059034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00059038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0005903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 00059040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00059044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00059048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0005904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_trywait @ 00059050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_trywait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00059054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00059058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0005905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00059060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 00059064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00059068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00059070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00059074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00059078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0005907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00059080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00059084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00059088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0005908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00059090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00059094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00059098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0005909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



# 1 "lex.yy.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "lex.yy.c"
# 3 "lex.yy.c"
# 19 "lex.yy.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 392 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 393 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 33 "/usr/include/libio.h" 2 3 4
# 50 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 51 "/usr/include/libio.h" 2 3 4
# 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 339 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 391 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 20 "lex.yy.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4

# 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 278 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 393 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 423 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 441 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 532 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 555 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 642 "/usr/include/string.h" 3 4

# 21 "lex.yy.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 24 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/bits/errno.h" 2 3 4
# 50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 22 "lex.yy.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4

# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4

# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 63 "/usr/include/sys/sysmacros.h" 3 4

# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 492 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 512 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 529 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 577 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 770 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 807 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 947 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 952 "/usr/include/stdlib.h" 2 3 4
# 964 "/usr/include/stdlib.h" 3 4

# 23 "lex.yy.c" 2
# 50 "lex.yy.c"
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t;
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;
# 153 "lex.yy.c"
typedef struct yy_buffer_state *YY_BUFFER_STATE;




typedef size_t yy_size_t;


extern yy_size_t yyleng;

extern FILE *yyin, *yyout;
# 189 "lex.yy.c"
struct yy_buffer_state
 {
 FILE *yy_input_file;

 char *yy_ch_buf;
 char *yy_buf_pos;




 yy_size_t yy_buf_size;




 yy_size_t yy_n_chars;





 int yy_is_our_buffer;






 int yy_is_interactive;





 int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column;




 int yy_fill_buffer;

 int yy_buffer_status;
# 249 "lex.yy.c"
 };



static size_t yy_buffer_stack_top = 0;
static size_t yy_buffer_stack_max = 0;
static YY_BUFFER_STATE * yy_buffer_stack = 0;
# 273 "lex.yy.c"
static char yy_hold_char;
static yy_size_t yy_n_chars;
yy_size_t yyleng;


static char *yy_c_buf_p = (char *) 0;
static int yy_init = 0;
static int yy_start = 0;




static int yy_did_buffer_switch_on_eof;

void yyrestart (FILE *input_file );
void yy_switch_to_buffer (YY_BUFFER_STATE new_buffer );
YY_BUFFER_STATE yy_create_buffer (FILE *file,int size );
void yy_delete_buffer (YY_BUFFER_STATE b );
void yy_flush_buffer (YY_BUFFER_STATE b );
void yypush_buffer_state (YY_BUFFER_STATE new_buffer );
void yypop_buffer_state (void );

static void yyensure_buffer_stack (void );
static void yy_load_buffer_state (void );
static void yy_init_buffer (YY_BUFFER_STATE b,FILE *file );



YY_BUFFER_STATE yy_scan_buffer (char *base,yy_size_t size );
YY_BUFFER_STATE yy_scan_string (const char *yy_str );
YY_BUFFER_STATE yy_scan_bytes (const char *bytes,yy_size_t len );

void *yyalloc (yy_size_t );
void *yyrealloc (void *,yy_size_t );
void yyfree (void * );
# 338 "lex.yy.c"
typedef unsigned char YY_CHAR;

FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;

typedef int yy_state_type;

extern int yylineno;

int yylineno = 1;

extern char *yytext;


static yy_state_type yy_get_previous_state (void );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state );
static int yy_get_next_buffer (void );
static void yy_fatal_error (const char msg[] );
# 370 "lex.yy.c"
struct yy_trans_info
 {
 flex_int32_t yy_verify;
 flex_int32_t yy_nxt;
 };
static const flex_int16_t yy_accept[295] =
    { 0,
        0, 0, 0, 0, 0, 0, 67, 65, 10, 11,
       45, 65, 46, 49, 65, 37, 38, 47, 50, 64,
       51, 33, 48, 32, 44, 43, 52, 60, 54, 31,
       39, 40, 31, 31, 31, 14, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 41, 65,
       42, 5, 4, 5, 5, 9, 8, 9, 10, 57,
       36, 35, 36, 58, 61, 62, 33, 0, 1, 6,
       33, 32, 0, 0, 53, 56, 55, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 0, 31, 31, 12,
       31, 31, 31, 31, 31, 31, 31, 19, 31, 31,

       31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 31, 59,
        2, 3, 7, 0, 0, 0, 35, 0, 0, 33,
        0, 34, 63, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 18, 31, 31, 31, 20, 31, 31, 31,
       12, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 25, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 16, 31, 31, 31, 31, 31, 31, 31,

       31, 29, 31, 21, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 24, 26,
       31, 31, 31, 31, 13, 28, 31, 31, 31, 31,
       17, 12, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 30, 12, 31,
       31, 27, 31, 31, 31, 31, 15, 31, 31, 31,
       31, 31, 31, 31, 31, 22, 31, 23, 31, 31,
       31, 31, 31, 12, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
       31, 31, 31, 0

    } ;

static const flex_int32_t yy_ec[256] =
    { 0,
        1, 1, 1, 1, 1, 1, 1, 1, 2, 3,
        1, 2, 2, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 4, 5, 6, 7, 1, 8, 9, 1, 10,
       11, 12, 13, 14, 15, 16, 17, 18, 18, 18,
       18, 18, 18, 18, 18, 18, 18, 19, 20, 21,
       22, 23, 1, 1, 24, 24, 24, 24, 25, 24,
       24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
       24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
       26, 27, 28, 1, 1, 1, 29, 30, 31, 32,

       33, 34, 35, 36, 37, 24, 38, 39, 40, 41,
       42, 43, 24, 44, 45, 46, 47, 48, 49, 50,
       51, 52, 53, 54, 55, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,

        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1
    } ;

static const flex_int32_t yy_meta[56] =
    { 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 2, 1, 1,
        1, 1, 1, 2, 2, 1, 1, 1, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 1, 1, 1
    } ;

static const flex_int16_t yy_base[307] =
    { 0,
        0, 0, 53, 54, 55, 56, 392, 393, 58, 393,
      369, 55, 393, 393, 381, 393, 393, 393, 367, 393,
      366, 50, 52, 60, 365, 393, 364, 363, 362, 0,
      393, 393, 353, 35, 45, 62, 49, 61, 340, 67,
       52, 63, 62, 348, 66, 82, 338, 343, 393, 324,
      393, 393, 393, 360, 364, 393, 393, 363, 112, 393,
      113, 393, 117, 393, 393, 393, 103, 109, 393, 393,
      112, 113, 134, 355, 393, 393, 393, 0, 328, 330,
      338, 324, 87, 340, 339, 326, 348, 347, 107, 87,
      319, 317, 323, 320, 318, 315, 312, 0, 314, 97,

      311, 314, 308, 304, 313, 320, 111, 320, 303, 306,
      106, 304, 309, 304, 314, 114, 110, 117, 306, 393,
      393, 393, 393, 149, 156, 154, 157, 161, 324, 323,
      322, 321, 393, 292, 298, 307, 302, 301, 302, 288,
      286, 120, 312, 0, 311, 150, 152, 295, 294, 281,
      296, 295, 0, 281, 130, 276, 288, 274, 284, 281,
        0, 278, 278, 267, 268, 274, 265, 267, 264, 272,
      275, 261, 275, 266, 259, 261, 261, 268, 268, 270,
      259, 253, 263, 257, 258, 248, 246, 254, 0, 272,
      153, 155, 0, 248, 255, 248, 240, 252, 240, 254,

      238, 0, 233, 0, 251, 250, 245, 240, 232, 229,
      237, 144, 229, 241, 235, 237, 220, 223, 0, 0,
      221, 233, 236, 235, 0, 0, 222, 156, 159, 230,
        0, 222, 220, 213, 217, 223, 223, 220, 208, 222,
      221, 210, 219, 203, 213, 211, 202, 0, 200, 207,
      206, 0, 211, 200, 193, 160, 221, 193, 186, 203,
      204, 205, 200, 199, 185, 0, 196, 0, 187, 195,
      188, 180, 192, 206, 182, 189, 190, 187, 176, 177,
      176, 172, 158, 161, 169, 169, 162, 152, 152, 162,
      141, 158, 158, 393, 206, 208, 210, 187, 185, 212,

      214, 184, 178, 95, 65, 61
    } ;

static const flex_int16_t yy_def[307] =
    { 0,
      294, 1, 295, 295, 296, 296, 294, 294, 294, 294,
      294, 297, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 298,
      294, 294, 298, 298, 298, 299, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      300, 294, 301, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 302, 303, 303, 303,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,

      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 294,
      294, 294, 294, 300, 301, 300, 300, 301, 294, 294,
      294, 294, 294, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 304, 305, 303, 303, 303, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 306, 304,
      303, 303, 298, 298, 298, 298, 298, 298, 298, 298,

      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 303, 303, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 303, 303, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 303, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
      298, 298, 298, 0, 294, 294, 294, 294, 294, 294,

      294, 294, 294, 294, 294, 294
    } ;

static const flex_int16_t yy_nxt[449] =
    { 0,
        8, 9, 10, 9, 11, 12, 13, 14, 15, 16,
       17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
       27, 28, 29, 30, 30, 31, 8, 32, 33, 34,
       35, 36, 37, 38, 39, 30, 40, 30, 41, 30,
       42, 30, 43, 44, 45, 46, 30, 47, 48, 30,
       30, 30, 49, 50, 51, 53, 53, 57, 57, 59,
       62, 59, 189, 69, 54, 54, 144, 67, 70, 55,
       55, 58, 58, 83, 68, 71, 80, 72, 81, 87,
       84, 63, 68, 85, 73, 82, 86, 91, 101, 93,
      106, 103, 73, 102, 89, 104, 190, 94, 92, 95,

       98, 110, 96, 90, 144, 107, 99, 100, 108, 105,
      115, 111, 112, 59, 113, 59, 114, 116, 62, 124,
       67, 129, 127, 129, 144, 117, 130, 68, 71, 67,
       72, 138, 139, 147, 169, 68, 68, 73, 177, 125,
      146, 156, 157, 128, 68, 73, 131, 164, 131, 170,
      175, 132, 165, 179, 62, 180, 178, 176, 124, 62,
      161, 127, 62, 124, 187, 188, 127, 144, 198, 144,
      144, 199, 144, 144, 244, 125, 144, 144, 191, 145,
      125, 192, 128, 125, 245, 143, 88, 128, 78, 161,
      293, 257, 292, 229, 256, 161, 161, 161, 291, 228,

      161, 161, 290, 289, 161, 274, 52, 52, 56, 56,
       61, 61, 124, 124, 126, 126, 288, 287, 161, 286,
      285, 284, 283, 144, 161, 161, 282, 281, 280, 279,
      278, 161, 161, 277, 276, 275, 161, 161, 144, 273,
      161, 272, 271, 270, 161, 269, 161, 268, 267, 161,
      266, 161, 265, 264, 263, 161, 262, 261, 161, 260,
      259, 258, 255, 254, 253, 252, 251, 250, 249, 248,
      247, 246, 161, 243, 161, 242, 241, 240, 239, 238,
      237, 236, 235, 234, 233, 161, 232, 231, 230, 189,
      227, 161, 226, 161, 225, 224, 223, 222, 221, 220,

      219, 218, 217, 161, 216, 215, 214, 213, 212, 211,
      210, 209, 208, 207, 206, 205, 204, 203, 161, 202,
      201, 200, 161, 197, 196, 195, 194, 193, 144, 189,
      186, 161, 185, 161, 161, 184, 183, 182, 132, 132,
      130, 130, 181, 174, 173, 172, 171, 168, 167, 166,
      163, 162, 161, 160, 159, 158, 155, 154, 153, 152,
      151, 150, 149, 148, 144, 87, 142, 141, 140, 137,
      136, 135, 134, 133, 123, 122, 121, 120, 119, 118,
      109, 97, 79, 77, 76, 75, 74, 66, 65, 64,
       60, 294, 7, 294, 294, 294, 294, 294, 294, 294,

      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294
    } ;

static const flex_int16_t yy_chk[449] =
    { 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 3, 4, 5, 6, 9,
       12, 9, 306, 23, 3, 4, 305, 22, 23, 3,
        4, 5, 6, 35, 22, 24, 34, 24, 34, 36,
       35, 12, 22, 35, 24, 34, 35, 37, 41, 38,
       43, 42, 24, 41, 36, 42, 304, 38, 37, 38,

       40, 45, 38, 36, 90, 43, 40, 40, 43, 42,
       46, 45, 45, 59, 45, 59, 45, 46, 61, 63,
       67, 68, 63, 68, 89, 46, 68, 67, 72, 71,
       72, 83, 83, 90, 111, 67, 71, 72, 117, 61,
       89, 100, 100, 63, 71, 72, 73, 107, 73, 111,
      116, 73, 107, 118, 124, 118, 117, 116, 125, 126,
      117, 125, 127, 128, 142, 142, 128, 146, 155, 147,
      191, 155, 192, 228, 212, 124, 229, 256, 146, 303,
      126, 147, 125, 127, 212, 302, 299, 128, 298, 293,
      292, 229, 291, 192, 228, 290, 289, 288, 287, 191,

      286, 285, 284, 283, 282, 256, 295, 295, 296, 296,
      297, 297, 300, 300, 301, 301, 281, 280, 279, 278,
      277, 276, 275, 274, 273, 272, 271, 270, 269, 267,
      265, 264, 263, 262, 261, 260, 259, 258, 257, 255,
      254, 253, 251, 250, 249, 247, 246, 245, 244, 243,
      242, 241, 240, 239, 238, 237, 236, 235, 234, 233,
      232, 230, 227, 224, 223, 222, 221, 218, 217, 216,
      215, 214, 213, 211, 210, 209, 208, 207, 206, 205,
      203, 201, 200, 199, 198, 197, 196, 195, 194, 190,
      188, 187, 186, 185, 184, 183, 182, 181, 180, 179,

      178, 177, 176, 175, 174, 173, 172, 171, 170, 169,
      168, 167, 166, 165, 164, 163, 162, 160, 159, 158,
      157, 156, 154, 152, 151, 150, 149, 148, 145, 143,
      141, 140, 139, 138, 137, 136, 135, 134, 132, 131,
      130, 129, 119, 115, 114, 113, 112, 110, 109, 108,
      106, 105, 104, 103, 102, 101, 99, 97, 96, 95,
       94, 93, 92, 91, 88, 87, 86, 85, 84, 82,
       81, 80, 79, 74, 58, 55, 54, 50, 48, 47,
       44, 39, 33, 29, 28, 27, 25, 21, 19, 15,
       11, 7, 294, 294, 294, 294, 294, 294, 294, 294,

      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
      294, 294, 294, 294, 294, 294, 294, 294
    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;

extern int yy_flex_debug;
int yy_flex_debug = 0;
# 649 "lex.yy.c"
char *yytext;
# 1 "g0lex.l"
# 6 "g0lex.l"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 38 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 2 3 4
# 104 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __unused[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };
# 107 "/usr/include/sys/stat.h" 2 3 4
# 210 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 239 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 264 "/usr/include/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 285 "/usr/include/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 322 "/usr/include/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 400 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 443 "/usr/include/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 535 "/usr/include/sys/stat.h" 3 4

# 7 "g0lex.l" 2

# 1 "g0gram.tab.h" 1
# 46 "g0gram.tab.h"
  enum yytokentype
  {
    BREAK = 258,
    DROLL = 259,
    DOUBLE = 260,
    ELSE = 261,
    FOR = 262,
    IF = 263,
    INT = 264,
    RETURN = 265,
    VOID = 266,
    WHILE = 267,
    IDENTIFIER = 268,
    DECLAREDNAME = 269,
    CLASS = 270,
    LIST = 271,
    TABLE = 272,
    PERIOD = 273,
    STRING = 274,
    BOOL = 275,
    INTLIT = 276,
    DOUBLELIT = 277,
    STRINGLIT = 278,
    BOOLFALSE = 279,
    BOOLTRUE = 280,
    NULLVAL = 281,
    LEFTPAREN = 282,
    RIGHTPAREN = 283,
    LEFTSUBSCRIPT = 284,
    RIGHTSUBSCRIPT = 285,
    LEFTBRACE = 286,
    RIGHTBRACE = 287,
    SEMICOLON = 288,
    COLON = 289,
    COMMA = 290,
    LOGICALNOT = 291,
    SIZE = 292,
    MULTIPLY = 293,
    DIVIDE = 294,
    MODULUS = 295,
    PLUS = 296,
    MINUS = 297,
    LESSTHAN = 298,
    LESSTHANOREQUAL = 299,
    GREATERTHAN = 300,
    GREATERTHANOREQUAL = 301,
    ISEQUALTO = 302,
    NOTEQUALTO = 303,
    LOGICALAND = 304,
    LOGICALOR = 305,
    EQUALS = 306,
    INCREMENT = 307,
    DECREMENT = 308,
    SWAP = 309
  };




typedef int YYSTYPE;





extern YYSTYPE yylval;

int yyparse (void);
# 9 "g0lex.l" 2
# 1 "token.h" 1
struct token {
   int category;
   char *text;
   char *filename;
   int lineno;
};
# 10 "g0lex.l" 2
struct token *yytoken;
struct token *lastToken = ((void *)0);
int firstOnLine = 0,
EOFSemicolonReturned = 0;
int beginner = 0, ender = 0;
extern struct tokenlist* tokenroot;
extern struct tokenlist* currentItem;
extern int lookupSym(char*);
int lexxer(int, int, int);
int baselexxer(int);
struct token* MakeSemicolonToken();
struct token* CopyToken(struct token*);

char* yyfilename;
void yySetup(char*);
int yyWrapUp();
void yyLexError();
void yyLexWarning();

YY_BUFFER_STATE buff;
# 685 "lex.yy.c"
# 695 "lex.yy.c"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 25 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 646 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 689 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 893 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 58 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 72 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 151 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 894 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 991 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1015 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1038 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1059 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1080 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1103 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1134 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1172 "/usr/include/unistd.h" 3 4

# 696 "lex.yy.c" 2






static int yy_init_globals (void );




int yylex_destroy (void );

int yyget_debug (void );

void yyset_debug (int debug_flag );

void * yyget_extra (void );

void yyset_extra (void * user_defined );

FILE *yyget_in (void );

void yyset_in (FILE * in_str );

FILE *yyget_out (void );

void yyset_out (FILE * out_str );

yy_size_t yyget_leng (void );

char *yyget_text (void );

int yyget_lineno (void );

void yyset_lineno (int line_number );
# 838 "lex.yy.c"
extern int yylex (void);
# 860 "lex.yy.c"
int yylex (void)
{
 register yy_state_type yy_current_state;
 register char *yy_cp, *yy_bp;
 register int yy_act;
# 46 "g0lex.l"
# 869 "lex.yy.c"

 if ( !(yy_init) )
  {
  (yy_init) = 1;





  if ( ! (yy_start) )
   (yy_start) = 1;

  if ( ! yyin )
   yyin = stdin;

  if ( ! yyout )
   yyout = stdout;

  if ( ! ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) ) {
   yyensure_buffer_stack ();
   (yy_buffer_stack)[(yy_buffer_stack_top)] =
    yy_create_buffer(yyin,16384 );
  }

  yy_load_buffer_state( );
  }

 while ( 1 )
  {
  yy_cp = (yy_c_buf_p);


  *yy_cp = (yy_hold_char);




  yy_bp = yy_cp;

  yy_current_state = (yy_start);
yy_match:
  do
   {
   register YY_CHAR yy_c = yy_ec[((unsigned int) (unsigned char) *yy_cp)];
   if ( yy_accept[yy_current_state] )
    {
    (yy_last_accepting_state) = yy_current_state;
    (yy_last_accepting_cpos) = yy_cp;
    }
   while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
    {
    yy_current_state = (int) yy_def[yy_current_state];
    if ( yy_current_state >= 295 )
     yy_c = yy_meta[(unsigned int) yy_c];
    }
   yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
   ++yy_cp;
   }
  while ( yy_base[yy_current_state] != 393 );

yy_find_action:
  yy_act = yy_accept[yy_current_state];
  if ( yy_act == 0 )
   {
   yy_cp = (yy_last_accepting_cpos);
   yy_current_state = (yy_last_accepting_state);
   yy_act = yy_accept[yy_current_state];
   }

  (yytext) = yy_bp; yyleng = (size_t) (yy_cp - yy_bp); (yy_hold_char) = *yy_cp; *yy_cp = '\0'; (yy_c_buf_p) = yy_cp;;

do_action:

  switch ( yy_act )
 {
   case 0:

   *yy_cp = (yy_hold_char);
   yy_cp = (yy_last_accepting_cpos);
   yy_current_state = (yy_last_accepting_state);
   goto yy_find_action;

case 1:

# 47 "g0lex.l"
{yy_push_state(1);}
 break;


case 2:

# 50 "g0lex.l"
{yy_pop_state();}
 break;
case 3:

# 51 "g0lex.l"
{yyLexError("nested comments not supported"), yy_push_state(1);}
 break;
case 4:


# 52 "g0lex.l"
{ }
 break;
case 5:

# 53 "g0lex.l"
{ }
 break;

case 6:

# 55 "g0lex.l"
{yy_push_state(2);}
 break;


case 7:

# 58 "g0lex.l"
{yyLexError("nested comments not supported");}
 break;
case 8:


# 59 "g0lex.l"
{yy_pop_state(); firstOnLine = 1;}
 break;
case 9:

# 60 "g0lex.l"
{ }
 break;

case 10:

# 62 "g0lex.l"
{ }
 break;
case 11:


# 63 "g0lex.l"
{firstOnLine = 1;}
 break;
case 12:

# 64 "g0lex.l"
{
char* jf = " is a Java feature not in g0";
char* msg = (char*) malloc(sizeof(yytext) + sizeof(jf));
strcpy(msg, yytext);
strcat(msg, jf);
yyLexError(msg);
}
 break;
case 13:

# 71 "g0lex.l"
{return lexxer(1, 1, BREAK);}
 break;
case 14:

# 72 "g0lex.l"
{return lexxer(1, 0, DROLL);}
 break;
case 15:

# 73 "g0lex.l"
{return lexxer(1, 0, DOUBLE);}
 break;
case 16:

# 74 "g0lex.l"
{return lexxer(1, 0, ELSE);}
 break;
case 17:

# 75 "g0lex.l"
{return lexxer(0, 1, BOOLFALSE);}
 break;
case 18:

# 76 "g0lex.l"
{return lexxer(1, 0, FOR);}
 break;
case 19:

# 77 "g0lex.l"
{return lexxer(1, 0, IF);}
 break;
case 20:

# 78 "g0lex.l"
{return lexxer(1, 0, INT);}
 break;
case 21:

# 79 "g0lex.l"
{return lexxer(0, 1, NULLVAL);}
 break;
case 22:

# 80 "g0lex.l"
{return lexxer(1, 1, RETURN);}
 break;
case 23:

# 81 "g0lex.l"
{return lexxer(1, 0, STRING);}
 break;
case 24:

# 82 "g0lex.l"
{return lexxer(0, 1, BOOLTRUE);}
 break;
case 25:

# 83 "g0lex.l"
{return lexxer(1, 0, BOOL);}
 break;
case 26:

# 84 "g0lex.l"
{return lexxer(1, 0, VOID);}
 break;
case 27:

# 85 "g0lex.l"
{return lexxer(1, 0, WHILE);}
 break;
case 28:

# 86 "g0lex.l"
{return lexxer(1, 0, CLASS);}
 break;
case 29:

# 87 "g0lex.l"
{return lexxer(1, 0, LIST);}
 break;
case 30:

# 88 "g0lex.l"
{return lexxer(1, 0, TABLE);}
 break;
case 31:

# 89 "g0lex.l"
{
if(strlen(yytext) > 12) yyLexError("max variable name length of 12 exceeded");
if(lookupSym(yytext))
return lexxer(1,0,DECLAREDNAME);
else
return lexxer(1, 1, IDENTIFIER);}
 break;
case 32:

# 95 "g0lex.l"
{ return lexxer(0, 1, INTLIT);}
 break;
case 33:

# 96 "g0lex.l"
{int l = (strcmp(yytext,".")) ? DOUBLELIT : PERIOD; return lexxer(0, ((l == DOUBLELIT) ? 1 : 0), l);}
 break;
case 34:

# 97 "g0lex.l"
{return lexxer(0, 1, DOUBLELIT);}
 break;
case 35:


# 98 "g0lex.l"
{return lexxer(0, 1, STRINGLIT);}
 break;
case 36:


# 99 "g0lex.l"
{yyLexError("Unterminated String Constant");}
 break;
case 37:

# 100 "g0lex.l"
{return lexxer(0, 0, LEFTPAREN);}
 break;
case 38:

# 101 "g0lex.l"
{return lexxer(0, 1, RIGHTPAREN);}
 break;
case 39:

# 102 "g0lex.l"
{return lexxer(0, 0, LEFTSUBSCRIPT);}
 break;
case 40:

# 103 "g0lex.l"
{return lexxer(0, 1, RIGHTSUBSCRIPT);}
 break;
case 41:

# 104 "g0lex.l"
{return lexxer(0, 0, LEFTBRACE);}
 break;
case 42:

# 105 "g0lex.l"
{return lexxer(1, 1, RIGHTBRACE);}
 break;
case 43:

# 106 "g0lex.l"
{return lexxer(0, 0, SEMICOLON);}
 break;
case 44:

# 107 "g0lex.l"
{return lexxer(0, 0, COLON);}
 break;
case 45:

# 108 "g0lex.l"
{return lexxer(0, 0, LOGICALNOT);}
 break;
case 46:

# 109 "g0lex.l"
{return lexxer(1, 0, SIZE);}
 break;
case 47:

# 110 "g0lex.l"
{return lexxer(0, 0, MULTIPLY);}
 break;
case 48:

# 111 "g0lex.l"
{return lexxer(0, 0, DIVIDE);}
 break;
case 49:

# 112 "g0lex.l"
{return lexxer(0, 0, MODULUS);}
 break;
case 50:

# 113 "g0lex.l"
{return lexxer(0, 0, PLUS);}
 break;
case 51:

# 114 "g0lex.l"
{return lexxer(0, 0, MINUS);}
 break;
case 52:

# 115 "g0lex.l"
{return lexxer(0, 0, LESSTHAN);}
 break;
case 53:

# 116 "g0lex.l"
{return lexxer(0, 0, LESSTHANOREQUAL);}
 break;
case 54:

# 117 "g0lex.l"
{return lexxer(0, 0, GREATERTHAN);}
 break;
case 55:

# 118 "g0lex.l"
{return lexxer(0, 0, GREATERTHANOREQUAL);}
 break;
case 56:

# 119 "g0lex.l"
{return lexxer(0, 0, ISEQUALTO);}
 break;
case 57:

# 120 "g0lex.l"
{return lexxer(0, 0, NOTEQUALTO);}
 break;
case 58:

# 121 "g0lex.l"
{return lexxer(0, 0, LOGICALAND);}
 break;
case 59:

# 122 "g0lex.l"
{return lexxer(0, 0, LOGICALOR);}
 break;
case 60:

# 123 "g0lex.l"
{return lexxer(0, 0, EQUALS);}
 break;
case 61:

# 124 "g0lex.l"
{return lexxer(0, 0, INCREMENT);}
 break;
case 62:

# 125 "g0lex.l"
{return lexxer(0, 0, DECREMENT);}
 break;
case 63:

# 126 "g0lex.l"
{return lexxer(0, 0, SWAP);}
 break;
case 64:

# 127 "g0lex.l"
{return lexxer(0, 0, COMMA);}
 break;
case 65:

# 128 "g0lex.l"
{ yyLexError("Unrecognized character"); }
 break;
case (67 + 0 + 1):
case (67 + 1 + 1):
case (67 + 2 + 1):
# 129 "g0lex.l"
{return yyWrapUp(); }
 break;
case 66:

# 130 "g0lex.l"
do { if (fwrite( yytext, yyleng, 1, yyout )) {} } while (0);
 break;
# 1310 "lex.yy.c"

 case 67:
  {

  int yy_amount_of_matched_text = (int) (yy_cp - (yytext)) - 1;


  *yy_cp = (yy_hold_char);
 

  if ( (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buffer_status == 0 )
   {
# 1331 "lex.yy.c"
   (yy_n_chars) = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars;
   (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_input_file = yyin;
   (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buffer_status = 1;
   }
# 1343 "lex.yy.c"
  if ( (yy_c_buf_p) <= &(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[(yy_n_chars)] )
   {
   yy_state_type yy_next_state;

   (yy_c_buf_p) = (yytext) + yy_amount_of_matched_text;

   yy_current_state = yy_get_previous_state( );
# 1360 "lex.yy.c"
   yy_next_state = yy_try_NUL_trans( yy_current_state );

   yy_bp = (yytext) + 0;

   if ( yy_next_state )
    {

    yy_cp = ++(yy_c_buf_p);
    yy_current_state = yy_next_state;
    goto yy_match;
    }

   else
    {
    yy_cp = (yy_c_buf_p);
    goto yy_find_action;
    }
   }

  else switch ( yy_get_next_buffer( ) )
   {
   case 1:
    {
    (yy_did_buffer_switch_on_eof) = 0;

    if ( 1 )
     {
# 1396 "lex.yy.c"
     (yy_c_buf_p) = (yytext) + 0;

     yy_act = (67 + (((yy_start) - 1) / 2) + 1);
     goto do_action;
     }

    else
     {
     if ( ! (yy_did_buffer_switch_on_eof) )
      yyrestart(yyin );
     }
    break;
    }

   case 0:
    (yy_c_buf_p) =
     (yytext) + yy_amount_of_matched_text;

    yy_current_state = yy_get_previous_state( );

    yy_cp = (yy_c_buf_p);
    yy_bp = (yytext) + 0;
    goto yy_match;

   case 2:
    (yy_c_buf_p) =
    &(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[(yy_n_chars)];

    yy_current_state = yy_get_previous_state( );

    yy_cp = (yy_c_buf_p);
    yy_bp = (yytext) + 0;
    goto yy_find_action;
   }
  break;
  }

 default:
  yy_fatal_error( "fatal flex scanner internal error--no action found" )
                                                         ;
 }
  }
}
# 1447 "lex.yy.c"
static int yy_get_next_buffer (void)
{
     register char *dest = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf;
 register char *source = (yytext);
 register int number_to_move, i;
 int ret_val;

 if ( (yy_c_buf_p) > &(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[(yy_n_chars) + 1] )
  yy_fatal_error( "fatal flex scanner internal error--end of buffer missed" )
                                                             ;

 if ( (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_fill_buffer == 0 )
  {
  if ( (yy_c_buf_p) - (yytext) - 0 == 1 )
   {



   return 1;
   }

  else
   {



   return 2;
   }
  }




 number_to_move = (int) ((yy_c_buf_p) - (yytext)) - 1;

 for ( i = 0; i < number_to_move; ++i )
  *(dest++) = *(source++);

 if ( (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buffer_status == 2 )



  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars = (yy_n_chars) = 0;

 else
  {
   yy_size_t num_to_read =
   (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_size - number_to_move - 1;

  while ( num_to_read <= 0 )
   {


   YY_BUFFER_STATE b = (yy_buffer_stack)[(yy_buffer_stack_top)];

   int yy_c_buf_p_offset =
    (int) ((yy_c_buf_p) - b->yy_ch_buf);

   if ( b->yy_is_our_buffer )
    {
    yy_size_t new_size = b->yy_buf_size * 2;

    if ( new_size <= 0 )
     b->yy_buf_size += b->yy_buf_size / 8;
    else
     b->yy_buf_size *= 2;

    b->yy_ch_buf = (char *)

     yyrealloc((void *) b->yy_ch_buf,b->yy_buf_size + 2 );
    }
   else

    b->yy_ch_buf = 0;

   if ( ! b->yy_ch_buf )
    yy_fatal_error( "fatal error - scanner input buffer overflow" )
                                                   ;

   (yy_c_buf_p) = &b->yy_ch_buf[yy_c_buf_p_offset];

   num_to_read = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_size -
      number_to_move - 1;

   }

  if ( num_to_read > 8192 )
   num_to_read = 8192;


  if ( (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_is_interactive ) { int c = '*'; size_t n; for ( n = 0; n < num_to_read && (c = _IO_getc (yyin)) != (-1) && c != '\n'; ++n ) (&(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[number_to_move])[n] = (char) c; if ( c == '\n' ) (&(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[number_to_move])[n++] = (char) c; if ( c == (-1) && ferror( yyin ) ) yy_fatal_error( "input in flex scanner failed" ); (yy_n_chars) = n; } else { (*__errno_location ())=0; while ( ((yy_n_chars) = fread((&(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[number_to_move]), 1, num_to_read, yyin))==0 && ferror(yyin)) { if( (*__errno_location ()) != 4) { yy_fatal_error( "input in flex scanner failed" ); break; } (*__errno_location ())=0; clearerr(yyin); } }
                              ;

  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars = (yy_n_chars);
  }

 if ( (yy_n_chars) == 0 )
  {
  if ( number_to_move == 0 )
   {
   ret_val = 1;
   yyrestart(yyin );
   }

  else
   {
   ret_val = 2;
   (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buffer_status =
    2;
   }
  }

 else
  ret_val = 0;

 if ((yy_size_t) ((yy_n_chars) + number_to_move) > (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_size) {

  yy_size_t new_size = (yy_n_chars) + number_to_move + ((yy_n_chars) >> 1);
  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf = (char *) yyrealloc((void *) (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf,new_size );
  if ( ! (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf )
   yy_fatal_error( "out of dynamic memory in yy_get_next_buffer()" );
 }

 (yy_n_chars) += number_to_move;
 (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[(yy_n_chars)] = 0;
 (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[(yy_n_chars) + 1] = 0;

 (yytext) = &(yy_buffer_stack)[(yy_buffer_stack_top)]->yy_ch_buf[0];

 return ret_val;
}



    static yy_state_type yy_get_previous_state (void)
{
 register yy_state_type yy_current_state;
 register char *yy_cp;

 yy_current_state = (yy_start);

 for ( yy_cp = (yytext) + 0; yy_cp < (yy_c_buf_p); ++yy_cp )
  {
  register YY_CHAR yy_c = (*yy_cp ? yy_ec[((unsigned int) (unsigned char) *yy_cp)] : 1);
  if ( yy_accept[yy_current_state] )
   {
   (yy_last_accepting_state) = yy_current_state;
   (yy_last_accepting_cpos) = yy_cp;
   }
  while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
   {
   yy_current_state = (int) yy_def[yy_current_state];
   if ( yy_current_state >= 295 )
    yy_c = yy_meta[(unsigned int) yy_c];
   }
  yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
  }

 return yy_current_state;
}






    static yy_state_type yy_try_NUL_trans (yy_state_type yy_current_state )
{
 register int yy_is_jam;
     register char *yy_cp = (yy_c_buf_p);

 register YY_CHAR yy_c = 1;
 if ( yy_accept[yy_current_state] )
  {
  (yy_last_accepting_state) = yy_current_state;
  (yy_last_accepting_cpos) = yy_cp;
  }
 while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
  {
  yy_current_state = (int) yy_def[yy_current_state];
  if ( yy_current_state >= 295 )
   yy_c = yy_meta[(unsigned int) yy_c];
  }
 yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
 yy_is_jam = (yy_current_state == 294);

  return yy_is_jam ? 0 : yy_current_state;
}
# 1715 "lex.yy.c"
    void yyrestart (FILE * input_file )
{

 if ( ! ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) ){
        yyensure_buffer_stack ();
  (yy_buffer_stack)[(yy_buffer_stack_top)] =
            yy_create_buffer(yyin,16384 );
 }

 yy_init_buffer(( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)),input_file );
 yy_load_buffer_state( );
}





    void yy_switch_to_buffer (YY_BUFFER_STATE new_buffer )
{






 yyensure_buffer_stack ();
 if ( ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) == new_buffer )
  return;

 if ( ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) )
  {

  *(yy_c_buf_p) = (yy_hold_char);
  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_pos = (yy_c_buf_p);
  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars = (yy_n_chars);
  }

 (yy_buffer_stack)[(yy_buffer_stack_top)] = new_buffer;
 yy_load_buffer_state( );






 (yy_did_buffer_switch_on_eof) = 1;
}

static void yy_load_buffer_state (void)
{
     (yy_n_chars) = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars;
 (yytext) = (yy_c_buf_p) = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_pos;
 yyin = (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_input_file;
 (yy_hold_char) = *(yy_c_buf_p);
}







    YY_BUFFER_STATE yy_create_buffer (FILE * file, int size )
{
 YY_BUFFER_STATE b;

 b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state ) );
 if ( ! b )
  yy_fatal_error( "out of dynamic memory in yy_create_buffer()" );

 b->yy_buf_size = size;




 b->yy_ch_buf = (char *) yyalloc(b->yy_buf_size + 2 );
 if ( ! b->yy_ch_buf )
  yy_fatal_error( "out of dynamic memory in yy_create_buffer()" );

 b->yy_is_our_buffer = 1;

 yy_init_buffer(b,file );

 return b;
}





    void yy_delete_buffer (YY_BUFFER_STATE b )
{

 if ( ! b )
  return;

 if ( b == ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) )
  (yy_buffer_stack)[(yy_buffer_stack_top)] = (YY_BUFFER_STATE) 0;

 if ( b->yy_is_our_buffer )
  yyfree((void *) b->yy_ch_buf );

 yyfree((void *) b );
}





    static void yy_init_buffer (YY_BUFFER_STATE b, FILE * file )

{
 int oerrno = (*__errno_location ());

 yy_flush_buffer(b );

 b->yy_input_file = file;
 b->yy_fill_buffer = 1;





    if (b != ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0))){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;

 (*__errno_location ()) = oerrno;
}





    void yy_flush_buffer (YY_BUFFER_STATE b )
{
     if ( ! b )
  return;

 b->yy_n_chars = 0;





 b->yy_ch_buf[0] = 0;
 b->yy_ch_buf[1] = 0;

 b->yy_buf_pos = &b->yy_ch_buf[0];

 b->yy_at_bol = 1;
 b->yy_buffer_status = 0;

 if ( b == ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) )
  yy_load_buffer_state( );
}







void yypush_buffer_state (YY_BUFFER_STATE new_buffer )
{
     if (new_buffer == ((void *)0))
  return;

 yyensure_buffer_stack();


 if ( ( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) )
  {

  *(yy_c_buf_p) = (yy_hold_char);
  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_buf_pos = (yy_c_buf_p);
  (yy_buffer_stack)[(yy_buffer_stack_top)]->yy_n_chars = (yy_n_chars);
  }


 if (( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)))
  (yy_buffer_stack_top)++;
 (yy_buffer_stack)[(yy_buffer_stack_top)] = new_buffer;


 yy_load_buffer_state( );
 (yy_did_buffer_switch_on_eof) = 1;
}





void yypop_buffer_state (void)
{
     if (!( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)))
  return;

 yy_delete_buffer(( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) );
 (yy_buffer_stack)[(yy_buffer_stack_top)] = ((void *)0);
 if ((yy_buffer_stack_top) > 0)
  --(yy_buffer_stack_top);

 if (( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0))) {
  yy_load_buffer_state( );
  (yy_did_buffer_switch_on_eof) = 1;
 }
}




static void yyensure_buffer_stack (void)
{
 yy_size_t num_to_alloc;

 if (!(yy_buffer_stack)) {





  num_to_alloc = 1;
  (yy_buffer_stack) = (struct yy_buffer_state**)yyalloc
        (num_to_alloc * sizeof(struct yy_buffer_state*)
        );
  if ( ! (yy_buffer_stack) )
   yy_fatal_error( "out of dynamic memory in yyensure_buffer_stack()" );

  memset((yy_buffer_stack), 0, num_to_alloc * sizeof(struct yy_buffer_state*));

  (yy_buffer_stack_max) = num_to_alloc;
  (yy_buffer_stack_top) = 0;
  return;
 }

 if ((yy_buffer_stack_top) >= ((yy_buffer_stack_max)) - 1){


  int grow_size = 8 ;

  num_to_alloc = (yy_buffer_stack_max) + grow_size;
  (yy_buffer_stack) = (struct yy_buffer_state**)yyrealloc
        ((yy_buffer_stack),
        num_to_alloc * sizeof(struct yy_buffer_state*)
        );
  if ( ! (yy_buffer_stack) )
   yy_fatal_error( "out of dynamic memory in yyensure_buffer_stack()" );


  memset((yy_buffer_stack) + (yy_buffer_stack_max), 0, grow_size * sizeof(struct yy_buffer_state*));
  (yy_buffer_stack_max) = num_to_alloc;
 }
}







YY_BUFFER_STATE yy_scan_buffer (char * base, yy_size_t size )
{
 YY_BUFFER_STATE b;

 if ( size < 2 ||
      base[size-2] != 0 ||
      base[size-1] != 0 )

  return 0;

 b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state ) );
 if ( ! b )
  yy_fatal_error( "out of dynamic memory in yy_scan_buffer()" );

 b->yy_buf_size = size - 2;
 b->yy_buf_pos = b->yy_ch_buf = base;
 b->yy_is_our_buffer = 0;
 b->yy_input_file = 0;
 b->yy_n_chars = b->yy_buf_size;
 b->yy_is_interactive = 0;
 b->yy_at_bol = 1;
 b->yy_fill_buffer = 0;
 b->yy_buffer_status = 0;

 yy_switch_to_buffer(b );

 return b;
}
# 2016 "lex.yy.c"
YY_BUFFER_STATE yy_scan_string (const char * yystr )
{

 return yy_scan_bytes(yystr,strlen(yystr) );
}
# 2029 "lex.yy.c"
YY_BUFFER_STATE yy_scan_bytes (const char * yybytes, yy_size_t _yybytes_len )
{
 YY_BUFFER_STATE b;
 char *buf;
 yy_size_t n;
 int i;


 n = _yybytes_len + 2;
 buf = (char *) yyalloc(n );
 if ( ! buf )
  yy_fatal_error( "out of dynamic memory in yy_scan_bytes()" );

 for ( i = 0; i < _yybytes_len; ++i )
  buf[i] = yybytes[i];

 buf[_yybytes_len] = buf[_yybytes_len+1] = 0;

 b = yy_scan_buffer(buf,n );
 if ( ! b )
  yy_fatal_error( "bad buffer in yy_scan_bytes()" );




 b->yy_is_our_buffer = 1;

 return b;
}





static void yy_fatal_error (const char* msg )
{
     (void) fprintf( stderr, "%s\n", msg );
 exit( 2 );
}
# 2091 "lex.yy.c"
int yyget_lineno (void)
{

    return yylineno;
}




FILE *yyget_in (void)
{
        return yyin;
}




FILE *yyget_out (void)
{
        return yyout;
}




yy_size_t yyget_leng (void)
{
        return yyleng;
}





char *yyget_text (void)
{
        return yytext;
}





void yyset_lineno (int line_number )
{

    yylineno = line_number;
}







void yyset_in (FILE * in_str )
{
        yyin = in_str ;
}

void yyset_out (FILE * out_str )
{
        yyout = out_str ;
}

int yyget_debug (void)
{
        return yy_flex_debug;
}

void yyset_debug (int bdebug )
{
        yy_flex_debug = bdebug ;
}

static int yy_init_globals (void)
{




    (yy_buffer_stack) = 0;
    (yy_buffer_stack_top) = 0;
    (yy_buffer_stack_max) = 0;
    (yy_c_buf_p) = (char *) 0;
    (yy_init) = 0;
    (yy_start) = 0;






    yyin = (FILE *) 0;
    yyout = (FILE *) 0;





    return 0;
}


int yylex_destroy (void)
{


 while(( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0))){
  yy_delete_buffer(( (yy_buffer_stack) ? (yy_buffer_stack)[(yy_buffer_stack_top)] : ((void *)0)) );
  (yy_buffer_stack)[(yy_buffer_stack_top)] = ((void *)0);
  yypop_buffer_state();
 }


 yyfree((yy_buffer_stack) );
 (yy_buffer_stack) = ((void *)0);



    yy_init_globals( );

    return 0;
}
# 2240 "lex.yy.c"
void *yyalloc (yy_size_t size )
{
 return (void *) malloc( size );
}

void *yyrealloc (void * ptr, yy_size_t size )
{







 return (void *) realloc( (char *) ptr, size );
}

void yyfree (void * ptr )
{
 free( (char *) ptr );
}
# 130 "g0lex.l"




int lexxer(int validBeginner, int validEnder, int type)
{
 beginner = validBeginner;

 if(lastToken != ((void *)0))
 {
  yylval = alctree(lastToken->category, -1, lastToken);
  int tcat = lastToken->category;
  lastToken = ((void *)0);
  ender = validEnder;
  firstOnLine = 0;
  return tcat;
 }
 else
 {
  baselexxer(type);


  if((firstOnLine && beginner && ender) || (ender && yytoken->category == RIGHTBRACE))
  {

   lastToken = CopyToken(yytoken);
   struct token* semiToken = MakeSemicolonToken();
   yylval = alctree(SEMICOLON, -1, semiToken);
   do { int yyless_macro_arg = (0); ; yytext[yyleng] = (yy_hold_char); (yy_c_buf_p) = yytext + yyless_macro_arg; (yy_hold_char) = *(yy_c_buf_p); *(yy_c_buf_p) = '\0'; yyleng = yyless_macro_arg; } while ( 0 );
   ender = validEnder;
   firstOnLine = 0;
   return SEMICOLON;
  }
  else
  {
   yylval = alctree(type, -1, yytoken);
   ender = validEnder;
   firstOnLine = 0;
   return type;
  }
 }
}

struct token* MakeSemicolonToken()
{
 struct token* t = (struct token *)malloc(sizeof(struct token));
 t->text = strdup(";");
 t->category = SEMICOLON;
 t->lineno = yylineno-1;
 t->filename = strdup(yyfilename);
 return t;
}

struct token* CopyToken(struct token* t)
{
 struct token* newToken = (struct token *)malloc(sizeof(struct token));
 newToken->category = yytoken->category;
 newToken->text = strdup(yytoken->text);
 newToken->lineno = yytoken->lineno;
 newToken->filename = strdup(yytoken->filename);
 return newToken;
}


int baselexxer(int type)
{
   yytoken = (struct token *)malloc(sizeof(struct token));

   if((yytoken->text = strdup(yytext)) == ((void *)0)) {
      yyLexError("yytoken text could not be copied");
   }

   switch(type) {

      case INTLIT:
  break;
      case DOUBLELIT:
  break;
      case STRINGLIT:
  break;
      default:
  break;
   }
   yytoken->category = type;
   yytoken->lineno = yylineno;
   yytoken->filename = yyfilename;
   return type;
}

void yySetup(char* filename)
{
   struct stat st;
   if (stat(filename, &st))
      yyLexError("failed to get stat() data from file");

   if ((yyin = fopen(filename, "r")) == ((void *)0)) {
      fprintf(stderr, "cannot open '%s'\n", filename);
      fflush(stderr);
      exit(10);
      }
   if((yyfilename = strdup(filename)) == ((void *)0))
      yyLexError("ERROR COPYING FILE NAME");

   if((buff = yy_create_buffer(yyin,st.st_size)) == ((void *)0)) {
 printf("YY_CREATE_BUFFER FAILED TO CREATE BUFFER");
 exit(1);
 }
   yylineno = 1;
   lastToken = ((void *)0);
   firstOnLine = 0,
   EOFSemicolonReturned = 0;
   beginner = 0;
   ender = 0;
}

void yyLexError(char* msg)
{
   printf("ERROR: in %s on line %d: %s\n", yyfilename, yylineno, msg);
   exit(1);
}

void yyLexWarning(char* msg)
{
 printf("WARNING: in %s on line %d: %s\n", yyfilename, yylineno, msg);
}

int yyWrapUp()
{
 if(buff != ((void *)0))
 {
  yy_delete_buffer(buff);
  buff = ((void *)0);
 }


if(ender && yytoken->category != SEMICOLON && !EOFSemicolonReturned) {
   struct token* semiToken = MakeSemicolonToken();
   yylval = alctree(SEMICOLON, -1, semiToken);
   EOFSemicolonReturned = 1;
   return SEMICOLON;
}
 return 0;
}
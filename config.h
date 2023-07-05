/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Directory where bannertopdf finds its data files (PDF templates) */
#define BANNERTOPDF_DATADIR "/usr/share/cups/data"
#define CUPS_1_4 1
#define CUPS_ACROREAD "acroread"
#define CUPS_DATADIR "/usr/share/cups"
#define CUPS_DEFAULT_DOMAINSOCKET "/var/run/cups/cups.sock"
#define CUPS_FONTPATH "/usr/share/cups/fonts"
#define CUPS_IPPFIND "ippfind"
#define CUPS_PDFTOPS_MAX_RESOLUTION 1440
#define CUPS_SERVERBIN "/usr/lib/cups"
#define CUPS_SERVERROOT "/etc/cups"
#define CUPS_STATEDIR "/var/run/cups"
#define ENABLE_NLS 1
#define HAVE_CXX11 1
#define HAVE_DCGETTEXT 1
#define HAVE_DIRENT_H 1
#define HAVE_DLFCN_H 1
#define HAVE_ENDIAN_H 1
#define HAVE_FREETYPE_H 1
#define HAVE_GETLINE 1
#define HAVE_GETTEXT 1
#define HAVE_ICONV 1
#define HAVE_INTTYPES_H 1
#define HAVE_JPEGLIB_H 1
#define HAVE_LDAP
#define HAVE_LDAP_REBIND_PROC
#define HAVE_LDAP_SSL
#define HAVE_LDAP_SSL_H
#define HAVE_LIBJPEG
#define HAVE_LIBPNG
#define HAVE_LIBZ
#define HAVE_LONG_LONG
#define HAVE_OPENLDAP
#define HAVE_OPEN_MEMSTREAM 1
#define HAVE_POPPLER_PDFTOPS_WITH_ORIGPAGESIZES 
#define HAVE_POPPLER_PDFTOPS_WITH_RESOLUTION 
#define HAVE_SIGACTION 1
#define HAVE_STDINT_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRCASESTR 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_STRTOLL 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_TIFF_H 1
#define HAVE_UNISTD_H 1
#define HAVE_WAIT3 1
#define HAVE_WAITPID 1
#define HAVE_ZLIB_H 1
#define ICONV_CONST 
#define LT_OBJDIR ".libs/"
#define PACKAGE "cups-filters"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_NAME "cups-filters"
#define PACKAGE_STRING "cups-filters 1.28.17"
#define PACKAGE_TARNAME "cups-filters"
#define PACKAGE_URL ""
#define PACKAGE_VERSION "1.28.17"
#define QPDF_HAVE_PCLM 1
#define SHELL "/bin/bash"
#define STDC_HEADERS 1
#define VERSION "1.28.17"


#ifdef HAVE_LONG_LONG
#  define CUPS_LLFMT   "%lld"
#  define CUPS_LLCAST  (long long)
#else
#  define CUPS_LLFMT   "%ld"
#  define CUPS_LLCAST  (long)
#endif /* HAVE_LONG_LONG */

#ifdef HAVE_ARC4RANDOM
#  define CUPS_RAND() arc4random()
#  define CUPS_SRAND(v) arc4random_stir()
#elif defined(HAVE_RANDOM)
#  define CUPS_RAND() random()
#  define CUPS_SRAND(v) srandom(v)
#elif defined(HAVE_LRAND48)
#  define CUPS_RAND() lrand48()
#  define CUPS_SRAND(v) srand48(v)
#else
#  define CUPS_RAND() rand()
#  define CUPS_SRAND(v) srand(v)
#endif /* HAVE_ARC4RANDOM */

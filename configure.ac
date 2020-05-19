AC_INIT([libndpi], [1.5.2])

AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([foreign subdir-objects])
AM_SILENT_RULES([yes])
AC_CONFIG_SRCDIR([nDPIIntegrated/ndpi_main.cpp])
#LT_INIT
AM_PROG_LIBTOOL
AC_LIBTOOL_CXX
#LT_LANG([C++])
#CXXFLAGS="$CXXFLAGS -Wl,--no-as-needed"
#AC_PROG_CC
AC_PROG_CXX
AC_PROG_CPP
##AX_PTHREAD only updates CFLAGS not CC FLAGS, NOT GOOD SOLUTION BUT FOR NOW
##Use that way
AX_PTHREAD
AC_CHECK_LIB(pthread, pthread_create, [PTHREAD_LIBS+=-lpthread])
#AX_PTHREAD


if test -d ".svn"; then :
SVN_RELEASE=`svn info . | grep "^Revision"|cut -d " " -f 2`
SVN_DATE=`svn info . | grep "^Last Changed Date"|cut -d " " -f 4-`
else
SVN_RELEASE="${PACKAGE_VERSION}"
SVN_DATE=`date`
fi

AC_DEFINE_UNQUOTED(NDPI_SVN_RELEASE, "r${SVN_RELEASE}", [SVN Release])
AC_DEFINE_UNQUOTED(NDPI_SVN_DATE, "${SVN_DATE}", [Last SVN change])

AC_CHECK_HEADERS([netinet/in.h stdint.h stdlib.h string.h unistd.h])

PCAP_HOME=$HOME/PF_RING/userland

if test -d $PCAP_HOME; then :
   echo -n ""
else
   PCAP_HOME=`pwd`/../../PF_RING/userland
fi

if test -f $PCAP_HOME/libpcap/libpcap.a; then :
     echo "Using libpcap from $PCAP_HOME"
     PCAP_INC="-I $PCAP_HOME/libpcap"
     PCAP_LIB="$PCAP_HOME/libpcap/libpcap.a $PCAP_HOME/lib/libpfring.a -lnuma"

     AC_CHECK_LIB([rt], [clock_gettime],   [PCAP_LIB="$PCAP_LIB -lrt"])
     AC_CHECK_LIB([nl], [nl_handle_alloc], [PCAP_LIB="$PCAP_LIB -lnl"])
else
    AC_CHECK_LIB([pcap], [pcap_open_live], [PCAP_LIB="-lpcap"])

     if test $ac_cv_lib_pcap_pcap_open_live = "no"; then :
       echo ""
       echo "ERROR: Missing libpcap(-dev) library required to compile the example application"
       echo "ERROR: Please install it and try again"
       exit
   fi
fi

if test -d /usr/local/include/json-c/; then :
   CFLAGS="$CFLAGS -I/usr/local/include/json-c/"
   LDFLAGS="$LDFLAGS -L/usr/local/lib -ljson-c"
else
  CFLAGS="$CFLAGS $(pkg-config --cflags json-c)"
  LDFLAGS="$LDFLAGS $(pkg-config --libs json-c)"
fi

OLD_LIBS=$LIBS
LIBS="-L/opt/napatech3/lib $LIBS"
AC_CHECK_LIB([ntapi],
             [NT_Init],
             [PCAP_LIB="$PCAP_LIB -L/opt/napatech3/lib -lntapi"],
             [], [] )
LIBS=$OLD_LIBS

AC_CHECK_LIB(json-c, json_object_new_object, AC_DEFINE_UNQUOTED(HAVE_JSON_C, 1, [The JSON-C library is present]))

#AC_CONFIG_FILES([Makefile src/lib/Makefile example/Makefile libndpi.pc])
AC_CONFIG_FILES([Makefile nDPIIntegrated/Makefile PSPI_PcapReader/Makefile libndpi.pc])
AC_CONFIG_HEADERS(config.h)
AC_SUBST(SVN_RELEASE)
AC_SUBST(SVN_DATE)
AC_SUBST(JSON_C_LIB)
AC_SUBST(PCAP_INC)
AC_SUBST(PCAP_LIB)
CXXFLAGS="$CXXFLAGS -std=c++0x"
AC_OUTPUT

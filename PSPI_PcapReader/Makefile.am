bin_PROGRAMS = $(top_builddir)/build/ndpiReaderCPP

#AM_CPPFLAGS = -I$(top_srcdir)/src/include @PCAP_INC@
#AM_CPPFLAGS = -I$(top_srcdir)/nDPIAPIIncludes -I$(include_dir) @PCAP_INC@ @PTHREAD_CFLAGS@
__top_builddir__build_ndpiReaderCPP_CPPFLAGS = -I$(top_srcdir)/nDPIAPIIncludes -I$(include_dir) @PCAP_INC@ @PTHREAD_CFLAGS@
AM_CFLAGS = @PTHREAD_CFLAGS@

#LDADD = $(top_builddir)/src/lib/libndpi.la @JSON_C_LIB@ @PTHREAD_LIBS@ @PCAP_LIB@
#LDADD = $(top_builddir)/build/libndpiCPP.la @JSON_C_LIB@ @PTHREAD_LIBS@ @PCAP_LIB@
__top_builddir__build_ndpiReaderCPP_LDADD = $(top_builddir)/build/libndpiCPP.la @JSON_C_LIB@ -lpthread @PCAP_LIB@
#AM_LDFLAGS = -static
__top_builddir__build_ndpiReaderCPP_LDFLAGS = -static
__top_builddir__build_ndpiReaderCPP_SOURCES = ndpiReader.cpp 

__top_builddir__build_ndpiReaderCPP.o: ndpiReader.cpp


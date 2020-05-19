#lib_LTLIBRARIES = libndpi.la
lib_LTLIBRARIES = $(top_builddir)/build/libndpiCPP.la

#libndpi_la_CPPFLAGS = -I$(top_srcdir)/src/include/  -I$(top_srcdir)/src/lib/third_party/include/ 
__top_builddir__build_libndpiCPP_la_CPPFLAGS = -Wno-write-strings -std=c++98 -I$(top_srcdir)/nDPIAPIIncludes  -I$(top_srcdir)/ThirdParty/include/
#libndpi_la_LDFLAGS = -version-info 1:0:0 -export-symbols $(top_srcdir)/libndpi.sym
__top_builddir__build_libndpiCPP_la_LDFLAGS = -version-info 1:0:0 -export-symbols $(top_srcdir)/libndpi.sym


__top_builddir__build_libndpiCPP_la_includedir = $(includedir)/libndpi-@VERSION@/libndpi

__top_builddir__build_libndpiCPP_la_include_HEADERS = ../nDPIAPIIncludes/ndpi_api.h \
			     ../nDPIAPIIncludes/linux_compat.h \
			     ../nDPIAPIIncludes/ndpi_define.h \
			     ../nDPIAPIIncludes/ndpi_main.h \
			     ../nDPIAPIIncludes/ndpi_protocol_ids.h \
			     ../nDPIAPIIncludes/ndpi_protocols.h \
			     ../nDPIAPIIncludes/ndpi_typedefs.h \
			     ../nDPIAPIIncludes/ndpi_unix.h \
			     ../nDPIAPIIncludes/ndpi_win32.h

#__top_builddir__build_libndpi_la_SOURCES = ndpi_content_match.c.inc

__top_builddir__build_libndpiCPP_la_SOURCES = ndpi_main.cpp \
		     TrafficAutosenseImplementation.cpp\
		     AutosenseImplementation_Ragel2Helper.cpp\
		     protocols/afp.cpp \
		     protocols/aimini.cpp \
		     protocols/applejuice.cpp \
		     protocols/armagetron.cpp \
		     protocols/ayiya.cpp \
		     protocols/battlefield.cpp \
		     protocols/bgp.cpp \
		     protocols/ciscovpn.cpp \
		     protocols/citrix.cpp \
		     protocols/collectd.cpp \
		     protocols/corba.cpp \
		     protocols/crossfire.cpp \
		     protocols/dcerpc.cpp \
		     protocols/dhcp.cpp \
		     protocols/dhcpv6.cpp \
		     protocols/directconnect.cpp \
		     protocols/directdownloadlink.cpp \
		     protocols/dns.cpp \
		     protocols/dofus.cpp \
		     protocols/dropbox.cpp \
		     protocols/edonkey.cpp \
		     protocols/fasttrack.cpp \
		     protocols/fiesta.cpp \
		     protocols/filetopia.cpp \
		     protocols/florensia.cpp \
		     protocols/ftp_control.cpp \
		     protocols/ftp_data.cpp \
		     protocols/gnutella.cpp \
		     protocols/gtp.cpp \
		     protocols/guildwars.cpp \
		     protocols/h323.cpp \
		     protocols/halflife2_and_mods.cpp \
		     protocols/http_activesync.cpp \
		     protocols/http.cpp \
		     protocols/iax.cpp \
		     protocols/icecast.cpp \
		     protocols/imesh.cpp \
		     protocols/ipp.cpp \
		     protocols/irc.cpp \
		     protocols/jabber.cpp \
		     protocols/kerberos.cpp \
		     protocols/kontiki.cpp \
		     protocols/ldap.cpp \
		     protocols/lotus_notes.cpp \
		     protocols/mail_imap.cpp \
		     protocols/mail_pop.cpp \
		     protocols/mail_smtp.cpp \
		     protocols/maplestory.cpp \
		     protocols/mdns.cpp \
		     protocols/meebo.cpp \
		     protocols/megaco.cpp \
		     protocols/mgcp.cpp \
		     protocols/mms.cpp \
		     protocols/msn.cpp \
		     protocols/mssql.cpp \
		     protocols/mysql.cpp \
		     protocols/netbios.cpp \
		     protocols/netflow.cpp \
		     protocols/nfs.cpp \
		     protocols/noe.cpp \
		     protocols/non_tcp_udp.cpp \
		     protocols/ntp.cpp \
		     protocols/openft.cpp \
		     protocols/openvpn.cpp \
		     protocols/oracle.cpp \
		     protocols/oscar.cpp \
		     protocols/pando.cpp \
		     protocols/pcanywhere.cpp \
		     protocols/postgres.cpp \
		     protocols/pplive.cpp \
		     protocols/ppstream.cpp \
		     protocols/pptp.cpp \
		     protocols/qq.cpp \
		     protocols/quake.cpp \
		     protocols/radius.cpp \
		     protocols/rdp.cpp \
		     protocols/redis.cpp \
		     protocols/rsync.cpp \
		     protocols/rtcp.cpp \
		     protocols/rtmp.cpp \
		     protocols/rtp.cpp \
		     protocols/rtsp.cpp \
		     protocols/sflow.cpp \
		     protocols/shoutcast.cpp \
		     protocols/sip.cpp \
		     protocols/skinny.cpp \
		     protocols/skype.cpp \
		     protocols/smb.cpp \
		     protocols/snmp.cpp \
		     protocols/socks4.cpp \
		     protocols/socks5.cpp \
		     protocols/socrates.cpp \
		     protocols/sopcast.cpp \
		     protocols/soulseek.cpp \
		     protocols/spotify.cpp \
		     protocols/ssdp.cpp \
		     protocols/ssh.cpp \
		     protocols/ssl.cpp \
		     protocols/stealthnet.cpp \
		     protocols/steam.cpp \
		     protocols/stun.cpp \
		     protocols/syslog.cpp \
		     protocols/tcp_udp.cpp \
		     protocols/tds.cpp \
		     protocols/teamspeak.cpp \
		     protocols/teamviewer.cpp \
		     protocols/telnet.cpp \
		     protocols/tftp.cpp \
		     protocols/thunder.cpp \
		     protocols/tor.cpp \
		     protocols/tvants.cpp \
		     protocols/tvuplayer.cpp \
		     protocols/twitter.cpp \
		     protocols/usenet.cpp \
		     protocols/veohtv.cpp \
		     protocols/viber.cpp \
		     protocols/vhua.cpp \
		     protocols/vmware.cpp \
		     protocols/vnc.cpp \
		     protocols/warcraft3.cpp \
		     protocols/whoisdas.cpp \
		     protocols/winmx.cpp \
		     protocols/world_of_kung_fu.cpp \
		     protocols/world_of_warcraft.cpp \
		     protocols/xbox.cpp \
		     protocols/xdmcp.cpp \
		     protocols/yahoo.cpp\
		     protocols/zattoo.cpp \
		     protocols/zmq.cpp \
		     ../ThirdParty/include/actypes.h \
		     ../ThirdParty/include/ahocorasick.h \
		     ../ThirdParty/include/node.h \
		     ../ThirdParty/include/sort.h \
		     ../ThirdParty/src/ahocorasick.cpp \
		     ../ThirdParty/src/node.cpp \
		     ../ThirdParty/src/sort.cpp

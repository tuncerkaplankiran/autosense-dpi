# autosense-dpi
Port independent protocol identification from raw socket L7 payload. Based on nDPI product,https://www.ntop.org/products/deep-packet-inspection/ndpi/, but C++ version of it. C++11 standard is used in this codebase. Codebase is splitted into static and dynamic library structure for input/output modules for further extendibility. In this codebase state machine based payload matching is used to identify protocol. For protocol definition and code generation Cheetah template engine is used, https://github.com/cheetahtemplate/cheetah, and for generating state machines Ragel State Machine Compiler is used, https://github.com/bnoordhuis/ragel. 

# How To Compile
Before compile, you need to install:
- build-essential
- autoconf
- libtool
- libpcap-dev
- libpthread /libpthread-stubs0-dev

After cloning into your workspace run:
- ./autogen.sh
- make && make install

If something goes wrong/missing while compiling, you can run to return to the clean state:
- make clean
- ./restore.sh

# How to Run
After make install you can run ndpiReaderCPP binary from any path you want.

There are options but most general use cases are:
To capture and analyze live packets run below commands and surf through the internet with your browser or spotify
> ndpiReaderCPP -i eth0 

To capture and analyze already captured packets (pcap file inputs) run:
> ndpiReaderCPP -i some_file.pcap

After sending ^C (hitting CTRL+C ) signal, program will stop and dump protocol analysis in terms of protocol/packet/bytes/connection .


# Future
zerocopy mechanism will be implemented via mmap()

Netmap network driver integration for fast packet processing, https://github.com/luigirizzo/netmap. 

Will distribute as .deb package also




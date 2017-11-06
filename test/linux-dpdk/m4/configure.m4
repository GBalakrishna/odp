m4_include([test/linux-generic/m4/performance.m4])
  
LOG_COMPILER = $(top_srcdir)/test/linux-dpdk/wrapper-script.sh
AC_SUBST(LOG_COMPILER)

AC_CONFIG_FILES([test/linux-dpdk/Makefile
		 test/linux-dpdk/validation/api/pktio/Makefile])

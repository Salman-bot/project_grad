make[3]: Entering directory '/home/salman/Desktop/gdb/build/libiberty/testsuite'
make[3]: Nothing to be done for 'install'.
make[3]: Leaving directory '/home/salman/Desktop/gdb/build/libiberty/testsuite'
make[2]: Leaving directory '/home/salman/Desktop/gdb/build/libiberty'
make[2]: Entering directory '/home/salman/Desktop/gdb/build/readline'
Making install in readline
make[3]: Entering directory '/home/salman/Desktop/gdb/build/readline/readline'
make[3]: Nothing to be done for 'install'.
make[3]: Leaving directory '/home/salman/Desktop/gdb/build/readline/readline'
make[3]: Entering directory '/home/salman/Desktop/gdb/build/readline'
make[4]: Entering directory '/home/salman/Desktop/gdb/build/readline'
make[4]: Nothing to be done for 'install-exec-am'.
make[4]: Nothing to be done for 'install-data-am'.
make[4]: Leaving directory '/home/salman/Desktop/gdb/build/readline'
make[3]: Leaving directory '/home/salman/Desktop/gdb/build/readline'
make[2]: Leaving directory '/home/salman/Desktop/gdb/build/readline'
make[2]: Entering directory '/home/salman/Desktop/gdb/build/sim'
make[3]: Entering directory '/home/salman/Desktop/gdb/build/sim/arm'
/bin/bash ../../../gdb-9.2/sim/arm/../../mkinstalldirs /home/salman/Desktop/gdb/bin
mkdir -p -- /home/salman/Desktop/gdb/bin
/bin/bash ../../../gdb-9.2/sim/arm/../../mkinstalldirs /home/salman/Desktop/gdb/lib
mkdir -p -- /home/salman/Desktop/gdb/lib
n=`echo run | sed 's&^&arm-none-eabi-&'`; \
/usr/bin/install -c run /home/salman/Desktop/gdb/bin/$n
/usr/bin/install: cannot stat 'run': No such file or directory
make[3]: *** [Makefile:465: install-common] Error 1
make[3]: Leaving directory '/home/salman/Desktop/gdb/build/sim/arm'
make[2]: *** [Makefile:160: install] Error 1
make[2]: Leaving directory '/home/salman/Desktop/gdb/build/sim'
make[1]: *** [Makefile:8305: install-sim] Error 2
make[1]: Leaving directory '/home/salman/Desktop/gdb/build'
make: *** [Makefile:2254: install] Error 2
salman@salman-Lenovo-YOGA-520-14IKB:~/Desktop/gdb/bin$ ls
salman@salman-Lenovo-YOGA-520-14IKB:~/Desktop/gdb/bin$ 


bin_PROGRAMS = yabasic
yabasic_SOURCES = main.c function.c io.c graphic.c symbol.c flex.c bison.c yabasic.h bison.h
man_MANS = yabasic.1
LDADD = @X_PRE_LIBS@ -lm @LIBS@ -lX11 @X_LIBS@ @X_EXTRA_LIBS@
INCLUDES = -DUNIX
EXTRA_DIST = runme yabasic.htm yabasic.spec yabasic.flex yabasic.bison pack tests configure.in ARTISTIC GPL yabasic.xml demo.yab $(man_MANS)
TESTS = tests/simple.yab tests/grammar.yab tests/io.yab tests/bugs.yab tests/break.yab
AUTOMAKE_OPTIONS = check-news dist-shar dist-tarZ

# flags for flex (-d for debugging)
flexflags = -i -I -L -s

# create scanner and remove include for unistd.h (needed for windows)
flex: yabasic.flex Makefile
	flex $(flexflags) -t yabasic.flex >flex.c
	perl -i -n -e 'if (!/^\#include\s+<unistd.h>\s+$$/) {print if $$i;$$i++}' flex.c

# flags for bison (-t -v for debugging)
bisonflags = -d -l -t -v

bison: yabasic.bison Makefile
	bison $(bisonflags) --output-file bison.c yabasic.bison


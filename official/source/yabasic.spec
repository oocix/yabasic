
#
# Use
#	rpmbuild -bb yabasic.spec
#
# to build the package.
#

%define _unpackaged_files_terminate_build 0
Summary: Small basic interpreter with simple graphics and printing
Name: yabasic
Version: 2.762
Release: 1
Copyright: Artistic License or GPL
Group: Development/Languages
Vendor: Marc-Oliver Ihm
Source: yabasic-2.762.tar.gz
BuildRoot: /usr/src/redhat/BUILD/yabasic
%description
Yabasic implements the most common and simple elements of the basic
langugage; It comes with various loops and user defined procedures. 
Yabasic does colored grafics, printing comes with no extra effort.
Binding a yabasic program with the interpreter allows to form
a standalone executable, that my be distributed on its own.
Yabasic runs under Unix and Windows; it is small (less than 200KB) and free. 
Support and the latest version is available at www.yabasic.de
%prep
%setup
%build
./configure
make
%install
make DESTDIR=/usr/src/packages/BUILD/yabasic install
%files
%doc README NEWS ChangeLog yabasic.htm
/usr/local/bin/yabasic
/usr/local/man/man1/yabasic.1.gz

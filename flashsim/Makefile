
# DiskSim Storage Subsystem Simulation Environment (Version 3.0)
# Revision Authors: John Bucy, Greg Ganger
# Contributors: John Griffin, Jiri Schindler, Steve Schlosser
#
# Copyright (c) of Carnegie Mellon University, 2001, 2002, 2003.
#
# This software is being provided by the copyright holders under the
# following license. By obtaining, using and/or copying this software,
# you agree that you have read, understood, and will comply with the
# following terms and conditions:
#
# Permission to reproduce, use, and prepare derivative works of this
# software is granted provided the copyright and "No Warranty" statements
# are included with all reproductions and derivative works and associated
# documentation. This software may also be redistributed without charge
# provided that the copyright and "No Warranty" statements are included
# in all redistributions.
#
# NO WARRANTY. THIS SOFTWARE IS FURNISHED ON AN "AS IS" BASIS.
# CARNEGIE MELLON UNIVERSITY MAKES NO WARRANTIES OF ANY KIND, EITHER
# EXPRESSED OR IMPLIED AS TO THE MATTER INCLUDING, BUT NOT LIMITED
# TO: WARRANTY OF FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY
# OF RESULTS OR RESULTS OBTAINED FROM USE OF THIS SOFTWARE. CARNEGIE
# MELLON UNIVERSITY DOES NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT
# TO FREEDOM FROM PATENT, TRADEMARK, OR COPYRIGHT INFRINGEMENT.
# COPYRIGHT HOLDERS WILL BEAR NO LIABILITY FOR ANY USE OF THIS SOFTWARE
# OR DOCUMENTATION.


TOP_BUILDDIR=$(shell pwd)
include .paths

SUBDIRS=libddbg libparam diskmodel src

all: 	
	$(foreach d,$(SUBDIRS),$(MAKE) -C $(d);)

clean:
	$(MAKE) -C src clean
	$(MAKE) -C diskmodel clean
	$(MAKE) -C libparam clean
	$(MAKE) -C libddbg clean

distclean:
	$(MAKE) -C src distclean
	$(MAKE) -C diskmodel distclean
	$(MAKE) -C libparam distclean
	$(MAKE) -C libddbg distclean


.PHONY: doc
doc:
	$(MAKE) -C libddbg
	$(MAKE) -C libparam
	$(MAKE) -C src/modules
	$(MAKE) -C diskmodel/modules

doc-clean:
	$(MAKE) -C diskmodel/modules distclean
	$(MAKE) -C src/modules distclean
	$(MAKE) -C libparam distclean
	$(MAKE) -C libddbg distclean
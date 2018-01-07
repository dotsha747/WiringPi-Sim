#!/bin/sh

# script to patch Debian folder. Called by gitpkgtool during
# build, it is passed the arguments: $project $majorVersion $minorVersion

PROJECT=$1
MAJORVERSION=$2
MINORVERSION=$3

echo " - Patching Debian with PROJECT=${PROJECT} MAJORVERISON=${MAJORVERSION} MINORVERSION=${MINORVERSION}"

PACKAGE=`echo ${PROJECT} | tr A-Z a-z`
LIBNAME=`echo ${PROJECT} | sed -e 's/-//g'`
ARCH=`arch | sed -e 's/x86_64/amd64/' -e 's/armv[67]l/armhf/'`

echo " - PACKAGE ${PACKAGE} LIBNAME ${LIBNAME}"

sed -i -e "s/\${PACKAGE}/${PACKAGE}/" debian/control
sed -i -e "s/\${MAJORVERSION}/${MAJORVERSION}/" debian/control

# substitute variables into the contents of the .install files
#for dotinstall in debian/control debian/*install ; do
for dotinstall in debian/control ; do
	sed -i 	-e "s/\${PACKAGE}/${PACKAGE}/" \
					-e "s/\${LIBNAME}/${LIBNAME}/" \
					-e "s/\${MAJORVERSION}/${MAJORVERSION}/" \
					-e "s/\${MINORVERSION}/${MINORVERSION}/" \
					-e "s/\${ARCH}/${ARCH}/" $dotinstall
done


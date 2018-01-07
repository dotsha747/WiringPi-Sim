#! /bin/sh

# publish build packages to repository

scp $@ ${DEBREPOUSER}@${DEBREPOHOST}:${DEBREPODIR}/pool/main/
ssh ${DEBREPOUSER}@${DEBREPOHOST} "reindex_apt.sh"

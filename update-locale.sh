#!/bin/sh
set -xe

xgettext --no-location -k_ -kt -d test_intl -o po/test_intl.pot -s test_intl.c
msgmerge -N -o po/test_intl.po po/test_intl.de.po po/test_intl.pot
mkdir -p locale/de/LC_MESSAGES
msgfmt -f -c po/test_intl.de.po -o locale/de/LC_MESSAGES/test_intl.mo


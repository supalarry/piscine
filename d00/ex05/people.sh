ldapsearch -Q "uid=z*" | grep "cn" | cut -c5- | sort -r -f

The Touch command allows you to create files quickly
touch testShell00

The command truncate -s changes the size to 40 bytes.-s is the argument for changing the size.
truncate -s 40 testShell00

touch -t Allows you to change the file date. The default is aaaammddhhmm - Year:Month:Day:Hour:Minute
touch -t 202006012342 testShell00

chmod Changes file permissions. For more information: https://www.infowester.com/linuxpermissoes.php
chmod 455 testShell00 #455 change for -r--r-xr-x

tar -cf Compact the file.
tar -cf testShell00.tar testShell00

The command used to unzip is tar -xvf. Unzip by Shell doesn't change permissions and file creation date.
tar -xvf testShell00.tar

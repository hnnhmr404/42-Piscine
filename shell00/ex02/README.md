In this exercise, in addition to permissions, date and size, there are some particularities that need to be followed.

The Files ** Test0 ** and ** Test2 ** are folders. They need to be created with mkdir.

mkdir test0 test2

The file ** test5 ** is linked to ** test 3 **. To make this link is used the command ln.

ln test3 test5 #Create this duplicate file.

The File ** Test 6 ** is a symbolic link to the ** Test0 ** folder. The -s parameter creates the symbolic link.

ln -s test0 test6

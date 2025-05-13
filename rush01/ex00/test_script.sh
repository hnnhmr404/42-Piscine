echo './test "3 2 2 1 1 2 2 3 3 2 2 1 1 2 2 3" | cat -e'
./test "3 2 2 1 1 2 2 3 3 2 2 1 1 2 2 3" | cat -e
echo './test "1 3 2 3 3 1 3 2 1 2 3 2 3 2 1 2" | cat -e'
./test "1 3 2 3 3 1 3 2 1 2 3 2 3 2 1 2" | cat -e
echo './test "4 1 2 2 1 3 3 2 2 3 2 1 3 2 1 2" | cat -e'
./test "4 1 2 2 1 3 3 2 2 3 2 1 3 2 1 2" | cat -e
echo './test "1 3 2 2 2 1 3 2 1 3 3 2 2 2 1 3" | cat -e'
./test "1 3 2 2 2 1 3 2 1 3 3 2 2 2 1 3" | cat -e
echo './test "3 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e'
./test "3 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e
echo './test'
./test
echo './test "3 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" "123" | cat -e'
./test "3 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" "123" | cat -e
echo './test "1 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e'
./test "1 2 1 3 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e
echo './test "1 2 1 3, 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e'
./test "1 2 1 3, 1 2 4 2 3 2 2 1 2 3 1 2" | cat -e
echo './test "1 2 1 3 1 2 4 2 3 2 2 1 1 1 1 1" | cat -e'
./test "1 2 1 3 1 2 4 2 3 2 2 1 1 1 1 1" | cat -e
echo './test "1 2 1 3 1 2 4 2 3 2 2 1 1 1 " | cat -e'
./test "1 2 1 3 1 2 4 2 3 2 2 1 1 1" | cat -e

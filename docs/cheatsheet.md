Getting around:

pwd: show which folder you’re in
ls (or ls -la): list files (including hidden ones)
cd folder / cd .. / cd ~: move into a folder / up one level / to your home folder

Files and folders:

mkdir -p path/to/folder: create folders
nano file.c: create or edit a file (Ctrl+O save, Enter, Ctrl+X exit)
cat file: print a file’s contents
cp a b / mv a b / rm file: copy / move or rename / delete (careful: no trash can)

Compile and run:

gcc -std=c23 -Wall -Wextra -g -o build/name practice/effective-c/name.c
./build/name: run it
echo $?: exit status of the last command
gcc -S -masm=intel file.c -o build/file.s: see the assembly

gcc flags:

-o name: name the output file
-g: include debug information (the map gdb uses)
-S: stop after compiling and output assembly (a .s file) instead of a program
-c: stop after assembling and output an object file (.o)
-E: stop after preprocessing and show the result
-O0 / -O2: optimization level (none / standard)
-std=c23: which C standard to follow
-Wall -Wextra: turn on warnings
-masm=intel: show assembly in Intel syntax
-fno-asynchronous-unwind-tables: remove the .cfi lines, for cleaner assembly
-fsanitize=address / -fsanitize=undefined: catch memory errors / undefined behavior while the program runs

Viewing and comparing files:

less file: view a file page by page. Space goes down a page, /word searches, q quits.
diff a b: show the lines that differ between two files
diff -y a b: show them side by side
diff -u a b: show differences in the “unified” format Git uses

Inspecting binaries:

objdump -d -M intel file: disassemble a program into Intel-syntax assembly

Git:

git status / git pull
git add file → git commit -m "message" → git push

Inspecting binaries:

file, readelf -h, objdump -d -M intel, ldd

The tricks that help most with remembering:

Up arrow: scrolls through commands you’ve already typed.
Ctrl+R: searches your command history. Type part of a command, like gcc, and it finds your last one.
Tab: auto-completes file and folder names, which saves typing and typos.
history: lists every command you’ve run recently.
man command or command --help: built-in help for almost anything.



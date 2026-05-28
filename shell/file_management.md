# 1. Find

```
find
```
When no arguments are given, `find` lists all files in the current directory and all of its subdirectories. Commonly used options to shorten the list include `-name` (only list files with a certain pattern in their name), `-iname` (also ignore the case of file names), and `-type` (which will restrict the results to files of a certain specified type, such as `d` for directory, `l` for symbolic link, or `f` for a regular file, etc.).<br>

Searching for files and directories named gcc:<br>
```
$ find /usr -name gcc
```

Searching only for directories named gcc:<br>
```
$ find /usr -type d -name gcc
```

Searching only for regular files named gcc:<br>
```
$ find /usr -type f -name gcc
```

## Advanced find option

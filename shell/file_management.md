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

Another good use of find is being able to run commands on the files that match your search criteria. The `-exec` option is used for this purpose.<br>
```
$ find -name "*.txt" -exec cat {} ';'
```
The `{}` (squiggly brackets) is a placeholder that will be filled with all the file names that result from the find expression, and the preceding command will be run on each one individually.<br>

Please note that you have to end the command with either `';'` (including the single-quotes) or `\;`. Both forms are fine.<br>

One can also use the `-ok` option, which behaves the same as `-exec`, except that find will prompt you for permission before executing the command. This makes it a good way to test your results before blindly executing any potentially dangerous commands.<br>
```
$ find -name "*.swp" -ok cat {} ';'
```

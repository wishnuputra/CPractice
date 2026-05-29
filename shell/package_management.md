# 1. dpkg

## Debian based

List all package in the system:<br>
```
dpkg --list | less
```

Only show package bzip2 (high quality compression):<br>
```
dpkg --list | grep bzip2
```

List all the files in the package bzip2:<br>
```
dpkg --listfiles bzip2 | less
```

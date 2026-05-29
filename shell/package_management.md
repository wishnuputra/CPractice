# 1. Low Level Package Management

## 1.1 Debian based `dpkg`

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

## 1.2 Red Hat `rpm`

```
rpm -qa | grep bzip2
```

#2. High Level Package Management

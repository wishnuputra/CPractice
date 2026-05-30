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

Query all the package, then look for a package named `bzip2`:<br>
```
rpm -qa | grep bzip2
```

Query all the packages then list the package named `bzip2` with information about the package:<br>
```
rpm -qil bzip2 | less
```

Give a detail listing of what is inside the package:<br>
```
ls -lF $(rpm -ql bzip2) | less
```

Trying to remove the package:<br>
`--test` means we are just testing this command and will not execute it.<br>
```
sudo rpm -e --test bzip2
```
<img width="941" height="168" alt="image" src="https://github.com/user-attachments/assets/c1303151-dcd8-42c4-b43d-cfee78dca880" />

See what bzip2 package provides:<br>
```
rpm -q --whatprovides bzip2
```

#2. High Level Package Management

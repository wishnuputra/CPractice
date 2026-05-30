## 1. Set Priority

List running processes:<br>
```
ps lf
```

Change priority:<br>
```
renice +5 process_id
```

## 2. Background and Foreground Process

Execute a job in the background by suffix `&`:<br>
```
updatedb &
```

Suspend a foreground job:<br>
```
CTRL + Z
```

Terminate a job:<br>
```
CTRL + C
```


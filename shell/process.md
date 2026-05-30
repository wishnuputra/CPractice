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

Resume suspended job:<br>
`bg` to resume as background task.<br>
`fg` to resume as foreground task.<br>

Show background job:<br>
`jobs` or `jobs -l`

## 3. Terminating process

```
kill -SIGKILL <pid>
```
or
```
kill -9 <pid>.
```

### 4. Listing Process

`ps aux`<br>
`ps -l`<br>
`ps -e`<br>
`ps -elf`<br>

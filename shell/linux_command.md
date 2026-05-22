# Linux Terminal

## 1. File System Navigation

`ls` list storage<br>
`ls /` lists the contents of your Root Directory<br>
`ls /home` list the contents of your home folder<br>
`clear` or `ctrl + l` to clear the screen<br>

`ls -l` list the contents of a directory in a long list format and provide detail information of each file<br>
`ls -l /home` long list your home directory<br>
`pwd` print working directory or your current directory<br>
The sign `~$` means you are on the home directory<br>

`cd ~` will bring you back to your home directory<br>
`cd /` will bring you the the root directory<br>
`cd /home` will bring you to home directory<br>

### Meaning of colors
<img width="344" height="174" alt="image" src="https://github.com/user-attachments/assets/c63215d2-d6b5-436f-9e2d-2cb69d20fc02" />

*Blue* means a folder<br>
*Green* means a program or binaries<br>
*White* is a file<br>

### Meaning of characters on the left side
<img width="604" height="111" alt="image" src="https://github.com/user-attachments/assets/9a444659-6340-43a0-b1a2-00d83acfed52" />

They are a permission<br>
`d` means a directory or folder<br>
`-` is a file<br>
`l` is a link<br>

## 2. Basic File Editing
`touch file_name` creates a file<br>
if you use `touch` on a file that already exist, it will recreate the file with the same content<br>
`cat` read, display, and concatenate a text file<br>

### Nano File Editor

`nano` open a text editor<br>
`nano file_name.txt` open a new file. If we save, it will creates the file<br>
`ctrl + o` write or save the changes<br>
`ctrl + x` exit<br>

## 3. File Management

`cp` copy a file onto target file. example: `cp file_name.txt target_file.txt`<br>
`diff` show differences between two files. example `diff file_one.cpp file_two.cpp`<br>
`rm` removes file. Be careful with this command, because it will removes file <mark>permanently</mark><br>
`mkdir` make new directory or folder<br>
`mv` move a file into a folder. example `mv test.txt folder`<br>
`mv *.txt folder` move all files with .txt extension into the folder<br>
`mv test.txt ..` move the file one directory behind<br>
`mv ../test.txt .` move a file from one directory behind to current directory<br>
`mv testOne.txt testTwo.txt` rename a file. If the new file name is already exist, it will be overwritten<br>

## 4. Bash Configuration

BASH - Bourne Again Shell<br>
`ls -l -a` or `ls -la` show all files in the directory including hidden files<br>
Files that start with dot are hidden. For example `.cache`<br>
<img width="295" height="73" alt="image" src="https://github.com/user-attachments/assets/77d7c360-0ccb-4967-9d01-7e9f2296c8a4" /><br>

`.bashrc` is a configuration file for the bash<br>
<img width="651" height="22" alt="image" src="https://github.com/user-attachments/assets/0f996bda-ce42-4bcf-803f-b905572beed4" /><br>

`~/.bashrc` Editing .bashrc file in home directory will affect only to current user<br>
`/etc/skel/.bashrc` This is the template .bashrc. Editing the .bashrc in this skel directory will affect the whole user<br>

### Alias

Adding alises in `.bashrc` file<br>
<img width="241" height="121" alt="image" src="https://github.com/user-attachments/assets/273ad61d-1b68-4eec-9141-cfd95e2f7e99" />

`alias` will show all the alias you currently set in the terminal<br>
<img width="380" height="66" alt="image" src="https://github.com/user-attachments/assets/ab94f4b9-008d-44f1-9de1-a0ab8bf96657" />

`unalias` will unable an alias. However it will be restored back when you restart the terminal<br>
<img width="292" height="26" alt="image" src="https://github.com/user-attachments/assets/d2ab6de1-5ec4-44b4-9fa7-048de97b361b" /> will show today weather<br>

## 5. Output Redirection

`>`, `<`, `>>`, `<<` are the symbol for output redirection <br>

### Redirect output to a file
```
ls -l > file.txt
```
will output the result of `ls -l` into the file.txt instead into the monitor<br>
**Warning** using `>` this will overwrite the file.txt if it was there already<br>

```
ls -l >> file.txt
```
Now using `>>` this will append the output result into file<br>

### Chain Command

```
ls -l | grep 'txt'
```
Using pipe `|` will list only a line that contain `txt`<br>
What really happen is we taking the output of `ls -l` command and chaining it as an input to `grep` command then output it to the monitor<br>

Tips: In Bash, a pipe (represented by the | operator) connects the standard output (stdout) of one command directly to the standard input (stdin) of the next command. This allows you to string multiple simple utilities together into a cohesive data-processing pipeline without saving intermediate data to temporary files.<br>

I ran `ls -l / >> filte.txt` multiple times to create multiple occurances in the `file.txt`<br>
```
cat file.txt | sort | uniq
```
This will sort the output from cat command then will only show uniqe occurence.
<img width="516" height="342" alt="image" src="https://github.com/user-attachments/assets/118ecf8c-912f-459a-b4b5-98f2b236aff2" />

Tips:
In the command line, > and | do completely different things. Use > to save output to a file, and use | (pipe) to send output to another command.<br>
The > symbol takes the result of a command and writes it directly to a file. It acts as a bridge between the command and the filesystem.<br>

## 6. History
`history` This command will show all the commands that we have entered.<br>
To avoid command being saved in the history: Type space before typing the command.<br>
<img width="277" height="120" alt="image" src="https://github.com/user-attachments/assets/1c078d4d-a10e-45ab-8ef5-d78c109a61b9" />
`!188` This will execute command at line number 188 in the history.

## 7. Stream

There are three types of streams:<br>
0. stdin<br>
1. stdout<br>
2. sterr<br>

```
find / -name *.log 
```
The command above will find in root directory all files that has .log extension. However because we do not have access to root, it will print a lot of errors. Below are the result of executing this command.<br>
<img width="1155" height="283" alt="image" src="https://github.com/user-attachments/assets/ce5b69d8-f85e-4602-b64d-09c3f7a82856" />

To avoid seeing all these errors and just see the result that we have access to, we can redirects the errors to `/dev/null`
```
find / -name *.log 2> /dev/null
```
Executing this command will give clean result. However the error message will be gone forever since we redirects it to `/dev/null`<br>
<img width="727" height="117" alt="image" src="https://github.com/user-attachments/assets/96a34ffa-b646-48de-ba34-c4e67767b97c" />

If we want to capture the error messages, we can redirect it to a file.<br>
```
find / -name *.log 2> error.txt
```

We can also capture the success result, by redirecting it to a file.<br>
```
find / -name *.log 1> success.txt
```

Now we can redirect all the result to files.<br>
```
find / -name *.log 1> successSecond.txt 2> errorSecond.txt
```
## Personal Notes:

`apt search package_name` will check if a certain package is available on APT<br>





References:<br>
[Learn Linux TV](https://www.youtube.com/watch?v=MnY0K-3_Fjk&list=PLT98CRl2KxKHaKA9-4_I38sLzK134p4GJ&index=4&t=907s)


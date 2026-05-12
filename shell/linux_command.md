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




References:<br>
[Learn Linux TV](https://www.youtube.com/watch?v=MnY0K-3_Fjk&list=PLT98CRl2KxKHaKA9-4_I38sLzK134p4GJ&index=4&t=907s)


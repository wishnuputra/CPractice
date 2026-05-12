`vim file_name.c` open a file using vim<br>
Vim works with modes. When we enter vim, we are in the normal mode.<br>

## 1. Normal Mode

`:` is to start entering a vim command<br>
`:q` to quit vim<br>
`:q!` force quit vim without saving<br>
`:w` write or save changes to the file<br>
`:wq` write and then quit<br>

`:set number` activate line number<br>
`:set relative number` activate line number relative to the cursor position<br>
`h` `j` `k` `l` moves cursor left, down, up, right<br>



`:! + terminal command` is used to execute linux terminal command inside vim. For example `:!ls` will execute the linux `ls` command<br>

`number + arrow key` will bring the cursor up, down, left, or right n times.

## 2. Insert Mode

Pressing these buttons below in the normal mode will enter into **insert mode**.<br>
<br>
`i` insert text before the cursor<br>
`a` insert text after the cursor (appending)<br>
`o` insert text in the new line (opening)<br>
<br>
`Shift + i` insert text at the beginning of the line<br>
`Shift + a` insert text at the end of the line<br>
`Shift + o` insert text above the line<br>

`Esc` pressing excape will bring you back to the **normal mode**.<br>

Video 17:24
<br>
References:<br>
[Vim Tutorial](https://www.youtube.com/watch?v=RZ4p-saaQkc&list=WL&index=2&t=957s&pp=iAQBsAgC)<br>
[Mark Down Guide](https://www.markdownguide.org/basic-syntax/)<br>

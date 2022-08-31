0x00. Shell, basics
===================

DevOpsShellBash


About Bash projects
-------------------

Unless stated, all your projects will be auto-corrected with Ubuntu 20.04 LTS.

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/205/image.jpg)

Resources
---------

**Read or watch**:

-   [What Is "The Shell"?](https://alx-intranet.hbtn.io/rltoken/vwO91sqNBgRL03BLu-ueiA "What Is "The Shell"?")
-   [Navigation](https://alx-intranet.hbtn.io/rltoken/iblidp7yp6i-QpT8rDXHaA "Navigation")
-   [Looking Around](https://alx-intranet.hbtn.io/rltoken/xEKUCnQsMH0esQ6fJU5vLA "Looking Around")
-   [A Guided Tour](https://alx-intranet.hbtn.io/rltoken/HUhQ73fFR1GOC5nb4r-mDw "A Guided Tour")
-   [Manipulating Files](https://alx-intranet.hbtn.io/rltoken/olv-1tj4d1LA57Z0PrLNvw "Manipulating Files")
-   [Working With Commands](https://alx-intranet.hbtn.io/rltoken/zUtux3Pm0BkvtwXzbTtkmA "Working With Commands")
-   [Reading Man pages](https://alx-intranet.hbtn.io/rltoken/rddGdsqLf8_kRzp12RaD4A "Reading Man pages")
-   [Keyboard shortcuts for Bash](https://alx-intranet.hbtn.io/rltoken/JcsRq7PW6v7SdpPH_N8udQ "Keyboard shortcuts for Bash")
-   [LTS](https://wiki.ubuntu.com/LTS)
-   [Shebang](https://alx-intranet.hbtn.io/rltoken/cE8ZA3kgEaFhB-IDNv31bQ "Shebang")

**man or help**:

-   `cd`
-   `ls`
-   `pwd`
-   `less`
-   `file`
-   `ln`
-   `cp`
-   `mv`
-   `rm`
-   `mkdir`
-   `type`
-   `which`
-   `help`
-   `man`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/02rKNnoj4VMlA7BHYppIQg "explain to anyone"), **without the help of Google**:

### General

-   What does RTFM mean?
-   What is a Shebang

### What is the Shell

-   What is the shell
-   What is the difference between a terminal and a shell
-   What is the shell prompt
-   How to use the history (the basics)

### Navigation

-   What do the commands or built-ins `cd`, `pwd`, `ls` do
-   How to navigate the filesystem
-   What are the . and .. directories
-   What is the working directory, how to print it and how to change it
-   What is the root directory
-   What is the home directory, and how to go there
-   What is the difference between the root directory and the home directory of the user root
-   What are the characteristics of hidden files and how to list them
-   What does the command `cd -` do

### Looking Around

-   What do the commands `ls`, `less`, `file` do
-   How do you use options and arguments with commands
-   Understand the ls long format and how to display it
-   [A Guided Tour](https://alx-intranet.hbtn.io/rltoken/HUhQ73fFR1GOC5nb4r-mDw "A Guided Tour")
-   What does the `ln` command do
-   What do you find in the most common/important directories
-   What is a symbolic link
-   What is a hard link
-   What is the difference between a hard link and a symbolic link

### Manipulating Files

-   What do the commands `cp`, `mv`, `rm`, `mkdir` do
-   What are wildcards and how do they work
-   How to use wildcards

### Working with Commands

-   What do `type`, `which`, `help`, `man` commands do
-   What are the different kinds of commands
-   What is an alias
-   When do you use the command help instead of man

### Reading Man Pages

-   How to read a man page
-   What are man page sections
-   What are the section numbers for User commands, System calls and Library functions

### Keyboard Shortcuts for Bash

-   Common shortcuts for Bash

### LTS

-   What does `LTS` mean?

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 20.04 LTS
-   All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
-   All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
-   The first line of all your files should be exactly `#!/bin/bash`
-   A `README.md` file at the root of the repo, containing a description of the repository
-   A `README.md` file, at the root of the folder of *this* project, describing what each script is doing
-   You are not allowed to use backticks, `&&`, `||` or `;`
-   All your scripts must be executable. To make your file executable, use the `chmod` command: `chmod u+x file`. Later, we'll learn more about how to utilize this command.

More Info
---------

*Example of line count and first line*

```
julien@ubuntu:/tmp$ wc -l 12-file_type
2 12-file_type
julien@ubuntu:/tmp$ head -n 1 12-file_type
#!/bin/bash
julien@ubuntu:/tmp$

```

In order to test your scripts, you will need to use this command: `chmod u+x file`. We will see later what does `chmod` mean and do, but you can have a look at `man chmod` if you are curious.

*Example*

```
julien@ubuntu:/tmp$ ls
12-file_type
lll
julien@ubuntu:/tmp$ ls -la lll
-rw-rw-r-- 1 julien julien 15 Sep 19 21:05 lll
julien@ubuntu:/tmp$ cat lll
#!/bin/bash
ls
julien@ubuntu:/tmp$ ls -l lll
-rw-rw-r-- 1 julien julien 15 Sep 19 21:05 lll
julien@ubuntu:/tmp$ chmod u+x lll # you do not have to understand this yet
julien@ubuntu:/tmp$ ls -l lll
-rwxrw-r-- 1 julien julien 15 Sep 19 21:05 lll
julien@ubuntu:/tmp$ ./lll
12-file_type
lll
julien@ubuntu:/tmp$

```

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

Tasks
-----

### 0\. Where am I?

mandatory

Write a script that prints the absolute path name of the current working directory.

Example:

```
$ ./0-current_working_directory
/root/alx-system_engineering-devops/0x00-shell_basics
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `0-current_working_directory`

 Done? Help Check your code Get a sandbox

### 1\. What's in there?

mandatory

Display the contents list of your current directory.

Example:

```
$ ./1-listit
Applications    Documents   Dropbox Movies Pictures
Desktop Downloads   Library Music Public
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `1-listit`

 Done? Help Check your code Get a sandbox

### 2\. There is no place like home

mandatory

Write a script that changes the working directory to the user's home directory.

-   You are not allowed to use any shell variables

```
julien@ubuntu:/tmp$ pwd
/tmp
julien@ubuntu:/tmp$ echo $HOME
/home/julien
julien@ubuntu:/tmp$ source ./2-bring_me_home
julien@ubuntu:~$ pwd
/home/julien
julien@ubuntu:~$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `2-bring_me_home`

 Done? Help Check your code Get a sandbox

### 3\. The long format

mandatory

Display current directory contents in a long format

Example:

```
$ ./3-listfiles
total 32
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 sylvain staff 19 Jan 25 00:23 1-listit
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:39 3-listfiles
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `3-listfiles`

 Done? Help Check your code Get a sandbox

### 4\. Hidden files

mandatory

Display current directory contents, including hidden files (starting with `.`). Use the long format.

Example:

```
$ ./4-listmorefiles
total 32
drwxr-xr-x@ 6 sylvain staff 204 Jan 25 00:29 .
drwxr-xr-x@ 43 sylvain staff 1462 Jan 25 00:19 ..
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 sylvain staff 19 Jan 25 00:23 1-listit
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:39 3-listfiles
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:41 4-listmorefiles
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `4-listmorefiles`

 Done? Help Check your code Get a sandbox

### 5\. I love numbers

mandatory

Display current directory contents.

-   Long format
-   with user and group IDs displayed numerically
-   And hidden files (starting with .)

Example:

```
$ ./5-listfilesdigitonly
total 32
drwxr-xr-x@ 6 501 20 204 Jan 25 00:29 .
drwxr-xr-x@ 43 501 20 1462 Jan 25 00:19 ..
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:23 1-listfiles
-rwxr-xr-x@ 1 501 20 19 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 501 20 20 Jan 25 00:39 3-listfiles
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:41 4-listmorefiles
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:43 5-listfilesdigitonly
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `5-listfilesdigitonly`

 Done? Help Check your code Get a sandbox

### 6\. Welcome

mandatory

Create a script that creates a directory named `my_first_directory` in the `/tmp/` directory.

Example:

```
$ ./6-firstdirectory
$ file /tmp/my_first_directory/
/tmp/my_first_directory/: directory
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `6-firstdirectory`

 Done? Help Check your code Get a sandbox

### 7\. Betty in my first directory

mandatory

Move the file `betty` from `/tmp/` to `/tmp/my_first_directory`.

Example:

```
$ ./7-movethatfile
$ ls /tmp/my_first_directory/
betty
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `7-movethatfile`

 Done? Help Check your code Get a sandbox

### 8\. Bye bye Betty

mandatory

Delete the file `betty`.

-   The file `betty` is in `/tmp/my_first_directory`

Example:

```
$ ./8-firstdelete
$ ls /tmp/my_first_directory/
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `8-firstdelete`

 Done? Help Check your code Get a sandbox

### 9\. Bye bye My first directory

mandatory

Delete the directory `my_first_directory` that is in the `/tmp` directory.

Example:

```
$ ./9-firstdirdeletion
$ file /tmp/my_first_directory
/tmp/my_first_directory: cannot open `/tmp/my_first_directory' (No such file or directory)
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `9-firstdirdeletion`

 Done? Help Check your code Get a sandbox

### 10\. Back to the future

mandatory

Write a script that changes the working directory to the previous one.

```
julien@ubuntu:/tmp$ pwd
/tmp
julien@ubuntu:/tmp$ cd /var
julien@ubuntu:/var$ pwd
/var
julien@ubuntu:/var$ source ./10-back
/tmp
julien@ubuntu:/tmp$ pwd
/tmp

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `10-back`

 Done? Help Check your code Get a sandbox

### 11\. Lists

mandatory

Write a script that lists all files (even ones with names beginning with a period character, which are normally hidden) in the current directory and the parent of the working directory and the `/boot` directory (in this order), in long format.

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `11-lists`

 Done? Help Check your code Get a sandbox

### 12\. File type

mandatory

Write a script that prints the type of the file named `iamafile`. The file `iamafile` will be in the `/tmp` directory when we will run your script.

Example

```
ubuntu@ip-172-31-63-244:~$ ./12-file_type
/tmp/iamafile: ELF 64-bit LSB  executable, x86-64, version 1 (SYSV), dynamically linked (uses shared libs), for GNU/Linux 2.6.24, BuildID[sha1]=bd39c07194a778ccc066fc963ca152bdfaa3f971, stripped

```

Note that depending on the file, the output of your script will be different.

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `12-file_type`

 Done? Help Check your code Get a sandbox

### 13\. We are symbols, and inhabit symbols

mandatory

Create a symbolic link to `/bin/ls`, named `__ls__`. The symbolic link should be created in the current working directory.

```
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 144
drwxrwxr-x  2 ubuntu ubuntu   4096 Sep 20 03:24 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:24 ..
ubuntu@ip-172-31-63-244:/tmp/sym$./13-symbolic_link
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 144
drwxrwxr-x  2 ubuntu ubuntu   4096 Sep 20 03:24 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:24 ..
lrwxrwxrwx  1 ubuntu ubuntu      7 Sep 20 03:24 __ls__ -> /bin/ls

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `13-symbolic_link`

 Done? Help Check your code Get a sandbox

### 14\. Copy HTML files

mandatory

Create a script that copies all the HTML files from the current working directory to the parent of the working directory, but only copy files that did not exist in the parent of the working directory or were newer than the versions in the parent of the working directory.

You can consider that all HTML files have the extension `.html`

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x00-shell_basics`
-   File: `14-copy_html`

 Done? Help Check your code Get a sandbox

[Done with the mandatory tasks? Unlock 5 advanced tasks now!](https://alx-intranet.hbtn.io/projects/205/unlock_optionals)

Copyright © 2022 ALX, All rights reserved.

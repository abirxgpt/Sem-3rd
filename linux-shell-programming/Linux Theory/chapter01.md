# **Introduction To Linux And Linux Utilities:** 

### History of Linux
+ The First Version of **Unics** was Made by Ken Thompson and Dennis Richie in *1969*
+ It was made on an Assembly Language **DEC PDP-11** by this it was not completely platform Independant
+ Then they made it in <u>C Language</u> & Platform Independent with the Help of Dennis Richie and Named it **UNIX**
+ UNIX was also not a free operating system even after being made up on a Independent Platform it was not available for every hardware
+ in 1983 it was made with **GNU Project** and became both free and open source.

#### Free Software
`Free software basically means making it free like in the term of free to Use, Change, Distribute And Modify.`

**More Precisely the Freedom was given in like four aspects:**
1. To Run
2. To Study
3. To Improve
4. To Redistribute Copies

#### GNU GPL
so whenever developers make a software they can license it under **GNU General Public License** to make it Free and Open Source, by doing this the software will be free no matter who changes it or distributes the program.  

it is like make a software copyright but not to sue or stop using that but to make and keep it free to all the public and not to restrict it for anyone

#### Linux
Development of the most important Unix system
tools mostly finished (C compiler, text editors, shell,
boot loader)  
A free, working Unix kernel was still missing.  

Then **MINIX** was created by **Andrew Tanenbaum** to study computer science but it's licensing was having issues.

So to Solve that **Linus Torvalds** the Student of the **University of Helsinki** created a new kernel which was named as **"LINUX"**  
then he made it free for further Development and Distribution.
> + Linus Created Linux in 1991.  
> + It was named as a mix of "Linus" and "UNIX".
> + It is a popular open source operating system
> + Originally released as free software under the GNU
General Public License.


* Linux is a kernel that forms the core of an operating system.
* Combined with GNU software, it becomes the GNU/Linux operating system.
* GNU/Linux is released under the GNU Public License, allowing free use, modification, and distribution.
* Created by Linus Torvalds, Linux offers an alternative to Windows, macOS, and other operating systems.
* It is widely used in supercomputers and high-performance computers for research purposes.

#### Where is Linux used?
* Server
* Desktop
* Workstation
* Routers
* Embedded devices
* Mobile devices (Android is a Linux-based OS)

### Architecture of Linux  
Linux can be Divided into Three Major Components they are: **Kernel**, **Environment** & **File Structure.**
![](https://i.imgur.com/XeT4ZaW.png)

+ **Kernel** is the Main Core Component. it runs the programs and manages the hardware in itself.

+ **Environment** is the basic Terminal (Provides an Interface to the User) which takes command from the user and sends it to the Kernel for execution.

+ **File Structure** as the Name suggest is the basic thing which means where the file is located in the system or the location and database of the files, such as disks.

### Kernel 
It is the Core Component of most of the Operating Systems.  
It is the Bridge between the Application and the Processes which are done on Hardware Level.  
It's Tasks includes the Managing of System's Resources.  
Gives the Lowest Level Abstraction layer that software needs to perform it's function.  
It makes these Facilities Available through Inter-Process Communication and System Calls.

### Shell
Shell is a command interpreter which gives the Line Oriented Interface between User and Operating System.  
It Interprets the Command given by the user and then sends it as an Instruction to the Operating System.  
Shell has many types and user should choose their shell according to their use and easyness.  
Shell is simply an Application running over the Kernel and Which Provides a Powerful Interactive Space to the user.

### Applications/Programs
Linux provides the Vast range of software both Free and Paid or Open/Closed source for Leisure, Study and Multiple uses.  
Also Every other software we use in Windows or MacOS has it's own alternative software for Linux OS or we can say that Multiple Alternatives.  
Most of the Software that you need are Available on the distribution repositories.

### Stages of Linux Boot Process:
```mermaid
graph TD
    BIOS_Boot --> Boot_Loader
    Boot_Loader --> Kernel_Image
    Kernel_Image --> Initialize_Devices
    Initialize_Devices --> Mount_FileSystem
    Mount_FileSystem --> Init_Program
    Init_Program --> Start_System_Processes
    Start_System_Processes --> Login_Method

```
* BIOS Boot: The machine's BIOS or boot microcode initializes and runs a boot loader.
* Boot Loader: The boot loader locates the kernel image on the disk and loads it into memory to start the system.
* Kernel Image: The kernel initializes the devices and their drivers.
* Initialize Devices: The kernel mounts the basic filesystem.
* Mount Filesystem: The kernel starts a program referred to as init with a process ID zero.
* Init Program: Init sets the remainder of the system processes in motion.
* Start System Processes: Init starts a method allowing you to log in, typically at the end or near the end of the boot sequence.
  
Short Trick to Learn:  
`B-B-K-D-F-P-S-Log`

### Linux Directory Structure
+ LINUX File structure is like a Hiearchial Structure, Like a Inverted Tree.
+ The Base or Main Folder is called as Root or Denoted as Slash (/).
+ **bin:** it is Available for all users, It is Essential for all Users.
+ **boot:** bootable Kernel and bootloader.
+ **dev:** contains various devices.
+ **etc:** contains various system configs.
+ **home:** contains home directories for all users.

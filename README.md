# Scilab6-Test-Toolkit
## _Implenetation of exterenal C library_



This repository is a test toolbox for Scilab.
Details for builing this toolkit for Windows/Mac can be found at https://static.fossee.in/scilab/manuals/Scilab-toolbox-dev-doc.pdf


## Steps to build the external C library -- TLDR

-  Run "run.sh" at ./external-library for LinuxX64.
-  Navigate to the toolbox directory in the Scilab File browser.
-  Run "exec builder.sce" to build the toolbox followed by "exec loader.sce" to load the toolbox.\
-  Open Scilab help with "help" command and browse through the help content of "test_toolbox" namely the function - trans", and exectute it by clicking the run button.



## Installation for Linux

Compile the external library for your system

```sh
cd external-library
bash run.sh
```
Open Scilab, navigate to the toolkit root directory in the File Browser and run in console

```sh
exec builder.sce
exec loader.sce
```
To test the toolkit run
```sh
help
```
Find the "test_toolbox" help entry ilustrated
<img src="/images/help.png">
Run the executable command by clicking the Run button.

Alternatively, run in the Scilab console
```sh
y = trans([1,2;3,4])
```
## License and Copyright
Scilab is a free software, released under the terms of the GNU General Public License (GPL) v2.0. Scilab was originally licensed under the terms of the CeCILL v2.1 and continues to be available under such terms. 


This project is licensed under GNU General Public License v3.0.

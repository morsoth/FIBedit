#+options: \n:t numbers:nil author:nil timestamp:nil

* FIBedit
/FIB's (un)official text editor./

#+attr_html: :width 1000
[[file:img/captura.png]]

** Istallation
*** Install Qt5
Qt5 libraries are required to compile and run fibedit.

#+begin_src shell
sudo apt update
sudo apt install qt5-qmake qtbase5-dev
#+end_src

*** Compile
#+begin_src shell
qmake
make
#+end_src

*** Execute
#+begin_src shell
./fibedit
#+end_src

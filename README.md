Instructions
============

0. Make sure you have the command-line git client installed; at a command prompt type

        git version
    
You should get back a version number, such as "git version 1.7.4.". If you get something like "command not found" instead, you need to install git first.
  
1. Clone the repository into a new directory:

        git clone https://github.com/nbu-gamedev/citb102-2014-6 citb102
    
This will create a new directory under the current directory, called citb102, and clone a copy of the repository into it.

2. Go into the repository and create a personal subdirectory for your work. Use f followed by your faculty number, e.g. f12345:

        cd citb102
        md f12345
        cd f12345
    
Since git can't track empty directories, you need to at least one file before you can commit it. Use your favorite text editor to create a file called name.txt containing your name. Prepare it to be committed to the repo:

        git add name.txt
    
Commit the file (and, implicitly, the newly created subdirectory where it resides) to your local repository:

        git commit -m "Initial commit from John Doe"
    
The message after -m is called a commit log message; it should describe the contents of the commit, e.g. "Homework for week 1" or "Final test, second revision". It cannot be ommited. Make it short but meaningful and remember that it will be visible to anyone.

3. Now the new file and the new folder are committed in your local repository, but is not yet propagated to the original GitHub repository. To "push" it to the repository, use

        git push origin master
    
This should prompt you for your username and password, and on accepting them, push your changes to the central repository on GitHub.
If this is successful, you should be able to see your changes at the repository page, https://github.com/nbu-gamedev/citb102-2014-6/

Note: you need to be added as a team member first (contact your professor), and have two-factor authentication _disabled_.

4. Now your folder is created and commited, you are ready to do some work in it. Repeat the steps above.
 
Create some files, and add them to git:

        git add homework1.cc
        git add homework2.cc
        git commit "Homeworks 1 & 2"
    
Don't forget to "git add" the changed files again after each change you want to commit - not just the first time you create them!

Commit to your local repository as frequently as you wish, including at some intermediate points in your work. You don't need to push to GitHub every time.
When you are ready to submit your work to the central repository, use git push:
    
        git push origin master
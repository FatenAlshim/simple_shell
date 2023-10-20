0x16. C - Simple Shell Important message from Julien It’s time for the famous Simple Shell project. This is one of the most anticipated project and also one that will challenge you a lot about everything you have learn so far:

Basics of programming Basics of C Basics of thinking like an engineer Group work and Learning how to learn I would like to take this moment to remind you about a few important things.

First, remember the framework. If you do not know it by heart already, it is probably a good idea to read it again: https://intranet.alxswe.com/concepts/559

Note that there is no point in this framework that says it is ok to look at code from other people. It is not allowed to look at other people’s code, either other students or online articles or videos. At ALX SE we do not copy solutions and we do not look at it when we start a project.

In the context of learning (some of these will no longer be true when you work):

NEVER copy any code, never look at solution (and never give any solution to your friends, you are not helping them by doing so) ALWAYS write code alone from scratch after you get help to check that you have actually understood. If you can not do it, you have not understood enough, and need to study more. Do not rewrite code from memory, but from understanding. I saw some of you sharing resources with each other already. Tutorials on how to do the shell step by step with all the code associated with these, or even video and documents with the solution without even any explanation. This is not the right way to learn. Please do not be tempted by these links. They will only push you to take shortcuts and / or cheat. And trust me, you will be caught. Kimba is not a joke and he is here to remind you why you are here.

While we encourage the use of ChatGPT and co in the framework (also, not right away, but at the right step, see framework), it is important to understand that the same rules apply to these AI tools (again, in the context of learning. When you will work it will be completely different, but context matters). At no point does it say that you are allowed to use copilot or ChatGPT to code the solution. If you do, you will get 200% (for a few hours), understand 0, learn 0, and you will be caught for cheating 100%, and then your score for both you and your partner will be 0%. If you don’t get how to use ChatGPT and other AI tools in the context of learning, simply do not use them.

The reality is that at this point of the program, if you have not cheated before, you have everything you need to complete the project with what you have learned + the page “Everything you need to know to start coding your own shell” https://intranet.alxswe.com/concepts/64

Actually, you do not even need to open Google once. Focus on your whiteboarding, and everything will fall in place. Remember, at ALX SE you never learn the solution, you learn how to walk toward the solution. You learn to create the tutorial, so if you follow one, you are looking at the solution, you are taking a very serious shortcut that will undermine your learning.

Last thing about the framework. Note that the first thing to do is “0. Read”. Every detail counts. Make sure you read and test everything.

The shell project is a group project. That means you will be paired with someone. You already did this with printf, so please apply everything you have learned from the printf experience here. A quick reminder, that a group project is NOT:

I do nothing and cross fingers for my partner to do everything so I can have a good score I do everything because I am so much better than my partner and I don’t care about them A group project at ALX SE is a project that both of you are responsible for. Everything anyone pushes to Github is the responsibility of both partners. It is not ok to say later “I didn’t cheat it’s my partner I didn’t know they didn’t tell me”.

So you are supposed to work TOGETHER. And you should both understand every single line of code that any of you pushes. Here is a link for you to read about pair programming: https://intranet.alxswe.com/concepts/121

If you plan on not working on the shell project (or if at any point in time you can’t), it is your responsibility to tell both the staff and your partner so that they can find another partner who will work with them asap.

If your group gets caught for plagiarism we will not tolerate “I didn’t do anything, so I should not be flagged”. Yes you should be flagged, because you are someone who doesn’t care about others and thought it was ok to let your partner down and to maybe get the score without doing anything.

The shell is an incredibly cool project. GL HF!

Julien
===============================================================================
0. Betty would be proud
mandatory
Score: 50.0% (Checks completed: 50.0%)
Write a beautiful code that passes the Betty checks

Repo:

GitHub repository: simple_shell
===============================================================================
1. Simple shell 0.1
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a UNIX command line interpreter.

Usage: simple_shell
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it…
======================================================================================
2. Simple shell 0.2
mandatory
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.1 +

Handle command lines with arguments
========================================================================================
3. Simple shell 0.3
mandatory
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn’t exist
=========================================================================================

=====================================================================================================================================================================================
4. Simple shell 0.4
mandatory
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit
Repo:

GitHub repository: simple_shell
============================================================================================
5. Simple shell 1.0
mandatory
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.4 +

Implement the env built-in, that prints the current environment
===========================================================================================
6. Simple shell 0.1.1
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:

be able to move the cursor
Repo:

GitHub repository: simple_shell
=========================================================================================
7. Simple shell 0.2.1
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.2 +

You are not allowed to use strtok
Repo:

GitHub repository: simple_shell

============================================================================================
8. Simple shell 0.4.1
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 0.4 +

handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell

===========================================================================================
9. setenv, unsetenv
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

setenv
Initialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE
Should print something on stderr on failure
unsetenv
Remove an environment variable
Command syntax: unsetenv VARIABLE
Should print something on stderr on failure
=========================================================================================
============================================================================================
===========================================================================================
=========================================================================================
============================================================================================
13. alias
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 1.0 +

Implement the alias builtin command
Usage: alias [name[='value'] ...]
alias: Prints a list of all aliases, one per line, in the form name='value'
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value
Repo:

GitHub repository: simple_shell
===========================================================================================
=========================================================================================
============================================================================================
14. Variables
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 1.0 +

Handle variables replacement
Handle the $? variable
Handle the $$ variable
julien@ubuntu:~/shell$ ./hsh
$ ls /var
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  snap  spool  tmp
$ echo $?
0
$ echo $$
5104
$ echo $PATH
/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
$ exit 
julien@ubuntu:~/shell$ 
===========================================================================================
=========================================================================================
============================================================================================
15. Comments
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 1.0 +

Handle comments (#)
julien@ubuntu:~/shell$ sh
$ echo $$ # ls -la
5114
$ exit
julien@ubuntu:~/shell$ 
Repo:

GitHub repository: simple_shell
===========================================================================================
=========================================================================================
16. File as input
#advanced
Score: 0.0% (Checks completed: 0.0%)
Simple shell 1.0 +

Usage: simple_shell [filename]
Your shell can take a file as a command line argument
The file contains all the commands that your shell should run before exiting
The file should contain one command per line
In this mode, the shell should not print a prompt and should not read from stdin
Repo:

GitHub repository: simple_shell
============================================================================================
===========================================================================================
=========================================================================================
============================================================================================
===========================================================================================

===========================================================================================

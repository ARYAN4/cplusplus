compile c++ application with c++ thread.
g++ -std=c++11 -pthread input.cpp -o output.

Git command:

1- Add file to staging area:
   Git add filename, file name,.....file name

2- Record changes to the repository
   git commit -m "message"

3- Push code to repo:
   git push origin master

4- Discard changes in working file
   git checkout filename
   
   Switch to branch
   git checkout branch_name

5- Unstage the files
   git reset HEAD filename

6- Find the log with author name and commit message
   git log

7- find the working tree status
   git status 
   < can also use "-s" postfix for getting status message>

8- Show changes between commits, commit and working tree
   git diff

9- update the local workspace as well local repo.
   git pull

10- Join two or more development histories together 
    git merge branch_name1 branch_name2

11- update local repo (for more detail check pull vs fetch image)
    git fetch   
    
12- Create branch
    git branch branch_name

13- To see the current working branch
    git branch 












compile c++ application with c++ thread.
g++ -std=c++11 -pthread input.cpp -o output.

Git command:

1- Add file to staging area:
   Git add filename, file name,.....file name

2- Record changes to the repository
   git commit -m "message"

3- push code to repo:
   git push origin master

4- Discard changes in working file
   git checkout filename

5- Unstage the files
   git reset HEAD filename

6- Find the log with author name and commit message
   git log

7- find the working tree status
   git status 
   < can also use "-s" postfix for getting status message>

8- Show changes between commits, commit and working tree
   git diff
9- Fetch from and integrate with another repository or a local branch

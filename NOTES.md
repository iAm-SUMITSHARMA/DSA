===>> IMPORTANT===>>>
# Git Commands (Daily Use)
Note: ```bash is not a command neither
## Check current changes
```bash
git status
```

## Add all changes
```bash
git add .
```

## Commit changes
```bash
git commit -m "Your commit message"
```

## Push to GitHub
```bash
git push origin main
```

## Check commit history
```bash
git log --oneline
```

## Check connected GitHub repository
```bash
git remote -v
```

## Check current branch
```bash
git branch
```

### ⭐ The 4 commands you'll use 99% of the time
git status
git add .
git commit -m "Describe your changes"
git push origin main


============================================


# Git Commands for Uploading DSA Notes (From Scratch):

Step 1: Open the project folder

Open your DSA folder in VS Code.

Open the terminal:
    Ctrl + `

Step 2: Check whether Git is initialized (Optional)

    git status

If it shows the status of your files, Git is already initialized.

Step 3: Check the current branch

    git branch

Output:

* main

Step 4: Check the connected GitHub repository

    git remote -v

Example:
    origin  https://github.com/YourUsername/DSA.git (fetch)
    origin  https://github.com/YourUsername/DSA.git (push)

Step 5: See what has changed

    git status

Example:

Modified:
Hashing Notes.cpp

Untracked files:
Trie Notes.cpp

Step 6: Add all files

    git add .

Or add only one file

    git add Hashing.cpp


Step 7: Verify what is staged

    git status

You should see
Changes to be committed:

Step 8: Commit the changes

    git commit -m "Add Hashing and Trie notes"


Step 9: Push to GitHub

    git push origin main

-->>If your branch is named master instead:
    git push origin master


Step 10: Confirm everything is uploaded
git status

Output:

On branch main
nothing to commit, working tree clean

✅ Everything is uploaded.


=============================================


# 📂 First-Time Setup (Only Once)

If you create a new repository on your computer, you'll need these commands.

Initialize Git
    git init

Connect GitHub Repository

    git remote add origin https://github.com/USERNAME/REPOSITORY.git

Example

    git remote add origin https://github.com/iAm-SUMITSHARMA/DSA.git

Rename branch to main
    git branch -M main

First Commit
    git add .
    git commit -m "Initial commit"
    git push -u origin main

Note: The -u option sets the upstream branch, so future pushes can simply use git push.


===============================================


### Useful Commands
View commit history
    git log

Compact version
    git log --oneline

See differences before committing
    git diff

See remote repository
    git remote -v

Check Git version
    git --version

Check configured username
    git config --global user.name

Check configured email
    git config --global user.email

Set username
    git config --global user.name "Your Name"

Set email
    git config --global user.email "your@email.com"


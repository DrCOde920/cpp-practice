# Saving and uploading your C++ changes

Your folder is connected to the GitHub repository `DrCOde920/cpp-practice`. After editing a file, use this routine to save a snapshot (commit) and upload it to GitHub (push).

## The usual routine

1. Open PowerShell or the VS Code terminal in this folder:

   `C:\Users\THIS PC\Desktop\workspace\programming\cpp\test`

   In VS Code, open **Terminal → New Terminal** while this folder is open.

2. Check what changed:

   ```powershell
   git status
   ```

3. Choose the changes to include. To include all changed and new files:

   ```powershell
   git add .
   ```

   Or add just one file, for example:

   ```powershell
   git add addition.cpp
   ```

4. Commit with a short message describing the change:

   ```powershell
   git commit -m "Add temperature conversion practice"
   ```

5. Upload the commit to GitHub:

   ```powershell
   git push
   ```

That is the normal cycle each time you want to save and upload a set of changes. You can make several edits before one commit. A commit is a local saved snapshot; `git push` uploads it to GitHub.

## Quick version

When you are sure you want to include every changed and new file:

```powershell
git add .
git commit -m "Describe what changed"
git push
```

Review `git status` first so you know what will be included. Compiled `.exe` files are ignored by this repository and will not be added.

## If Git says there is nothing to commit

There may be no saved file changes, or the changes may already be committed. Run:

```powershell
git status
```

## If Git asks who you are

Set the name and email you want attached to your commits (use the email associated with your GitHub account if you want GitHub to link the commits to you):

```powershell
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

Then run the `git commit` command again.

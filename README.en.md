# Code the Future - Desktop Programming Contest - C Language Basic Test

## User Guide

Clone the remote repository to your local machine or use webIDE for experimentation.

1. Log in to github.com with your GitHub ID in a web browser.
2. Please fork this repository to your GitHub account (click the `fork` button at the top right of the repository -> `create a new fork` -> the conspicuous green button at the bottom right to fork), then follow the steps below to complete the environment setup and experiment submission:
   - Local Environment:

     1. **Install a Linux environment.** For Windows users, it is recommended to use wsl2 to install Ubuntu 22.04, or you can use a virtual machine like vmware for installation. If you encounter any issues at this step, please contact the teaching assistant.
     2. **Create an ssh key for cloning GitHub code via ssh.** In the Linux environment, use the command `ssh-keygen -t rsa -b 4096 -C "your email"` to create an ssh key, and press enter for all the following options. Then use the command `cat ~/.ssh/id_rsa.pub` to view the generated public key and copy it entirely. On the GitHub repository page, click your avatar and select settings. On the settings page, click the SSH and GPG keys option on the left. Click the New SSH key option, paste the copied content, and add a description for this ssh key. Then click Add SSH key and confirm all the way.
     3. **Configure the local Linux environment.** Enter the Linux command line interface and type `gcc -v`. If the version number is displayed, it means gcc is successfully installed. Then type `make -v`. If the version number is displayed, it means make is successfully installed.
     4. **Clone the experiment repository to your local machine.** In the previously generated repository, click the conspicuous green `code` button again, select the ssh option under local, and copy the link below. Then return to the local Linux environment and use `git clone` followed by the copied link to clone the target repository to your local machine (`git clone your_copied_link`). Then, use the `ls` command to view the folder you cloned, and use the `cd folder_name` command to enter that folder (for example, `cd Code-Future-C-BeginnerTests`).
     5. **Start practicing!** Use an editor like VSCode to remotely connect to WSL (for example: type `code .` in the Linux command line environment, and follow the prompts if any appear; or connect to WSL from the local VSCode, etc.), enter the cloned directory, (press `Ctrl + J` or click the icon in the top right corner to bring up the panel) and execute `make test-output` to check the completion status. Enter the exercises folder and complete the corresponding exercises in order. For testing a single exercise, you can use `make test-one one=test_name (without extension)`, for example, `make test-one one=01_helloWorld`.
     6. **Submit your completion status.** After completing some or all of the exercises, execute the commands `git add .;` `git commit -m "update";` `git push` in the repository root directory (the directory with the Makefile file, which can be viewed by `ls` to see what files are in the current directory) to submit the updates to GitHub's CI for automatic evaluation. You can see your CI submission results on the actions page of your GitHub repository.

   - Online Environment:

     1. If using the online environment, you can see a conspicuous green `code` button in the middle upper part of this webpage. After clicking, you can further see the `codespace` tab and the conspicuous green `create codespace on main` button. Please click this green button to enter the online Ubuntu + vscode environment.
     2. Then follow the environment installation prompts below to install and configure the development environment, various extensions, etc., in the vscode console.
     3. Then you can test based on the online vscode (execute the command `make test-output`), and loop through the process of editing code.

3. If you have any questions about the above steps, you can contact the teaching assistant.

Local Testing

```
make test-output
```

will test all the questions.

Project Structure

```
.
├── exercises // All exercises are in this folder
├── LICENSE
├── Makefile 
├── README.en.md
├── README.md
└── test // All test cases are in this folder
```
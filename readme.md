# 📚 Data Structures & Algorithms (DSA)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![VS Code](https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)

A comprehensive collection of my Data Structures and Algorithms (DSA) journey. This repository serves as a personal knowledge base, containing implementations, practice problems, and core concepts written in **C++**.

---

## 🚀 Quick Start & Execution

This repository is optimized for **VS Code** using the **Code Runner** extension and the **MSYS2 (UCRT64)** toolchain. 

To keep the workspace clean, the environment is configured to **automatically delete the `.exe` file** immediately after the program finishes running.

### 1. Prerequisites
Ensure you have the following installed:
*   [MSYS2](https://www.msys2.org/) (with `mingw-w64-ucrt-x86_64-toolchain` installed)
*   [VS Code](https://code.visualstudio.com/)
*   VS Code Extensions: [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) & [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

### 2. VS Code Configuration
To enable the auto-cleanup feature, add this to your VS Code `settings.json` (`Ctrl + Shift + P` → `Preferences: Open User Settings (JSON)`):

```json
"code-runner.executorMap": {
    "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt.exe && $dir$fileNameWithoutExt.exe && del $fileNameWithoutExt.exe"
}
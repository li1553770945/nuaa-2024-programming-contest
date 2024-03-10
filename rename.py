import os
import subprocess
import sys

# 检查命令行参数
if len(sys.argv) != 2:
    print("Usage: python script.py <folder_name>")
    exit()

folder_name = sys.argv[1]

compile_command = f"g++ {os.path.join(folder_name, 'generator.cpp')} -std=c++17 -o {os.path.join(folder_name, 'generator')}"
compilation_result = subprocess.run(compile_command, shell=True)
if compilation_result.returncode != 0:
    print("Compilation failed.")
    exit()


run_result = subprocess.run(os.path.join(folder_name, './generator'),cwd=folder_name,text=True)       
if run_result.returncode != 0:
    print(f"Error running generator.")



# 步骤1: 重命名文件
for i in range(1, 21):
    old_name = os.path.join(folder_name, f"{i}")
    new_name = os.path.join(folder_name, f"{i}.in")
    os.rename(old_name, new_name)

# 步骤2: 编译C++程序
compile_command = f"g++ {os.path.join(folder_name, 'solution.cpp')} -std=c++17 -o {os.path.join(folder_name, 'solution')}"
compilation_result = subprocess.run(compile_command, shell=True)
if compilation_result.returncode != 0:
    print("Compilation failed.")
    exit()

# 步骤3: 执行程序并保存输出
for i in range(1, 21):
    input_file = os.path.join(folder_name, f"{i}.in")
    output_file = os.path.join(folder_name, f"{i}.out")
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        run_result = subprocess.run(os.path.join(folder_name, './solution'), stdin=infile, stdout=outfile, text=True)
        if run_result.returncode != 0:
            print(f"Error running solution on {input_file}.")

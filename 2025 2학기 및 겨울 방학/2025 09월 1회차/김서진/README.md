[[2442(브론즈)]_[김서진].c](https://github.com/user-attachments/files/22557181/2442._.c)
Python 3.13.7 (tags/v3.13.7:bcee1c3, Aug 14 2025, 14:15:11) [MSC v.1944 64 bit (AMD64)] on win32
Enter "help" below or click "Help" above for more information.
>>> n = int(input())
5
>>> for i in range(1,n+1):
...     spaces = ' '*(n-i)
...     stars = '*'*(2*i-1)
...     print(spaces + stars)
... 
...     
    *
   ***
  *****
 *******
*********
<img width="638" height="399" alt="백준 2442번" src="https://github.com/user-attachments/assets/f80bebde-87f2-40b5-b4d6-510e49e4fcd5" />

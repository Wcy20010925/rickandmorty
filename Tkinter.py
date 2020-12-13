'''
GuessNumberGame
'''
import tkinter as tk
import tkinter.messagebox
#s1: creat window
GussNum = tk.Tk()
GussNum.minsize(400,300)
GussNum.title('MyGameGussNumber')

#s2: creat components and
#s3: distribute components
lableshow = tk.Label(GussNum,text='Wellcome to our game!\nplease input yourNumber',height =2)
lableshow.place(x=50,y=10)
entryIn = tk.Entry(GussNum)
entryIn.place(x=50,y=70)
cmdGuss = tk.Button(GussNum,text='Guess')
cmdGuss.place(x=230,y=70)
txtOut = tk.Text(GussNum)
txtOut.place(x=10,y=100)

#s4:events
from random import randint
targetNum = randint(1,11)
count = 0
flagOver = False
def checkNum():
    global targetNum
    global count
    global  flagOver
    yourNum = eval(entryIn.get())
    txt = ''
    txt1 = ''
    if yourNum == targetNum:
        flagOver = True
        txt = "Congratulations! good job!"
        tk.messagebox.showinfo('Good',txt)
    elif yourNum < targetNum:
        txt = 'too low!'
        txt1 = 'You Can Try'+str(2-count)+'times'
        tk.messagebox.showinfo("low",txt)
    else:
        txt = 'too height!'
        txt1 = 'You Can Try'+ str(2-count)+'times'
        tk.messagebox.showinfo("height",txt)
    txtOut.insert(tk.END,"yourNum is "+str(yourNum)+' '+txt+txt1+'\n')
    count += 1
    if count >=3:
        flagOver = True

def guessClick():
    global flagOver
    if not flagOver:
        checkNum()

cmdGuss['command']=guessClick

GussNum.mainloop()



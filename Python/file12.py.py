import pickle
def write():
    f = open("Student details.dat","wb")
    while True:
        roll_no = int(input("Enter the Roll no."))
        name = input("Enter the Name")
        Data = [roll_no,name]
        pickle.dump(Data,f)
        ch = input("More? (Y/N)")
        if ch in 'Nn':
            break


'''def read():
    f = open("Student details.dat","rb")
    try:
        while True:
            rec=pickle.load(f)
            print(rec)
    except EOFError:
            f.close()'''
            


#write()
#read()



def search():
    found = 0
    r=int(input("Enter the roll no whose name you want to display"))
    f = open("Student details.dat","rb") 
    try:
        while True:
            rec=pickle.load(f)
            if rec[0]==r:
                print(rec[1])
                found+=1
                break
    except EOFError:
            f.close()
    if found==0:
        print("Sorry, No record found")
search()

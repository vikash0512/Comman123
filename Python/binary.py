import pickle
def write():
    f=open("Binaryfile.dat","wb")
    list=["Computer science", "Maths", "English", "Physics"]
    dic={"Computer":100,"Maths":98,"English":74,"Physics":52}
    set={"Apple","Banana","Mango","Cherry"}
    pickle.dump(list,f)
    pickle.dump(dic,f)
    pickle.dump(set,f)
    f.close()

def read():
    f=open("Binaryfile.dat","rb")
    lst=pickle.load(f)
    d=pickle.load(f)
    st=pickle.load(f)
    print("This is the data of: ",type(lst))
    print(lst)
    print("This is the data of: ",type(d))
    print(d)
    print("This is the data of: ",type(st))
    print(st)
    f.close()
    
write()
read()
#print("Data written in the file successfully.")

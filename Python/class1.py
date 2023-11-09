class Person:
    def __init__(self,name,gender,age):
        self.name=name
        self.gender=gender
        self.age=age

    def talk(self):
        print("Hii, I'm ",self.name)

    def vote(self):
        if self.age<18:
            print("I'm not elegible to vote.")
        else:
            print("I'm elegible to vote.")
obj1 = Person("Aditya","Male",22)
obj1.talk()
obj1.vote()
obj2 = Person("Ram","Male",12)
obj2.talk()
obj2.vote()
obj3 = Person("Shyam","Male",32)
obj3.talk()
obj3.vote()
obj4 = Person("Abhinash","Male",17)
obj4.talk()
obj4.vote()
obj5 = Person("Sita","Female",28)
obj5.talk()
obj5.vote()

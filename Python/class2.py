class Cars:
    def __init__(self,name,color,price):
        self.name=name
        self.color=color
        self.price=price
    def type(self):
        print("It's a " + self.name + " of color " + self.color + " and the price is " + self.price)

obj1 = Cars("Ferrari","Red","1.2M")
obj1.type()

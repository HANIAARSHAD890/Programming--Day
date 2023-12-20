def Getlength(number):
    count = 0 
     
    while (number!=0):
        number= number//10
        count=count+1
        integer=(int(count))
        # print(count)

    return integer

number=int(input("Enter number: "))
num=Getlength(number)
print(num)
     








































if __name__ == "__main__":
     main()

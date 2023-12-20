
def main():
    number=int(input("Enter number: "))
  
    print(Getlength(number))
     
def Getlength(number):
    for i in range(0,len(number),1):
         counter=0
         counter=counter+i
        #  print("hania")
    return counter
if __name__ == "__main__":
     main()

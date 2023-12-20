
def main():
    countryname=(input("Enter country name: "))
    areaofcountry=(int (input("Enter area of country: ")))
    print(GetArea(countryname,areaofcountry),"%")
     
def GetArea(countryname,areaofcountry):
    area=((areaofcountry/148940000) *100)
    area=round(area,2)
    return area
if __name__ == "__main__":
     main()
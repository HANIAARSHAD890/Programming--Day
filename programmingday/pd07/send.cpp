  int number=0;
   number= isPrime(number);
    int count=0;

    while(count<number)

    {
        if (isPrime(number))
      
    {
        primorial=primorial*number;
        count++;
    }
    else
    {
        number++;
     }
 
    }
    return primorial;

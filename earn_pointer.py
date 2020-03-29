point=0
mode=int(raw_input("How much is your earning?: "))
#print("Your earning is:",mode)
rent=int(raw_input("How much is your rent: "))
#print("Your earning is:",rent)
groceries=int(raw_input("How much is your groceries/month?: "))
#print("Your earning is:",groceries)
entertainment=int(raw_input("How much did you spend in entertainment/month?: "))
#print("Your earning is:",entertainment)
saving=int(raw_input("How much did you manage to save /month?: "))
#print("Your earning is:",saving)
necessity=groceries+rent
#print("Your necessity spendin is:",necessity)
if(necessity<=0.6*mode):
    point=point+1;
    print("Your point in necessities is:",point)
else:
   print("Your point in necessities is:",point)
if(entertainment<=0.3*mode):
    point=point+1;
    print("Your point in entertainment is:",point)
else:
    print("Your point in entertainment is:",point)                
if(saving<=0.4*mode):
        point=point+1;
        print("Your total point is:",point)
else:
        print("Your total point is:",point)
                 
if(point>=2):
 print("Congratulations you are qualified to be a mentor")
else:
     print("Unfortunately you are still at the learner stage")
         
         

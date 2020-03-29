from random import choice
print("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$")
print("")
print("---Welcome to mentoring your Personal Finance----")
print("")
print("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$")
print(" ")
print("")
print("This application is designed to help you find your right mentor:")
#player A contains the list of potential mentors
#player A are good at financing
#player B contains a list of learners
#player B seeks potential mentor guides
players_A=['Alvin','Ashwarya','Canada','Russel','Japan','Python']
players_B=['Jessica','Albetra','Mario','Hector','Shadeeb','Avery']
teamA=[]
teamB=[]
while len(players_A)>0:
    playerB=choice(players_A)
    playerA=choice(players_B)
    print('Team A: Mentor, Learner',playerB,playerA)
    teamA.append(playerA)
    teamA.append(playerB)
    players_A.remove(playerB)
    players_B.remove(playerA)
    playerB=choice(players_A)
    playerA=choice(players_B)
    print('Team B:Mentor : Learner',playerB,playerA)
    teamB.append(playerB)
    teamB.append(playerA)
    players_A.remove(playerB)
    players_B.remove(playerA)

story='''Dear name
I am very much pleased ti have a firand like u...
Date: date'''

name=input("enter ur name\n")
date=input("enter date\n")
story=story.replace("name",name)
story=story.replace("date",date)
print(story)


#another way

name=input("enter ur name")
date=input("enter date")
print("Dear",name,"\n\t you are selected\nDate:", date)


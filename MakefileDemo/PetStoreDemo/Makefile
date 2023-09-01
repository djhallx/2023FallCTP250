#============================================================================
# Author:   Daniel Hall
# Course:   CTP-250
#
# Note:	Primary application is "PetStore.exe"
#
#============================================================================
CXX = g++ -ggdb -std=gnu++11 

CFLAGS = -g -std=gnu++11 

RM=rm


OBJS = PetStore.o Pet.o Creature.o Pet.o Canine.o Feline.o




PetStore.exe:  $(OBJS)
	echo "Running rule: PetStore.exe"
	$(CXX) -o $@ $^



 %.o:	%.cpp %.h
	$(CXX) -c $< -o $@

clean:
	$(RM) *.exe *.o

echo:
	echo $(CFLAGS)
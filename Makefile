all: charCreator

charCreator: testMain.o charSetter.o attributeFuncs/ageGetter.o attributeFuncs/classGetter.o attributeFuncs/letterGetter.o attributeFuncs/nameGetter.o
	clang -Wall testMain.o charSetter.o attributeFuncs/ageGetter.o attributeFuncs/classGetter.o attributeFuncs/letterGetter.o attributeFuncs/nameGetter.o -o charCreator


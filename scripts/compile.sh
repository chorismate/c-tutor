#!/bin/dash
# Compile a C program.

echo "Compiling your program."
echo "Compiler warnings and/or errors will be displayed here."

if [ $1 == "" ] || [ $2 == "" ]; then
	echo "Internal error!"
	echo "Please stop c-tutor and report this as an issue."
	echo "Details: Script $0 did not receive enough arguments."
fi

if cc $1 -o $2; then :; else
	echo "Compile failed."
	exit 1
fi

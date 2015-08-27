#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Make an interpreter which converts 
	// 32 bit assemby file into 64 bit assembly file
	
	ifstream file("32_bit.asm", std::ifstream::in);
	int flag;
	string line;
	string text1,text2,text3,text4,text5;
	text1="rax";
	text2="rdi";
	text3="rsi";
	text4="rdx";
	text5="syscall";

	while (getline(file, line))
	{
		flag=line.find("eax, 4");
		if(flag!=string::npos)
			line.replace(flag,6,"rax, 1");

		flag=line.find("eax, 1");
		if(flag!=string::npos)
			line.replace(flag,6,"rax, 60");

		flag=line.find("eax");
		if(flag!=string::npos)
			line.replace(flag,text1.length(),text1);

		flag=line.find("ebx");
		if(flag!=string::npos)
			line.replace(flag,text2.length(),text2);

		flag=line.find("ecx");
		if(flag!=string::npos)
			line.replace(flag,text3.length(),text3);
		
		flag=line.find("edx");
		if(flag!=string::npos)
			line.replace(flag,text4.length(),text4);

		flag=line.find("int 80h");
		if(flag!=string::npos)
			line.replace(flag,text5.length(),text5);

		cout<<line<<endl;
	}
	return 0;
}

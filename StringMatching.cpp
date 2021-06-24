#include<iostream>
#include<string>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

void matchPat(string txt,string pat)
{
	int n = txt.length();
	int m = pat.length();
	for(int i=0;i<=n-m;i++){
		int j;
		for(j=0;j<m;j++){
			if(txt[i+j]!=pat[j] && pat[j]!='_'){
					break;
			}
		}
		if(j==m-1){
			cout<<"Pattern found at index : "<< i <<endl;
		}
	}
}

string getPattern(int i){
	string text;
	string file_name = "pattern" + to_string(i) + ".txt";
	ifstream myfile(file_name);
	getline(myfile,text);
	myfile.close();
	return text;
	
	
}

string getText(int i){
	string text;
	string file_name = "text" + to_string(i) + ".txt";
	ifstream myfile(file_name);
	getline(myfile,text);
	myfile.close();
	return text;
	
	
}

int main()
{	
	string txt;
	string pat;
		
	for(int i=1;i<10;i++){
		pat = getPattern(i);
		txt = getText(i);
		matchPat(txt,pat);
	}
	
	return 0;
}

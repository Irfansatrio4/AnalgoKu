/*
Nama	: irfan Satrio
NPM		: 140810180003
Kelas	: A
Program	: Adjacency Matrix
*/

#include<iostream>
using namespace std;

int main()
{
	int m[8][8] = 
{
	{0,1,1,0,0,0,0,0},
	{1,0,1,1,1,0,0,0},
	{1,1,0,0,1,0,1,1},
	{0,1,0,1,1,0,0,0},
	{0,1,1,1,0,1,0,0},
	{0,0,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,1,0}
};
	for(int i=0;i<8;i++)
	{
		for(int j=0; j<8;j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

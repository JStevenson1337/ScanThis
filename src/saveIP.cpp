#include "main.h"
/**
 *
 *
 */
int *IPNode(string fomIP, int port)
{
	int *ipNode = new int[4];
	int i = 0;
	string temp;
	for (int j = 0; j < fomIP.length(); j++)
	{
		if (fomIP[j] == '.')
		{
			ipNode[i] = stoi(temp);
			temp = "";
			i++;
		}
		else
		{
			temp += fomIP[j];
		}
	}
	cout << "IPNode: " 
		<< ipNode[0] << "." 
		<< ipNode[1] << "." 
		<< ipNode[2] << "." 
		<< ipNode[3] << 
		"\n";
	ipNode[i] = stoi(temp);
	return ipNode;
}

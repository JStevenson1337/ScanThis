#ifndef __MAIN_H__
#define __MAIN_H__

#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

struct ip_node_s
{
	long long uniq_id;
	string *ip_addr;
	vector<int> ip_addr_ports;
};

string removeZeros(string s);



#endif /*__MAIN_H__*/

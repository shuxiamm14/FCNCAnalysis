#include <iostream>
#include <map>
#include <vector>
#include "TString.h"
const std::vector<double> fakePtSlices = {25,35,45,125};
const std::map<TString,std::vector<double>> XsecErr = {
	{"ztautau",{0.022,-0.029}},
	{"ttbar",{0.023768876,-0.035106281}}
};

const std::vector<TString> mc_campaigns = {"mc16a", "mc16d", "mc16e"};
const std::vector<TString> data_campaigns = {"data1516", "data17", "data18"};

class sample
{
public:
	sample(TString _name, TString _title, enum EColor _color, double _norm = 1): name(_name), title(_title), color(_color), norm(_norm) {};
	~sample(){};
	TString name;
	TString title;
	double norm;
	enum EColor color;
};

std::vector<sample> getBkgSamples(TString framework);

std::vector<sample> getSigSamples(TString framework, float BRbenchmark);
#include "fcnc_include.h"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("please use the script in script/getCutflow.sh\n");
	}
	int runcampaign = 1;
	TString campaign[3] = {"mc16a","mc16d","mc16e"};
	TString prefix = TString(PACKAGE_DIR) + "/data/hadhadreduce1/";
	map<TString, map<TString, float>> cutflow; //	sample, cut, event number
	vector<TString> cuts;
	vector<TString> samples;
	int count = 0;

	ifstream xsecfile(argv[1]);
	char inputline[500];
	while(!xsecfile.eof()){
		xsecfile.getline(inputline,500);
		if(strlen(inputline)==0) continue;
		if(inputline[0]=='#') continue;
		TString filename = inputline;
		filename.Remove(filename.Sizeof()-5,4);
		samples.push_back(filename);
	}

	for(auto sample: samples){
		for (int j = 0; j < 3; ++j)
		{
			if(runcampaign != 0 && j != runcampaign -1 ) continue;
			count ++;
			TFile inputmca(prefix + campaign[j] + "_" + TString(sample) + "_tree.root");
			TH1D *hcutflow = (TH1D*) inputmca.Get("cutflow_HSM_common");
			for (int i = 1; i <= hcutflow->GetNbinsX(); ++i)
			{
				cutflow[sample][hcutflow->GetXaxis()->GetBinLabel(i)] += hcutflow->GetBinContent(i)/87;
				if(count == 1) cuts.push_back(hcutflow->GetXaxis()->GetBinLabel(i));
			}
		}
	}
	printf("cut");
	for(auto sample: samples)
		printf("\t%s", sample.Data());
	printf("\n");
	for(auto iter : cuts){
		printf("%s", iter.Data());
		for(auto sample: samples)
			printf("\t%d", int(round(cutflow[sample][iter])));
		printf("\n");
	}
	return 0;
}
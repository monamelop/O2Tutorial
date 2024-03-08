void DrawptResolution(){
  // Example macro to draw efficiencies
  gStyle->SetOptStat(1);
  gStyle->SetPalette(60);
  
  TFile *file = new TFile("AnalysisResults.root", "READ");
  TH2F *hptResolution = (TH2F*) file  -> Get ("my-example-task/ptResolution");
  
  TCanvas *cn = new TCanvas("cn", "", 1000,600);

  hptResolution->Draw("COLZ");
  




  

  cn->SaveAs("ptResolution.png");
}
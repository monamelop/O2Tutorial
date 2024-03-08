void Drawmult(){
  // Example macro to draw efficiencies
  gStyle->SetOptStat(1);
  gStyle->SetPalette(57);
  
  TFile *file = new TFile("AnalysisResults.root", "READ");
  TH2F *hmultC = (TH2F*) file  -> Get ("my-example-task/multiplicityCorrelation");
  
  TCanvas *cn = new TCanvas("cn", "", 1000,600);
  cn->SetTicks(1,1);

  hmultC->Draw("COLZ");


  hmultC->SetTitle("multiplicityCorrelation");
  hmultC->GetYaxis()->SetTitle("Number of tracks");
  hmultC->GetXaxis()->SetTitle("Number of tracks");
  




  

  cn->SaveAs("multiplicityCorrelation.png");
}